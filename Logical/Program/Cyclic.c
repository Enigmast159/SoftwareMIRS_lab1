
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	if (counter % 200 == 0)
	{
		enable = !enable;
		if (enable)
		{
			speed = 50;
		}
		else
		{
			speed = 0;
		}
	}
	fb_regulator.e = speed - fb_motor1.w;
	FB_Regulator(&fb_regulator);
	
	fb_motor1.u = fb_regulator.u;
	FB_Motor(&fb_motor1);
	fb_motor2.u = speed * fb_motor2.ke;
	FB_Motor(&fb_motor2);
	counter += 1;
}
