#include "ASetupHC_View.h"
TSetupHC_View::TSetupHC_View(BRect AFrame): BView(AFrame,NULL,B_FOLLOW_ALL_SIDES,B_NAVIGABLE | B_WILL_DRAW)
{
	/*OK Button*/
	BRect OKButton(87.5,375,137.5,385);
	FAOK=new BButton(OKButton,"OKButton","OK",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FAOK->MakeDefault(FALSE);
	AddChild(FAOK);
	/*Cancel Button*/
	BRect CancelButton(225,375,275,385);
	FACancel=new BButton(CancelButton,"CancelButton","Cancel",new BMessage(SETUP_BUTTON_CANCEL),B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FACancel->MakeDefault(FALSE);
	AddChild(FACancel);
	/*Help Button*/
	BRect HelpButton(362,375,412.5,385);
	FAHelp=new BButton(HelpButton,"HelpButton","Help",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW);
	FAHelp->MakeDefault(FALSE);
	AddChild(FAHelp);
	/*Cable type*/
	FACable_Type=new TBoxCableType(BRect (5,15,165,370));
	AddChild(FACable_Type);
	/*I_O Port*/
	FAI_OPort=new TBoxI_OPort(BRect (170,15,330,370));
	AddChild(FAI_OPort);
	/*Calculator type*/
	FACalculator_Type=new TBoxCalculatorType(BRect (335,15,495,370));
	AddChild(FACalculator_Type);
	/*Radio Buttons Cable type*/
	FACable_Type->AddChild(rdoParaCable = new BRadioButton(BRect(12,20,130,40),"rdoParaCable","Home made // cable",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
    rdoParaCable->SetValue(1);
    FACable_Type->AddChild(rdoSerialBlack = new BRadioButton(BRect(12,45,130,65),"rdoSerialBlack","Black TI Graph Link",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
    FACable_Type->AddChild(rdoSerialGrey = new BRadioButton(BRect(12,70,130,90),"rdoSerialGrey","Grey TI Graph Link",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	FACable_Type->AddChild(rdoAVRLink = new BRadioButton(BRect(12,95,130,115),"rdoAVRLink","AVR Link Fast mode",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	FACable_Type->AddChild(rdoServer = new BRadioButton(BRect(12,120,130,140),"rdoServer","Use SERVER",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
    rdoServer->SetEnabled(false);
    /*Radio Buttons Calculator type*/
	FACalculator_Type->AddChild(rdoTI92p = new BRadioButton(BRect(12,20,130,40),"rdoTI92p","TI 92 +",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	FACalculator_Type->AddChild(rdoTI92 = new BRadioButton(BRect(12,45,130,65),"rdoTI92","TI 92",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	rdoTI92->SetValue(1);
	FACalculator_Type->AddChild(rdoTI89 = new BRadioButton(BRect(12,70,130,90),"rdoTI89","TI 89",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	FACalculator_Type->AddChild(rdoTI86 = new BRadioButton(BRect(12,95,130,115),"rdoTI86","TI 86",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	FACalculator_Type->AddChild(rdoTI85 = new BRadioButton(BRect(12,120,130,140),"rdoTI85","TI 85",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	FACalculator_Type->AddChild(rdoTI83p = new BRadioButton(BRect(12,145,130,165),"rdoTI83p","TI 83 +",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	FACalculator_Type->AddChild(rdoTI83 = new BRadioButton(BRect(12,170,130,190),"rdoTI83","TI 83",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
	FACalculator_Type->AddChild(rdoTI82 = new BRadioButton(BRect(12,195,130,215),"rdoTI82","TI 82",NULL,B_FOLLOW_LEFT | B_FOLLOW_TOP,B_WILL_DRAW | B_NAVIGABLE));
}
TSetupHC_View::~TSetupHC_View(void)
{
}
void TSetupHC_View::MessageReceived(BMessage *message)
{
	switch(message->what)
	{
		default :
			BView::MessageReceived(message);
			break;
	}
}
void TSetupHC_View::AttachedToWindow(void)
{
	BView::AttachedToWindow();
}