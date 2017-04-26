#ifndef __MsgBox_H__
#define __MsgBox_H__

#include <Alert.h>

// constants for YesNoBox() and OKCancelBox() return values
#define mbYes 	   0
#define mbNo 		 	 1
#define mbYNCancel 2
#define mbOK 		 0
#define mbCancel 1

/*Generic definition of a message box*/
int32 MsgBox(
	const char *title, const char *text, 
	const char *btn1, const char *btn2 = NULL, const char *btn3 = NULL,
	button_width widthStyle = B_WIDTH_AS_USUAL,
	alert_type type = B_INFO_ALERT
);
/*Specific definition of boxes*/
int32 YesNoBox(const char *text, alert_type type = B_INFO_ALERT);
int32 YesNoCancelBox(const char *text, alert_type = B_INFO_ALERT);
int32 OKCancelBox(const char *text, alert_type type = B_INFO_ALERT);

#define InfoBox(text) \
	MsgBox("Information", text, "OK")
	
#define IdeaBox(text) \
	MsgBox("Idea", text, "OK", NULL, NULL, B_WIDTH_AS_USUAL, B_IDEA_ALERT)

#define WarningBox(text) \
	MsgBox("Warning", text, "OK", NULL, NULL, B_WIDTH_AS_USUAL, B_WARNING_ALERT)

#define ErrorBox(text) \
	MsgBox("Error", text, "OK", NULL, NULL, B_WIDTH_AS_USUAL, B_STOP_ALERT)

#endif
