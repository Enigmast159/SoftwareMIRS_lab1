
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	fb_regulator.dt = 0.1;
	fb_regulator.integrator.dt = 0.1;
	fb_regulator.max_abs_value = 20.0;
	fb_regulator.k_p = 0.095;
	fb_regulator.k_i = 2.0;
	fb_motor1.dt = 0.1;
	fb_motor1.integrator.dt = 0.1;
	fb_motor1.Tm = 0.063;
	fb_motor1.ke = 0.087;
	fb_motor1.u = 0;
	fb_motor2.dt = 0.1;
	fb_motor2.integrator.dt = 0.1;
	fb_motor2.Tm = 0.063;
	fb_motor2.ke = 0.087;
	fb_motor2.u = 0;
	counter = 0;
	speed = 0;
	enable = 0;
}
