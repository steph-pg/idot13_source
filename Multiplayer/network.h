#pragma once

//this one just for structs, variables and functions used between the client and server scripts...

extern  char CLIENT_NAME[30];



typedef struct
{
	UINT8 client_num;
	char client_name[30];
	int team;
	int cl_edge;
}client_info;

typedef struct
{
	int	max_clients;
	int	same_merc;
	float damage_multiplier;
	INT16 gsMercArriveSectorX;
	INT16 gsMercArriveSectorY;
	int ENEMY_ENABLED;
	int	CREATURE_ENABLED;
	int	MILITIA_ENABLED;
	int	CIV_ENABLED;
	int gsPLAYER_BSIDE;
	INT32 secs_per_tick;
	INT32 starting_balance;
	bool soDis_Bobby;
	bool soDis_Equip;
	BOOLEAN sofGunNut;	
	UINT8	soubGameStyle;
	UINT8	soubDifficultyLevel;
	BOOLEAN	sofTurnTimeLimit;
	BOOLEAN	sofIronManMode;
	UINT8	soubBobbyRay;
	BOOLEAN sofNewInv;
	INT32 gsMAX_MERCS;
	UINT8 client_num;
	char client_name[30];
	char client_names[4][30];
	//int cl_ops[4];
	int team;
	int TESTING;
	char kitbag[100];
	bool emorale;
	int gsREPORT_NAME;
	int cl_edge;
	float TIME;
	int WEAPON_READIED_BONUS;
	int ALLOW_CUSTOM_NIV;
	int DISABLE_SPEC_MODE;
} settings_struct;

//typedef struct
//{
//	int clnum;
//	UINT8 ubid;
//}ovh_struct;
//
//typedef struct
//{
//	UINT8 ubid;
//}adv;


typedef struct
{
	BOOLEAN fMarkInterruptOccurred;
	INT8 bteam;
	UINT8 ubid;

}endINT;

typedef struct
{
	INT8 bteam;
}real_struct;

typedef struct
{
	UINT8 ubStartingTeam;
}sc_struct;