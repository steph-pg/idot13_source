#ifndef WORLD_TILESET_NUMS_H
#define WORLD_TILESET_NUMS_H

// Snap: NUM_TILESETS no longer limits the number of tilesets.
// See gubNumSets in WorldDat.cpp

#ifdef JA2UBMAPS
enum
{
	TLS_GENERIC_1,
	TLS_CAVES_1,
	TLS_DESERT_1,
	TLS_LUSH_1,
	TLS_TROPICAL_1,
	TLS_MOUNTAIN_1,
	TLS_COASTAL_1,				//7
	TLS_SWAMP_1,
	TLS_FARM_1,
	TLS_OMERTA_1,

	TLS_GENERIC_2,
	TLS_FARM_2,
	TLS_PRISON,
	TLS_HOSPITAL,
	TLS_TEMP_,
	TLS_BURNT_TREES,
	TLS_LAWLESS_1,
	TLS_AIRSTRIP,
	TLS_LAWLESS_2,
	TLS_DEAD_AIRSTRIP,

	TEMP_1,
	TEMP_2,
	TEMP_3,
	TEMP_4,
	TEMP_5,
	TEMP_6,
	TEMP_7,
	TEMP_8,
	TEMP_9,
	TEMP_10,

	TEMP_11,
	TEMP_12,
	TEMP_13,
	TEMP_14,
	TEMP_15,
	TEMP_16,
	TEMP_17,
	TEMP_18,
	TEMP_19,
	TEMP_20,

	TEMP_21,
	TEMP_22,
	TEMP_23,
	TEMP_24,
	TEMP_25,
	TEMP_26,
	TEMP_27,
	TEMP_28,
	TEMP_29,
	TEMP_30,

	DEFAULT_JA25_TILESET,
	TEMP_32,
	TEMP_33,
	TEMP_34,
	TEMP_35,
	TEMP_36,
	TEMP_37,
	TEMP_38,
	TEMP_39,
	TEMP_40,

	TEMP_41,
	TEMP_42,
	TEMP_43,
	TEMP_44,
	TEMP_45,
	TEMP_46,
	TEMP_47,
	TEMP_48,
	TEMP_49,
	TEMP_50,

	NUM_TILESETS
};
#else
enum
{
	TLS_GENERIC_1,			// 0, JA2 default
	TLS_CAVES_1,
	TLS_DESERT_1,
	TLS_LUSH_1,
	TLS_TROPICAL_1,
	TLS_MOUNTAINS_1,
	TLS_COASTAL_1,
	TLS_SWAMP_1,
	TLS_FARM_1,
	TLS_OMERTA,

	TLS_GENERIC_2,			// 10
	TLS_FARM_2,
	TLS_PRISON,
	TLS_HOSPITAL,
	TLS_DEMO_BASEMENT,
	TLS_BURNT_TREES,
	TLS_LAWLESS_1,
	TLS_AIRSTRIP,
	TLS_LAWLESS_2,
	TLS_DEAD_AIRSTRIP,

	TLS_BASEMENT,			// 20
	TLS_LAWLESS_3,
	TLS_PRISON_DUNGEON,
	TLS_ACTIVE_DRASSEN,
	TLS_SAM_SITES,
	TLS_LUSH_2,
	TLS_MILITARY_BASE,
	TLS_MILITARY_JAIL,
	TLS_MILITARY_WAREHOUSE,
	TLS_MILITARY_TOWN,

	TLS_OLD_SCHOOL,			// 30
	TLS_CAMBRIA_STRIP,
	TLS_CAMBRIA_HOMES,
	TLS_PALACE,
	TLS_TROPICAL_SAM,
	TLS_GRUMM_1,
	TLS_GRUMM_2,
	TLS_BALIME,
	TLS_BALIME_MUSEUM,
	TLS_DESERT_SAM,

	TLS_ORTA,				// 40
	TLS_ORTA_WEAPONS,
	TLS_SWAMP_BARETREES,
	TLS_ESTONI,
	TLS_QUEENS_PRISON,
	TLS_QUEENS_TROPICAL,
	TLS_MEDUNA_INNER_TOWN,
	TLS_QUEENS_SAM,
	TLS_QUEENS_AIRPORT,
	TLS_DEMO_TILESET,

	TLS_HEAVY_SNOW,			// 50, JA2.5 default
	TLS_MIXED_SNOW,
	TLS_GRASS_SNOW,
	TLS_FALL_TOWN,
	TLS_MINING_TOWN,
	TLS_POWER_PLANT,
	TLS_SEWERS,
	TLS_UNDERGROUND_COMPLEX,
	TLS_UPPER_COMPLEX,
	TLS_LOWEST_LEVEL_COMPLEX,

	TILESET_60,				// 60
	TILESET_61,
	TILESET_62,
	TILESET_63,
	TILESET_64,
	TILESET_65,
	TILESET_66,
	TILESET_67,
	TILESET_68,
	TILESET_69,

	NUM_TILESETS			 // 70
};
#endif

#endif
