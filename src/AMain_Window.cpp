#include "AMain_Window.h"
TMain_Window::TMain_Window(char *AWindowTitle, BRect AFrame): 
BWindow(AFrame,AWindowTitle,B_TITLED_WINDOW,B_NOT_H_RESIZABLE|B_NOT_V_RESIZABLE|B_NOT_ZOOMABLE)
{
	AMain_View=new TMain_View(BRect(0,0,500,400));
	rgb_color kDarkGray = {100,100,100,255};
	rgb_color kGray = {219,219,219,255};
	AMain_View->SetViewColor(kGray);
	AddChild(AMain_View);
}
TMain_Window::~TMain_Window(void)
{
}
/*Message definition*/
/*MenuBar -> File -> Open*/
void TMain_Window::OpenRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> File -> Save*/
void TMain_Window::SaveRequested(void)
{
	ErrorBox(
		"This function is not\n"
		"available yet\n"
		);	
}
/*MenuBar -> File -> Save As*/
void TMain_Window::SaveAsRequested(void)
{
ErrorBox(
		"This function is not\n"
		"available yet\n"
		);	
}
/*MenuBar -> File -> Convert Old file*/
void TMain_Window::ConvOFRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> File -> Unzip archive*/
void TMain_Window::UnzArchRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> File -> Ungroup*/
void TMain_Window::UngroupRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> File -> Quit*/
bool TMain_Window::QuitRequested(void)
{
   	be_app->PostMessage(B_QUIT_REQUESTED);
   	return true;
}
/*MenuBar -> Setup -> General*/
void TMain_Window::GeneralRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Setup -> Hardware & Calc*/
void TMain_Window::HardCalcRequested(void)
{
	BRect ASetupHC_Window(150, 150, 650, 550);
	FASetupHC_Window=new TSetupHC_Window("Hardware & Calculator", ASetupHC_Window);
	FASetupHC_Window->Show();
}
/*MenuBar -> Setup -> Delay*/
void TMain_Window::DelayRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Setup -> Time out*/
void TMain_Window::TimeOutRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Setup -> Probe I/O port*/
void TMain_Window::ProIORequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Setup -> Probe Link cable*/
void TMain_Window::ProLCRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Setup -> Probe Calc type*/
void TMain_Window::ProCTRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Ready*/
void TMain_Window::ReadyRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Terminal & Remote*/
void TMain_Window::TermRRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Screen Dump*/
void TMain_Window::ScreenDResquested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Directory list*/
void TMain_Window::DirListRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Send backup*/
void TMain_Window::SendBackRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Receive Backup*/
void TMain_Window::RecBackRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Send Variable*/
void TMain_Window::SendVarRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Receive Variable*/
void TMain_Window::RecVarRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Send FLASH*/
void TMain_Window::SendFlashRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Functions -> Get ID list*/
void TMain_Window::GetIDRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*MenuBar -> Help -> About*/
void TMain_Window::AboutRequested(void)
{
 	InfoBox(
    	"BeOSTiLink\n"
    	"Snowboard-Killer Software\n"
    	"This Software is protected by GNU/GPL License\n"
    	"This is the BeOS version of GTKTiLink\n"
  		);
}
/*BUTTON -> MKDIR*/
void TMain_Window::MkdirRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*BUTTON -> TRASH*/
void TMain_Window::TrashRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*BUTTON -> Upadte*/
void TMain_Window::UpdateRequested(void)
{
 	ErrorBox(
    	"This function\n"
    	"is not available yet.\n"
  	);
}
/*Message handlers*/
void TMain_Window::MessageReceived(BMessage *message)
{
	switch(message->what)
		{
			case MENU_FILE_OPEN : /*Menubar -> File -> Open*/
				OpenRequested(); break;
			case MENU_FILE_SAVE : /*Menubar -> File -> Save*/
				SaveRequested(); break;
			case MENU_FILE_SAVEAS : /*Menubar -> File -> Save as*/
				SaveAsRequested(); break;
			case MENU_FILE_CONVOLDF : /*MenuBar -> File -> Convert old file*/
				ConvOFRequested(); break;
			case MENU_FILE_UNZIPA : /*MenuBar -> File -> Unzip archive*/
				UnzArchRequested(); break;
			case MENU_FILE_UNGR : /*MenuBar -> File -> Ungroup*/
				UngroupRequested(); break;
			case MENU_SETUP_GENERAL : /*MenuBar -> Setup -> General*/
				GeneralRequested(); break;
			case MENU_SETUP_HARCALC : /*MenuBar -> Setup -> Hardware & Calc*/
				HardCalcRequested(); break;
			case MENU_SETUP_DELAY : /*MenuBar -> Setup -> Delay*/
				DelayRequested(); break;
			case MENU_SETUP_TIMEOUT : /*MenuBar -> Setup -> Time out*/
				TimeOutRequested(); break;
			case MENU_SETUP_PRIOP : /*Menubar -> Setup -> Probe I/O port*/
				ProIORequested(); break;
			case MENU_SETUP_PRLINKC	: /*MenuBar -> Setup -> Probe Link Cable*/
				ProLCRequested(); break;
			case MENU_SETUP_PRCALC : /*MenuBar -> Setup -> Probe Calc type*/
				ProCTRequested(); break;
			case MENU_FUNCTIONS_READY : /*MenuBar -> Functions -> Ready*/
				ReadyRequested(); break;
			case MENU_FUNCTIONS_TERMRE : /*MenuBar -> Functions -> Terminal & Remote*/
				TermRRequested(); break;
			case MENU_FUNCTIONS_SCDUMP : /*MenuBar -> Functions -> Screen Dump*/
				ScreenDResquested(); break;
			case MENU_FUNCTIONS_DIRLIST : /*MenuBar -> Functions -> Directory List*/
				DirListRequested(); break;
			case MENU_FUNCTIONS_SENDB : /*MenuBar -> Functions -> Send Backup*/
				SendBackRequested(); break;
			case MENU_FUNCTIONS_RECB : /*MenuBar -> Functions -> Receive Backup*/
				RecBackRequested(); break;
			case MENU_FUNCTIONS_SENDV : /*MenuBar -> Functions -> Send Variable*/
				SendVarRequested(); break;
			case MENU_FUNCTIONS_RECV : /*MenuBar -> Functions -> Receive Variable*/
				RecVarRequested(); break;
			case MENU_FUNCTIONS_SENDF : /*MenuBar -> Functions -> Send Flash*/
				SendFlashRequested(); break;
			case MENU_FUNCTIONS_GETID : /*MenuBar -> Functions -> Get ID List*/
				GetIDRequested(); break;
			case B_ABOUT_REQUESTED : /*MenuBar -> Help -> About*/
				AboutRequested(); break;
			case BUTTON_MKDIR : /*BUTTON -> MKDIR*/
				MkdirRequested(); break;
			case BUTTON_TRASH : /*BUTTON -> Trash*/
				TrashRequested(); break;
			case BUTTON_UPDATE : /*BUTTON -> Update*/
				UpdateRequested(); break;
			default :
				BWindow::MessageReceived(message); break;
		}
}	