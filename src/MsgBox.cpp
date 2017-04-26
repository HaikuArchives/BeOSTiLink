#include "MsgBox.h"
/*Generic definition of a message box*/
int32 MsgBox(
	const char *title, const char *text, 
	const char *btn1, const char *btn2 = NULL, const char *btn3 = NULL,
	button_width widthStyle = B_WIDTH_AS_USUAL,
	alert_type type = B_INFO_ALERT
)
{
	BAlert *alert = new BAlert(title, text, btn1, btn2, btn3, widthStyle, type);
	alert->SetShortcut(0, B_ESCAPE);
	int32 result = alert->Go();
	return result;
}
/*Specific definition of boxes*/
int32 YesNoBox(const char *text, alert_type type)
{
	int32 result = MsgBox(
		text, text, "Yes", "No", NULL, 
		B_WIDTH_AS_USUAL, type
	);
	return result;
}
int32 YesNoCancelBox(const char *text, alert_type type)
{
	int32 result = MsgBox(
		text, text, "Yes", "No", "Cancel", 
		B_WIDTH_AS_USUAL, type
	);
	return result;
}
int32 OKCancelBox(const char *text, alert_type type)
{
	int32 result = MsgBox(
		text, text, "OK", "Cancel", NULL, 
		B_WIDTH_AS_USUAL, type
	);
	return result;
}