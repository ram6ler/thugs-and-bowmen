#include <tigcclib.h>

#define DEXTERITY 0
#define STRENGTH 1
#define MAGIC 2
#define QUESTION 7
#define HAND 8
#define BOX 6
#define TOMB 9
#define GOOD 0
#define EVIL 3

unsigned long card[10][32]=
{
	{
	  // Archer 0
0x00000000, 0x00000000, 0x00000000, 0x00008000, 0x0003C000, 0x001FE000, 0x001FF800, 0x031FE008,
0x02F1FC1C, 0x06FFF82A, 0x0C8D8C08, 0x09800C08, 0x18484808, 0x18285008, 0x181FE008, 0x100FE008,
0x781CF008, 0x7C3FF81C, 0x7FFFEC3C, 0x31EFEFFC, 0x306FEF98, 0x30600C08, 0x30701C08, 0x30783E08,
0x107FFE08, 0x18FFFE1C, 0x18FFFE1C, 0x087FFC14, 0x0C3EFC00, 0x047E7E00, 0x00FE7F00, 0x01FE7F80
	},{
		// Knight 1
0x00000000, 0x00066000, 0x00399C00, 0x00451200, 0x084A8A00, 0x1475F600, 0x3603E000, 0x2A073000,
0x2A061800, 0x2A1FFC00, 0x2A390E00, 0x2A355200, 0x2A394E00, 0x2A184C00, 0x2A0E3800, 0x2A0FF800,
0xFF8FFFF8, 0x1C3FF808, 0x3E67F004, 0x3E6BE0F2, 0x1FFE43F9, 0x1BFBC3FD, 0x01FF47FD, 0x01FDC79D,
0x02FE438A, 0x02FFE3FA, 0x037FF00C, 0x03BFFF3C, 0x055FFEF4, 0x06FFFFDE, 0x059FFE72, 0x073F3F1E, 
	},{
		// Wizard 2
0x00000000, 0x00000100, 0x00000700, 0x00003F00, 0x0001E700,	0x0003E700, 0x8402FF00, 0x84043F00,
0x78080E00, 0x30100100, 0x30331980, 0x30233180, 0x30118100, 0x300D2600, 0x3013FA00, 0x30100200,
0x7038C700, 0x7C3C07F0, 0x7EFE0FFE, 0x37FF9F9C, 0x33FFDF38, 0x307FFF70, 0x303FFFE0, 0x303FFFE0,
0x303FFFC0, 0x301FFF80, 0x301FFE00, 0x301FFE00, 0x301FFE00, 0x301FFE00, 0x303FFF00, 0x307FFF80, 
	},{
		// Thug 3
0x00000000, 0x00000000, 0x0003E000, 0x003FFE00, 0x007FFF00, 0x00700F80, 0x00E007C0, 0x01C003FC,
0x01C003FE, 0x07FFFFFF, 0x0FF9CFFF, 0x0FFDDFFF, 0x0FFF7FFF, 0x0FC083FE, 0x0FE1C7FE, 0x0FFE3FFC,
0x07F3FFFC, 0x03E37FFC, 0x03079FF8, 0x0E1D0FF8, 0x3079A7F0, 0x4CFF9FF0, 0xFD0FFFF0, 0xFF67FFE0,
0x1E8FFFE0, 0x007FFFF0, 0x003FFFF8, 0x003FFE38, 0x0039F870, 0x001C00E0, 0x00FC01F8, 0x00FE01F8
	},{
		// Bully 4
0x00000000, 0x00000000, 0x00801000, 0x01001000, 0x01001800, 0x03801800, 0x03803800, 0x01C03000,
0x01E07000, 0x00FFE000, 0x007FC000, 0x007FC000, 0x0066E000, 0x00FFE000, 0x00FFE008, 0x3FF0C018,
0x201FF014, 0x7F1FF82C, 0x7F1FFC22, 0x4F1FFC6A, 0x871FDC74, 0x871FDFD8, 0x871EDBC0, 0x871FD9C0,
0x871FD980, 0x8F1FFB00, 0x7F1CB800, 0x7F1F7000, 0x201BF000, 0x3FFFE000, 0x03FFFC00, 0x03FDFC00
	},{
		// Necromancer 5
0x0000FC00, 0x0001FE00, 0x0003FF00, 0x0004FF00, 0x00087F80, 0x00103F80, 0x00103F80, 0x00103F80,
0x00103F80, 0x0018BFC0, 0x601DBFC0, 0xF0153FC0, 0xFE103FC0, 0xEE123FC0, 0xE3133FC0, 0xE3903FC0,
0xA3DB7FC0, 0xA0F87FC0, 0x80787FC0, 0x007FFFC0, 0x003BFFC0, 0x0011E7C0, 0x0019C3C0, 0x001FE3C0,
0x001FFB00, 0x001FFF00, 0x001FFF80, 0x000F9CE0, 0x000F1C3E, 0x003F1F18, 0x001F1F00, 0x000F1E00
	},{
		// Box 6
0xFFFFFFFC, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000,
0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000,
0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000,
0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 0x00000000, 0x00000000
	},{
		// Question Mark 7
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x001FE000, 0x00201000, 0x006FC800, 0x008FE400, 
0x00B03400, 0x00B7B400, 0x0094B400, 0x0044B400, 0x0039B400, 0x00023400, 0x0006F400, 0x0008E400, 
0x000B0800, 0x000B7000, 0x000B4000, 0x000B4000, 0x00084000, 0x00078000, 0x00000000, 0x00078000, 
0x00084000, 0x000B4000, 0x000B4000, 0x00084000, 0x00078000, 0x00000000, 0x00000000, 0x00000000
	},{
		// Hand
0x00600000, 0x00F00000, 0x01980000, 0x01880000, 0x01880000, 0x01F80000, 0x01F80000, 0x01F80000, 
0x01F80000, 0x01F80000, 0x01FD8C00, 0x01FFDEE0, 0x07FFFFF0, 0x07FFFFF0, 0x0DFFFFF8, 0x0BFBFFF8, 
0x1BF3EF7C, 0x1FF3E79C, 0x1FF871FC, 0x3FFFFFFC, 0x3FFFFFF8, 0x7FFF9FF0, 0x7FF7BEF0, 0x3FFBBCE0, 
0x0FF9B9C0, 0x07FDBBC0, 0xFDFFFFBF, 0x44FFFF22, 0x2FFFFFF4, 0x5133154A, 0xF2DAEBAF, 0x0FFFFFF0
	},{
		// Gravestone
0x00000000, 0x00FFFF00 ,0x03FFFFC0, 0x03109FC0, 0x062117E0, 0x040121E0, 0x0402C1E0, 0x040000E0,
0x05F37C60, 0x05BB6660, 0x059B6660, 0x05BB6660, 0x05E37C60, 0x05BB6060, 0x059B6060, 0x059B6360,
0x059B6360, 0x04000060, 0x04000060, 0x04400060, 0x04000060, 0x040C0060, 0x051800E0, 0x061041E0,
0x04010DE0, 0xFC2309FF, 0xF4021BEF, 0xE60613E7, 0xEFFFFFF7, 0xC202200B, 0xC8920813, 0xFFFFFFFF
	}
};

// FUNCTIONS

int intro(void);
void show_title(int x, int y);
int three_to(int);
void draw_combo_number(int x,int y, int combo_number,int axis);
void number_to_combo(int combo_number, unsigned long *combo_stack);
int input_combo(int x, int y, int axis);
void draw_clues(int x, int y, int vic, int def);
void return_clues(int combo_number, int guess_number, int * vic, int * def);
void prepare_text(int man, int foe, int axis);
void intro_light(void);
void intro_dark(void);

int three_to(int x)
{
	int y=1;
	int i;
	for(i=0;i<x;i++)y*=3;
	return y;
}

void number_to_combo(int combo_number, unsigned long * combo_stack)
{
	int i, temp1;
	unsigned long temp2;
	*combo_stack=0;
	for(i=4;i>=0;i--)
	{
		temp1=three_to(i);
		temp2=combo_number/temp1;
		combo_number%=temp1;
		temp2<<=(i*8);
		*combo_stack|=temp2;
	}
}//good

void draw_combo_number(int x,int y, int combo_number,int axis)
{
	unsigned long cards;
	int i, temp;
	number_to_combo(combo_number,&cards);
	for(i=0;i<4;i++)
	{
		temp=(int)(((cards&(0xFF000000>>(i*8)))>>((3-i)*8))+axis);
		Sprite32(x+i*32,y,32,card[BOX],LCD_MEM,SPRT_AND);
		Sprite32(x+i*32,y,32,card[BOX],LCD_MEM,SPRT_OR);
		Sprite32(x+i*32,y,32,card[temp],LCD_MEM,SPRT_OR);
	}
	//DrawLine(x+127,y,x+127,y+32,A_NORMAL);
}

int input_combo(int x,int y, int axis)
{
	short c=0;
	int i, j, hand_x=0, temp=0, hand_x_p=0;
	int card_value[4]={0,0,0,0};
	do
	{
		for(i=0;i<4;i++)
		{
			Sprite32(x+i*32,y,32,card[BOX],LCD_MEM,SPRT_AND);
			Sprite32(x+i*32,y,32,card[BOX],LCD_MEM,SPRT_OR);
			Sprite32(x+i*32,y,32,card[card_value[i]+axis],LCD_MEM,SPRT_OR);
		}
		//DrawLine(x+127,y,x+127,y+32,A_NORMAL);
			
		Sprite32(x+hand_x*32,y+32,32,card[HAND],LCD_MEM,SPRT_AND);
		Sprite32(x+hand_x*32,y+32,32,card[HAND],LCD_MEM,SPRT_OR);
		if(hand_x!=hand_x_p)
		{
			Sprite32(x+hand_x_p*32,y+32,32,card[HAND],LCD_MEM,SPRT_XOR);
			hand_x_p=hand_x;
		}
		c=ngetchx();
			
		switch(c)
		{
			case(337):
				hand_x--;
				if(hand_x<0)hand_x=3;
				break;
			case(340):
				hand_x++;
				if(hand_x>3)hand_x=0;
				break;
			case(338):
				card_value[hand_x]++;
				if(card_value[hand_x]>2)card_value[hand_x]=0;
				break;
			case(344):
				card_value[hand_x]--;
				if(card_value[hand_x]<0)card_value[hand_x]=2;
				break;
			case(KEY_ESC):
				exit(0);	
					
				break;
			case(KEY_ENTER):
				Sprite32(x+hand_x_p*32,y+32,32,card[HAND],LCD_MEM,SPRT_XOR);
					for(j=0;j<4;j++)
						temp+=card_value[j]*three_to(3-j);
					
					break;
				default:
					break;
					
			}//end switch

	}
	while((c!=KEY_ESC)&&(c!=KEY_ENTER));
	
	return temp;
}

void return_clues(int combo_number, int guess_number, int * vic, int * def)
{
	unsigned long combo, guess;
	int temp_combo, temp_guess;
	int i;
	
	number_to_combo(combo_number, &combo);
	number_to_combo(guess_number, &guess);
	*vic=0;
	*def=0;
	for(i=0;i<4;i++)
	{
		temp_combo=(int)((combo&(0xFF000000>>(i*8)))>>((3-i)*8));
		temp_guess=(int)((guess&(0xFF000000>>(i*8)))>>((3-i)*8));

		switch(temp_guess)
		{
			case(DEXTERITY):
				switch(temp_combo)
				{
					case(MAGIC):
						(*vic)++;
						break;
					case(STRENGTH):
						(*def)++;
						break;
				}
				break;
			case(MAGIC):
				switch(temp_combo)
				{
					case(STRENGTH):
						(*vic)++;
						break;
					case(DEXTERITY):
						(*def)++;
						break;
				}
				break;
			case(STRENGTH):
				switch(temp_combo)
				{
					case(DEXTERITY):
						(*vic)++;
						break;
					case(MAGIC):
						(*def)++;
						break;
				}
				break;
		}
	}
}//good

void draw_clues(int x, int y, int vic, int def)
{
	char message[10];
	sprintf(message," %d   %d",vic,def);
	DrawStr(x,y,message,A_NORMAL);
}

int intro(void)
{
	int x=52,x_p,c;
	x_p=x;
	ClrScr();
	
	FontSetSys(F_8x10);
	show_title(56,0);
	DrawStr(3,54,"rambler@richthepandagames.com",A_NORMAL);
	DrawStr(0,75,"TELL ME, MASTER, DO YOU SERVE",A_NORMAL);
	DrawStr(16,85,"THE LIGHT OR THE DARKNESS?",A_NORMAL);

	do
	{
		Sprite32(x,95,32,card[HAND],LCD_MEM,SPRT_AND);
		Sprite32(x,95,32,card[HAND],LCD_MEM,SPRT_OR);
		if(x_p!=x)
		{
			Sprite32(x_p,95,32,card[HAND],LCD_MEM,SPRT_XOR);
			x_p=x;
		}
		c=ngetchx();
		if((c==337)||(c==340))
		{
			if(x==52)x=164;
			else x=52;
		}
		if(c==KEY_ESC)exit(0);
		
	}
	while(c!=KEY_ENTER);
	if(x==52)x=GOOD;
	else x=EVIL;
	if(x==GOOD)intro_light();
	else intro_dark();

	prepare_text(DEXTERITY,DEXTERITY,GOOD);
	DrawStr(40,20,"INSTRUCTIONS",A_NORMAL);
	DrawStr(16,40,"A player pits a combination of his",A_NORMAL);
	DrawStr(16,50,"men against an unknown combination",A_NORMAL);
	DrawStr(16,60,"of the opponent's men.  The player",A_NORMAL);
	DrawStr(16,70,"is then given a number of conquests",A_NORMAL);
	DrawStr(16,80,"and defeats.  The purpose is to win",A_NORMAL);
	DrawStr(16,90,"in the least number of guesses.",A_NORMAL);
	if(ngetchx()==KEY_ESC)exit(0);

	return x;
}

int game_type(void)
{
	int x=52,x_p,c;
	x_p=x;
	ClrScr();
	
	FontSetSys(F_6x8);
	show_title(56,0);
	DrawStr(16,60,"So tell me, Master, with whom do you",A_NORMAL);
	DrawStr(16,70,"wish to wage ruddy war?",A_NORMAL);
	
	DrawStr(16,85,"ANOTHER HUMAN or THE CALCULATOR?",A_NORMAL);

	do
	{
		Sprite32(x,95,32,card[HAND],LCD_MEM,SPRT_AND);
		Sprite32(x,95,32,card[HAND],LCD_MEM,SPRT_OR);
		if(x_p!=x)
		{
			Sprite32(x_p,95,32,card[HAND],LCD_MEM,SPRT_XOR);
			x_p=x;
		}
		c=ngetchx();
		if((c==337)||(c==340))
		{
			if(x==52)x=146;
			else x=52;
		}
		if(c==KEY_ESC)exit(0);
	}
	while(c!=KEY_ENTER);
	if(x==52)x=0;
	else x=1;
	return x;
}

void prepare_text(int man, int foe, int axis)
{
	ClrScr();
	DrawLine(10,10,230,10,A_NORMAL);
	DrawLine(10,10,10,118,A_NORMAL);
	DrawLine(230,10,230,118,A_NORMAL);
	DrawLine(10,118,230,118,A_NORMAL);
	switch(man)
	{
		case -1:
			Sprite32(0,0,32,card[QUESTION],LCD_MEM,SPRT_AND);
			Sprite32(0,0,32,card[QUESTION],LCD_MEM,SPRT_OR);
			Sprite32(208,96,32,card[QUESTION],LCD_MEM,SPRT_AND);
			Sprite32(208,96,32,card[QUESTION],LCD_MEM,SPRT_OR);	
			break;
		case -2:
			Sprite32(0,0,32,card[TOMB],LCD_MEM,SPRT_AND);
			Sprite32(0,0,32,card[TOMB],LCD_MEM,SPRT_OR);
			Sprite32(208,96,32,card[TOMB],LCD_MEM,SPRT_AND);
			Sprite32(208,96,32,card[TOMB],LCD_MEM,SPRT_OR);	
			break;
		default:
			Sprite32(0,0,32,card[man+axis],LCD_MEM,SPRT_AND);
			Sprite32(0,0,32,card[man+axis],LCD_MEM,SPRT_OR);
			Sprite32(208,96,32,card[foe+(axis==GOOD?3:0)],LCD_MEM,SPRT_AND);
			Sprite32(208,96,32,card[foe+(axis==GOOD?3:0)],LCD_MEM,SPRT_OR);
			break;
	}
}

void intro_light(void)
{
	do
	{
		FontSetSys(F_6x8);
		prepare_text(DEXTERITY,MAGIC,GOOD);
		DrawStr(40,20,"This is your Bowman, Lord.",A_NORMAL);
		DrawStr(40,30,"He is a dextrous fellow and can",A_NORMAL);
		DrawStr(16,40,"fire a bolt before the nefarious",A_NORMAL);
		DrawStr(16,50,"Necromancer has the time to summon",A_NORMAL);
		DrawStr(16,60,"the spirits of the dead.",A_NORMAL);
		DrawStr(112,100,"The Necromancer:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(DEXTERITY,STRENGTH,GOOD);
		DrawStr(16,40,"But beware of the Bully. His callous",A_NORMAL);
		DrawStr(16,50,"hide is too thick for the arrows",A_NORMAL);
		DrawStr(16,60,"of the Bowman to pierce.",A_NORMAL);
		DrawStr(136,100,"The Bully:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(DEXTERITY,DEXTERITY,GOOD);
		DrawStr(16,40,"The Bowman  has no need to fear de-",A_NORMAL);
		DrawStr(16,50,"feat from the Thug... but nor",A_NORMAL);
		DrawStr(16,60,"can he hope to beat him: they are",A_NORMAL);
		DrawStr(16,70,"equally dextrous.",A_NORMAL);
		DrawStr(144,100,"The Thug:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(STRENGTH,DEXTERITY,GOOD);
		DrawStr(40,20,"This is your Knight, Lord.",A_NORMAL);
		DrawStr(40,30,"He is a well armoured lad and",A_NORMAL);
		DrawStr(16,40,"impervious to the shrapnel fired by",A_NORMAL);
		DrawStr(16,50,"the Thug. Your Knight loves nothing",A_NORMAL);
		DrawStr(16,60,"more than chopping up Thugs!",A_NORMAL);
		DrawStr(144,100,"The Thug:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(STRENGTH,MAGIC,GOOD);
		DrawStr(16,40,"But beware,  the Necromancer",A_NORMAL);
		DrawStr(16,50,"has devilish charms with which he",A_NORMAL);
		DrawStr(16,60,"can  tear the soul from the flesh of",A_NORMAL);
		DrawStr(16,70,"the Knight, armoured he may be!",A_NORMAL);
		DrawStr(112,100,"The Necromancer:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(STRENGTH,STRENGTH,GOOD);
		DrawStr(16,40,"The Knight is matched in  strength",A_NORMAL);
		DrawStr(16,50,"by the Bully of the Foe...  he has",A_NORMAL);
		DrawStr(16,60,"not the ability to defeat the Bully,",A_NORMAL);
		DrawStr(16,70,"nor the Bully to defeat the Knight.",A_NORMAL);
		DrawStr(136,100,"The Bully:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(MAGIC,STRENGTH,GOOD);
		DrawStr(40,20,"This is your Wizard, Lord.",A_NORMAL);
		DrawStr(40,30,"He has just the hex to halt",A_NORMAL);
		DrawStr(16,40,"the withered,  black  heart of the",A_NORMAL);
		DrawStr(16,50,"Bully!",A_NORMAL);
		DrawStr(136,100,"The Bully:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(MAGIC,DEXTERITY,GOOD);
		DrawStr(16,40,"But beware of the Thug!  He",A_NORMAL);
		DrawStr(16,50,"is armed with a blunderbus that can",A_NORMAL);
		DrawStr(16,60,"fire shrapnel into the wizard from",A_NORMAL);
		DrawStr(16,70,"a distance!",A_NORMAL);
		DrawStr(144,100,"The Thug:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(MAGIC,MAGIC,GOOD);
		DrawStr(16,40,"The Foe's Necromancer is no threat",A_NORMAL);
		DrawStr(16,50,"to the Wizard,  but nor is the Wi-",A_NORMAL);
		DrawStr(16,60,"zard a threat to the  Necromancer.",A_NORMAL);
		DrawStr(16,70,"Go figure!",A_NORMAL);
		DrawStr(112,100,"The Necromancer:",A_NORMAL);
		ngetchx();
	}
	while(0);
}

void intro_dark(void)
{
	do
	{
		FontSetSys(F_6x8);
		prepare_text(DEXTERITY,MAGIC,EVIL);
		DrawStr(40,20,"This is your Thug, O Evil One.",A_NORMAL);
		DrawStr(40,30,"He is a slithery thing and can",A_NORMAL);
		DrawStr(16,40,"empty a load  of  shrapnel into the",A_NORMAL);
		DrawStr(16,50,"bosom of the worthy Wizard as quick",A_NORMAL);
		DrawStr(16,60,"as you can cry, \"For Shame!\"",A_NORMAL);
		DrawStr(136,100,"The Wizard:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(DEXTERITY,STRENGTH,EVIL);
		DrawStr(16,40,"But beware of the Foe's Knight. His",A_NORMAL);
		DrawStr(16,50,"armour is too steely for the jagged",A_NORMAL);
		DrawStr(16,60,"blazes of the Thug to sunder.",A_NORMAL);
		DrawStr(136,100,"The Knight:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(DEXTERITY,DEXTERITY,EVIL);
		DrawStr(16,40,"The Thug easily  outmanoeuvres  the",A_NORMAL);
		DrawStr(16,50,"Bowman's arrows...  but so too does",A_NORMAL);
		DrawStr(16,60,"the Bowman the Thug's shot... The two",A_NORMAL);
		DrawStr(16,70," are equally dextrous.",A_NORMAL);
		DrawStr(144,100,"The Bowman:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(STRENGTH,DEXTERITY,EVIL);
		DrawStr(40,20,"This is your Bully, O Master.",A_NORMAL);
		DrawStr(40,30,"He is a well armoured brute and",A_NORMAL);
		DrawStr(16,40,"is immune to the  pesky  stingings",A_NORMAL);
		DrawStr(16,50,"of the Bowman,  whom he loves to chop",A_NORMAL);
		DrawStr(16,60,"up into itsy bitsies!",A_NORMAL);
		DrawStr(144,100,"The Bowman:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(STRENGTH,MAGIC,EVIL);
		DrawStr(16,40,"But beware, the Wizard has a stare",A_NORMAL);
		DrawStr(16,50,"that can arrest the beating of the",A_NORMAL);
		DrawStr(16,60,"most sinister Bully's heart before",A_NORMAL);
		DrawStr(16,70,"you can say, \"Festering Gashes!\"",A_NORMAL);
		DrawStr(136,100,"The Wizard:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(STRENGTH,STRENGTH,EVIL);
		DrawStr(16,40,"The  Bully's  strength is equal to",A_NORMAL);
		DrawStr(16,50,"the Knight's.  They each can't de-",A_NORMAL);
		DrawStr(16,60,"feat the other...",A_NORMAL);
		DrawStr(136,100,"The Knight:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(MAGIC,STRENGTH,EVIL);
		DrawStr(40,20,"This is your Necromancer.",A_NORMAL);
		DrawStr(40,30,"He has just the curse to halt",A_NORMAL);
		DrawStr(16,40,"the valourous heart of the Knight",A_NORMAL);
		DrawStr(16,50,"foolish enough to engage with him",A_NORMAL);
		DrawStr(16,60,"in battle.",A_NORMAL);
		DrawStr(136,100,"The Knight:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(MAGIC,DEXTERITY,EVIL);
		DrawStr(16,40,"But beware of the good Bowman!  He",A_NORMAL);
		DrawStr(16,50,"can shoot an arrow from beyond the",A_NORMAL);
		DrawStr(16,60,"reach of your necromancer's  black",A_NORMAL);
		DrawStr(16,70,"arts!",A_NORMAL);
		DrawStr(144,100,"The Bowman:",A_NORMAL);
		if(ngetchx()==KEY_ESC)break;
		prepare_text(MAGIC,MAGIC,EVIL);
		DrawStr(16,40,"The  Wizard's  magic is no threat",A_NORMAL);
		DrawStr(16,50,"to the Necromancer, but he is al-",A_NORMAL);
		DrawStr(16,60,"so immune to the black arts!",A_NORMAL);
		DrawStr(136,100,"The Wizard:",A_NORMAL);
		ngetchx();
	}
	while(0);
}

void show_title(int x, int y)
{
	unsigned long title[4][52]=
	{
		{
0x00000000, 0x00000000, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x0000000F, 0x0000000F, 
0x0000000F, 0x0000000F, 0x0000000F, 0x0000000F, 0x0000000F, 0x0000000F, 0x0000000F, 0x0000000F, 
0x0000000F, 0x0007F00F, 0x001FF80F, 0x003FFC0F, 0x003C3E0F, 0x00381E0F, 0x00380E0F, 0x00381E0F, 
0x003C1C0F, 0xFFFDFFFF, 0xFFF087FF, 0xFFF80FFF, 0xFFFC1FFF, 0xFFF83FFF, 0xFFF01FFF, 0xFFE18FFF, 
0xFFC3C7FF, 0xFF87E3FF, 0xFF0FF1F7, 0xFF1FF8E3, 0xFF3FFC43, 0xFE3FFE07, 0xFE3FFE0F, 0xFE3FFC0F, 
0xFE3FF807, 0xFF1FE1C3, 0xFF0783E1, 0xFF800FF0, 0xFFE01FF8, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF 
		},{
0x00000000, 0x00000000, 0xF0000000, 0xF0000000, 0xF0000000, 0xF0000000, 0x80000000, 0x01E07878, 
0x01E07878, 0x01E07878, 0x01E07878, 0x01E07878, 0x01E07878, 0x01E07878, 0x01FFF878, 0x01FFF878, 
0x01FFF878, 0x01E07878, 0x01E07878, 0x01E07878, 0x01E07878, 0x01E0787C, 0x01E0783F, 0x01E0783F, 
0x01E0781F, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF03FFFFF, 0xF3CFFFFF, 0xF3EFFFFF, 0xF3EFF01F, 
0xF3EFEFEF, 0xF3EFCFF7, 0xF3CF9FFB, 0xF01FBFFB, 0xF3CFBFFB, 0xF3F73FF9, 0xF3F3BFF9, 0xF3F3BFFB, 
0xF3F3BFFB, 0xF3F39FF3, 0xF3E7CFE7, 0xF00FE7CF, 0xF87FF83F, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF
		},{
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007800, 0x3803FE00, 
0x380FFF81, 0x381FFFC1, 0x381F07C3, 0x383E0183, 0x383C0001, 0x38780001, 0x38780000, 0x38780000, 
0x38783FF0, 0x38783FF0, 0x38783FF0, 0x783C1FE0, 0x783E01E1, 0xF83F07C3, 0xF81FFFC3, 0xF00FFF81, 
0xE003FE00, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xBF7EF7FF, 
0xBF7EF7FE, 0xBE3EF3FE, 0xDE3DF1FC, 0xDEBDF1FC, 0xDC9DF5FB, 0xCDD9F6FB, 0xE9CBF6F7, 0xEBEBE777, 
0xE3E3EF6F, 0xF3E7EF8F, 0xF7F7EF8F, 0xF7F7EFDF, 0xFFFFEFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF
		},{
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x38000000, 0xFE000000, 
0xFF000000, 0xFF000000, 0xC6000000, 0xC0000000, 0xE0000000, 0xF0000000, 0xF8000000, 0x7C000000, 
0x3E000000, 0x1F000000, 0x0F000000, 0x07800000, 0x87800000, 0xCF800000, 0xFF800000, 0xFF000000, 
0xFE000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF80FFF7F, 
0xFBFEFF7F, 0x7BFE7F7F, 0x7BFE3F7F, 0x7BFE9F7F, 0x7BFECF7F, 0x780EEF7F, 0x7BFEF77F, 0x7BFEFB7F, 
0x7BFEFD7F, 0x7BFEFC7F, 0x3BFEFE7F, 0xB9FEFF7F, 0xB80EFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF
		}
	};
	int i;
	for(i=0;i<4;i++)
		Sprite32(x+i*32,y,52,title[i],LCD_MEM,SPRT_OR);
}

int count_remaining_combos(unsigned long * logic_array)
{
	int i, j, temp=0;
	unsigned long bit_check;
	for(i=0;i<81;i++)
	{
		for(j=0, bit_check=1;j<(i%32);j++)bit_check<<=1;
		if((logic_array[i/32]&bit_check)==bit_check)temp++;
	}
	return temp;
}

int make_guess(unsigned long * logic_array)
{
	int i, j, guess;
	unsigned long bit_check;
	for(i=0;i<10;i++)
	{
		guess=rand()%81;
		for(j=0, bit_check=1;j<(guess%32);j++)bit_check<<=1;
		if((logic_array[guess/32]&bit_check)==bit_check)return guess;
	}
	for(i=0;i<81;i++)
	{
		for(j=0, bit_check=1;j<(i%32);j++)bit_check<<=1;
		if(logic_array[i/32]&bit_check)return i;
	}
	// Error
	return -1;
}

void input_clues(int * vic, int * def)
{
	int x_hand=150, x_hand_p=150, c, temp_v=0, temp_d=0;
	char str_temp[15];
	FontSetSys(F_6x8);
	DrawStr(130,30,"What are my clues?",A_NORMAL);
	DrawStr(135,40,"Conquests Defeats",A_NORMAL);
	FontSetSys(F_8x10);
	do
	{	
		sprintf(str_temp, "%d      %d", temp_v, temp_d);
		DrawStr(150,50,str_temp,A_REPLACE);
		Sprite32(x_hand,65,32,card[HAND],LCD_MEM,SPRT_OR);
		if(x_hand!=x_hand_p)
		{
			Sprite32(x_hand_p,65,32,card[HAND],LCD_MEM,SPRT_XOR);
			x_hand_p=x_hand;
		}
		c=ngetchx();
		switch(c)
		{
			case(337):
			case(340):
				if(x_hand==150)x_hand=200;
				else x_hand=150;
				break;
			case(338):
				if(x_hand==150)
				{
					temp_v++;
					if(temp_v>4)temp_v=0;
				}
				else
				{
					temp_d++;
					if(temp_d>4)temp_d=0;
				}
				break;
			case(344):
				if(x_hand==150)
				{
					temp_v--;
					if(temp_v<0)temp_v=4;
				}
				else
				{
					temp_d--;
					if(temp_d<0)temp_d=4;
				}
				break;
			case(KEY_ESC):
				exit(0);
				break;
		}
		
	}
	while(c!=KEY_ENTER);
	Sprite32(x_hand_p,65,32,card[HAND],LCD_MEM,SPRT_XOR);
	*vic=temp_v;
	*def=temp_d;	
}

void computer_think(int guess, int vic, int def, unsigned long * logic_array)
{
	unsigned long bit_check;
	int i,j, temp_v=0, temp_d=0;
	guess=defeats_code(guess,1);
	for(i=0;i<81;i++)
	{
		for(j=0, bit_check=1;j<i%32;j++)bit_check<<=1;
		if((logic_array[i/32]&bit_check)==bit_check)
		{
			return_clues(i,guess,&temp_v, &temp_d);
			if(!((vic==temp_v)&&(def==temp_d)))
				logic_array[i/32]^=bit_check;
				
		}
	}
}

int check_combo_number(int combo_number, unsigned long * logic_array)
{
	int i;
	unsigned long bit_check;
	int temp=TRUE;
	for(i=0,bit_check=1;i<combo_number;i++)bit_check<<=1;
	if(!((logic_array[i/32]&bit_check)==bit_check))temp=FALSE;
	return temp;
}

int defeats_code(int code, int true_false)
{
	int i, temp, defeat_code=0;
	unsigned long combo_stack;
	number_to_combo(code,&combo_stack);
	for(i=0;i<4;i++)
	{
		temp=(int)(((combo_stack&(0xFF000000>>(i*8)))>>((3-i)*8)));
		switch(temp)
		{
			case DEXTERITY:
				defeat_code+=three_to(3-i)*((true_false)?STRENGTH:MAGIC);
				break;
			case STRENGTH:
				defeat_code+=three_to(3-i)*((true_false)?MAGIC:DEXTERITY);
				break;
			case MAGIC:
				defeat_code+=three_to(3-i)*((true_false)?DEXTERITY:STRENGTH);
				break;
		}
	}
	return defeat_code;
}

int human_play(int axis)
{
	int moves=0, code, guess, clue_v=0, clue_d=0,j;
	char e_m[50];
	unsigned long bit_check, logic_array[3]={
		0xFFFFFFFF,
		0xFFFFFFFF,
		0xFFFFFFFF
	};
	
	ClrScr();
	for(j=0;j<4;j++)
	{
		Sprite32(j*32,96,32,card[BOX],LCD_MEM,SPRT_OR);
		Sprite32(j*32,96,32,card[QUESTION],LCD_MEM,SPRT_OR);
	}
	DrawStr(0,0,"My troops are ready...",A_NORMAL);
	if(ngetchx()==KEY_ESC)exit(0);
	ClrScr();
	DrawStr(135,2,"Vic Def",A_NORMAL);
	code=rand()%81;
	
	while(moves<5)
	{
			guess=input_combo(0,moves*16,axis);
			return_clues(code,guess,&clue_v,&clue_d);
			if(clue_v==4)
			{
				prepare_text(-2,0,0);
				FontSetSys(F_6x8);
				DrawStr(70,20,"Victory!",A_NORMAL);
				DrawStr(16,40,"You annihilated my troops in",A_NORMAL);
				sprintf(e_m,  "%d sall%s! Not bad for a human!", 								moves,(moves==1?"y":"ies"));
				DrawStr(16,50,e_m,A_NORMAL);
				if(ngetchx()==KEY_ESC)exit(0);
				return moves;
			}
			draw_clues(135,moves*16+10,clue_v,clue_d);
			
			for(j=0,bit_check=1;j<guess%32;j++)bit_check<<=1;
			if((logic_array[guess/32]&bit_check)==0)
				DrawStr(170,moves*16+2,"Silly...",A_NORMAL);
			computer_think(guess,clue_v,clue_d,logic_array);
			moves++;
	}
	DrawStr(150,80,"You failed!",A_NORMAL);
	draw_combo_number(0,96,code,axis?GOOD:EVIL);
	if(ngetchx()==KEY_ESC)exit(0);	
	return ++moves;
}

int computer_play(int axis)
{
	int moves=0, victories=0, defeats=0, code;
	int guessed[5]={0,0,0,0,0}, clue_v[5]={0,0,0,0,0}, clue_d[5]={0,0,0,0,0};
	int e, e_code, e_v, e_d;
	char e_m[50];
	unsigned long logic_array[3]={
		0xFFFFFFFF,
		0xFFFFFFFF,
		0xFFFFFFFF
	};
	ClrScr();
	for(e=0;e<4;e++)
	{
		Sprite32(e*32,96,32,card[BOX],LCD_MEM,SPRT_OR);
		Sprite32(e*32,96,32,card[QUESTION],LCD_MEM,SPRT_OR);
	}
	for(;;)
	{
		if((code=make_guess(logic_array))==-1)
		{
			prepare_text(-1,0,0);
			FontSetSys(F_6x8);
			DrawStr(40,20,"You have made a mistake!",A_NORMAL);
			DrawStr(16,40,"Please line up your men...",A_NORMAL);
			e_code=input_combo(40,50,axis);			
			for(e=0;e<=moves;e++)
			{
				return_clues(e_code, guessed[e], &e_v, &e_d);
				if((e_v!=clue_v[e])||(e_d!=clue_d[e]))break;
			}
			prepare_text(-1,0,0);
			DrawStr(50,20,"Yet when I guessed",A_NORMAL);
			draw_combo_number(50,30,guessed[e],(axis==GOOD?EVIL:GOOD));
			sprintf(e_m,"You said victories: %d defeats: %d",clue_v[e],clue_d[e]);
			DrawStr(16,65,e_m,A_NORMAL);
			sprintf(e_m,"You meant victories: %d defeats: %d",e_v,e_d);
			DrawStr(16,75,e_m,A_NORMAL);
			DrawStr(16,90,"Please be more careful next time!",A_NORMAL);
			if(ngetchx()==KEY_ESC)exit(0);
			return -1;
		}
		draw_combo_number(0,moves*16,defeats_code(code,0),(axis==GOOD?EVIL:GOOD));
		input_clues(&victories,&defeats);
		if(victories==4)
		{
			moves++;
			prepare_text(-2,0,0);
			FontSetSys(F_6x8);
			DrawStr(70,20,"Victory!",A_NORMAL);
			DrawStr(16,40,"I annihilated your troops in only",A_NORMAL);
			sprintf(e_m,  "%d sall%s!  Try to beat that, my", 
				moves,(moves==1?"y":"ies"));
			DrawStr(16,50,e_m,A_NORMAL);
			DrawStr(16,60,"fine friend!",A_NORMAL);
			if(ngetchx()==KEY_ESC)exit(0);
			break;
		}
		computer_think(code,victories,defeats,logic_array);
		guessed[moves]=code;
		clue_v[moves]=victories;
		clue_d[moves]=defeats;
		moves+=2;
	}
	return moves;
}

void _main(void)
{
	/*// analysis
	ClrScr();
	int i, code, v, d, temp, remaining[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	unsigned long logic_array[3];
	code=input_combo(0,0,GOOD);
	clrscr();
	for(i=0;i<81;i++)
	{
		logic_array[0]=logic_array[1]=logic_array[2]=0XFFFFFFFF;
		return_clues(code,i,&v,&d);
		computer_think(i,v,d,logic_array);
		temp=count_remaining_combos(logic_array);
		printf("i=%d v=%d d=%d rem=%d\n",i,v,d,temp);
		remaining[temp]++;
		ngetchx();
	}
	for(i=0;i<20;i++)
	{
		printf("%d: %d\n",i,remaining[i]);
		ngetchx();
	}
*/




	ClrScr();
	FontSetSys(F_8x10);
	randomize();
	int c_score=0, h_score=0, temp, axis, game, c;
	char message[50];	
	axis=intro();
	game=game_type();
	while(1)
	{
		if(game)
			do temp=computer_play(axis);
			while (temp==-1);
		else
			temp=human_play(axis);
	
		c_score+=temp;

		h_score+=human_play(axis);

		prepare_text(rand()%3,rand()%3,GOOD);
		DrawStr(40,20,"SCORE",A_NORMAL);
		sprintf(message,"%s  %s",game?"HUMAN":"PLAYER 1",game?"TI-92":"PLAYER 2");
		DrawStr(40,30,message,A_NORMAL);
		sprintf(message," %d       %d",c_score,h_score);
		DrawStr(40,40,message,A_NORMAL);
		DrawStr(16,50,"Press ENTER to continue,",A_NORMAL);
		DrawStr(16,60,"      ESC   to quit.",A_NORMAL);

		do c=ngetchx();
		while((c!=KEY_ENTER)&&(c!=KEY_ESC));
		if(c==KEY_ESC)break;
	}
}
