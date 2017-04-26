#ifndef __TSetup_View_H__ 
#define __TSetup_View_H__ 
#include <Rect.h>
#include <Button.h>
#include <StringView.h>
#include <Box.h>
#include <View.h>
#include "AConst.h"
#include "ABoxCableType.h"
#include "ABoxI_OPort.h"
#include "ABoxCalculatorType.h"
class TSetupHC_View: public BView
{
	public:
		TSetupHC_View(BRect AFrame);
		~TSetupHC_View(void);
		void MessageReceived(BMessage *message);
		void AttachedToWindow(void);
		/*Button*/
		BButton *FAOK;
		BButton *FACancel;
		BButton *FAHelp;
		/*Boxes*/
		BBox *FACable_Type;
		BBox *FAI_OPort;
		BBox *FACalculator_Type;
		/*Radio Buttons Cable type*/
		BRadioButton *rdoParaCable;
  		BRadioButton *rdoSerialBlack;
  		BRadioButton *rdoSerialGrey;
  		BRadioButton *rdoAVRLink;
  		BRadioButton *rdoServer;
  		/*Radio Buttons Calculator type*/
  		BRadioButton *rdoTI92p;
  		BRadioButton *rdoTI92;
  		BRadioButton *rdoTI89;
  		BRadioButton *rdoTI86;
  		BRadioButton *rdoTI85;
  		BRadioButton *rdoTI83p;
  		BRadioButton *rdoTI83;
  		BRadioButton *rdoTI82;
};
#endif