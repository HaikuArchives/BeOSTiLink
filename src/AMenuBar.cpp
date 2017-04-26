#include "AMenuBar.h"
TMenuBar::TMenuBar(BRect AFrame): BMenuBar(AFrame,"AMenuBar")
{
	/*Menu*/
	File=new BMenu("File");
	AddItem(File);
	File->SetTargetForItems(this);
	Setup=new BMenu("Setup");
	AddItem(Setup);
	Setup->SetTargetForItems(this);
	Functions=new BMenu("Functions");
	AddItem(Functions);
	Functions->SetTargetForItems(this);
	Help=new BMenu("Help");
	AddItem(Help);
	Help->SetTargetForItems(this);
	/*MenuItem File*/
	Open=new BMenuItem("Open",new BMessage(MENU_FILE_OPEN));
	File->AddItem(Open);
	Save=new BMenuItem("Save",new BMessage(MENU_FILE_SAVE));
	File->AddItem(Save);
	Save_As=new BMenuItem("Save as",new BMessage(MENU_FILE_SAVEAS));
	File->AddItem(Save_As);
	File->AddSeparatorItem();
	Conv_Old_f=new BMenuItem("Convert old files",new BMessage(MENU_FILE_CONVOLDF));
	File->AddItem(Conv_Old_f);
	Unzip=new BMenuItem("Unzip archive",new BMessage(MENU_FILE_UNZIPA));
	File->AddItem(Unzip);
	Ungroup=new BMenuItem("Ungroup",new BMessage(MENU_FILE_UNGR));
	File->AddItem(Ungroup);
	File->AddSeparatorItem();
	Quit=new BMenuItem("Quit",new BMessage(B_QUIT_REQUESTED));
	File->AddItem(Quit);
	/*MenuItem Setup*/
	General=new BMenuItem("General",new BMessage(MENU_SETUP_GENERAL));
	Setup->AddItem(General);
	Setup->AddSeparatorItem();
	Har_Calc=new BMenuItem("Hardware & Calc",new BMessage(MENU_SETUP_HARCALC));
	Setup->AddItem(Har_Calc);
	Delay=new BMenuItem("Delay",new BMessage(MENU_SETUP_DELAY));
	Setup->AddItem(Delay);
	Time_Out=new BMenuItem("Time out",new BMessage(MENU_SETUP_TIMEOUT));
	Setup->AddItem(Time_Out);
	Setup->AddSeparatorItem();
	I_O_Port=new BMenuItem("Probe I/O port",new BMessage(MENU_SETUP_PRIOP));
	Setup->AddItem(I_O_Port);
	Link_cab=new BMenuItem("Probe link cable",new BMessage(MENU_SETUP_PRLINKC));
	Setup->AddItem(Link_cab);
	Calc_Typ=new BMenuItem("Probe calc type",new BMessage(MENU_SETUP_PRCALC));
	Setup->AddItem(Calc_Typ);
	/*MenuItem Functions*/
	Ready=new BMenuItem("Ready ???",new BMessage(MENU_FUNCTIONS_READY));
	Functions->AddItem(Ready);
	Term_Rem=new BMenuItem("Terminal & Remote",new BMessage(MENU_FUNCTIONS_TERMRE));
	Functions->AddItem(Term_Rem);
	Screen_Dump=new BMenuItem("Screen dump",new BMessage(MENU_FUNCTIONS_SCDUMP));
	Functions->AddItem(Screen_Dump);
	Dir_List=new BMenuItem("Directory list",new BMessage(MENU_FUNCTIONS_DIRLIST));
	Functions->AddItem(Dir_List);
	Functions->AddSeparatorItem();
	Send_Back=new BMenuItem("Send Backup",new BMessage(MENU_FUNCTIONS_SENDB));
	Functions->AddItem(Send_Back);
	Rec_Back=new BMenuItem("Receive Backup",new BMessage(MENU_FUNCTIONS_RECB));
	Functions->AddItem(Rec_Back);
	Functions->AddSeparatorItem();
	Send_Var=new BMenuItem("Send Variable",new BMessage(MENU_FUNCTIONS_SENDV));
	Functions->AddItem(Send_Var);
	Rec_Var=new BMenuItem("Receive Variable",new BMessage(MENU_FUNCTIONS_RECV));
	Functions->AddItem(Rec_Var);
	Functions->AddSeparatorItem();
	Send_Flash=new BMenuItem("Send FLASH",new BMessage(MENU_FUNCTIONS_SENDF));
	Functions->AddItem(Send_Flash);
	Get_ID=new BMenuItem("Get ID list",new BMessage(MENU_FUNCTIONS_GETID));
	Functions->AddItem(Get_ID);
	/*MenuItem Help*/
	About=new BMenuItem("About",new BMessage(B_ABOUT_REQUESTED));
	Help->AddItem(About);
}
TMenuBar::~TMenuBar(void)
{
}
void TMenuBar::MessageReceived(BMessage *message)
{
	switch(message->what)
	{
		default :
			BMenuBar::MessageReceived(message); break;
	}
}
void TMenuBar::AttachedToWindow(void)
{
	BMenuBar::AttachedToWindow();
}