#include "ABoxCableType.h"
TBoxCableType::TBoxCableType(BRect AFrame): BBox(AFrame,"ABoxCableType",B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW)
{
	SetLabel("Cable Type");
}
TBoxCableType::~TBoxCableType(void)
{
}
/*void TBoxCableType::MessageReceived(BMessage *message)
{
	switch(message->what)
	{
		default :
			BBox::MessageReceived(message);
			break;
	}
}
void TBoxCableType::AttachedToWindow(void)
{
	BBox::AttachedToWindow();
}*/