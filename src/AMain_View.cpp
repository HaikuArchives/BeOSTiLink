#include "AMain_View.h"
TMain_View::TMain_View(BRect AFrame): BView(AFrame,NULL,B_FOLLOW_ALL_SIDES,B_NAVIGABLE | B_WILL_DRAW)
{
	/*Menu Bar*/
	FAMenuBar=new TMenuBar(BRect(0.000000,0.000000,10.000000,19.000000));
	AddChild(FAMenuBar);
	/*Ready Button*/
	BRect ReadyButton(0.000000,19.000000,50.000000,25.000000);
	FAReady=new BButton(ReadyButton,"ReadyButton","Ready",new BMessage(MENU_FUNCTIONS_READY),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FAReady->MakeDefault(FALSE);
	AddChild(FAReady);
	/*Remote Button*/
	BRect RemoteButton(50.000000,19.000000,100.000000,25.000000);
	FARemote=new BButton(RemoteButton,"RemoteButton","Remote",new BMessage(MENU_FUNCTIONS_TERMRE),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FARemote->MakeDefault(FALSE);
	AddChild(FARemote);
	/*Screen Button*/
	BRect ScreenButton(100.000000,19.000000,150.000000,25.000000);
	FAScreen=new BButton(ScreenButton,"ScreenButton","Screen",new BMessage(MENU_FUNCTIONS_SCDUMP),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FAScreen->MakeDefault(FALSE);
	AddChild(FAScreen);
	/*Directory Button*/
	BRect DirectoryButton(150.000000,19.000000,200.000000,25.000000);
	FADirectory=new BButton(DirectoryButton,"DirectoryButton","Direct.",new BMessage(MENU_FUNCTIONS_DIRLIST),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FADirectory->MakeDefault(FALSE);
	AddChild(FADirectory);
	/*Backup Button*/
	BRect BackupButton(200.000000,19.000000,250.000000,25.000000);
	FABackup=new BButton(BackupButton,"BackupButton","Backup",new BMessage(MENU_FUNCTIONS_RECB),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FABackup->MakeDefault(FALSE);
	AddChild(FABackup);
	/*Restore Button*/
	BRect RestoreButton(250.000000,19.000000,300.000000,25.000000);
	FARestore=new BButton(RestoreButton,"RestoreButton","Restore",new BMessage(MENU_FUNCTIONS_SENDB),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FARestore->MakeDefault(FALSE);
	AddChild(FARestore);
	/*Send/Receive Button*/
	BRect Sen_RecButton(300.000000,19.000000,350.000000,25.000000);
	FASen_Rec=new BButton(Sen_RecButton,"Sen_RecButton","Send/Re",new BMessage(MENU_FUNCTIONS_RECV),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FASen_Rec->MakeDefault(FALSE);
	AddChild(FASen_Rec);
	/*MkDir Button*/
	BRect MkDirButton(350.000000,19.000000,400.000000,25.000000);
	FAMkDir=new BButton(MkDirButton,"MkDirButton","MkDir",new BMessage(BUTTON_MKDIR),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FAMkDir->MakeDefault(FALSE);
	AddChild(FAMkDir);
	/*Trash Button*/
	BRect TrashButton(400.000000,19.000000,450.000000,25.000000);
	FATrash=new BButton(TrashButton,"TrashButton","Trash",new BMessage(BUTTON_TRASH),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FATrash->MakeDefault(FALSE);
	AddChild(FATrash);
	/*Update Button*/
	BRect UpdateButton(450.000000,19.000000,500.000000,25.000000);
	FAUpdate=new BButton(UpdateButton,"UpdateButton","Update",new BMessage(BUTTON_UPDATE),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FAUpdate->MakeDefault(FALSE);
	AddChild(FAUpdate);
	/*Calculator File List*/
	BRect Calc_File(5.000000,80.000000,230.000000,300.000000);
	FACalc_File=new BOutlineListView(Calc_File,"Calc_File",B_SINGLE_SELECTION_LIST,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	AddChild(new BScrollView("scroll_Calc_File",FACalc_File,B_FOLLOW_LEFT | B_FOLLOW_TOP,0,true,true));
	/*Local File list*/
	BRect Local_File(255.000000,80.000000,480.000000,300.000000);
	FALocal_File=new BOutlineListView(Local_File,"Local_File",B_SINGLE_SELECTION_LIST,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	AddChild(new BScrollView("scroll_Local_File",FALocal_File,B_FOLLOW_LEFT | B_FOLLOW_TOP,0,true,true));
	/*String Calculator File*/
	BRect CFile(75,40,175,75);
	FACFile=new BStringView(CFile,"CFile","Calculator File",B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW);
	FACFile->SetFontSize(14);
	AddChild(FACFile);
	/*String Local File*/
	BRect LFile(335,40,435,75);
	FALFile=new BStringView(LFile,"LFile","Local File",B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW);
	FALFile->SetFontSize(14);
	AddChild(FALFile);
}
TMain_View::~TMain_View(void)
{
}
void TMain_View::MessageReceived(BMessage *message)
{
	switch(message->what)
	{
		default :
			BView::MessageReceived(message);
			break;
	}
}
void TMain_View::AttachedToWindow(void)
{
	BView::AttachedToWindow();
}