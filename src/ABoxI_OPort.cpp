#include "ABoxI_OPort.h"
TBoxI_OPort::TBoxI_OPort(BRect AFrame): BBox(AFrame,"ABoxI_OPort",B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW)
{
	SetLabel("I/O Port");
}
TBoxI_OPort::~TBoxI_OPort(void)
{
}
/*void TBoxI_OPort::MessageReceived(BMessage *message)
{
	switch(message->what)
	{
		default :
			BBox::MessageReceived(message);
			break;
	}
}
void TBoxI_OPort::AttachedToWindow(void)
{
	BBox::AttachedToWindow();
}*/