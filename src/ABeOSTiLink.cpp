#include "ABeOSTiLink.h"
TiLinkApp::TiLinkApp() : BApplication("application/BeOSTiLink")
{
	BRect AMain_Window(50, 50, 550, 450);
	FAMain_Window=new TMain_Window("BeOSTiLink", AMain_Window);
	FAMain_Window->Show();
}
int main(int argc, char*argv[])
{
	TiLinkApp BeOSTiLink;
	BeOSTiLink.Run();
	return 0;
}
