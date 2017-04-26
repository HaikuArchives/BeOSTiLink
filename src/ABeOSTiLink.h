#ifndef __TBeOSTiLink_H__ 
#define __TBeOSTiLink_H__ 
#include <Window.h>
#include <stdio.h>
#include <Application.h>
#include "AMain_Window.h"

class TiLinkApp : public BApplication 
{
	public:
		BWindow *FAMain_Window;
		TiLinkApp();
};
#endif
