#ifndef __ABoxCalculatorType_H__ 
#define __ABoxCalculatorType_H__ 
#include <Rect.h>
#include <Box.h>
#include <RadioButton.h>
class TBoxCalculatorType: public BBox
{
	public:
		TBoxCalculatorType(BRect AFrame);
		~TBoxCalculatorType(void);
		/*void MessageReceived(BMessage *message);
		void AttachedToWindow(void);*/
};
#endif
