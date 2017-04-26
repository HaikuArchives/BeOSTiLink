#ifndef __TMain_Window_H__ 
#define __TMain_Window_H__ 
#include <View.h>
#include <Window.h>
#include "ABeOSTiLink.h"
#include "ASetupHC_Window.h"
#include "MsgBox.h"
#include "AConst.h"
#include "AMain_View.h"
class TMain_Window: public BWindow
{
	public: 
		TMain_Window(char *AWindowTitle, BRect AFrame);
		~TMain_Window(void);
		BView *AMain_View;
		BWindow *FASetupHC_Window;
	private:
		/*Events selection*/
		void MessageReceived(BMessage *);
		/*Events*/
		/*Menu -> File*/
		virtual void OpenRequested(void);
		virtual void SaveRequested(void);
		virtual void SaveAsRequested(void);
		virtual void ConvOFRequested(void);
		virtual void UnzArchRequested(void);
		virtual void UngroupRequested(void);
		virtual bool QuitRequested(void);
		/*Menu -> Setup*/
		virtual void GeneralRequested(void);
		virtual void HardCalcRequested(void);
		virtual void DelayRequested(void);
		virtual void TimeOutRequested(void);
		virtual void ProIORequested(void);
		virtual void ProLCRequested(void);
		virtual void ProCTRequested(void); 
		/*Menu -> Functions*/
		virtual void ReadyRequested(void);
		virtual void TermRRequested(void);
		virtual void ScreenDResquested(void);
		virtual void DirListRequested(void);
		virtual void SendBackRequested(void);
		virtual void RecBackRequested(void);
		virtual void SendVarRequested(void);
		virtual void RecVarRequested(void);
		virtual void SendFlashRequested(void);
		virtual void GetIDRequested(void);
		/*Menu -> Help*/
		virtual void AboutRequested(void);
		/*Buttons*/
		virtual void MkdirRequested(void);
		virtual void TrashRequested(void);
		virtual void UpdateRequested(void);
};
#endif
