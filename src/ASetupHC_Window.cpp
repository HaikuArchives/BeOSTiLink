#include "ASetupHC_Window.h"
TSetupHC_Window::TSetupHC_Window(char *AWindowTitle, BRect AFrame): 
BWindow(AFrame,AWindowTitle,B_TITLED_WINDOW,B_NOT_H_RESIZABLE|B_NOT_V_RESIZABLE|B_NOT_ZOOMABLE)
{
	ASetupHC_View=new TSetupHC_View(BRect(0,0,500,400));
	rgb_color kDarkGray = {100,100,100,255};
	rgb_color kGray = {219,219,219,255};
	ASetupHC_View->SetViewColor(kGray);
	AddChild(ASetupHC_View);
}
TSetupHC_Window::~TSetupHC_Window(void)
{
}
/*Message definition*/
/*Setup Button -> OK*/
void TSetupHC_Window::SetupOKRequested(void)
{
}
/*Setup Button -> Cancel*/
bool TSetupHC_Window::SetupCancelRequested(void)
{
	PostMessage(B_QUIT_REQUESTED);
   	return true;
}
/*Setup Button -> Help*/
void TSetupHC_Window::SetupHelpRequested(void)
{
}
/*Message handlers*/
void TSetupHC_Window::MessageReceived(BMessage *message)
{
	switch(message->what)
		{
			case SETUP_BUTTON_OK : /*Setup Button -> OK*/
				SetupOKRequested(); break;
			case SETUP_BUTTON_CANCEL : /*Setup Button -> Cancel*/
				SetupCancelRequested(); break;
			case SETUP_BUTTON_HELP : /*Setup Button -> Help*/
				SetupHelpRequested(); break;
			default :
				BWindow::MessageReceived(message); break;
		}
}