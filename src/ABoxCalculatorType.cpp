#include "ABoxCalculatorType.h"
TBoxCalculatorType::TBoxCalculatorType(BRect AFrame): BBox(AFrame,"ABoxCalculatorType",B_FOLLOW_LEFT | B_FOLLOW_TOP,B_NAVIGABLE | B_WILL_DRAW)
{
	SetLabel("Calculator Type");
}
TBoxCalculatorType::~TBoxCalculatorType(void)
{
}
/*void TBoxCalculatorType::MessageReceived(BMessage *message)
{
	switch(message->what)
	{
		default :
			BBox::MessageReceived(message);
			break;
	}
}
void TBoxCalculatorType::AttachedToWindow(void)
{
	BBox::AttachedToWindow();
}*/