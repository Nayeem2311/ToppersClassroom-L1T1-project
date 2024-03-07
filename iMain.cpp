#include "iGraphics.h"
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <time.h>
#pragma comment(lib, "Winmm.lib")
// #pragma comment(lib, "winmm.lib")

void joinsignup();
void homes();
void maindeck();
void goback1();
void goback2();
void goback3();
void goback4();
void goback5();
void goback6();
void goback7();
void goback8();
void drawusernamebox1();
void drawusernamebox2();
void drawaccountname1();
void drawaccountname2();
void drawaccountname3();
void drawaccountname4();
void drawclassbox1();
void drawclassbox2();
void drawclassbox3();
void drawclassbox4();
void drawcodebox();
void drawcodebox1();
// question 1
void drawoptioncirclea1();
void drawoptioncircleb1();
void drawoptioncirclea2();
void drawoptioncircleb2();
void drawoptioncirclea3();
void drawoptioncircleb3();
void drawoptioncirclea4();
void drawoptioncircleb4();
void drawoptioncirclea5();
void drawoptioncircleb5();
void drawanswercirclea1();
void drawanswercircleb1();
void drawanswercirclea2();
void drawanswercircleb2();
void drawanswercirclea3();
void drawanswercircleb3();
void drawanswercirclea4();
void drawanswercircleb4();
void drawanswercirclea5();
void drawanswercircleb5();
void createaccount();
int joinsign = 1;
int home = 0;
int mains = 0;
int account = 0;
int mode = 0, len = 0;
int acc_create = 0;
// options in mains
int classes = 0;
// create class
int insideclass = 0;
int settingclass = 0;
// inside class
int create_announce = 0;
// inside announce
int commentbox = 0;
int announce_post = 0;
int create_assignment = 0;

int dotitle = 0;
int doinstru = 0;
int create_quiz = 0;
int ques = 0;
int quesno = 0;
int optionboxa1 = 0;
int optionboxb1 = 0;
int optionboxa2 = 0;
int optionboxb2 = 0;
int optionboxa3 = 0;
int optionboxb3 = 0;
int optionboxa4 = 0;
int optionboxb4 = 0;
int optionboxa5 = 0;
int optionboxb5 = 0;
int answerboxa1 = 0;
int answerboxb1 = 0;
int answerboxa2 = 0;
int answerboxb2 = 0;
int answerboxa3 = 0;
int answerboxb3 = 0;
int answerboxa4 = 0;
int answerboxb4 = 0;
int answerboxa5 = 0;
int answerboxb5 = 0;
int qstn = 0;
int qstnA = 0;
int qstnB = 0;

// inside student
int student_section = 0;

int todo = 0;
int people = 0;
int record = 0;
int notes = 0;
int about = 0;
int acc_created = 0;
int wrong_pass = 0;
int posted = 0;
int cod = 0;
int studentmains = 0;
int announcement = 0;
int quiz = 0;
int assignment = 0;
int dopost = 0;
int mcq1 = 0;
int mcq2 = 0;
int mcq3 = 0;
int mcq4 = 0;
int mcq5 = 0;
int correct = 0;
int marks = 0;
int func1=0;
int point1=0;
int arr1=0;

/*
	function iDraw() is called again and again by the system.

	*/

char pic[100] = "background.bmp";
char join[100] = "pr1.bmp";
char pass[100] = "pass.bmp";
char back[100] = "back.bmp";
char next[100] = "NEXT.bmp";
char acc[100] = "accountcreate.bmp";
char deck[100] = "deck.bmp";
char us[100] = "about.bmp";
char recordcse[100] = "recordcse.bmp";
char sound[1000] = "C:\backup project\New folder\projectdone\functions.wav";
char sound1[1000]="C:\backup project\New folder\projectdone\array.wav";
char sound2[1000]="C:\backup project\New folder\projectdone\pointer.wav";
char createclass[100] = "createclass.bmp";
char anouncement[100] = "announce1.bmp";
char post[100] = "Post.bmp";
char code[100] = "code.bmp";
char student_mains[100] = "studentmains.bmp";
char poster[100] = "poster.bmp";
char assign[100] = "assign.bmp";
char postbutton[100] = "Postbutton.bmp";
char numofques[100] = "numofques.bmp";
char question[100] = "Question.bmp";
char mcq[100] = "mcq.bmp";
char result[100]="result.bmp";
char note[100]="Lote.bmp";
char instr[100]="instr.bmp";
char peop[100]="peop.bmp";
char func[100]="func1.bmp";
char arr[100]="arr.bmp";
char point[100]="point.bmp";

// char about1[100] = "about.bmp";

char usernameinput[100];
char str1[100];
char passwordinput[100];
char str2[100];
char usernamecreate[100];
char strusername[100];
char email[100];
char stremail[100];
char passwordcreate[100];
char strpassword[100];
char captcha[100];
char strcaptcha[100];
char signupPassword[100];
char rightcaptcha[100] = "2gyb6"; // Assuming a maximum password length of 100 characters
char asterisks[100];
char asterisks1[100];

// setting class
char classname[100];
char strclassname[100];
char instructor[100];
char strinstructor[100];
char id[100];
char strid[100];
char description[100];
char strdescription[100];
// announce post
char announce_post1[100];
char strannounce_post1[100];
char announce_post2[100];
char strannounce_post2[100];
char announce_post3[100];
char strannounce_post3[100];
char announce_post4[100];
char strannounce_post4[100];

char classid[100];
char strclassid[100];
char comment[100];
char strcomment[100];

char title[100];
char strtitle[100];
char instruction[100];
char strinstruction[100];
// quiz questions
char question1[100];
char strquestion1[100];
char optiona1[100];
char stroptiona1[100];
char optionb1[100];
char stroptionb1[100];

char question2[100];
char strquestion2[100];
char optiona2[100];
char stroptiona2[100];
char optionb2[100];
char stroptionb2[100];

char question3[100];
char strquestion3[100];
char optiona3[100];
char stroptiona3[100];
char optionb3[100];
char stroptionb3[100];

char question4[100];
char strquestion4[100];
char optiona4[100];
char stroptiona4[100];
char optionb4[100];
char stroptionb4[100];

char question5[100];
char strquestion5[100];
char optiona5[100];
char stroptiona5[100];
char optionb5[100];
char stroptionb5[100];

bool musicon = true;
bool musicon1=true;
bool musicon2=true;
int lote1=0;
int rhtcaptcha=0;
void iDraw()
{
	// place your drawing codes here
	iClear();
	//printf("note=%d\n", assignment);
	iShowBMP2(0, 0, pic, 0);
	if (joinsign == 1)
	{
		iShowBMP2(200, 120, join, 3);
		mode = 0;
	}
	if (home == 1)
	{
		iShowBMP(250, 120, pass);
		iShowBMP2(25, 340, back, 0);
		iShowBMP(800, 100, next);
		iText(370, 283, str1, GLUT_BITMAP_HELVETICA_18);
		iText(370, 173, asterisks, GLUT_BITMAP_HELVETICA_18);
		// iText(370, 173, str2, GLUT_BITMAP_HELVETICA_18);
	}
	if (mode == 1)
	{
		drawusernamebox1();
		iSetColor(0, 0, 0);
		iText(370, 283, usernameinput, GLUT_BITMAP_HELVETICA_18);
	}
	if (mode == 2)
	{
		drawusernamebox2();
		iSetColor(0, 0, 0);
		// Create a temporary string with asterisks
		// Assuming the maximum password length is 100
		memset(asterisks, '*', len);
		asterisks[len] = '\0';

		// Display the asterisks
		iText(370, 173, asterisks, GLUT_BITMAP_HELVETICA_18);
		// iText(370, 173, passwordinput, GLUT_BITMAP_HELVETICA_18);
	}
	if (mains == 1)
	{

		iShowBMP2(25, 340, back, 0);
		iSetColor(255, 255, 255);
		iText(370, 393, "WELCOME BACK!", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 363, str1, GLUT_BITMAP_TIMES_ROMAN_24);
		iShowBMP2(100, 10, deck, 0);
	}
	if (account == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(70, 20, acc, 0);
		iText(162, 288, strusername, GLUT_BITMAP_HELVETICA_18);
		iText(162, 212, stremail, GLUT_BITMAP_HELVETICA_18);
		// iText(370, 173, asterisks, GLUT_BITMAP_HELVETICA_18);
		iText(162, 135, asterisks1, GLUT_BITMAP_HELVETICA_18);
		// iText(162, 135, strpassword, GLUT_BITMAP_HELVETICA_18);
		iText(680, 175, strcaptcha, GLUT_BITMAP_HELVETICA_18);
	}
	if ((dopost == 1) && (create_assignment == 1))
	{
		iSetColor(255, 255, 255);
		iText(490, 410, "Posted!", GLUT_BITMAP_HELVETICA_18);
	}
	if (acc_create == 1)
	{
		drawaccountname1();
		iSetColor(0, 0, 0);
		iText(162, 288, usernamecreate, GLUT_BITMAP_HELVETICA_18);
	}
	if (acc_create == 2)
	{
		drawaccountname2();
		iSetColor(0, 0, 0);
		iText(162, 212, email, GLUT_BITMAP_HELVETICA_18);
	}
	if (acc_create == 3)
	{
		drawaccountname3();
		iSetColor(0, 0, 0);

		// Create a temporary string with asterisks
		// Assuming the maximum password length is 100
		memset(asterisks1, '*', len);
		asterisks[len] = '\0';

		// Display the asterisks
		iText(162, 135, asterisks1, GLUT_BITMAP_HELVETICA_18);

		// iText(162, 135, passwordcreate, GLUT_BITMAP_HELVETICA_18);
	}
	if (acc_create == 4)
	{
		drawaccountname4();
		iSetColor(0, 0, 0);
		iText(679, 175, captcha, GLUT_BITMAP_HELVETICA_18);
	}
	if (classes == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(160, 65, createclass, 0);
		iText(377, 323, strclassname, GLUT_BITMAP_HELVETICA_18);
		iText(377, 254, strinstructor, GLUT_BITMAP_HELVETICA_18);
		iText(377, 185, strid, GLUT_BITMAP_HELVETICA_18);
		iText(240, 110, strdescription, GLUT_BITMAP_HELVETICA_18);
	}
	if (insideclass == 1)
	{
		classes = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(60, 50, anouncement, 0);
	}
	// inside classprintf()
	if (create_announce == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(240, 90, post, 0);
		iSetColor(0, 0, 0);
		iText(300, 328, announce_post1, GLUT_BITMAP_HELVETICA_18);
		iText(300, 328, strannounce_post1, GLUT_BITMAP_HELVETICA_18);
		iText(300, 300, announce_post2, GLUT_BITMAP_HELVETICA_18);
		iText(300, 300, strannounce_post2, GLUT_BITMAP_HELVETICA_18);
		iText(300, 270, announce_post3, GLUT_BITMAP_HELVETICA_18);
		iText(300, 270, strannounce_post3, GLUT_BITMAP_HELVETICA_18);
		iText(300, 240, announce_post4, GLUT_BITMAP_HELVETICA_18);
		iText(300, 240, strannounce_post4, GLUT_BITMAP_HELVETICA_18);
	}
	if (create_assignment == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(165, 100, assign, 0);
		iShowBMP2(800, 328, postbutton, 0);
		iSetColor(0, 0, 0);
		iText(230, 325, title, GLUT_BITMAP_HELVETICA_18);
		iText(230, 325, strtitle, GLUT_BITMAP_HELVETICA_18);
		iText(230, 230, instruction, GLUT_BITMAP_HELVETICA_18);
		iText(230, 230, strinstruction, GLUT_BITMAP_HELVETICA_18);
	}
	if (create_quiz == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(74, 175, numofques, 0);
	}

	if (ques == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(175, 55, question, 0);
		iShowBMP2(815, 125, next, 0);
		iText(265, 310, strquestion1, GLUT_BITMAP_HELVETICA_18);
		iText(260, 203, stroptiona1, GLUT_BITMAP_HELVETICA_18);
		iText(548, 203, stroptionb1, GLUT_BITMAP_HELVETICA_18);
		iSetColor(0, 0, 0);
		iText(374, 344, "1", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (ques == 2)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(175, 55, question, 0);
		iShowBMP2(815, 125, next, 0);
		iText(265, 310, strquestion2, GLUT_BITMAP_HELVETICA_18);
		iText(260, 203, stroptiona2, GLUT_BITMAP_HELVETICA_18);
		iText(548, 203, stroptionb2, GLUT_BITMAP_HELVETICA_18);
		iSetColor(0, 0, 0);
		iText(374, 344, "2", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (ques == 3)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(175, 55, question, 0);
		iShowBMP2(815, 125, next, 0);
		iText(265, 310, strquestion3, GLUT_BITMAP_HELVETICA_18);
		iText(260, 203, stroptiona3, GLUT_BITMAP_HELVETICA_18);
		iText(548, 203, stroptionb3, GLUT_BITMAP_HELVETICA_18);
		iSetColor(0, 0, 0);
		iText(374, 344, "3", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (ques == 4)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(175, 55, question, 0);
		iShowBMP2(815, 125, next, 0);
		iText(265, 310, strquestion4, GLUT_BITMAP_HELVETICA_18);
		iText(260, 203, stroptiona4, GLUT_BITMAP_HELVETICA_18);
		iText(548, 203, stroptionb4, GLUT_BITMAP_HELVETICA_18);
		iSetColor(0, 0, 0);
		iText(374, 344, "4", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (ques == 5)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(175, 55, question, 0);
		iShowBMP2(815, 125, next, 0);
		iText(265, 310, strquestion5, GLUT_BITMAP_HELVETICA_18);
		iText(260, 203, stroptiona5, GLUT_BITMAP_HELVETICA_18);
		iText(548, 203, stroptionb5, GLUT_BITMAP_HELVETICA_18);
		iSetColor(0, 0, 0);
		iText(374, 344, "5", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (qstn == 1)
	{
		iSetColor(0, 0, 0);
		iText(265, 310, question1, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnA == 1)
	{
		iSetColor(0, 0, 0);
		iText(260, 203, optiona1, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnB == 1)
	{
		iSetColor(0, 0, 0);
		iText(548, 203, optionb1, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstn == 2)
	{
		iSetColor(0, 0, 0);
		iText(265, 310, question2, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnA == 2)
	{
		iSetColor(0, 0, 0);
		iText(260, 203, optiona2, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnB == 2)
	{
		iSetColor(0, 0, 0);
		iText(548, 203, optionb2, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstn == 3)
	{
		iSetColor(0, 0, 0);
		iText(265, 310, question3, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnA == 3)
	{
		iSetColor(0, 0, 0);
		iText(260, 203, optiona3, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnB == 3)
	{
		iSetColor(0, 0, 0);
		iText(548, 203, optionb3, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstn == 4)
	{
		iSetColor(0, 0, 0);
		iText(265, 310, question4, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnA == 4)
	{
		iSetColor(0, 0, 0);
		iText(260, 203, optiona4, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnB == 4)
	{
		iSetColor(0, 0, 0);
		iText(548, 203, optionb4, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstn == 5)
	{
		iSetColor(0, 0, 0);
		iText(265, 310, question5, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnA == 5)
	{
		iSetColor(0, 0, 0);
		iText(260, 203, optiona5, GLUT_BITMAP_HELVETICA_18);
	}
	if (qstnB == 5)
	{
		iSetColor(0, 0, 0);
		iText(548, 203, optionb5, GLUT_BITMAP_HELVETICA_18);
	}
	if ((optionboxa1 == 1) && (ques == 1))
	{
		drawoptioncirclea1();
	}
	if ((optionboxb1 == 1) && (ques == 1))
	{
		drawoptioncircleb1();
	}
	if ((optionboxa2 == 1) && (ques == 2))
	{
		drawoptioncirclea2();
	}
	if ((optionboxb2 == 1) && (ques == 2))
	{
		drawoptioncircleb2();
	}
	if ((optionboxa3 == 1) && (ques == 3))
	{
		drawoptioncirclea3();
	}
	if ((optionboxb3 == 1) && (ques == 3))
	{
		drawoptioncircleb3();
	}
	if ((optionboxa4 == 1) && (ques == 4))
	{
		drawoptioncirclea4();
	}
	if ((optionboxb4 == 1) && (ques == 4))
	{
		drawoptioncircleb4();
	}
	if ((optionboxa5 == 1) && (ques == 5))
	{
		drawoptioncirclea5();
	}
	if ((optionboxb5 == 1) && (ques == 5))
	{
		drawoptioncircleb5();
	}

	if ((optionboxa1 && answerboxa1) || (optionboxb1 && answerboxb1))
	{  
		
		mcq1 = 5;
	}
	else
	{  
		mcq1 = 0;
	}
	if ((optionboxa2 && answerboxa2) || (optionboxb2 && answerboxb2))
	{   
		
		mcq2 = 5;
	}
	else
	{
		mcq2 = 0;
	}
	if ((optionboxa3 && answerboxa3) || (optionboxb3 && answerboxb3))
	{
		mcq3 = 5;
	}
	else
	{
		mcq3 = 0;
	}
	if ((optionboxa4 && answerboxa4) || (optionboxb4 && answerboxb4))
	{
		mcq4 = 5;
	}
	else
	{
		mcq4 = 0;
	}
	if ((optionboxa5 && answerboxa5) || (optionboxb5 && answerboxb5))
	{
		mcq5 = 5;
	}
	else
	{
		mcq5 = 0;
	}
	marks = mcq1 + mcq2 + mcq3 + mcq4 + mcq5;
	//printf("%d%d%d\n",marks,quiz,quesno);
	if (quiz == 6)
	{
		student_section = 0;
		studentmains = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(220,90,result,0);
	}
	if ((marks == 0) && (quiz == 6) && (quesno == 5))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "5", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "0", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "0%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Unsatisfactory", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 5) && (quiz == 6) && (quesno == 5))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "5", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "20%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Needs Improvement", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 10) && (quiz == 6) && (quesno == 5))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "5", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "2", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "40%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Below Average", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 15) && (quiz == 6) && (quesno == 5))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "5", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "3", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "60%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Satisfactory", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 20) && (quiz == 6) && (quesno == 5))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "5", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "4", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "80%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Good", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 25) && (quiz == 6) && (quesno == 5))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "5", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "5", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "100%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Excellent", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 0) && (quiz == 6) && (quesno == 4))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "4", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "0", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "0%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Unsatisfactory", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	
	if ((marks == 5) && (quiz == 6) && (quesno == 4))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "4", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "25%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Needs Improvement", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 10) && (quiz == 6) && (quesno == 4))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "4", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "2", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "50%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Satisfactory", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 15) && (quiz == 6) && (quesno == 4))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "4", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "3", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "75%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Good", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 20) && (quiz == 6) && (quesno == 4))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "4", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "4", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "100%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Excellent", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 0) && (quiz == 6) && (quesno == 3))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "3", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "0", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "0%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Unsatisfactory", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 5) && (quiz == 6) && (quesno == 3))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "3", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "33.33%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Below Average", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 10) && (quiz == 6) && (quesno == 3))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "3", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "2", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "66.66%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Good", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 15) && (quiz == 6) && (quesno == 3))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "3", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "3", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "100%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Excellent", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 0) && (quiz == 6) && (quesno == 2))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "2", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "0", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "0%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Unsatisfactory", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 5) && (quiz == 6) && (quesno == 2))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "2", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "50%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Average", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 10) && (quiz == 6) && (quesno == 2))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "2", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "2", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "100%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Excellent", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 0) && (quiz == 6) && (quesno == 1))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "0", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "0%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Unsatisfactory", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if ((marks == 5) && (quiz == 6) && (quesno == 1))
	{  
		iSetColor(0,0,0);
		iText(617, 324, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(617, 267, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(568, 200, "100%", GLUT_BITMAP_HELVETICA_18);
		iText(465, 135, "Excellent", GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
   
	// creating class
	if (settingclass == 1)
	{
		drawclassbox1();
		iSetColor(0, 0, 0);
		iText(377, 323, classname, GLUT_BITMAP_HELVETICA_18);
	}
	if (settingclass == 2)
	{
		drawclassbox2();
		iSetColor(0, 0, 0);
		iText(377, 254, instructor, GLUT_BITMAP_HELVETICA_18);
	}
	if (settingclass == 3)
	{
		drawclassbox3();
		iSetColor(0, 0, 0);
		iText(377, 185, id, GLUT_BITMAP_HELVETICA_18);
	}
	if (settingclass == 4)
	{
		drawclassbox4();
		iSetColor(0, 0, 0);
		iText(240, 110, description, GLUT_BITMAP_HELVETICA_18);
	}
	if (posted == 1 && create_announce == 1)
	{
		iSetColor(255, 255, 255);
		iText(474, 411, "Posted!", GLUT_BITMAP_TIMES_ROMAN_24);
		announce_post = 0;
	}

	if (todo == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(160, 25, code, 0);
		iSetColor(137, 178, 219);
		iFilledRectangle(415, 640, 10, 32);
		iSetColor(0,0,0);
		iFilledRectangle(788,370,150,70);
	}
	if (cod == 1)
	{
		drawcodebox1();
		iSetColor(137, 178, 219);
		iFilledRectangle(406, 199, 230, 60);

		iSetColor(0, 0, 0);
		iText(456, 230, classid, GLUT_BITMAP_HELVETICA_18);
	}

	if (student_section == 1)
	{
		iShowBMP2(25, 340, back, 0);

		if (strcmp(strid, strclassid) == 0)
		{
			// Passwords match, proceed with login
			studentmains = 1;
			home = 0;
			mode = 0;
			todo = 0;
			wrong_pass = 0;
			// Other actions after successful login
		}
		else
		{
			wrong_pass = 1;
			// printf("Entered Password: %s\n", str2);
			// printf("Stored Password: %s\n", signupPassword);
			iText(430, 380, "Invalid Class ID", GLUT_BITMAP_HELVETICA_18);
		}
	}
	if (studentmains == 1)
	{
		iShowBMP2(80, 60, student_mains, 0);
		iSetColor(0, 0, 0);
		iText(727, 320, strclassname, GLUT_BITMAP_HELVETICA_18);
		iText(727, 251, strinstructor, GLUT_BITMAP_HELVETICA_18);
		iText(727, 194, strid, GLUT_BITMAP_HELVETICA_18);
		iText(727, 125, str1, GLUT_BITMAP_HELVETICA_18);
		iText(146, 112, strdescription, GLUT_BITMAP_HELVETICA_18);
	}
	if (announcement == 1)
	{
		student_section = 0;
		studentmains = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(65, 40, poster, 0);
		iSetColor(0, 0, 0);
		iText(146, 295, strannounce_post1, GLUT_BITMAP_HELVETICA_18);
		iText(146, 255, strannounce_post2, GLUT_BITMAP_HELVETICA_18);
		iText(146, 215, strannounce_post3, GLUT_BITMAP_HELVETICA_18);
		iText(146, 165, strannounce_post4, GLUT_BITMAP_HELVETICA_18);
		iText(638, 128, comment, GLUT_BITMAP_HELVETICA_18);
		iText(638, 286, strcomment, GLUT_BITMAP_HELVETICA_18);
	}
	if (quiz == 1)
	{
		student_section = 0;
		studentmains = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(200, 115, mcq, 0);
		iShowBMP2(825, 125, next, 0);
		iText(253, 291, strquestion1, GLUT_BITMAP_HELVETICA_18);
		iText(295, 195, stroptiona1, GLUT_BITMAP_HELVETICA_18);
		iText(585, 195, stroptionb1, GLUT_BITMAP_HELVETICA_18);

		iSetColor(0, 0, 0);
		iText(373, 333, "1", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (quiz == 2)
	{
		student_section = 0;
		studentmains = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(200, 115, mcq, 0);
		iShowBMP2(825, 125, next, 0);
		iText(253, 291, strquestion2, GLUT_BITMAP_HELVETICA_18);
		iText(295, 195, stroptiona2, GLUT_BITMAP_HELVETICA_18);
		iText(585, 195, stroptionb2, GLUT_BITMAP_HELVETICA_18);

		iSetColor(0, 0, 0);
		iText(373, 333, "2", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (quiz == 3)
	{
		student_section = 0;
		studentmains = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(200, 115, mcq, 0);
		iShowBMP2(825, 125, next, 0);
		iText(253, 291, strquestion3, GLUT_BITMAP_HELVETICA_18);
		iText(295, 195, stroptiona3, GLUT_BITMAP_HELVETICA_18);
		iText(585, 195, stroptionb3, GLUT_BITMAP_HELVETICA_18);

		iSetColor(0, 0, 0);
		iText(373, 333, "3", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (quiz == 4)
	{
		student_section = 0;
		studentmains = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(200, 115, mcq, 0);
		iShowBMP2(825, 125, next, 0);
		iText(253, 291, strquestion4, GLUT_BITMAP_HELVETICA_18);
		iText(295, 195, stroptiona4, GLUT_BITMAP_HELVETICA_18);
		iText(585, 195, stroptionb4, GLUT_BITMAP_HELVETICA_18);

		iSetColor(0, 0, 0);
		iText(373, 333, "4", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (quiz == 5)
	{
		student_section = 0;
		studentmains = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(200, 115, mcq, 0);
		iShowBMP2(825, 125, next, 0);
		iText(253, 291, strquestion5, GLUT_BITMAP_HELVETICA_18);
		iText(295, 195, stroptiona5, GLUT_BITMAP_HELVETICA_18);
		iText(585, 195, stroptionb5, GLUT_BITMAP_HELVETICA_18);

		iSetColor(0, 0, 0);
		iText(373, 333, "5", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	if ((answerboxa1 == 1) && (quiz == 1))
	{
		drawanswercirclea1();
	}
	if ((answerboxb1 == 1) && (quiz == 1))
	{
		drawanswercircleb1();
	}
	if ((answerboxa2 == 1) && (quiz == 2))
	{
		drawanswercirclea2();
	}
	if ((answerboxb2 == 1) && (quiz == 2))
	{
		drawanswercircleb2();
	}
	if ((answerboxa3 == 1) && (quiz == 3))
	{
		drawanswercirclea3();
	}
	if ((answerboxb3 == 1) && (quiz == 3))
	{
		drawanswercircleb3();
	}
	if ((answerboxa4 == 1) && (quiz == 4))
	{
		drawanswercirclea4();
	}
	if ((answerboxb4 == 1) && (quiz == 4))
	{
		drawanswercircleb4();
	}
	if ((answerboxa5 == 1) && (quiz == 5))
	{
		drawanswercirclea5();
	}
	if ((answerboxb5 == 1) && (quiz == 5))
	{
		drawanswercircleb5();
	}
	if (assignment == 1)
	{
		student_section = 0;
		studentmains = 0;
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(250,200,instr,0);
		iText(297,353,strtitle,GLUT_BITMAP_HELVETICA_18);
		iText(297,272,strinstruction,GLUT_BITMAP_HELVETICA_18);
	}

	if (people == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(359, 80, peop, 0);
		 FILE *pf=fopen("abc3.txt","r");
	 char buffer1[255];
	 iSetColor(0,0,0);
	 fgets(buffer1,255,pf);
		iText(421,384,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
		iText(421,354,buffer1,GLUT_BITMAP_HELVETICA_18);
		fgets(buffer1,255,pf);
		iText(421,324,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
		iText(421,294,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
		 iText(421,264,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
		 iText(421,234,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
		 iText(421,204,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
		 iText(421,174,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
		 iText(421,144,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
		 iText(421,114,buffer1,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer1,255,pf);
	}
	if (record == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(25, 240, recordcse, 0);
	}
	if (notes == 1)
	{
		iShowBMP2(25, 340, back, 0);
		iShowBMP2(30, 80, note, 0);
		if(lote1==0){
			iSetColor(0,0,0);
			iText(338,334,"Note Submission Guidlines:",GLUT_BITMAP_HELVETICA_18);
			iText(338,304,"1.Open PROJECTDONE folder.",GLUT_BITMAP_HELVETICA_18);
			iText(338,274,"2.Open abc.txt/abc1.txt/abc2.txt",GLUT_BITMAP_HELVETICA_18);
			iText(338,244,"3.Write your note in txt file.",GLUT_BITMAP_HELVETICA_18);
			iText(338,214,"4.Then save it.",GLUT_BITMAP_HELVETICA_18);
			iText(338,184,"5.Your notes will be submitted.",GLUT_BITMAP_HELVETICA_18);
		}
	}
	if (lote1 ==1){
     FILE *pf=fopen("abc.txt","r");
	 char buffer[255];
	 iSetColor(0,0,0);
	 fgets(buffer,255,pf);
		iText(338,334,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);
		iText(338,304,buffer,GLUT_BITMAP_HELVETICA_18);
		fgets(buffer,255,pf);
		iText(338,274,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);
		iText(338,244,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);

}
if (lote1 ==2){
     FILE *pf=fopen("abc1.txt","r");
	 char buffer[255];
	 iSetColor(0,0,0);
	 fgets(buffer,255,pf);
		iText(338,334,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);
		iText(338,304,buffer,GLUT_BITMAP_HELVETICA_18);
		fgets(buffer,255,pf);
		iText(338,274,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);
		iText(338,244,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);
}
if (lote1 ==3){
     FILE *pf=fopen("abc2.txt","r");
	 char buffer[255];
	 iSetColor(0,0,0);
	 fgets(buffer,255,pf);
		iText(338,334,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);
		iText(338,304,buffer,GLUT_BITMAP_HELVETICA_18);
		fgets(buffer,255,pf);
		iText(338,274,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);
		iText(338,244,buffer,GLUT_BITMAP_HELVETICA_18);
		 fgets(buffer,255,pf);
}
	if (about == 1)
	{

		iShowBMP(40, 100, us);
		iShowBMP2(25, 340, back, 0);
	}
	if ((acc_created == 1) && (account == 1))
	{   
		rhtcaptcha=0;
		iSetColor(255, 255, 255);
		iText(400, 400, "account created successfully", GLUT_BITMAP_HELVETICA_18);
	}
	if ((rhtcaptcha == 1) && (account == 1))
	{   
		acc_created=0;
		iSetColor(255, 255, 255);
		iText(400, 400, "Wrong Captcha!", GLUT_BITMAP_HELVETICA_18);
	}
	if ((wrong_pass == 1) && (home == 1))
	{
		iSetColor(255, 255, 255);
		iText(400, 400, "Invalid Username or Password", GLUT_BITMAP_HELVETICA_18);
	}
	if(func1==1){
      iShowBMP2(370,105,func,0);
	}
	if(point1==1){
      iShowBMP2(370,105,point,0);
	}
	if(arr1==1){
      iShowBMP2(370,105,arr,0);
	}

	// iSetColor(20, 100, 200);
	// iLine(10,20,200,150);
	// iFilledCircle(x, y, r);
	// iFilledRectangle(10, 30, 20, 20);
	// iSetColor(20, 200, 0);
	// iSetColor(50,45,20);
	// iText(300, 200, "Hi, I am iGraphics", GLUT_BITMAP_HELVETICA_18);
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	// place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("x=%d,y=%d\n", mx, my);
		if ((joinsign == 1) && ((mx >= 200) && (mx <= 468) && (my >= 121) && (my <= 394)))
		{
			homes();
		}
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if ((home == 1) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback1();
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if ((account == 1) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback1();
		}
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if ((mains == 1) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback2();
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (((classes == 1) || (people == 1) || (notes == 1) || (todo == 1) || (about == 1) || (record == 1)) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback3();
			lote1=0;
	        func1=0;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if ((insideclass == 1) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback4();
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (((create_announce == 1) || (create_assignment == 1) || (create_quiz == 1)) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback5();
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if ((studentmains == 1) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback6();
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (((assignment == 1) || (announcement == 1) || (quiz == 1) || (quiz == 2) || (quiz == 3) || (quiz == 4) || (quiz == 5) || (quiz == 6)) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback7();
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (((ques == 1) || (ques == 2) || (ques == 3) || (ques == 4) || (ques == 5)) && ((mx >= 58) && (mx <= 162) && (my >= 382) && (my <= 418)))
		{
			goback8();
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 338 && mx <= 689 && my >= 263 && my <= 312 && home == 1)
		{
			mode = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 338 && mx <= 689 && my >= 153 && my <= 200 && home == 1)
		{
			mode = 2;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 270 && mx <= 774 && my >= 129 && my <= 368 && create_announce == 1)
		{
			announce_post = 1;
		}
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 132 && mx <= 435 && my >= 278 && my <= 318 && account == 1)
		{
			acc_create = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 132 && mx <= 435 && my >= 202 && my <= 242 && account == 1)
		{
			acc_create = 2;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 132 && mx <= 435 && my >= 125 && my <= 165 && account == 1)
		{
			acc_create = 3;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 590 && mx <= 893 && my >= 160 && my <= 200 && account == 1)
		{
			acc_create = 4;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 590 && mx <= 893 && my >= 160 && my <= 200 && account == 1)
		{
			acc_create = 4;
		}
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 800 && mx <= 928 && my >= 101 && my <= 152 && home == 1)
		{
			if (strcmp(str2, signupPassword) == 0)
			{
				// Passwords match, proceed with login
				mains = 1;
				home = 0;
				mode = 0;
				wrong_pass = 0;
				// Other actions after successful login
			}
			else
			{
				wrong_pass = 1;
				printf("Entered Password: %s\n", str2);
				printf("Stored Password: %s\n", signupPassword);
				iText(300, 200, "Wrong Password", GLUT_BITMAP_HELVETICA_18);
			}
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 800 && mx <= 928 && my >= 453 && my <= 497 && home == 1)
		{
			mains = 1;
				home = 0;
				mode = 0;
				wrong_pass = 0;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 518 && mx <= 792 && my >= 121 && my <= 393 && joinsign == 1)
		{
			createaccount();
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 830 && mx <= 967 && my >= 112 && my <= 158 && classes == 1)
		{
			classes = 0;
			insideclass = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 227 && mx <= 787 && my >= 317 && my <= 349 && classes == 1)
		{
			settingclass = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 227 && mx <= 787 && my >= 246 && my <= 278 && classes == 1)
		{
			settingclass = 2;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 227 && mx <= 787 && my >= 175 && my <= 227 && classes == 1)
		{
			settingclass = 3;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 227 && mx <= 787 && my >= 102 && my <= 133 && classes == 1)
		{
			settingclass = 4;
		}
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 641 && mx <= 882 && my >= 147 && my <= 224 && mains == 1)
		{
			mains = 0;
			about = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 134 && mx <= 363 && my >= 261 && my <= 325 && (mains == 1))
		{
			mains = 0;
			classes = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 140 && mx <= 361 && my >= 152 && my <= 218 && mains == 1)
		{

			mains = 0;
			todo = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 389 && mx <= 618 && my >= 261 && my <= 321 && mains == 1)
		{
			mains = 0;
			people = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 389 && mx <= 618 && my >= 154 && my <= 219 && mains == 1)
		{
			mains = 0;
			record = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 647 && mx <= 878 && my >= 257 && my <= 366 && mains == 1)
		{
			mains = 0;
			notes = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 37 && mx <= 203 && my >= 257 && my <= 316 && record == 1)
		{
			if ((musicon==true)||(musicon==false))
			{
				musicon = true;
				PlaySound("functions.wav", NULL, SND_ASYNC);
			}
			point1=0;
			arr1=0;
			func1=1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 449 && mx <= 624 && my >= 257 && my <= 316 && record == 1)
		{   func1=0;
		    point1=0;
			arr1=1;
			if ((musicon1==true)||(musicon1==false))
			{
				musicon1 = true;
				PlaySound("array.wav", NULL, SND_ASYNC);
			}
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 240 && mx <= 415 && my >= 257 && my <= 316 && record == 1)
		{   arr1=0;
		    func1=0;
			point1=1;
			if ((musicon2==true)||(musicon2==false))
			{
				musicon2= true;
				PlaySound("pointer.wav", NULL, SND_ASYNC);
			}
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 732 && mx <= 917 && my >= 372 && my <= 438 && account == 1)
		{
			strcpy(signupPassword, strpassword);
			printf("account created");
			iSetColor(255, 255, 255);
			if(strcmp(strcaptcha,rightcaptcha)!=0){
			  rhtcaptcha=1;
			}
			else{
			   acc_created = 1;
			}
		}
	}
	// inside class
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 75 && mx <= 288 && my >= 128 && my <= 338 && insideclass == 1)
		{
			insideclass = 0;
			create_announce = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 390 && mx <= 610 && my >= 128 && my <= 338 && insideclass == 1)
		{
			insideclass = 0;
			create_assignment = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 711 && mx <= 933 && my >= 128 && my <= 338 && insideclass == 1)
		{
			insideclass = 0;
			create_quiz = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 798 && mx <= 920 && my >= 391 && my <= 432 && create_announce == 1)
		{
			posted = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 405 && mx <= 630 && my >= 199 && my <= 256 && todo == 1)
		{
			cod = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 136 && mx <= 284 && my >= 308 && my <= 355 && studentmains == 1)
		{
			announcement = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 302 && mx <= 406 && my >= 249 && my <= 300 && studentmains == 1)
		{
			quiz = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 436 && mx <= 575 && my >= 192 && my <= 237 && studentmains == 1)
		{
			assignment = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 608 && mx <= 906 && my >= 115 && my <= 154 && announcement == 1)
		{
			commentbox = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 201 && mx <= 831 && my >= 311 && my <= 354 && create_assignment == 1)
		{
			dotitle = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 201 && mx <= 831 && my >= 150 && my <= 270 && create_assignment == 1)
		{
			doinstru = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 880 && mx <= 985 && my >= 380 && my <= 434 && create_assignment == 1)
		{
			dopost = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 472 && mx <= 537 && my >= 236 && my <= 293 && create_quiz == 1)
		{
			create_quiz = 0;
			quesno = 1;
			ques = 1;
		}
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 558 && mx <= 627 && my >= 236 && my <= 293 && create_quiz == 1)
		{
			create_quiz = 0;
			quesno = 2;
			ques = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 647 && mx <= 714 && my >= 236 && my <= 293 && create_quiz == 1)
		{
			create_quiz = 0;
			quesno = 3;
			ques = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 734 && mx <= 805 && my >= 236 && my <= 293 && create_quiz == 1)
		{
			create_quiz = 0;
			quesno = 4;
			ques = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 822 && mx <= 892 && my >= 236 && my <= 293 && create_quiz == 1)
		{
			create_quiz = 0;
			quesno = 5;
			ques = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 815 && mx <= 943 && my >= 125 && my <= 177 && ((ques == 1) || (ques == 2) || (ques == 3) || (ques == 4)))
		{
			if (ques < quesno)
			{
				ques++;
			}
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 465 && mx <= 526 && my >= 120 && my <= 174 && ques == 1)
		{
			optionboxb1 = 0;
			optionboxa1 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 555 && mx <= 616 && my >= 120 && my <= 174 && ques == 1)
		{
			optionboxa1 = 0;
			optionboxb1 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 465 && mx <= 526 && my >= 120 && my <= 174 && ques == 2)
		{
			optionboxb2 = 0;
			optionboxa2 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 555 && mx <= 616 && my >= 120 && my <= 174 && ques == 2)
		{
			optionboxa2 = 0;
			optionboxb2 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 465 && mx <= 526 && my >= 120 && my <= 174 && ques == 3)
		{
			optionboxb3 = 0;
			optionboxa3 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 555 && mx <= 616 && my >= 120 && my <= 174 && ques == 3)
		{
			optionboxa3 = 0;
			optionboxb3 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 465 && mx <= 526 && my >= 120 && my <= 174 && ques == 4)
		{
			optionboxb4 = 0;
			optionboxa4 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 555 && mx <= 616 && my >= 120 && my <= 174 && ques == 4)
		{
			optionboxa4 = 0;
			optionboxb4 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 465 && mx <= 526 && my >= 120 && my <= 174 && ques == 5)
		{
			optionboxb5 = 0;
			optionboxa5 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 555 && mx <= 616 && my >= 120 && my <= 174 && ques == 5)
		{
			optionboxa5 = 0;
			optionboxb5 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 236 && mx <= 284 && my >= 177 && my <= 224 && quiz == 1)
		{
			answerboxb1 = 0;
			answerboxa1 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 524 && mx <= 572 && my >= 179 && my <= 225 && quiz == 1)
		{
			answerboxa1 = 0;
			answerboxb1 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 236 && mx <= 284 && my >= 177 && my <= 224 && quiz == 2)
		{
			answerboxb2 = 0;
			answerboxa2 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 524 && mx <= 572 && my >= 179 && my <= 225 && quiz == 2)
		{
			answerboxa2 = 0;
			answerboxb2 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 236 && mx <= 284 && my >= 177 && my <= 224 && quiz == 3)
		{
			answerboxb3 = 0;
			answerboxa3 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 524 && mx <= 572 && my >= 179 && my <= 225 && quiz == 3)
		{
			answerboxa3 = 0;
			answerboxb3 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 236 && mx <= 284 && my >= 177 && my <= 224 && quiz == 4)
		{
			answerboxb4 = 0;
			answerboxa4 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 524 && mx <= 572 && my >= 179 && my <= 225 && quiz == 4)
		{
			answerboxa4 = 0;
			answerboxb4 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 236 && mx <= 284 && my >= 177 && my <= 224 && quiz == 5)
		{
			answerboxb5 = 0;
			answerboxa5 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 524 && mx <= 572 && my >= 179 && my <= 225 && quiz == 5)
		{
			answerboxa5 = 0;
			answerboxb5 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 768 && my >= 297 && my <= 337 && ques == 1)
		{
			qstn = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 480 && my >= 194 && my <= 231 && ques == 1)
		{
			qstnA = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 543 && mx <= 767 && my >= 194 && my <= 231 && ques == 1)
		{
			qstnB = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 768 && my >= 297 && my <= 337 && ques == 2)
		{
			qstn = 2;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 480 && my >= 194 && my <= 231 && ques == 2)
		{
			qstnA = 2;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 543 && mx <= 767 && my >= 194 && my <= 231 && ques == 2)
		{
			qstnB = 2;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 768 && my >= 297 && my <= 337 && ques == 3)
		{
			qstn = 3;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 480 && my >= 194 && my <= 231 && ques == 3)
		{
			qstnA = 3;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 543 && mx <= 767 && my >= 194 && my <= 231 && ques == 3)
		{
			qstnB = 3;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 768 && my >= 297 && my <= 337 && ques == 4)
		{
			qstn = 4;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 480 && my >= 194 && my <= 231 && ques == 4)
		{
			qstnA = 4;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 543 && mx <= 767 && my >= 194 && my <= 231 && ques == 4)
		{
			qstnB = 4;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 768 && my >= 297 && my <= 337 && ques == 5)
		{
			qstn = 5;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 255 && mx <= 480 && my >= 194 && my <= 231 && ques == 5)
		{
			qstnA = 5;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 543 && mx <= 767 && my >= 194 && my <= 231 && ques == 5)
		{
			qstnB = 5;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		if (mx >= 824 && mx <= 953 && my >= 126 && my <= 178 && ((quiz == 1) || (quiz == 2) || (quiz == 3) || (quiz == 4) || (quiz == 5)))
		{
			quiz++;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		 //place your codes here
		if (mx >= 37 && mx <= 165 && my >= 262 && my <= 309 && notes == 1)
		{
			lote1 = 1;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		 //place your codes here
		if (mx >= 37 && mx <= 165 && my >= 189 && my <= 237 && notes == 1)
		{
			lote1 = 2;
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		 //place your codes here
		if (mx >= 37 && mx <= 165 && my >= 115 && my <= 167 && notes == 1)
		{
			lote1 = 3;
		}
	}

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
	int i;
	if (mode == 1)
	{
		if (key == '\r')
		{
			mode = 0;
			strcpy(str1, usernameinput);
			printf("%s\n", str1);
			for (i = 0; i < len; i++)
				usernameinput[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;					// Decrement the length to effectively "delete" the last character
			usernameinput[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			usernameinput[len] = key;
			len++;
		}
	}
	if (mode == 2)
	{
		if (key == '\r')
		{
			mode = 0;
			strcpy(str2, passwordinput);
			printf("%s\n", str2);
			for (i = 0; i < len; i++)
				passwordinput[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;					// Decrement the length to effectively "delete" the last character
			passwordinput[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			passwordinput[len] = key;
			len++;
		}
	}
	if (acc_create == 1)
	{
		if (key == '\r')
		{
			acc_create = 0;
			strcpy(strusername, usernamecreate);
			printf("%s\n", str2);
			for (i = 0; i < len; i++)
				usernamecreate[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;					 // Decrement the length to effectively "delete" the last character
			usernamecreate[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			usernamecreate[len] = key;
			len++;
		}
	}
	if (acc_create == 2)
	{
		if (key == '\r')
		{
			acc_create = 0;
			strcpy(stremail, email);
			printf("%s\n", stremail);
			for (i = 0; i < len; i++)
				email[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			// Decrement the length to effectively "delete" the last character
			email[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			email[len] = key;
			len++;
		}
	}
	if (acc_create == 3)
	{
		if (key == '\r')
		{
			acc_create = 0;
			strcpy(strpassword, passwordcreate);
			printf("%s\n", strpassword);
			for (i = 0; i < len; i++)
				passwordcreate[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;					 // Decrement the length to effectively "delete" the last character
			passwordcreate[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			passwordcreate[len] = key;
			len++;
		}
	}
	if (acc_create == 4)
	{
		if (key == '\r')
		{
			acc_create = 0;
			strcpy(strcaptcha, captcha);
			printf("%s\n", strcaptcha);
			for (i = 0; i < len; i++)
				captcha[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			  // Decrement the length to effectively "delete" the last character
			captcha[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			captcha[len] = key;
			len++;
		}
	}
	// setting classroom
	if (settingclass == 1)
	{
		if (key == '\r')
		{
			settingclass = 0;
			strcpy(strclassname, classname);
			printf("%s\n", strclassname);
			for (i = 0; i < len; i++)
				classname[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				// Decrement the length to effectively "delete" the last character
			classname[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			classname[len] = key;
			len++;
		}
	}
	if (settingclass == 2)
	{
		if (key == '\r')
		{
			settingclass = 0;
			strcpy(strinstructor, instructor);
			printf("%s\n", strinstructor);
			for (i = 0; i < len; i++)
				instructor[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				 // Decrement the length to effectively "delete" the last character
			instructor[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			instructor[len] = key;
			len++;
		}
	}
	if (settingclass == 3)
	{
		if (key == '\r')
		{
			settingclass = 0;
			strcpy(strid, id);
			printf("%s\n", strid);
			for (i = 0; i < len; i++)
				id[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;		 // Decrement the length to effectively "delete" the last character
			id[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			id[len] = key;
			len++;
		}
	}
	if (settingclass == 4)
	{
		if (key == '\r')
		{
			settingclass = 0;
			strcpy(strdescription, description);
			printf("%s\n", strdescription);
			for (i = 0; i < len; i++)
				description[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				  // Decrement the length to effectively "delete" the last character
			description[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			description[len] = key;
			len++;
		}
	}

	if (announce_post == 1)
	{

		if (key == '\r')
		{
			settingclass = 0;
			strcpy(strannounce_post1, announce_post1);
			printf("%s\n", strannounce_post1);
			for (i = 0; i < len; i++)
				announce_post1[i] = 0;
			len = 0;
			// announce_post=2;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			printf("a");
			len--;					 // Decrement the length to effectively "delete" the last character
			announce_post1[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			announce_post1[len] = key;
			len++;
		}
	}
	if (announce_post == 2)
	{
		if (key == '\r')
		{
			// announce_post = 3;
			strcpy(strannounce_post2, announce_post2);
			printf("%s\n", strannounce_post2);
			for (i = 0; i < len; i++)
				announce_post2[i] = 0;
			len = 0;
			// announce_post=3;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;					 // Decrement the length to effectively "delete" the last character
			announce_post2[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			announce_post2[len] = key;
			len++;
		}
	}
	if (announce_post == 3)
	{
		if (key == '\r')
		{
			// announce_post = 4;
			strcpy(strannounce_post3, announce_post3);
			printf("%s\n", strannounce_post3);
			for (i = 0; i < len; i++)
				announce_post3[i] = 0;
			len = 0;
			// announce_post=4;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;					 // Decrement the length to effectively "delete" the last character
			announce_post3[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			announce_post3[len] = key;
			len++;
		}
	}
	if (announce_post == 4)
	{
		if (key == '\r')
		{
			// announce_post = 0;
			strcpy(strannounce_post4, announce_post4);
			printf("%s\n", strannounce_post4);
			for (i = 0; i < len; i++)
				announce_post4[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;					 // Decrement the length to effectively "delete" the last character
			announce_post4[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			announce_post4[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if ((key == '\r') && ((announce_post == 1) || (announce_post == 2) || (announce_post == 3)))
	{
		announce_post++;
	}
	if (cod == 1)
	{
		if (key == '\r')
		{
			cod = 0;
			strcpy(strclassid, classid);
			printf("%s\n", classid);
			for (i = 0; i < len; i++)
				classid[i] = 0;
			len = 0;
			student_section = 1;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			  // Decrement the length to effectively "delete" the last character
			classid[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			classid[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (commentbox == 1)
	{
		if (key == '\r')
		{
			commentbox = 0;
			strcpy(strcomment, comment);
			printf("%s\n", strcomment);
			for (i = 0; i < len; i++)
				comment[i] = 0;
			len = 0;
			student_section = 1;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			  // Decrement the length to effectively "delete" the last character
			comment[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			comment[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (dotitle == 1)
	{
		if (key == '\r')
		{
			dotitle = 0;
			strcpy(strtitle, title);
			printf("%s\n", strtitle);
			for (i = 0; i < len; i++)
				title[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			// Decrement the length to effectively "delete" the last character
			title[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			title[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (doinstru == 1)
	{
		if (key == '\r')
		{
			doinstru = 0;
			strcpy(strinstruction, instruction);
			printf("%s\n", strinstruction);
			for (i = 0; i < len; i++)
				instruction[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				  // Decrement the length to effectively "delete" the last character
			instruction[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			instruction[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstn == 1)
	{
		if (key == '\r')
		{
			qstn = 0;
			strcpy(strquestion1, question1);
			printf("%s\n", strquestion1);
			for (i = 0; i < len; i++)
				question1[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				// Decrement the length to effectively "delete" the last character
			question1[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			question1[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnA == 1)
	{
		if (key == '\r')
		{
			qstnA = 0;
			strcpy(stroptiona1, optiona1);
			printf("%s\n", stroptiona1);
			for (i = 0; i < len; i++)
				optiona1[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optiona1[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optiona1[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnB == 1)
	{
		if (key == '\r')
		{
			qstnB = 0;
			strcpy(stroptionb1, optionb1);
			printf("%s\n", stroptionb1);
			for (i = 0; i < len; i++)
				optionb1[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optionb1[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optionb1[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstn == 2)
	{
		if (key == '\r')
		{
			qstn = 0;
			strcpy(strquestion2, question2);
			printf("%s\n", strquestion2);
			for (i = 0; i < len; i++)
				question2[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				// Decrement the length to effectively "delete" the last character
			question2[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			question2[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnA == 2)
	{
		if (key == '\r')
		{
			qstnA = 0;
			strcpy(stroptiona2, optiona2);
			printf("%s\n", stroptiona2);
			for (i = 0; i < len; i++)
				optiona2[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optiona2[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optiona2[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnB == 2)
	{
		if (key == '\r')
		{
			qstnB = 0;
			strcpy(stroptionb2, optionb2);
			printf("%s\n", stroptionb2);
			for (i = 0; i < len; i++)
				optionb2[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optionb2[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optionb2[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstn == 3)
	{
		if (key == '\r')
		{
			qstn = 0;
			strcpy(strquestion3, question3);
			printf("%s\n", strquestion3);
			for (i = 0; i < len; i++)
				question3[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				// Decrement the length to effectively "delete" the last character
			question3[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			question3[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnA == 3)
	{
		if (key == '\r')
		{
			qstnA = 0;
			strcpy(stroptiona3, optiona3);
			printf("%s\n", stroptiona3);
			for (i = 0; i < len; i++)
				optiona3[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optiona3[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optiona3[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnB == 3)
	{
		if (key == '\r')
		{
			qstnB = 0;
			strcpy(stroptionb3, optionb3);
			printf("%s\n", stroptionb3);
			for (i = 0; i < len; i++)
				optionb3[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optionb3[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optionb3[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstn == 4)
	{
		if (key == '\r')
		{
			qstn = 0;
			strcpy(strquestion4, question4);
			printf("%s\n", strquestion4);
			for (i = 0; i < len; i++)
				question4[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				// Decrement the length to effectively "delete" the last character
			question4[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			question4[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnA == 4)
	{
		if (key == '\r')
		{
			qstnA = 0;
			strcpy(stroptiona4, optiona4);
			printf("%s\n", stroptiona4);
			for (i = 0; i < len; i++)
				optiona4[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optiona4[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optiona4[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnB == 4)
	{
		if (key == '\r')
		{
			qstnB = 0;
			strcpy(stroptionb4, optionb4);
			printf("%s\n", stroptionb4);
			for (i = 0; i < len; i++)
				optionb4[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optionb4[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optionb4[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstn == 5)
	{
		if (key == '\r')
		{
			qstn = 0;
			strcpy(strquestion5, question5);
			printf("%s\n", strquestion5);
			for (i = 0; i < len; i++)
				question5[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;				// Decrement the length to effectively "delete" the last character
			question5[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			question5[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnA == 5)
	{
		if (key == '\r')
		{
			qstnA = 0;
			strcpy(stroptiona5, optiona5);
			printf("%s\n", stroptiona5);
			for (i = 0; i < len; i++)
				optiona5[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optiona5[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optiona5[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if (qstnB == 5)
	{
		if (key == '\r')
		{
			qstnB = 0;
			strcpy(stroptionb5, optionb5);
			printf("%s\n", stroptionb5);
			for (i = 0; i < len; i++)
				optionb5[i] = 0;
			len = 0;
		}
		else if (key == '\b' && len > 0) // Backspace key
		{
			len--;			   // Decrement the length to effectively "delete" the last character
			optionb5[len] = 0; // Set the last character to 0 (null terminator)
		}
		else
		{
			optionb5[len] = key;
			len++;
		}

		// place your codes for other keys here
	}
	if(key=='m'){
		func1=0;
		if (musicon)
			{
				musicon = false;
				PlaySound(0,0,0);
			}
	}
	if(key=='m'){
		point1=0;
		if (musicon1)
			{
				musicon1 = false;
				PlaySound(0,0,0);
			}
	}
	if(key=='m'){
		arr1=0;
		if (musicon2)
			{
				musicon2 = false;
				PlaySound(0,0,0);
			}
	}
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_DOWN)
	{   
		musicon=false;
	
	}

	// place your codes for other keys here
}

int main()
{
	// place your own initialization codes here.
	// PlaySound("functions.wav", NULL, SND_ASYNC);
	iInitialize(1022, 511, "ToppersClassroom");
	return 0;
}
void maindeck()
{
	mains = 0;
	joinsign = 0;
	home = 0;
}
void homes()
{
	joinsign = 0;
	home = 1;
	mains = 0;
	settingclass = 0;
	acc_create = 0;
}
void createaccount()
{
	joinsign = 0;
	home = 0;
	mains = 0;
	account = 1;
	strcpy(signupPassword, passwordcreate);
	settingclass = 0;
	acc_create = 0;
}
void goback1()
{
	joinsign = 1;
	home = 0;
	mains = 0;
	account = 0;
	settingclass = 0;
	acc_create = 0;
}
void goback2()
{
	mains = 0;
	joinsign = 0;
	home = 1;
	settingclass = 0;
	acc_create = 0;
	cod = 0;
}
void goback3()
{
	classes = 0;
	todo = 0;
	people = 0;
	record = 0;
	notes = 0;
	about = 0;
	mains = 1;
	settingclass = 0;
	acc_create = 0;
	cod = 0;
}
void goback4()
{

	insideclass = 0;
	acc_create = 0;
	classes = 1;
	cod = 0;
}
void goback5()
{
	create_announce = 0;
	create_assignment = 0;
	create_quiz = 0;
	insideclass = 1;
	cod = 0;
}
void goback6()
{
	studentmains = 0;
	mains = 1;
	student_section = 0;
}
void goback7()
{
	studentmains = 1;
	mains = 0;
	student_section = 0;
	assignment = 0;
	quiz = 0;
	announcement = 0;
}
void goback8()
{
	ques = 0;
	create_quiz = 1;
}

void drawusernamebox1()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(338, 263, 352, 50);
}
void drawusernamebox2()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(338, 150, 352, 50);
}
void drawaccountname1()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(132, 277, 302, 41);
}
void drawaccountname2()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(132, 200, 302, 41);
}
void drawaccountname3()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(132, 123, 302, 42);
}
void drawaccountname4()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(590, 158, 302, 42);
}
void drawclassbox1()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(227, 316, 561, 32);
}
void drawclassbox2()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(227, 246, 561, 32);
}
void drawclassbox3()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(227, 175, 561, 32);
}
void drawclassbox4()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(230, 100, 561, 32);
}

void drawcodebox1()
{
	iSetColor(137, 178, 219);
	iFilledRectangle(415, 640, 10, 32);
}
void drawoptioncirclea1()
{
	iSetColor(16, 195, 16);
	iFilledCircle(496, 146, 33);
	iSetColor(0, 0, 0);
	iText(490, 136, "1", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncircleb1()
{
	iSetColor(16, 195, 16);
	iFilledCircle(587, 146, 33);
	iSetColor(0, 0, 0);
	iText(581, 136, "2", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncirclea2()
{
	iSetColor(16, 195, 16);
	iFilledCircle(496, 146, 33);
	iSetColor(0, 0, 0);
	iText(490, 136, "1", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncircleb2()
{
	iSetColor(16, 195, 16);
	iFilledCircle(587, 146, 33);
	iSetColor(0, 0, 0);
	iText(581, 136, "2", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncirclea3()
{
	iSetColor(16, 195, 16);
	iFilledCircle(496, 146, 33);
	iSetColor(0, 0, 0);
	iText(490, 136, "1", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncircleb3()
{
	iSetColor(16, 195, 16);
	iFilledCircle(587, 146, 33);
	iSetColor(0, 0, 0);
	iText(581, 136, "2", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncirclea4()
{
	iSetColor(16, 195, 16);
	iFilledCircle(496, 146, 33);
	iSetColor(0, 0, 0);
	iText(490, 136, "1", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncircleb4()
{
	iSetColor(16, 195, 16);
	iFilledCircle(587, 146, 33);
	iSetColor(0, 0, 0);
	iText(581, 136, "2", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncirclea5()
{
	iSetColor(16, 195, 16);
	iFilledCircle(496, 146, 33);
	iSetColor(0, 0, 0);
	iText(490, 136, "1", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawoptioncircleb5()
{
	iSetColor(16, 195, 16);
	iFilledCircle(587, 146, 33);
	iSetColor(0, 0, 0);
	iText(581, 136, "2", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawanswercirclea1()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(280, 176, 230, 7);
}
void drawanswercircleb1()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(567, 176, 230, 7);
}
void drawanswercirclea2()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(280, 176, 230, 7);
}
void drawanswercircleb2()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(567, 176, 230, 7);
}
void drawanswercirclea3()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(280, 176, 230, 7);
}
void drawanswercircleb3()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(567, 176, 230, 7);
}
void drawanswercirclea4()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(280, 176, 230, 7);
}
void drawanswercircleb4()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(567, 176, 230, 7);
}
void drawanswercirclea5()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(280, 176, 230, 7);
}
void drawanswercircleb5()
{
	iSetColor(31, 66, 148);
	iFilledRectangle(567, 176, 230, 7);
}