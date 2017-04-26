#ifndef __TMenuBar_H__ 
#define __TMenuBar_H__
#include <MenuItem.h>
#include <Rect.h>
#include <Menu.h>
#include <MenuBar.h>
#include "AConst.h"
class TMenuBar: public BMenuBar
{
	public:
		/*Menu*/
		BMenu *File;
		BMenu *Setup;
		BMenu *Functions;
		BMenu *Help;
		/*Menuitem File*/
		BMenuItem *Open;
		BMenuItem *Save;
		BMenuItem *Save_As;
		BMenuItem *Conv_Old_f;
		BMenuItem *Unzip;
		BMenuItem *Ungroup;
		BMenuItem *Quit;
		/*MenuItem Setup*/
		BMenuItem *General;
		BMenuItem *Har_Calc;
		BMenuItem *Delay;
		BMenuItem *Time_Out;
		BMenuItem *I_O_Port;
		BMenuItem *Link_cab;
		BMenuItem *Calc_Typ;
		/*MenuItem Functions*/
		BMenuItem *Ready;
		BMenuItem *Term_Rem;
		BMenuItem *Screen_Dump;
		BMenuItem *Dir_List;
		BMenuItem *Send_Back;
		BMenuItem *Rec_Back;
		BMenuItem *Send_Var;
		BMenuItem *Rec_Var;
		BMenuItem *Send_Flash;
		BMenuItem *Get_ID;
		/*MenuItem Help*/
		BMenuItem *About;
		
		TMenuBar(BRect AFrame);
		~TMenuBar(void);
		void MessageReceived(BMessage *message);
		void AttachedToWindow(void);
};
#endif
