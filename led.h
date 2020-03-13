#pragma once

#include "def1967VN034R1.h"
#include "sysreg.h"

namespace Devices {

class Led
{
public:
	static const unsigned Quantity = 4;
private:
	static bool s_is_ready;

public:
	static void Init() {
		if ( ! s_is_ready ) {
#if MDR_VN028
			* (int *) GPC_ALT_SET_LOC = 0xFu;
	#if MDR_VN028_FC
			__builtin_sysreg_write(__FLAGREG, 0x0F);
	#else
			__builtin_sysreg_write(__FLAGREG, 0xFF);
	#endif
#elif MDR_VN034
			* (int *) GPC_ALT_CLEAR_LOC = 0xF;
			* (int *) GPC_DDR_CLEAR_LOC = 0xF;
			* (int *) GPC_DR_CLEAR_LOC  = 0xF;
			* (int *) GPC_DDR_SET_LOC   = 0xF;
#endif
			s_is_ready = true;
		}
	}

#if MDR_VN028
	#if MDR_VN028_FC
		#define LED_GET_BODY(led_num)  { return !! (__builtin_sysreg_read(__FLAGREG) & (1 << (led_num + Quantity))); }
	#else
		#define LED_GET_BODY(led_num)  { return ! (__builtin_sysreg_read(__FLAGREG) & (1 << (led_num + Quantity))); }
	#endif
#elif MDR_VN034
	#define LED_GET_BODY(led_num)  { return ! (* (int *) GPC_DR_LOAD_LOC & (1 << led_num)); }
#endif

	template <unsigned led_num>
		static bool Get()	            { LED_GET_BODY(led_num)	}
	inline
		static bool Get(unsigned led_num)	{ LED_GET_BODY(led_num)	}

#undef LED_GET_BODY


#if MDR_VN028
	#if MDR_VN028_FC
		#define LED_SET_BODY(led_num)                                                      \
			{                                                                                \
				if ( val ) __builtin_sysreg_write(__FLAGREGST, 1 << (led_num + Quantity));     \
				else       __builtin_sysreg_write(__FLAGREGCL, ~(1 << (led_num + Quantity)));  \
			}
	#else
		#define LED_SET_BODY(led_num)                                                      \
			{                                                                                \
				if ( val ) __builtin_sysreg_write(__FLAGREGCL, ~(1 << (led_num + Quantity)));  \
				else       __builtin_sysreg_write(__FLAGREGST, 1 << (led_num + Quantity));     \
			}
	#endif
#elif MDR_VN034
#define LED_SET_BODY(led_num)                                                        \
	{                                                                                  \
		if ( !val ) * (int *) GPC_DR_SET_LOC = (1 << led_num);                         \
		else       * (int *) GPC_DR_CLEAR_LOC = (1 << led_num);                       \
	}
#endif

	template <unsigned led_num>
		static void Set(bool val)	              { LED_SET_BODY(led_num)	}
	inline
	  static void Set(unsigned led_num, bool val)	{ LED_SET_BODY(led_num)	}

#undef LED_SET_BODY


	template <unsigned led_num>
		static void On()	            { Set<led_num>(true); }
	inline
	  static void On(unsigned led_num)	{ Set(led_num, true); }

	template <unsigned led_num>
		static void Off()	            { Set<led_num>(false); }
	inline
	  static void Off(unsigned led_num)	{ Set(led_num, false); }

	template <unsigned led_num>
		static void Toggle()             { Set<led_num>(! Get<led_num>()); }
	inline
		static void Toggle(unsigned led_num) { Set(led_num, ! Get(led_num));   }

	static inline void OnOff(int led_num_on, int led_num_off)
	{
		On(led_num_on);
		Off(led_num_off);
	}

	static void Switch(int led_num1, int led_num2)
	{
		if ( Get(led_num2) ) OnOff(led_num1, led_num2);
		else                 OnOff(led_num2, led_num1);
	}

	static void ShowMask(unsigned mask) {
		for ( unsigned num = 0; num < Quantity; ++ num )
			Set(num, (1 << num) & mask);
	}

};

}
