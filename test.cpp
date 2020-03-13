#include "led.h"
using namespace Devices;

#include "pthread.h"
#include "semaphore.h"

#if MDR_VN028
	#define DELAY_MS_FACTOR (5 * 1000)
#else
	#define DELAY_MS_FACTOR 1000
#endif

static void delay(long delay_ms)
{
	long cnt = DELAY_MS_FACTOR * delay_ms;
	while (--cnt) ;
}

static void turn_leds_off()
{
	for (unsigned led = 0; led < Led::Quantity; ++led)
		Led::Off(led);
}

int main()
{

	Devices::Led::Init();
	delay(1000);
	/*Мигаем светодиодом*/
	turn_leds_off();
	while(1)
	{
		delay(1000);
		Led::On(3);
		delay(1000);
		Led::Off(3);
	}
	return 0;
}
