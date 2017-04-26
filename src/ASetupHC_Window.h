#ifndef __ASetup_Window_H__
#define __ASetup_Window_H__
#include <View.h>
#include <Window.h>
#include "AConst.h"
#include "ASetupHC_View.h"
class TSetupHC_Window: public BWindow
{
	public: 
		TSetupHC_Window(char *AWindowTitle, BRect AFrame);
		~TSetupHC_Window(void);
		BView *ASetupHC_View;
	private:
		/*Events selection*/
		void MessageReceived(BMessage *);
		/*Events*/
		virtual void SetupOKRequested(void);
		virtual bool SetupCancelRequested(void);
		virtual void SetupHelpRequested(void);
};
#endif
