#include "bsp_digitalTube.h"

static inline void led1_open() { HAL_GPIO_WritePin(led1_sw_GPIO_Port, led1_sw_Pin, GPIO_PIN_SET); }
static inline void led1_close() { HAL_GPIO_WritePin(led1_sw_GPIO_Port, led1_sw_Pin, GPIO_PIN_RESET); }

static inline void led2_open() { HAL_GPIO_WritePin(led2_sw_GPIO_Port, led2_sw_Pin, GPIO_PIN_SET); }
static inline void led2_close() { HAL_GPIO_WritePin(led2_sw_GPIO_Port, led2_sw_Pin, GPIO_PIN_RESET); }

static inline void led3_open() { HAL_GPIO_WritePin(led3_sw_GPIO_Port, led3_sw_Pin, GPIO_PIN_SET); }
static inline void led3_close() { HAL_GPIO_WritePin(led3_sw_GPIO_Port, led3_sw_Pin, GPIO_PIN_RESET); }

static inline void led4_open() { HAL_GPIO_WritePin(led4_sw_GPIO_Port, led4_sw_Pin, GPIO_PIN_SET); }
static inline void led4_close() { HAL_GPIO_WritePin(led4_sw_GPIO_Port, led4_sw_Pin, GPIO_PIN_RESET); }

static inline void led5_open() { HAL_GPIO_WritePin(led5_sw_GPIO_Port, led5_sw_Pin, GPIO_PIN_SET); }
static inline void led5_close() { HAL_GPIO_WritePin(led5_sw_GPIO_Port, led5_sw_Pin, GPIO_PIN_RESET); }

static inline void led6_open() { HAL_GPIO_WritePin(led6_sw_GPIO_Port, led6_sw_Pin, GPIO_PIN_SET); }
static inline void led6_close() { HAL_GPIO_WritePin(led6_sw_GPIO_Port, led6_sw_Pin, GPIO_PIN_RESET); }

static inline void led7_open() { HAL_GPIO_WritePin(led7_sw_GPIO_Port, led7_sw_Pin, GPIO_PIN_SET); }
static inline void led7_close() { HAL_GPIO_WritePin(led7_sw_GPIO_Port, led7_sw_Pin, GPIO_PIN_RESET); }

static inline void led8_open() { HAL_GPIO_WritePin(led8_sw_GPIO_Port, led8_sw_Pin, GPIO_PIN_SET); }
static inline void led8_close() { HAL_GPIO_WritePin(led8_sw_GPIO_Port, led8_sw_Pin, GPIO_PIN_RESET); }

static inline void led9_open() { HAL_GPIO_WritePin(led9_sw_GPIO_Port, led9_sw_Pin, GPIO_PIN_SET); }
static inline void led9_close() { HAL_GPIO_WritePin(led9_sw_GPIO_Port, led9_sw_Pin, GPIO_PIN_RESET); }

static inline void led10_open() { HAL_GPIO_WritePin(led10_sw_GPIO_Port, led10_sw_Pin, GPIO_PIN_SET); }
static inline void led10_close() { HAL_GPIO_WritePin(led10_sw_GPIO_Port, led10_sw_Pin, GPIO_PIN_RESET); }

static inline void led11_open() { HAL_GPIO_WritePin(led11_sw_GPIO_Port, led11_sw_Pin, GPIO_PIN_SET); }
static inline void led11_close() { HAL_GPIO_WritePin(led11_sw_GPIO_Port, led11_sw_Pin, GPIO_PIN_RESET); }

static inline void led12_open() { HAL_GPIO_WritePin(led12_sw_GPIO_Port, led12_sw_Pin, GPIO_PIN_SET); }
static inline void led12_close() { HAL_GPIO_WritePin(led12_sw_GPIO_Port, led12_sw_Pin, GPIO_PIN_RESET); }

static inline void led13_open() { HAL_GPIO_WritePin(led13_sw_GPIO_Port, led13_sw_Pin, GPIO_PIN_SET); }
static inline void led13_close() { HAL_GPIO_WritePin(led13_sw_GPIO_Port, led13_sw_Pin, GPIO_PIN_RESET); }

static inline void led14_open() { HAL_GPIO_WritePin(led14_sw_GPIO_Port, led14_sw_Pin, GPIO_PIN_SET); }
static inline void led14_close() { HAL_GPIO_WritePin(led14_sw_GPIO_Port, led14_sw_Pin, GPIO_PIN_RESET); }

static inline void led15_open() { HAL_GPIO_WritePin(led15_sw_GPIO_Port, led15_sw_Pin, GPIO_PIN_SET); }
static inline void led15_close() { HAL_GPIO_WritePin(led15_sw_GPIO_Port, led15_sw_Pin, GPIO_PIN_RESET); }

static inline void a1_open() { HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET); }
static inline void a1_close() { HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET); }

static inline void a2_open() { HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET); }
static inline void a2_close() { HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET); }

static inline void a3_open() { HAL_GPIO_WritePin(a3_GPIO_Port, a3_Pin, GPIO_PIN_SET); }
static inline void a3_close() { HAL_GPIO_WritePin(a3_GPIO_Port, a3_Pin, GPIO_PIN_RESET); }

static inline void b1_open() { HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET); }
static inline void b1_close() { HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET); }

static inline void b2_open() { HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_SET); }
static inline void b2_close() { HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET); }

static inline void b3_open() { HAL_GPIO_WritePin(b3_GPIO_Port, b3_Pin, GPIO_PIN_SET); }
static inline void b3_close() { HAL_GPIO_WritePin(b3_GPIO_Port, b3_Pin, GPIO_PIN_RESET); }

static inline void c1_open() { HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_SET); }
static inline void c1_close() { HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET); }

static inline void c2_open() { HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_SET); }
static inline void c2_close() { HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET); }

static inline void c3_open() { HAL_GPIO_WritePin(c3_GPIO_Port, c3_Pin, GPIO_PIN_SET); }
static inline void c3_close() { HAL_GPIO_WritePin(c3_GPIO_Port, c3_Pin, GPIO_PIN_RESET); }

static inline void d1_open() { HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET); }
static inline void d1_close() { HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET); }

static inline void d2_open() { HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET); }
static inline void d2_close() { HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET); }

static inline void d3_open() { HAL_GPIO_WritePin(d3_GPIO_Port, d3_Pin, GPIO_PIN_SET); }
static inline void d3_close() { HAL_GPIO_WritePin(d3_GPIO_Port, d3_Pin, GPIO_PIN_RESET); }

static inline void e1_open() { HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET); }
static inline void e1_close() { HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET); }

static inline void e2_open() { HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET); }
static inline void e2_close() { HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET); }

static inline void e3_open() { HAL_GPIO_WritePin(e3_GPIO_Port, e3_Pin, GPIO_PIN_SET); }
static inline void e3_close() { HAL_GPIO_WritePin(e3_GPIO_Port, e3_Pin, GPIO_PIN_RESET); }

static inline void f1_open() { HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET); }
static inline void f1_close() { HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET); }

static inline void f2_open() { HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET); }
static inline void f2_close() { HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET); }

static inline void f3_open() { HAL_GPIO_WritePin(f3_GPIO_Port, f3_Pin, GPIO_PIN_SET); }
static inline void f3_close() { HAL_GPIO_WritePin(f3_GPIO_Port, f3_Pin, GPIO_PIN_RESET); }

static inline void g1_open() { HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET); }
static inline void g1_close() { HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET); }

static inline void g2_open() { HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET); }
static inline void g2_close() { HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET); }

static inline void g3_open() { HAL_GPIO_WritePin(g3_GPIO_Port, g3_Pin, GPIO_PIN_SET); }
static inline void g3_close() { HAL_GPIO_WritePin(g3_GPIO_Port, g3_Pin, GPIO_PIN_RESET); }

static inline void dp1_open() { HAL_GPIO_WritePin(dp1_GPIO_Port, dp1_Pin, GPIO_PIN_SET); }
static inline void dp1_close() { HAL_GPIO_WritePin(dp1_GPIO_Port, dp1_Pin, GPIO_PIN_RESET); }

static inline void dp2_open() { HAL_GPIO_WritePin(dp2_GPIO_Port, dp2_Pin, GPIO_PIN_SET); }
static inline void dp2_close() { HAL_GPIO_WritePin(dp2_GPIO_Port, dp2_Pin, GPIO_PIN_RESET); }

static inline void dp3_open() { HAL_GPIO_WritePin(dp3_GPIO_Port, dp3_Pin, GPIO_PIN_SET); }
static inline void dp3_close() { HAL_GPIO_WritePin(dp3_GPIO_Port, dp3_Pin, GPIO_PIN_RESET); }


static void led1Dispaly(int16_t value);
static void led2Dispaly(int16_t value);
static void led3Dispaly(int16_t value);
static void led4Dispaly(int16_t value);
static void led5Dispaly(int16_t value);



void digitalTubeDisplay(uint8_t num, int16_t value)
{

	switch (num)
	{
	case 1:
		led1Dispaly(value);
		break;
	case 2:
		led2Dispaly(value);
		break;
	case 3:
		led3Dispaly(value);
		break;
	case 4:
		led4Dispaly(value);
		break;
	case 5:
		led5Dispaly(value);
		break;

	default:
		break;
	}
}

static void displaySingleDigitalGroup1(uint8_t value)
{
	switch (value)
	{
	case 0:
		a1_open();
		b1_open();
		c1_open();
		d1_open();
		e1_open();
		f1_open();
		g1_close();
		break;
	case 1:
		a1_close();
		b1_open();
		c1_open();
		d1_close();
		e1_close();
		f1_close();
		g1_close();
		break;
	case 2:
		a1_open();
		b1_open();
		c1_close();
		d1_open();
		e1_open();
		f1_close();
		g1_open();
		break;
	case 3:
		a1_open();
		b1_open();
		c1_open();
		d1_open();
		e1_close();
		f1_close();
		g1_open();
		break;
	case 4:
		a1_close();
		b1_open();
		c1_open();
		d1_close();
		e1_close();
		f1_open();
		g1_open();
		break;
	case 5:
		a1_open();
		b1_close();
		c1_open();
		d1_open();
		e1_close();
		f1_open();
		g1_open();
		break;
	case 6:
		a1_open();
		b1_close();
		c1_open();
		d1_open();
		e1_open();
		f1_open();
		g1_open();
		break;
	case 7:
		a1_open();
		b1_open();
		c1_open();
		d1_close();
		e1_close();
		f1_close();
		g1_close();
		break;
	case 8:
		a1_open();
		b1_open();
		c1_open();
		d1_open();
		e1_open();
		f1_open();
		g1_open();
		break;
	case 9:
		a1_open();
		b1_open();
		c1_open();
		d1_open();
		e1_close();
		f1_open();
		g1_open();
		break;
	case 10:			//��ʾ"-"
		a1_close();
		b1_close();
		c1_close();
		d1_close();
		e1_close();
		f1_close();
		g1_open();
		break;
	default:
		a1_close();
		b1_close();
		c1_close();
		d1_close();
		e1_close();
		f1_close();
		g1_close();
		break;
	}
	HAL_Delay(1);
	a1_close();
	b1_close();
	c1_close();
	d1_close();
	e1_close();
	f1_close();
	g1_close();
}

static void displaySingleDigitalGroup2(uint8_t value)
{
	switch (value)
	{
	case 0:
		a2_open();
		b2_open();
		c2_open();
		d2_open();
		e2_open();
		f2_open();
		g2_close();
		break;
	case 1:
		a2_close();
		b2_open();
		c2_open();
		d2_close();
		e2_close();
		f2_close();
		g2_close();
		break;
	case 2:
		a2_open();
		b2_open();
		c2_close();
		d2_open();
		e2_open();
		f2_close();
		g2_open();
		break;
	case 3:
		a2_open();
		b2_open();
		c2_open();
		d2_open();
		e2_close();
		f2_close();
		g2_open();
		break;
	case 4:
		a2_close();
		b2_open();
		c2_open();
		d2_close();
		e2_close();
		f2_open();
		g2_open();
		break;
	case 5:
		a2_open();
		b2_close();
		c2_open();
		d2_open();
		e2_close();
		f2_open();
		g2_open();
		break;
	case 6:
		a2_open();
		b2_close();
		c2_open();
		d2_open();
		e2_open();
		f2_open();
		g2_open();
		break;
	case 7:
		a2_open();
		b2_open();
		c2_open();
		d2_close();
		e2_close();
		f2_close();
		g2_close();
		break;
	case 8:
		a2_open();
		b2_open();
		c2_open();
		d2_open();
		e2_open();
		f2_open();
		g2_open();
		break;
	case 9:
		a2_open();
		b2_open();
		c2_open();
		d2_open();
		e2_close();
		f2_open();
		g2_open();
		break;
	case 10:			//��ʾ"-"
		a2_close();
		b2_close();
		c2_close();
		d2_close();
		e2_close();
		f2_close();
		g2_open();
		break;
	default:
		a2_close();
		b2_close();
		c2_close();
		d2_close();
		e2_close();
		f2_close();
		g2_close();
		break;
	}
	HAL_Delay(1);
	a2_close();
	b2_close();
	c2_close();
	d2_close();
	e2_close();
	f2_close();
	g2_close();
}

static void displaySingleDigitalGroup3(uint8_t value)
{
	switch (value)
	{
	case 0:
		a3_open();
		b3_open();
		c3_open();
		d3_open();
		e3_open();
		f3_open();
		g3_close();
		break;
	case 1:
		a3_close();
		b3_open();
		c3_open();
		d3_close();
		e3_close();
		f3_close();
		g3_close();
		break;
	case 2:
		a3_open();
		b3_open();
		c3_close();
		d3_open();
		e3_open();
		f3_close();
		g3_open();
		break;
	case 3:
		a3_open();
		b3_open();
		c3_open();
		d3_open();
		e3_close();
		f3_close();
		g3_open();
		break;
	case 4:
		a3_close();
		b3_open();
		c3_open();
		d3_close();
		e3_close();
		f3_open();
		g3_open();
		break;
	case 5:
		a3_open();
		b3_close();
		c3_open();
		d3_open();
		e3_close();
		f3_open();
		g3_open();
		break;
	case 6:
		a3_open();
		b3_close();
		c3_open();
		d3_open();
		e3_open();
		f3_open();
		g3_open();
		break;
	case 7:
		a3_open();
		b3_open();
		c3_open();
		d3_close();
		e3_close();
		f3_close();
		g3_close();
		break;
	case 8:
		a3_open();
		b3_open();
		c3_open();
		d3_open();
		e3_open();
		f3_open();
		g3_open();
		break;
	case 9:
		a3_open();
		b3_open();
		c3_open();
		d3_open();
		e3_close();
		f3_open();
		g3_open();
		break;
	case 10:			//��ʾ"-"
		a3_close();
		b3_close();
		c3_close();
		d3_close();
		e3_close();
		f3_close();
		g3_open();
		break;
	default:
		a3_close();
		b3_close();
		c3_close();
		d3_close();
		e3_close();
		f3_close();
		g3_close();
		break;
	}
	HAL_Delay(1);
	a3_close();
	b3_close();
	c3_close();
	d3_close();
	e3_close();
	f3_close();
	g3_close();
}

static void led1Dispaly(int16_t value)
{
	uint8_t ge = 0;
	uint8_t shi = 0;
	uint8_t bai = 0;

	if (value < 0)
	{

		value = -value;
		if (value > 99)
		{
			value = 99;
		}

		shi = value % 100 / 10;
		ge = value % 10;

		led1_open();
		led2_close();
		led3_close();
		led4_close();
		led5_close();
		led6_close();
		displaySingleDigitalGroup1(10);
		led1_close();
		led2_open();
		led3_close();
		led4_close();
		led5_close();
		led6_close();
		displaySingleDigitalGroup1(shi);
		led1_close();
		led2_close();
		led3_open();
		led4_close();
		led5_close();
		led6_close();
		displaySingleDigitalGroup1(ge);
	}
	else
	{
		if (value > 999)
		{
			value = 999;
		}

		bai = value / 100;
		shi = value % 100 / 10;
		ge = value % 10;

		led1_open();
		led2_close();
		led3_close();
		led4_close();
		led5_close();
		led6_close();
		displaySingleDigitalGroup1(bai);
		led1_close();
		led2_open();
		led3_close();
		led4_close();
		led5_close();
		led6_close();
		displaySingleDigitalGroup1(shi);
		led1_close();
		led2_close();
		led3_open();
		led4_close();
		led5_close();
		led6_close();
		displaySingleDigitalGroup1(ge);
	}
}


static void led2Dispaly(int16_t value)
{
	uint8_t ge = 0;
	uint8_t shi = 0;
	uint8_t bai = 0;

	if (value < 0)
	{

		value = -value;
		if (value > 99)
		{
			value = 99;
		}

		shi = value % 100 / 10;
		ge = value % 10;

		led1_close();
		led2_close();
		led3_close();
		led4_open();
		led5_close();
		led6_close();
		displaySingleDigitalGroup1(10);
		led1_close();
		led2_close();
		led3_close();
		led4_close();
		led5_open();
		led6_close();
		displaySingleDigitalGroup1(shi);
		led1_close();
		led2_close();
		led3_close();
		led4_close();
		led5_close();
		led6_open();
		displaySingleDigitalGroup1(ge);
	}
	else
	{
		if (value > 999)
		{
			value = 999;
		}

		bai = value / 100;
		shi = value % 100 / 10;
		ge = value % 10;

		led1_close();
		led2_close();
		led3_close();
		led4_open();
		led5_close();
		led6_close();
		displaySingleDigitalGroup1(bai);
		led1_close();
		led2_close();
		led3_close();
		led4_close();
		led5_open();
		led6_close();
		displaySingleDigitalGroup1(shi);
		led1_close();
		led2_close();
		led3_close();
		led4_close();
		led5_close();
		led6_open();
		displaySingleDigitalGroup1(ge);
	}
}

static void led3Dispaly(int16_t value)
{
	uint8_t ge = 0;
	uint8_t shi = 0;
	uint8_t bai = 0;

	if (value < 0)
	{

		value = -value;
		if (value > 99)
		{
			value = 99;
		}

		shi = value % 100 / 10;
		ge = value % 10;

		led7_open();
		led8_close();
		led9_close();
		led10_close();
		led11_close();
		led12_close();
		displaySingleDigitalGroup2(10);
		led7_close();
		led8_open();
		led9_close();
		led10_close();
		led11_close();
		led12_close();
		displaySingleDigitalGroup2(shi);
		led7_close();
		led8_close();
		led9_open();
		led10_close();
		led11_close();
		led12_close();
		displaySingleDigitalGroup2(ge);
	}
	else
	{
		if (value > 999)
		{
			value = 999;
		}

		bai = value / 100;
		shi = value % 100 / 10;
		ge = value % 10;

		led7_open();
		led8_close();
		led9_close();
		led10_close();
		led11_close();
		led12_close();
		displaySingleDigitalGroup2(bai);
		led7_close();
		led8_open();
		led9_close();
		led10_close();
		led11_close();
		led12_close();
		displaySingleDigitalGroup2(shi);
		led7_close();
		led8_close();
		led9_open();
		led10_close();
		led11_close();
		led12_close();
		displaySingleDigitalGroup2(ge);
	}
}

static void led4Dispaly(int16_t value)
{
	uint8_t ge = 0;
	uint8_t shi = 0;
	uint8_t bai = 0;

	if (value < 0)
	{

		value = -value;
		if (value > 99)
		{
			value = 99;
		}

		shi = value % 100 / 10;
		ge = value % 10;

		led10_open();
		led11_close();
		led12_close();
		led13_close();
		led14_close();
		led15_close();
		displaySingleDigitalGroup3(10);

		led10_close();
		led11_open();
		led12_close();
		led13_close();
		led14_close();
		led15_close();
		displaySingleDigitalGroup3(shi);

		led10_close();
		led11_close();
		led12_open();
		led13_close();
		led14_close();
		led15_close();
		displaySingleDigitalGroup3(ge);
	}
	else
	{
		if (value > 999)
		{
			value = 999;
		}

		bai = value / 100;
		shi = value % 100 / 10;
		ge = value % 10;


		led10_open();
		led11_close();
		led12_close();
		led13_close();
		led14_close();
		led15_close();
		displaySingleDigitalGroup3(bai);

		led10_close();
		led11_open();
		led12_close();
		led13_close();
		led14_close();
		led15_close();
		displaySingleDigitalGroup3(shi);

		led10_close();
		led11_close();
		led12_open();
		led13_close();
		led14_close();
		led15_close();
		displaySingleDigitalGroup3(ge);
	}
}

static void led5Dispaly(int16_t value)
{
	uint8_t ge = 0;
	uint8_t shi = 0;
	uint8_t bai = 0;

	if (value < 0)
	{

		value = -value;
		if (value > 99)
		{
			value = 99;
		}

		shi = value % 100 / 10;
		ge = value % 10;

		led13_open();
		led14_close();
		led15_close();
		displaySingleDigitalGroup3(10);
		led13_close();
		led14_open();
		led15_close();
		displaySingleDigitalGroup3(shi);
		led13_close();
		led14_close();
		led15_open();
		displaySingleDigitalGroup3(ge);
	}
	else
	{
		if (value > 999)
		{
			value = 999;
		}

		bai = value / 100;
		shi = value % 100 / 10;
		ge = value % 10;

		led13_open();
		led14_close();
		led15_close();
		displaySingleDigitalGroup3(bai);
		led13_close();
		led14_open();
		led15_close();
		displaySingleDigitalGroup3(shi);
		led13_close();
		led14_close();
		led15_open();
		displaySingleDigitalGroup3(ge);
	}
}


void led3Close()
{
	displaySingleDigitalGroup2(11);
	displaySingleDigitalGroup2(11);
	displaySingleDigitalGroup2(11);
}