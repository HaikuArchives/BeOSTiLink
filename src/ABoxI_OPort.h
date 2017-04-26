#ifndef __ABoxI_OPort_H__ 
#define __ABoxI_OPort_H__ 
#include <Rect.h>
#include <Box.h>
class TBoxI_OPort: public BBox
{
	public:
		TBoxI_OPort(BRect AFrame);
		~TBoxI_OPort(void);
		/*void MessageReceived(BMessage *message);
		void AttachedToWindow(void);*/
};
#endif