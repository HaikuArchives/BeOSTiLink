#ifndef __TMain_View_H__ 
#define __TMain_View_H__ 
#include <MenuBar.h>
#include <Rect.h>
#include <Button.h>
#include <ScrollView.h>
#include <StringView.h>
#include <OutlineListView.h>
#include <View.h>
#include "AMenuBar.h"
class TMain_View: public BView
{
	public:
		TMain_View(BRect AFrame);
		~TMain_View(void);
		void MessageReceived(BMessage *message);
		void AttachedToWindow(void);
		/*Menu Bar*/
		BMenuBar *FAMenuBar;
		/*Button*/
		BButton *FAReady;
		BButton *FARemote;
		BButton *FAScreen;
		BButton *FADirectory;
		BButton *FABackup;
		BButton *FARestore;
		BButton *FASen_Rec;
		BButton *FAMkDir;
		BButton *FATrash;
		BButton *FAUpdate;
		/*List View*/
		BListView *FACalc_File;
		BListView *FALocal_File;
		/*String View*/
		BStringView *FACFile;
		BStringView *FALFile;
};
#endif
