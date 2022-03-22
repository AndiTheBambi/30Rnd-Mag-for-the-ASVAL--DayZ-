#define _ARMA_

class CfgMods
{
	class Mag_VAL_30Rnd
	{
		type = "mod";
		author = "AndiTheBambi";
		name = "Mag_VAL_30Rnd";
		version = "0.1";
		dir = "Mag_VAL_30Rnd";
	};
};

class CfgPatches
{
	class Mag_VAL_30Rnd
	{
		units[]={"VSS"};
		requiredAddons[]={"DZ_Data","DZ_Weapons_Magazines","DZ_Weapons_Firearms"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class VSS_Base;
	class ASVAL: VSS_Base
	{
		magazines[]={"Mag_VSS_10Rnd","Mag_VAL_20Rnd","Mag_VAL_30Rnd"};
	};
	
};

class cfgMagazines
{
	class Mag_VAL_20Rnd;
	class Mag_VAL_30Rnd: Mag_VAL_20Rnd
	{
		scope=2;
		displayName="30Rnd ASVAL Mag";
		descriptionShort="30 Round Magazine for the ASVAL";
		count=30;
	};
};