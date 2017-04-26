#ifndef __ABoxCableType_H__ 
#define __ABoxCableType_H__ 
#include <Rect.h>
#include <Box.h>
class TBoxCableType: public BBox
{
	public:
		TBoxCableType(BRect AFrame);
		~TBoxCableType(void);
		/*void MessageReceived(BMessage *message);
		void AttachedToWindow(void);*/
};
#endif
