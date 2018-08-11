/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
class CfgNetworkMessages
{
	#include "custom\CfgNetworkMessages.cpp"
};
class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 10000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	
class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Big Momma)";
	pictureItem = "Exile_Item_BreachingCharge_BigMomma";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_Bandage"},
		//{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}
	};
};

class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		//{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_Bandage"},
		{1, "SatchelCharge_Remote_Mag"}
	};
};

class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		//{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_Bandage"},
		{1, "DemoCharge_Remote_Mag"}
	};
};

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{4, "Exile_Item_ToiletPaper"}
	};
};

class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteDrawbridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Drawbridge";
	pictureItem = "Exile_Item_ConcreteDrawBridgeKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDrawBridgeKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{3, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port (Small)";
	pictureItem = "Exile_Item_ConcreteFloorPortSmallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortSmallKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Ladder Hatch";
	pictureItem = "Exile_Item_ConcreteLadderHatchKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteLadderHatchKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder";
	pictureItem = "Exile_Item_MetalLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_JunkMetal"}
	};
};
class CraftMetalLadderDouble: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder (Double Tall)";
	pictureItem = "Exile_Item_MetalLadderDoubleKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderDoubleKit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalLadderKit"}
	};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftOldChest: Exile_AbstractCraftingRecipe
{
	name = "Craft Old Chest";
	pictureItem = "Exile_Item_OldChestKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_OldChestKit"}
	};
	components[] = 
	{
		{3, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
/*class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Razor Wire Kit Kit";
	pictureItem = "Exile_Item_RazorWireKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};*/
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_RepairKitWood";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port (Small)";
	pictureItem = "Exile_Item_WoodFloorPortSmallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodFloorPortSmallKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder";
	pictureItem = "Exile_Item_WoodLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder Hatch";
	pictureItem = "Exile_Item_WoodLadderHatchKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderHatchKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class CookAlsatianSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Alsatian Steak";
	pictureItem = "Exile_Item_AlsatianSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_AlsatianSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_AlsatianSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookCatSharkFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Shark Filet";
	pictureItem = "Exile_Item_CatSharkFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatSharkFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatSharkFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookChickenFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Chicken Filet";
	pictureItem = "Exile_Item_ChickenFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChickenFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChickenFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookFinSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Fin Steak";
	pictureItem = "Exile_Item_FinSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_FinSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_FinSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookGoatSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Goat Steak";
	pictureItem = "Exile_Item_GoatSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GoatSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GoatSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookMackerelFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mackerel Filet";
	pictureItem = "Exile_Item_MackerelFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MackerelFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MackerelFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookMulletFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mullet Filet";
	pictureItem = "Exile_Item_MulletFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MulletFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MulletFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookOrnateFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Ornate Filet";
	pictureItem = "Exile_Item_OrnateFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_OrnateFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_OrnateFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookRabbitSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Rabbit Steak";
	pictureItem = "Exile_Item_RabbitSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_RabbitSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_RabbitSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookRoosterFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Rooster Filet";
	pictureItem = "Exile_Item_RoosterFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_RoosterFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_RoosterFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSalemaFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Salema Filet";
	pictureItem = "Exile_Item_SalemaFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SalemaFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SalemaFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSheepSteak: Exile_AbstractCraftingRecipe
{
	name = "Cook Sheep Steak";
	pictureItem = "Exile_Item_SheepSteak_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SheepSteak_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SheepSteak_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookSnakeFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Snake Filet";
	pictureItem = "Exile_Item_SnakeFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SnakeFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SnakeFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookTunaFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Tuna Filet";
	pictureItem = "Exile_Item_TunaFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_TunaFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_TunaFilet_Raw"}
	};
};

///////////////////////////////////////////////////////////////////////////////

class CookTurtleFilet: Exile_AbstractCraftingRecipe
{
	name = "Cook Turtle Filet";
	pictureItem = "Exile_Item_TurtleFilet_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_TurtleFilet_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_TurtleFilet_Raw"}
	};
};


class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Draw Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] =
	{
		{1, "Exile_Item_WoodGateKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileAnimals
{
	/**
	 * Should animals spawn on your server? Y/N?
	 */
	enabled = 1;

	/**
	 * Should vanilla Arma animals (fish, rabbits, bees, etc.) be disabled?
	 * We think it should, since it might confuse players if they cant eat them. *munches on bees*
	 */
	disableVanillaAnimals = 1;

	/**
	 * Which animals to spawn. 
	 * Exile automatically spawns a color variation of that animal, if variations exist.
	 * Each player (client) has a maximum of one animal at a time.
	 * Exile checks which animal type can spawn in front of the player and then
	 * picks a random one. 
	 *
	 * For now it is like this:
	 * 
	 * - Goats spawn on hill tops, but not in forests
	 * - Sheep spawn on meadows, but not next to forests and not on hill tops
	 * - Hens and roosters spawn next to buildings only
	 *
	 * => More animal types will follow in upcoming Exile versions, hopefully.
	 */
	animalTypes[] = 
	{
		"Exile_Animal_Rooster_Abstract",
		"Exile_Animal_Hen_Abstract",
		"Exile_Animal_Goat_Abstract",
		"Exile_Animal_Sheep_Abstract"
	};

	/**
	 * Animals are always spawned in front of the player, but
	 * at least a certain distance away. The radius is applied on top.
	 *
	 * Example:
	 * Distance = 150
	 * Radius = 50
	 *
	 * => Minimum Distance from Player = 150 
	 * => Maximum Distance from Player = 150 + 50 * 2
	 */
	spawnDistance = 150;
	spawnRadius = 50;

	/**
	 * Specifies the minimum time in seconds between spawning animals.
	 * When the animal diededed, this time has to pass before it spawns
	 * a new one.
	 *
	 * It is a min/max setting, so the intervals will be uneven and a bit random.
	 * By default it will take 5 to 10 minutes to respawn a new animal.
	 */
	minimumSpawnDelay = 5 * 60;
	maximumSpawnDelay = 10 * 60;

	/**
	 * Clients will despawn animals if no player is in this radius around the animal
	 * This check is ran every 1 minute, so it is pretty unprecise, but performance-friendly. 
	 */
	keepAliveRadius = 500;

	/**
	 * Defines the minimum lifetime of an animal in seconds. During this time, right after spawning,
	 * it will not despawn. (+-0..1 minute delay)
	 */
	minimumLifetime = 5 * 60;
};
class CfgExileArsenal
{


	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };


	///////////////////////////////////////////////////////////////////////////////
	// Trash Items
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Magazine01 						{ quality = 1; price = 500; };
	class Exile_Item_Magazine02 						{ quality = 1; price = 500; };
	class Exile_Item_Magazine03 						{ quality = 1; price = 500; };
	class Exile_Item_Magazine04 						{ quality = 1; price = 500; };
	class Exile_Item_ToiletPaper						{ quality = 1; price = 600; };
	class Exile_item_RubberDuck               			{ quality = 1; price = 90000; sellPrice = 90000;};
	class Exile_Item_Knife								{ quality = 6; price = 60000; };
	
///uniforms
class sfp_m90s_uniform      { quality = 2; price = 120; };
class sfp_m90w_uniform      { quality = 2; price = 120; };
class sfp_m90w_uniform_folded      { quality = 2; price = 120; };
class sfp_m59w_uniform      { quality = 2; price = 120; };
class sfp_m90d_uniform_folded      { quality = 2; price = 120; };
class sfp_m87_flying_suit     { quality = 2; price = 120; };
class U_C_Poloshirt_blue      { quality = 1; price = 30; };
class U_C_Poloshirt_burgundy      { quality = 1; price = 30; };
class U_C_Poloshirt_salmon      { quality = 1; price = 30; };
class U_C_Poloshirt_stripped      { quality = 1; price = 30; };
class U_C_Poloshirt_tricolour      { quality = 1; price = 30; };
class U_C_Poor_1      { quality = 1; price = 50; };
class U_C_Poor_2      { quality = 1; price = 50; };
class U_C_Poor_shorts_1      { quality = 1; price = 50; };
class U_C_Scientist      { quality = 1; price = 60; };
class U_OrestesBody      { quality = 1; price = 60; };
class U_Rangemaster      { quality = 1; price = 30; };
class U_NikosAgedBody      { quality = 1; price = 60; };
class U_NikosBody      { quality = 1; price = 60; };
class U_Competitor      { quality = 1; price = 50; };
class U_I_CombatUniform      { quality = 2; price = 100; };
class U_I_CombatUniform_shortsleeve      { quality = 2; price = 100; };
class U_I_CombatUniform_tshirt      { quality = 2; price = 100; };
class U_I_OfficerUniform      { quality = 2; price = 100; };
class U_I_G_Story_Protagonist_F      { quality = 2; price = 60; };
class Exile_Uniform_Woodland      { quality = 2; price = 100; };
class U_C_HunterBody_grn      { quality = 2; price = 80; };
class U_IG_Guerilla1_1      { quality = 2; price = 140; };
class U_IG_Guerilla2_1      { quality = 2; price = 100; };
class U_IG_Guerilla2_2      { quality = 2; price = 100; };
class U_IG_Guerilla2_3      { quality = 2; price = 100; };
class U_IG_Guerilla3_1      { quality = 2; price = 100; };
class U_BG_Guerilla2_1      { quality = 2; price = 100; };
class U_IG_Guerilla3_2      { quality = 2; price = 100; };
class U_BG_Guerrilla_6_1      { quality = 2; price = 100; };
class U_BG_Guerilla1_1      { quality = 2; price = 100; };
class U_BG_Guerilla2_2      { quality = 2; price = 100; };
class U_BG_Guerilla2_3      { quality = 2; price = 100; };
class U_BG_Guerilla3_1      { quality = 2; price = 100; };
class U_BG_leader      { quality = 2; price = 100; };
class U_IG_leader      { quality = 2; price = 100; };
class U_I_G_resistanceLeader_F      { quality = 2; price = 100; };
class U_I_FullGhillie_ard      { quality = 5; price = 8000; };
class U_I_FullGhillie_lsh      { quality = 5; price = 8000; };
class U_I_FullGhillie_sard      { quality = 5; price = 8000; };
class U_I_GhillieSuit      { quality = 5; price = 8000; };
class U_I_Wetsuit      { quality = 2; price = 400; };
class U_I_HeliPilotCoveralls      { quality = 2; price = 80; };
class U_I_pilotCoveralls      { quality = 2; price = 80; };
class rhs_uniform_cu_ocp      { quality = 2; price = 100; };
class rhs_uniform_cu_ucp      { quality = 2; price = 100; };
class rhs_uniform_cu_ocp_101st      { quality = 2; price = 100; };
class rhs_uniform_df15      { quality = 2; price = 100; };
class rhs_uniform_emr_patchless      { quality = 2; price = 100; };
class rhs_uniform_flora_patchless      { quality = 2; price = 100; };
class rhs_uniform_flora_patchless_alt      { quality = 2; price = 100; };
class rhs_uniform_m88_patchless      { quality = 2; price = 100; };
class rhs_uniform_mflora_patchless      { quality = 2; price = 100; };
class rhs_uniform_vdv_mflora      { quality = 2; price = 100; };
class rhs_uniform_FROG01_m81      { quality = 2; price = 100; };
class rhs_uniform_FROG01_d      { quality = 2; price = 100; };
class rhs_uniform_FROG01_wd      { quality = 2; price = 100; };
class rhs_uniform_vdv_emr_des      { quality = 2; price = 100; };
class rhs_uniform_msv_emr      { quality = 2; price = 100; };
class rhs_uniform_flora      { quality = 2; price = 100; };
class rhs_uniform_vdv_flora      { quality = 2; price = 100; };
class rhs_uniform_gorka_r_g      { quality = 2; price = 100; };
class rhs_uniform_gorka_r_y      { quality = 2; price = 100; };
class rhs_chdkz_uniform_5      { quality = 2; price = 100; };
class rhs_chdkz_uniform_4      { quality = 2; price = 100; };
class rhs_chdkz_uniform_3      { quality = 2; price = 100; };
class rhs_chdkz_uniform_2      { quality = 2; price = 100; };
class rhs_chdkz_uniform_1      { quality = 2; price = 100; };
class rhs_uniform_mvd_izlom      { quality = 2; price = 100; };
class rhs_uniform_cu_ocp_10th      { quality = 2; price = 100; };
class rhs_uniform_cu_ocp_1stcav      { quality = 2; price = 100; };
class rhs_uniform_cu_ocp_82nd      { quality = 2; price = 100; };
class rhs_uniform_cu_ucp_101st      { quality = 2; price = 100; };
class rhs_uniform_cu_ucp_10th      { quality = 2; price = 100; };
class rhs_uniform_cu_ucp_1stcav      { quality = 2; price = 100; };
class rhs_uniform_cu_ucp_82nd      { quality = 2; price = 100; };
class rhs_uniform_g3_m81      { quality = 2; price = 100; };
class rhs_uniform_g3_blk      { quality = 2; price = 100; };
class rhs_uniform_g3_mc      { quality = 2; price = 100; };
class rhs_uniform_g3_rgr      { quality = 2; price = 100; };
class rhs_uniform_g3_tan      { quality = 2; price = 100; };
class rhsgref_uniform_ttsko_forest      { quality = 2; price = 100; };
class rhsgref_uniform_ttsko_mountain      { quality = 2; price = 100; };
class rhsgref_uniform_para_ttsko_oxblood      { quality = 2; price = 100; };
class rhsgref_uniform_ttsko_urban      { quality = 2; price = 100; };
class rhsgref_uniform_vsr      { quality = 2; price = 100; };
class rhsgref_uniform_alpenflage      { quality = 2; price = 100; };
class rhsgref_uniform_flecktarn      { quality = 2; price = 100; };
class rhsgref_uniform_specter      { quality = 2; price = 100; };
class rhsgref_uniform_flecktarn_full      { quality = 2; price = 100; };
class rhsgref_uniform_tigerstripe      { quality = 2; price = 100; };
class rhsgref_uniform_woodland      { quality = 2; price = 100; };
class rhsgref_uniform_woodland_olive      { quality = 2; price = 100; };
class rhsgref_uniform_ERDL      { quality = 2; price = 100; };
class rhsgref_uniform_og107      { quality = 2; price = 100; };
class rhsgref_uniform_og107_erdl      { quality = 2; price = 100; };
class rhsgref_uniform_altis_lizard      { quality = 2; price = 100; };
class rhsgref_uniform_olive      { quality = 2; price = 100; };
class rhsgref_uniform_altis_lizard_olive      { quality = 2; price = 100; };
class rhsgref_uniform_dpm      { quality = 2; price = 100; };
class rhsgref_uniform_dpm_olive      { quality = 2; price = 100; };
class rhsgref_uniform_3color_desert      { quality = 2; price = 100; };
class rhssaf_uniform_m10_digital      { quality = 2; price = 100; };
class rhssaf_uniform_m10_digital_summer      { quality = 2; price = 100; };
class rhssaf_uniform_m10_digital_desert      { quality = 2; price = 100; };
class rhssaf_uniform_m10_digital_tan_boots      { quality = 2; price = 100; };
class rhssaf_uniform_m93_oakleaf      { quality = 2; price = 100; };
class rhssaf_uniform_m93_oakleaf_summer      { quality = 2; price = 100; };

/////////////////////////////
/////////  Vests
//////////////////////////////
class V_RebreatherB      { quality = 1; price = 430; };
class V_Rangemaster_belt      { quality = 1; price = 435; };
class V_TacVest_blk      { quality = 1; price = 484; };
class V_TacVest_blk_POLICE      { quality = 1; price = 486; };
class V_TacVest_brn      { quality = 1; price = 484; };
class V_TacVest_camo      { quality = 1; price = 484; };
class V_TacVest_khk      { quality = 1; price = 484; };
class V_TacVest_oli      { quality = 1; price = 484; };
class V_TacVestCamo_khk      { quality = 1; price = 484; };
class V_TacVestIR_blk      { quality = 1; price = 514; };
class V_I_G_resistanceLeader_F      { quality = 1; price = 484; };
class V_BandollierB_ghex_F      { quality = 1; price = 484; };
class sfp_stridsvast08      { quality = 1; price = 484; };
class V_BandollierB_blk      { quality = 1; price = 270; };
class V_BandollierB_cbr      { quality = 1; price = 270; };
class V_BandollierB_khk      { quality = 1; price = 270; };
class V_BandollierB_oli      { quality = 1; price = 270; };
class V_BandollierB_rgr      { quality = 1; price = 270; };
class V_Chestrig_blk      { quality = 2; price = 1120; };
class V_Chestrig_khk      { quality = 2; price = 1120; };
class V_Chestrig_oli      { quality = 2; price = 1120; };
class V_Chestrig_rgr      { quality = 2; price = 1120; };
class V_HarnessO_brn      { quality = 2; price = 1130; };
class V_HarnessO_gry      { quality = 2; price = 1130; };
class V_HarnessOGL_brn      { quality = 2; price = 1130; };
class V_HarnessOGL_gry      { quality = 2; price = 1130; };
class V_HarnessOSpec_brn      { quality = 2; price = 1130; };
class V_HarnessOSpec_gry      { quality = 2; price = 1130; };
class V_PlateCarrier1_blk      { quality = 3; price = 3108; };
class V_PlateCarrier1_rgr      { quality = 3; price = 3108; };
class V_PlateCarrier2_rgr      { quality = 3; price = 3108; };
class V_PlateCarrier3_rgr      { quality = 3; price = 3108; };
class V_PlateCarrierGL_blk      { quality = 3; price = 3244; };
class V_PlateCarrierGL_mtp      { quality = 3; price = 3244; };
class V_PlateCarrierGL_rgr      { quality = 3; price = 3244; };
class V_PlateCarrierH_CTRG      { quality = 3; price = 3100; };
class V_PlateCarrierIA1_dgtl      { quality = 3; price = 3108; };
class V_PlateCarrierIA2_dgtl      { quality = 3; price = 3104; };
class V_PlateCarrierIAGL_dgtl      { quality = 3; price = 3244; };
class V_PlateCarrierIAGL_oli      { quality = 3; price = 3244; };
class V_PlateCarrierL_CTRG      { quality = 3; price = 3108; };
class V_PlateCarrierSpec_blk      { quality = 3; price = 3068; };
class V_PlateCarrierSpec_mtp      { quality = 3; price = 3068; };
class V_PlateCarrierSpec_rgr      { quality = 3; price = 3068; };
class rhs_6sh92      { quality = 2; price = 1983; };
class rhs_6sh92_radio      { quality = 2; price = 1983; };
class rhs_6sh92_vog      { quality = 2; price = 1983; };
class rhs_6sh92_vog_headset      { quality = 2; price = 1983; };
class rhs_6sh92_headset      { quality = 2; price = 1983; };
class rhs_6sh92_digi      { quality = 2; price = 1983; };
class rhs_6sh92_digi_radio      { quality = 2; price = 1983; };
class rhs_6sh92_digi_vog      { quality = 2; price = 1983; };
class rhs_6sh92_digi_vog_headset      { quality = 2; price = 1983; };
class rhs_6sh92_digi_headset      { quality = 2; price = 1983; };
class rhs_6b23      { quality = 3; price = 3034; };
class rhs_6b23_crew      { quality = 3; price = 3094; };
class rhs_6b23_crewofficer      { quality = 3; price = 3069; };
class rhs_6b23_engineer      { quality = 3; price = 3089; };
class rhs_6b23_medic      { quality = 3; price = 3124; };
class rhs_6b23_rifleman      { quality = 3; price = 3089; };
class rhs_6b23_sniper      { quality = 3; price = 3089; };
class rhs_6b23_6sh92      { quality = 3; price = 3109; };
class rhs_6b23_6sh92_radio      { quality = 3; price = 3109; };
class rhs_6b23_6sh92_vog      { quality = 3; price = 3124; };
class rhs_6b23_6sh92_vog_headset      { quality = 3; price = 3124; };
class rhs_6b23_6sh92_headset      { quality = 3; price = 3109; };
class rhs_6b23_6sh92_headset_mapcase      { quality = 3; price = 3124; };
class rhs_6b23_digi      { quality = 3; price = 3034; };
class rhs_6b23_digi_crew      { quality = 3; price = 3094; };
class rhs_6b23_digi_crewofficer      { quality = 3; price = 3069; };
class rhs_6b23_digi_engineer      { quality = 3; price = 3089; };
class rhs_6b23_digi_medic      { quality = 3; price = 3124; };
class rhs_6b23_digi_rifleman      { quality = 3; price = 3089; };
class rhs_6b23_digi_sniper      { quality = 3; price = 3089; };
class rhs_6b23_digi_6sh92      { quality = 3; price = 3109; };
class rhs_6b23_digi_6sh92_radio      { quality = 3; price = 3109; };
class rhs_6b23_digi_6sh92_vog      { quality = 3; price = 3124; };
class rhs_6b23_digi_6sh92_vog_headset      { quality = 3; price = 3124; };
class rhs_6b23_digi_6sh92_headset      { quality = 3; price = 3109; };
class rhs_6b23_digi_6sh92_headset_mapcase      { quality = 3; price = 3124; };
class rhs_6b23_ML      { quality = 3; price = 3034; };
class rhs_6b23_ML_crew      { quality = 3; price = 3094; };
class rhs_6b23_ML_crewofficer      { quality = 3; price = 3069; };
class rhs_6b23_ML_engineer      { quality = 3; price = 3089; };
class rhs_6b23_ML_medic      { quality = 3; price = 3124; };
class rhs_6b23_ML_rifleman      { quality = 3; price = 3089; };
class rhs_6b23_ML_sniper      { quality = 3; price = 3089; };
class rhs_6b23_ML_6sh92      { quality = 3; price = 3109; };
class rhs_6b23_ML_6sh92_radio      { quality = 3; price = 3109; };
class rhs_6b23_ML_6sh92_vog      { quality = 3; price = 3124; };
class rhs_6b23_ML_6sh92_vog_headset      { quality = 3; price = 3124; };
class rhs_6b23_ML_6sh92_headset      { quality = 3; price = 3109; };
class rhs_6b23_ML_6sh92_headset_mapcase      { quality = 3; price = 3124; };
class rhs_6sh46      { quality = 1; price = 1025; };
class rhs_vest_commander      { quality = 1; price = 1020; };
class rhs_vydra_3m      { quality = 2; price = 2068; };
class rhsusf_iotv_ucp      { quality = 3; price = 2998; };
class rhsusf_iotv_ucp_grenadier      { quality = 3; price = 3107; };
class rhsusf_iotv_ucp_medic      { quality = 3; price = 3084; };
class rhsusf_iotv_ucp_repair      { quality = 3; price = 3084; };
class rhsusf_iotv_ucp_rifleman      { quality = 3; price = 3084; };
class rhsusf_iotv_ucp_SAW      { quality = 3; price = 3091; };
class rhsusf_iotv_ucp_squadleader      { quality = 3; price = 3091; };
class rhsusf_iotv_ucp_teamleader      { quality = 3; price = 3091; };
class rhsusf_iotv_ocp      { quality = 3; price = 2998; };
class rhsusf_iotv_ocp_grenadier      { quality = 3; price = 3107; };
class rhsusf_iotv_ocp_medic      { quality = 3; price = 3078; };
class rhsusf_iotv_ocp_repair      { quality = 3; price = 3084; };
class rhsusf_iotv_ocp_rifleman      { quality = 3; price = 3084; };
class rhsusf_iotv_ocp_SAW      { quality = 3; price = 3091; };
class rhsusf_iotv_ocp_squadleader      { quality = 3; price = 3091; };
class rhsusf_iotv_ocp_teamleader      { quality = 3; price = 3091; };
class rhsusf_spc      { quality = 3; price = 2996; };
class rhsusf_spc_corpsman      { quality = 3; price = 3082; };
class rhsusf_spc_patchless      { quality = 3; price = 3065; };
class rhsusf_spc_squadleader      { quality = 3; price = 3102; };
class rhsusf_spc_teamleader      { quality = 3; price = 3102; };
class rhsusf_spc_light      { quality = 3; price = 3065; };
class rhsusf_spc_rifleman      { quality = 3; price = 3102; };
class rhsusf_spc_iar      { quality = 3; price = 3105; };
class rhsusf_spcs_ocp_rifleman      { quality = 3; price = 3108; };
class rhsusf_spcs_ocp      { quality = 3; price = 3108; };
class rhsusf_spcs_ucp_rifleman      { quality = 3; price = 3108; };
class rhsusf_spcs_ucp      { quality = 3; price = 3108; };
class rhs_6b43      { quality = 3; price = 3034; };
class rhsgref_alice_webbing      { quality = 2; price = 2045; };
class sfp_kroppsskydd12_holster      { quality = 2; price = 2045; };
class sfp_kroppsskydd12      { quality = 2; price = 2045; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
class H_Hat_Safari_sand_F      { quality = 1; price = 105; };
class H_Hat_Safari_olive_F      { quality = 1; price = 105; };
class H_Construction_basic_yellow_F      { quality = 1; price = 213; };
class H_Construction_basic_white_F      { quality = 1; price = 213; };
class H_Construction_basic_orange_F      { quality = 1; price = 213; };
class H_Construction_basic_red_F      { quality = 1; price = 213; };
class H_Construction_basic_vrana_F      { quality = 1; price = 213; };
class H_Construction_basic_black_F      { quality = 1; price = 213; };
class H_Construction_earprot_yellow_F      { quality = 1; price = 218; };
class H_Construction_earprot_white_F      { quality = 1; price = 218; };
class H_Construction_earprot_orange_F      { quality = 1; price = 218; };
class H_Construction_earprot_red_F      { quality = 1; price = 218; };
class H_Construction_earprot_vrana_F      { quality = 1; price = 218; };
class H_Construction_earprot_black_F      { quality = 1; price = 218; };
class H_Construction_headset_yellow_F      { quality = 1; price = 218; };
class H_Construction_headset_white_F      { quality = 1; price = 218; };
class H_Construction_headset_orange_F      { quality = 1; price = 218; };
class H_Construction_headset_red_F      { quality = 1; price = 218; };
class H_Construction_headset_vrana_F      { quality = 1; price = 218; };
class H_Construction_headset_black_F      { quality = 1; price = 218; };
class H_EarProtectors_yellow_F      { quality = 1; price = 110; };
class H_EarProtectors_white_F      { quality = 1; price = 110; };
class H_EarProtectors_orange_F      { quality = 1; price = 110; };
class H_EarProtectors_red_F      { quality = 1; price = 110; };
class H_EarProtectors_black_F      { quality = 1; price = 110; };
class H_HeadSet_yellow_F      { quality = 1; price = 110; };
class H_HeadSet_white_F      { quality = 1; price = 110; };
class H_HeadSet_orange_F      { quality = 1; price = 110; };
class H_HeadSet_red_F      { quality = 1; price = 110; };
class H_HeadSet_black_F      { quality = 1; price = 110; };
class H_PASGT_basic_blue_press_F      { quality = 1; price = 424; };
class H_PASGT_basic_blue_F      { quality = 1; price = 424; };
class H_PASGT_basic_white_F      { quality = 1; price = 424; };
class H_PASGT_basic_olive_F      { quality = 1; price = 424; };
class H_PASGT_basic_black_F      { quality = 1; price = 424; };
class H_PASGT_neckprot_blue_press_F      { quality = 1; price = 432; };
class H_HeadBandage_stained_F      { quality = 1; price = 102; };
class H_HeadBandage_clean_F      { quality = 1; price = 102; };
class H_HeadBandage_bloody_F      { quality = 1; price = 102; };
class H_Cap_White_IDAP_F      { quality = 1; price = 104; };
class H_Cap_Orange_IDAP_F      { quality = 1; price = 104; };
class H_Cap_Black_IDAP_F      { quality = 1; price = 104; };
class H_WirelessEarpiece_F      { quality = 1; price = 104; };
class H_Tank_black_F      { quality = 1; price = 420; };
class H_HelmetB      { quality = 1; price = 424; };
class H_HelmetB_camo      { quality = 1; price = 424; };
class H_HelmetB_paint      { quality = 1; price = 424; };
class H_HelmetB_light      { quality = 1; price = 416; };
class H_Booniehat_khk      { quality = 1; price = 110; };
class H_Booniehat_oli      { quality = 1; price = 110; };
class H_Booniehat_indp      { quality = 1; price = 110; };
class H_Booniehat_mcamo      { quality = 1; price = 110; };
class H_Booniehat_grn      { quality = 1; price = 110; };
class H_Booniehat_tan      { quality = 1; price = 110; };
class H_Booniehat_dirty      { quality = 1; price = 110; };
class H_Booniehat_dgtl      { quality = 1; price = 110; };
class H_Booniehat_khk_hs      { quality = 1; price = 110; };
class H_HelmetB_plain_mcamo      { quality = 1; price = 424; };
class H_HelmetB_plain_blk      { quality = 1; price = 424; };
class H_HelmetSpecB      { quality = 1; price = 440; };
class H_HelmetSpecB_paint1      { quality = 1; price = 440; };
class H_HelmetSpecB_paint2      { quality = 1; price = 440; };
class H_HelmetSpecB_blk      { quality = 1; price = 440; };
class H_HelmetSpecB_snakeskin      { quality = 1; price = 440; };
class H_HelmetSpecB_sand      { quality = 1; price = 440; };
class H_HelmetIA      { quality = 1; price = 424; };
class H_HelmetIA_net      { quality = 1; price = 424; };
class H_HelmetIA_camo      { quality = 1; price = 424; };
class H_Helmet_Kerry      { quality = 1; price = 424; };
class H_HelmetB_grass      { quality = 1; price = 424; };
class H_HelmetB_snakeskin      { quality = 1; price = 424; };
class H_HelmetB_desert      { quality = 1; price = 424; };
class H_HelmetB_black      { quality = 1; price = 424; };
class H_HelmetB_sand      { quality = 1; price = 424; };
class H_Cap_red      { quality = 1; price = 130; };
class H_Cap_blu      { quality = 1; price = 130; };
class H_Cap_oli      { quality = 1; price = 104; };
class H_Cap_headphones      { quality = 1; price = 108; };
class H_Cap_tan      { quality = 1; price = 104; };
class H_Cap_blk      { quality = 1; price = 104; };
class H_Cap_blk_CMMG      { quality = 1; price = 104; };
class H_Cap_brn_SPECOPS      { quality = 1; price = 104; };
class H_Cap_tan_specops_US      { quality = 1; price = 104; };
class H_Cap_khaki_specops_UK      { quality = 1; price = 104; };
class H_Cap_grn      { quality = 1; price = 104; };
class H_Cap_grn_BI      { quality = 1; price = 104; };
class H_Cap_blk_Raven      { quality = 1; price = 104; };
class H_Cap_blk_ION      { quality = 1; price = 104; };
class H_Cap_oli_hs      { quality = 1; price = 104; };
class H_Cap_press      { quality = 1; price = 104; };
class H_Cap_usblack      { quality = 1; price = 104; };
class H_Cap_surfer      { quality = 1; price = 104; };
class H_Cap_police      { quality = 1; price = 104; };
class H_HelmetCrew_B      { quality = 1; price = 432; };
class H_HelmetCrew_O      { quality = 1; price = 432; };
class H_HelmetCrew_I      { quality = 1; price = 432; };
class H_PilotHelmetFighter_B      { quality = 3; price = 6000; };
class H_PilotHelmetFighter_O      { quality = 3; price = 6000; };
class H_PilotHelmetFighter_I      { quality = 3; price = 6000; };
class H_PilotHelmetHeli_B      { quality = 1; price = 424; };
class H_PilotHelmetHeli_O      { quality = 1; price = 424; };
class H_PilotHelmetHeli_I      { quality = 1; price = 424; };
class H_CrewHelmetHeli_B      { quality = 1; price = 440; };
class H_CrewHelmetHeli_O      { quality = 1; price = 440; };
class H_CrewHelmetHeli_I      { quality = 1; price = 440; };
class H_HelmetO_ocamo      { quality = 1; price = 432; };
class H_HelmetLeaderO_ocamo      { quality = 1; price = 448; };
class H_MilCap_ocamo      { quality = 1; price = 106; };
class H_MilCap_mcamo      { quality = 1; price = 106; };
class H_MilCap_oucamo      { quality = 1; price = 106; };
class H_MilCap_rucamo      { quality = 1; price = 106; };
class H_MilCap_gry      { quality = 1; price = 106; };
class H_MilCap_dgtl      { quality = 1; price = 106; };
class H_MilCap_blue      { quality = 1; price = 106; };
class H_HelmetB_light_grass      { quality = 1; price = 416; };
class H_HelmetB_light_snakeskin      { quality = 1; price = 416; };
class H_HelmetB_light_desert      { quality = 1; price = 416; };
class H_HelmetB_light_black      { quality = 1; price = 416; };
class H_HelmetB_light_sand      { quality = 1; price = 416; };
class H_BandMask_blk      { quality = 1; price = 108; };
class H_BandMask_khk      { quality = 1; price = 108; };
class H_BandMask_reaper      { quality = 1; price = 108; };
class H_BandMask_demon      { quality = 1; price = 108; };
class H_HelmetO_oucamo      { quality = 1; price = 432; };
class H_HelmetLeaderO_oucamo      { quality = 1; price = 448; };
class H_HelmetSpecO_ocamo      { quality = 1; price = 440; };
class H_HelmetSpecO_blk      { quality = 1; price = 440; };
class H_Bandanna_surfer      { quality = 1; price = 108; };
class H_Bandanna_khk      { quality = 1; price = 108; };
class H_Bandanna_khk_hs      { quality = 1; price = 108; };
class H_Bandanna_cbr      { quality = 1; price = 108; };
class H_Bandanna_sgg      { quality = 1; price = 108; };
class H_Bandanna_sand      { quality = 1; price = 108; };
class H_Bandanna_surfer_blk      { quality = 1; price = 108; };
class H_Bandanna_surfer_grn      { quality = 1; price = 108; };
class H_Bandanna_gry      { quality = 1; price = 108; };
class H_Bandanna_blu      { quality = 1; price = 108; };
class H_Bandanna_camo      { quality = 1; price = 108; };
class H_Bandanna_mcamo      { quality = 1; price = 108; };
class H_Shemag_khk      { quality = 1; price = 106; };
class H_Shemag_tan      { quality = 1; price = 106; };
class H_Shemag_olive      { quality = 1; price = 106; };
class H_Shemag_olive_hs      { quality = 1; price = 106; };
class H_ShemagOpen_khk      { quality = 1; price = 106; };
class H_ShemagOpen_tan      { quality = 1; price = 106; };
class H_Beret_blk      { quality = 1; price = 106; };
class H_Beret_blk_POLICE      { quality = 1; price = 106; };
class H_Beret_red      { quality = 1; price = 106; };
class H_Beret_grn      { quality = 1; price = 106; };
class H_Beret_grn_SF      { quality = 1; price = 106; };
class H_Beret_brn_SF      { quality = 1; price = 106; };
class H_Beret_ocamo      { quality = 1; price = 106; };
class H_Beret_02      { quality = 1; price = 106; };
class H_Beret_Colonel      { quality = 1; price = 106; };
class H_Watchcap_blk      { quality = 1; price = 106; };
class H_Watchcap_cbr      { quality = 1; price = 106; };
class H_Watchcap_khk      { quality = 1; price = 106; };
class H_Watchcap_camo      { quality = 1; price = 106; };
class H_Watchcap_sgg      { quality = 1; price = 106; };
class H_TurbanO_blk      { quality = 1; price = 108; };
class H_StrawHat      { quality = 1; price = 106; };
class H_StrawHat_dark      { quality = 1; price = 106; };
class H_Hat_blue      { quality = 1; price = 106; };
class H_Hat_brown      { quality = 1; price = 106; };
class H_Hat_camo      { quality = 1; price = 106; };
class H_Hat_grey      { quality = 1; price = 106; };
class H_Hat_checker      { quality = 1; price = 106; };
class H_Hat_tan      { quality = 1; price = 106; };
class H_RacingHelmet_1_F      { quality = 1; price = 432; };
class H_RacingHelmet_2_F      { quality = 1; price = 432; };
class H_RacingHelmet_3_F      { quality = 1; price = 432; };
class H_RacingHelmet_4_F      { quality = 1; price = 432; };
class H_RacingHelmet_1_black_F      { quality = 1; price = 432; };
class H_RacingHelmet_1_blue_F      { quality = 1; price = 432; };
class H_RacingHelmet_1_green_F      { quality = 1; price = 432; };
class H_RacingHelmet_1_red_F      { quality = 1; price = 432; };
class H_RacingHelmet_1_white_F      { quality = 1; price = 432; };
class H_RacingHelmet_1_yellow_F      { quality = 1; price = 432; };
class H_RacingHelmet_1_orange_F      { quality = 1; price = 432; };
class H_Cap_marshal      { quality = 1; price = 108; };
class H_Helmet_Skate      { quality = 1; price = 416; };
class H_HelmetB_TI_tna_F      { quality = 1; price = 440; };
class H_HelmetB_tna_F      { quality = 1; price = 424; };
class H_HelmetB_Enh_tna_F      { quality = 1; price = 440; };
class H_HelmetB_Light_tna_F      { quality = 1; price = 416; };
class H_HelmetO_ghex_F      { quality = 1; price = 432; };
class H_HelmetCrew_O_ghex_F      { quality = 1; price = 432; };
class H_MilCap_tna_F      { quality = 1; price = 106; };
class H_MilCap_ghex_F      { quality = 1; price = 106; };
class H_Booniehat_tna_F      { quality = 1; price = 106; };
class H_Beret_gen_F      { quality = 1; price = 106; };
class H_MilCap_gen_F      { quality = 1; price = 106; };
class H_Cap_oli_Syndikat_F      { quality = 1; price = 106; };
class H_Cap_tan_Syndikat_F      { quality = 1; price = 106; };
class H_Cap_blk_Syndikat_F      { quality = 1; price = 106; };
class H_Cap_grn_Syndikat_F      { quality = 1; price = 106; };
class sfp_m90w_Helmet      { quality = 1; price = 406; };
class sfp_m90s_Helmet      { quality = 1; price = 406; };
class sfp_m90d_cap_isaf      { quality = 4; price = 404; };
class sfp_m59w_cap      { quality = 4; price = 404; };
class sfp_m90w_cap      { quality = 4; price = 404; };
class sfp_bashatt90      { quality = 4; price = 404; };
class sfp_m90w_helmet_peltor_nvg      { quality = 4; price = 1604; };
class sfp_flighthelmet116     { quality = 4; price = 404; };
class rhs_6b27m_digi      { quality = 3; price = 1196; };
class rhs_6b27m_digi_ess      { quality = 3; price = 1196; };
class rhs_6b27m_digi_bala      { quality = 3; price = 1196; };
class rhs_6b27m_digi_ess_bala      { quality = 3; price = 1196; };
class rhs_6b27m      { quality = 3; price = 1196; };
class rhs_6b27m_bala      { quality = 1; price = 434; };
class rhs_6b27m_ess      { quality = 1; price = 434; };
class rhs_6b27m_ess_bala      { quality = 1; price = 434; };
class rhs_6b27m_ml      { quality = 1; price = 434; };
class rhs_6b27m_ml_ess      { quality = 1; price = 434; };
class rhs_6b27m_ml_bala      { quality = 1; price = 434; };
class rhs_6b27m_ML_ess_bala      { quality = 1; price = 434; };
class rhs_6b27m_green      { quality = 1; price = 434; };
class rhs_6b27m_green_ess      { quality = 1; price = 434; };
class rhs_6b27m_green_ess_bala      { quality = 1; price = 434; };
class rhs_6b26_green      { quality = 1; price = 434; };
class rhs_6b26_bala_green      { quality = 1; price = 434; };
class rhs_6b26_ess_green      { quality = 1; price = 434; };
class rhs_6b26_ess_bala_green      { quality = 1; price = 434; };
class rhs_6b26      { quality = 1; price = 434; };
class rhs_6b26_bala      { quality = 1; price = 434; };
class rhs_6b26_ess      { quality = 1; price = 434; };
class rhs_6b26_ess_bala      { quality = 1; price = 434; };
class rhs_6b28_green      { quality = 1; price = 434; };
class rhs_6b28_green_bala      { quality = 1; price = 434; };
class rhs_6b28_green_ess      { quality = 1; price = 434; };
class rhs_6b28_green_ess_bala      { quality = 1; price = 434; };
class rhs_6b28      { quality = 1; price = 434; };
class rhs_6b28_bala      { quality = 1; price = 434; };
class rhs_6b28_ess      { quality = 1; price = 434; };
class rhs_6b28_ess_bala      { quality = 1; price = 434; };
class rhs_6b28_flora      { quality = 1; price = 434; };
class rhs_6b28_flora_bala      { quality = 1; price = 434; };
class rhs_6b28_flora_ess      { quality = 1; price = 434; };
class rhs_6b28_flora_ess_bala      { quality = 1; price = 434; };
class rhs_Booniehat_digi      { quality = 1; price = 410; };
class rhs_Booniehat_flora      { quality = 1; price = 110; };
class rhs_ssh68      { quality = 1; price = 110; };
class rhs_Booniehat_m81      { quality = 1; price = 410; };
class rhs_Booniehat_marpatd      { quality = 1; price = 110; };
class rhs_Booniehat_marpatwd      { quality = 1; price = 110; };
class rhs_Booniehat_ocp      { quality = 1; price = 110; };
class rhs_Booniehat_ucp      { quality = 1; price = 110; };
class rhsusf_Bowman      { quality = 1; price = 110; };
class rhsusf_ach_bare      { quality = 1; price = 434; };
class rhsusf_ach_bare_des      { quality = 1; price = 434; };
class rhsusf_ach_bare_des_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_des_headset      { quality = 1; price = 434; };
class rhsusf_ach_bare_des_headset_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_headset      { quality = 1; price = 434; };
class rhsusf_ach_bare_headset_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_semi      { quality = 1; price = 434; };
class rhsusf_ach_bare_semi_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_semi_headset      { quality = 1; price = 434; };
class rhsusf_ach_bare_semi_headset_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_tan      { quality = 1; price = 434; };
class rhsusf_ach_bare_tan_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_tan_headset      { quality = 1; price = 434; };
class rhsusf_ach_bare_tan_headset_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_wood      { quality = 1; price = 434; };
class rhsusf_ach_bare_wood_ess      { quality = 1; price = 434; };
class rhsusf_ach_bare_wood_headset      { quality = 1; price = 434; };
class rhsusf_ach_bare_wood_headset_ess      { quality = 1; price = 434; };
class rhsusf_ach_helmet_ESS_ocp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_ESS_ucp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_M81      { quality = 1; price = 434; };
class rhsusf_ach_helmet_camo_ocp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_headset_ess_ocp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_headset_ess_ucp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_headset_ocp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_headset_ucp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_ocp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_ocp_norotos      { quality = 1; price = 434; };
class rhsusf_ach_helmet_ucp      { quality = 1; price = 434; };
class rhsusf_ach_helmet_ucp_norotos      { quality = 1; price = 434; };
class rhsusf_bowman_cap      { quality = 1; price = 434; };
class rhsusf_lwh_helmet_M1942      { quality = 1; price = 434; };
class rhsusf_lwh_helmet_marpatd      { quality = 1; price = 434; };
class rhsusf_lwh_helmet_marpatd_ess      { quality = 1; price = 434; };
class rhsusf_lwh_helmet_marpatd_headset      { quality = 1; price = 434; };
class rhsusf_lwh_helmet_marpatwd      { quality = 1; price = 434; };
class rhsusf_lwh_helmet_marpatwd_ess      { quality = 1; price = 434; };
class rhsusf_lwh_helmet_marpatwd_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare      { quality = 1; price = 434; };
class rhsusf_mich_bare_alt      { quality = 1; price = 434; };
class rhsusf_mich_bare_alt_semi      { quality = 1; price = 434; };
class rhsusf_mich_bare_alt_tan      { quality = 1; price = 434; };
class rhsusf_mich_bare_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_alt      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_alt_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_alt_semi      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_alt_semi_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_alt_tan      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_alt_tan_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_alt      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_alt_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_alt_semi      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_alt_semi_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_alt_tan      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_alt_tan_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_semi      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_semi_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_arc_tan      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_semi      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_semi_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_tan      { quality = 1; price = 434; };
class rhsusf_mich_bare_norotos_tan_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_semi      { quality = 1; price = 434; };
class rhsusf_mich_bare_semi_headset      { quality = 1; price = 434; };
class rhsusf_mich_bare_tan      { quality = 1; price = 434; };
class rhsusf_mich_bare_tan_headset      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatd_alt_headset      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatd_headset      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatd_norotos      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatd_norotos_arc      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatd_norotos_arc_headset      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatd_norotos_headset      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatwd      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatwd_alt      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatwd_alt_headset      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatwd_headset      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatwd_norotos      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatwd_norotos_arc      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatwd_norotos_arc_headset      { quality = 1; price = 434; };
class rhsusf_mich_helmet_marpatwd_norotos_headset      { quality = 1; price = 434; };
class rhs_altyn_novisor      { quality = 1; price = 434; };
class rhs_altyn_novisor_bala      { quality = 1; price = 434; };
class rhs_altyn_novisor_ess      { quality = 1; price = 434; };
class rhs_altyn_novisor_ess_bala      { quality = 1; price = 434; };
class rhs_altyn_visordown      { quality = 1; price = 434; };
class rhs_altyn      { quality = 1; price = 434; };
class rhs_altyn_bala      { quality = 1; price = 434; };
class rhsusf_opscore_bk_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_bk      { quality = 1; price = 424; };
class rhsusf_opscore_coy_cover      { quality = 1; price = 424; };
class rhsusf_opscore_coy_cover_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_fg      { quality = 1; price = 424; };
class rhsusf_opscore_fg_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_fg_pelt_cam      { quality = 1; price = 424; };
class rhsusf_opscore_fg_pelt_nsw      { quality = 1; price = 424; };
class rhsusf_opscore_mc      { quality = 1; price = 424; };
class rhsusf_opscore_mc_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_mc_pelt_nsw      { quality = 1; price = 424; };
class rhsusf_opscore_mc_cover      { quality = 1; price = 424; };
class rhsusf_opscore_mc_cover_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_mc_cover_pelt_nsw      { quality = 1; price = 424; };
class rhsusf_opscore_mc_cover_pelt_cam      { quality = 1; price = 424; };
class rhsusf_opscore_paint      { quality = 1; price = 424; };
class rhsusf_opscore_paint_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_paint_pelt_nsw      { quality = 1; price = 424; };
class rhsusf_opscore_paint_pelt_nsw_cam      { quality = 1; price = 424; };
class rhsusf_opscore_rg_cover      { quality = 1; price = 424; };
class rhsusf_opscore_rg_cover_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_ut      { quality = 1; price = 424; };
class rhsusf_opscore_ut_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_ut_pelt_cam      { quality = 1; price = 424; };
class rhsusf_opscore_ut_pelt_nsw      { quality = 1; price = 424; };
class rhsusf_opscore_ut_pelt_nsw_cam      { quality = 1; price = 424; };
class rhsusf_opscore_mar_ut_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_mar_ut      { quality = 1; price = 424; };
class rhsusf_opscore_mar_fg_pelt      { quality = 1; price = 424; };
class rhsusf_opscore_mar_fg      { quality = 1; price = 424; };
class rhsusf_protech_helmet      { quality = 1; price = 415; };
class rhsusf_protech_helmet_ess      { quality = 1; price = 415; };
class rhsusf_protech_helmet_rhino      { quality = 1; price = 415; };
class rhsusf_protech_helmet_rhino_ess      { quality = 1; price = 415; };
class rhsgref_helmet_pasgt_3color_desert      { quality = 1; price = 434; };
class rhsgref_helmet_pasgt_3color_desert_rhino      { quality = 1; price = 434; };
class rhsgref_helmet_pasgt_altis_lizard      { quality = 1; price = 434; };
class rhsgref_helmet_pasgt_erdl      { quality = 1; price = 434; };
class rhsgref_helmet_pasgt_erdl_rhino      { quality = 1; price = 434; };
class rhsgref_helmet_pasgt_flecktarn      { quality = 1; price = 434; };
class rhsgref_helmet_pasgt_olive      { quality = 1; price = 434; };
class rhsgref_helmet_pasgt_woodland      { quality = 1; price = 434; };
class rhsgref_helmet_pasgt_woodland_rhino      { quality = 1; price = 434; };
class rhs_Booniehat2_marpatwd      { quality = 1; price = 110; };
class rhsgref_Booniehat_alpen      { quality = 1; price = 110; };
class rhssaf_Booniehat_digital      { quality = 1; price = 110; };
class rhssaf_Booniehat_md2camo      { quality = 1; price = 110; };
class rhssaf_Booniehat_woodland      { quality = 1; price = 110; };
class Exile_Headgear_GasMask      { quality = 4; price = 4500; };
	///////////////////////////////////////////////////////////////////////////////
	// Glasses
	///////////////////////////////////////////////////////////////////////////////
class G_Aviator      { quality = 1; price = 104; };
class G_Balaclava_TI_G_blk_F      { quality = 1; price = 104; };
class G_Balaclava_TI_G_tna_F      { quality = 1; price = 104; };
class G_Balaclava_TI_blk_F      { quality = 1; price = 104; };
class G_Balaclava_TI_tna_F      { quality = 1; price = 104; };
class G_Balaclava_blk      { quality = 1; price = 104; };
class G_Balaclava_combat      { quality = 1; price = 104; };
class G_Balaclava_lowprofile      { quality = 1; price = 104; };
class G_Balaclava_oli      { quality = 1; price = 104; };
class G_Bandanna_aviator      { quality = 1; price = 104; };
class G_Bandanna_beast      { quality = 1; price = 104; };
class G_Bandanna_blk      { quality = 1; price = 104; };
class G_Bandanna_khk      { quality = 1; price = 104; };
class G_Bandanna_oli      { quality = 1; price = 104; };
class G_Bandanna_shades      { quality = 1; price = 104; };
class G_Bandanna_sport      { quality = 1; price = 104; };
class G_Bandanna_tan      { quality = 1; price = 104; };
class G_Combat      { quality = 1; price = 104; };
class G_Combat_Goggles_tna_F      { quality = 1; price = 104; };
class G_Diving      { quality = 1; price = 104; };
class G_EyeProtectors_Earpiece_F      { quality = 1; price = 104; };
class G_EyeProtectors_F      { quality = 1; price = 104; };
class G_Goggles_VR      { quality = 1; price = 104; };
class G_I_Diving      { quality = 1; price = 104; };
class G_Lady_Blue      { quality = 1; price = 104; };
class G_Lady_Dark      { quality = 1; price = 104; };
class G_Lady_Mirror      { quality = 1; price = 104; };
class G_Lady_Red      { quality = 1; price = 104; };
class G_Lowprofile      { quality = 1; price = 104; };
class G_O_Diving      { quality = 1; price = 104; };
class G_Respirator_blue_F      { quality = 1; price = 104; };
class G_Respirator_white_F      { quality = 1; price = 104; };
class G_Respirator_yellow_F      { quality = 1; price = 104; };
class G_Shades_Black      { quality = 1; price = 104; };
class G_Shades_Blue      { quality = 1; price = 104; };
class G_Shades_Green      { quality = 1; price = 104; };
class G_Shades_Red      { quality = 1; price = 104; };
class G_Spectacles      { quality = 1; price = 104; };
class G_Spectacles_Tinted      { quality = 1; price = 104; };
class G_Sport_BlackWhite      { quality = 1; price = 104; };
class G_Sport_Blackred      { quality = 1; price = 104; };
class G_Sport_Blackyellow      { quality = 1; price = 104; };
class G_Sport_Checkered      { quality = 1; price = 104; };
class G_Sport_Greenblack      { quality = 1; price = 104; };
class G_Sport_Red      { quality = 1; price = 104; };
class G_Squares      { quality = 1; price = 104; };
class G_Squares_Tinted      { quality = 1; price = 104; };
class G_Tactical_Black      { quality = 1; price = 104; };
class G_Tactical_Clear      { quality = 1; price = 104; };
class G_WirelessEarpiece_F      { quality = 1; price = 104; };
class KA_MCU      { quality = 2; price = 750; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 190; };
	

	///////////////////////////////////////////////////////////////////////////////
	// Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk      { quality = 1; price = 190; };
class bipod_01_F_mtp      { quality = 1; price = 190; };
class bipod_01_F_snd      { quality = 1; price = 190; };
class bipod_02_F_blk      { quality = 1; price = 190; };
class bipod_02_F_hex      { quality = 1; price = 190; };
class bipod_02_F_tan      { quality = 1; price = 190; };
class bipod_03_F_blk      { quality = 1; price = 190; };
class bipod_03_F_oli      { quality = 1; price = 190; };
class muzzle_snds_338_black      { quality = 3; price = 590; };
class muzzle_snds_338_green      { quality = 3; price = 590; };
class muzzle_snds_338_sand      { quality = 3; price = 590; };
class muzzle_snds_93mmg      { quality = 3; price = 588; };
class muzzle_snds_93mmg_tan      { quality = 3; price = 588; };
class muzzle_snds_acp      { quality = 1; price = 194; };
class muzzle_snds_B      { quality = 3; price = 588; };
class muzzle_snds_H      { quality = 2; price = 390; };
class muzzle_snds_H_MG      { quality = 3; price = 590; };
class muzzle_snds_H_SW      { quality = 3; price = 590; };
class muzzle_snds_L      { quality = 1; price = 190; };
class muzzle_snds_M      { quality = 2; price = 390; };
class rhsusf_acc_anpeq15side      { quality = 2; price = 390; };
class rhsusf_acc_anpeq15      { quality = 2; price = 390; };
class rhsusf_acc_anpeq15A      { quality = 2; price = 390; };
class rhsusf_acc_anpeq15_light      { quality = 2; price = 390; };
class rhsusf_acc_M952V      { quality = 2; price = 390; };
class rhs_acc_perst3      { quality = 2; price = 390; };
class rhs_acc_perst3_top      { quality = 2; price = 390; };
class rhs_acc_perst3_2dp_h      { quality = 2; price = 390; };
class rhs_acc_perst3_2dp_light_h      { quality = 2; price = 390; };
class rhs_acc_2dpZenit      { quality = 2; price = 390; };
class rhs_acc_2dpZenit_ris      { quality = 2; price = 390; };
class rhs_acc_perst1ik      { quality = 2; price = 390; };
class rhs_acc_perst1ik_ris      { quality = 2; price = 390; };
class rhsusf_acc_anpeq15_bk      { quality = 2; price = 390; };
class rhsusf_acc_anpeq15_bk_light      { quality = 2; price = 390; };
class rhsusf_acc_SF3P556      { quality = 2; price = 390; };
class rhsusf_acc_SFMB556      { quality = 2; price = 390; };
class rhsusf_acc_nt4_black      { quality = 2; price = 390; };
class rhsusf_acc_nt4_tan      { quality = 2; price = 390; };
class rhsusf_acc_rotex5_grey      { quality = 2; price = 390; };
class rhsusf_acc_rotex5_tan      { quality = 2; price = 390; };
class rhsusf_acc_SR25S      { quality = 2; price = 390; };
class rhsusf_acc_M2010S      { quality = 2; price = 390; };
class rhs_acc_ak5      { quality = 2; price = 390; };
class rhs_acc_dtk1      { quality = 2; price = 390; };
class rhs_acc_dtk3      { quality = 2; price = 390; };
class rhs_acc_dtk4screws      { quality = 2; price = 390; };
class rhs_acc_dtk4long      { quality = 2; price = 390; };
class rhs_acc_dtk4short      { quality = 2; price = 390; };
class rhs_acc_tgpa      { quality = 2; price = 390; };
class rhs_acc_dtk1l      { quality = 2; price = 390; };
class rhs_acc_pbs1      { quality = 2; price = 390; };
class rhsusf_acc_omega9k      { quality = 2; price = 390; };
class rhs_acc_uuk      { quality = 2; price = 390; };
class rhsusf_acc_rotex_mp7      { quality = 2; price = 390; };
class rhsusf_acc_rotex_mp7_desert      { quality = 2; price = 390; };
class rhsusf_acc_rotex_mp7_winter      { quality = 2; price = 390; };
class rhsusf_acc_rotex_mp7_aor1      { quality = 2; price = 390; };
class rhsusf_acc_T1_high 		{ quality = 2; price = 390; };

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 4; price = 5000; };
	class I_UAV_01_backpack_F						{ quality = 4; price = 10000; };
	class I_UAV_06_backpack_F						{ quality = 4; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class RHS_DShkM_Gun_Bag						{ quality = 4; price = 15000; };
	class RHS_DShkM_TripodHigh_Bag						{ quality = 4; price = 11000; };
	class O_HMG_01_weapon_F 						{ quality = 4; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 4; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = QUALITY_LEVEL_9000; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
class optic_Aco      { quality = 1; price = 296; };
class optic_ACO_grn      { quality = 1; price = 296; };
class optic_ACO_grn_smg      { quality = 1; price = 296; };
class optic_Aco_smg      { quality = 1; price = 296; };
class optic_AMS      { quality = 1; price = 2086; };
class optic_AMS_khk      { quality = 1; price = 2086; };
class optic_AMS_snd      { quality = 1; price = 2086; };
class optic_Arco      { quality = 1; price = 392; };
class optic_DMS      { quality = 1; price = 1288; };
class optic_Hamr      { quality = 1; price = 392; };
class optic_Holosight      { quality = 1; price = 294; };
class optic_Holosight_smg      { quality = 1; price = 194; };
class optic_KHS_blk      { quality = 1; price = 2086; };
class optic_KHS_hex      { quality = 1; price = 2086; };
class optic_KHS_old      { quality = 1; price = 2086; };
class optic_KHS_tan      { quality = 1; price = 2086; };
class optic_LRPS      { quality = 1; price = 2484; };
class optic_MRCO      { quality = 1; price = 392; };
class optic_MRD      { quality = 1; price = 148; };
class optic_NVS      { quality = 1; price = 390; };
class optic_SOS      { quality = 1; price = 1686; };
class optic_Yorris      { quality = 1; price = 148; };
class sfp_optic_aimpoint      { quality = 1; price = 692; };
class sfp_optic_aimpoint_t1      { quality = 1; price = 692; };
class sfp_optic_3x_aimpoint      { quality = 1; price = 692; };
class sfp_optic_kikarsikte90b_10x      { quality = 1; price = 692; };

//////RHS Optics////////
class rhs_acc_1p29      { quality = 1; price = 692; };
class rhs_acc_1p63      { quality = 1; price = 692; };
class rhs_acc_1p78      { quality = 1; price = 692; };
class rhs_acc_1pn93_1      { quality = 1; price = 692; };
class rhs_acc_1pn93_2      { quality = 1; price = 692; };
class rhs_acc_dh520x56      { quality = 1; price = 692; };
class rhs_acc_ekp1      { quality = 1; price = 692; };
class rhs_acc_pgo7v      { quality = 1; price = 692; };
class rhs_acc_pkas      { quality = 1; price = 692; };
class rhs_acc_pso1m2      { quality = 1; price = 692; };
class rhs_acc_rakursPM      { quality = 1; price = 692; };
class rhs_weap_optic_smaw      { quality = 1; price = 692; };
class rhsusf_acc_ACOG      { quality = 1; price = 692; };
class rhsusf_acc_ACOG2      { quality = 1; price = 692; };
class rhsusf_acc_ACOG2_USMC      { quality = 1; price = 692; };
class rhsusf_acc_ACOG3      { quality = 1; price = 692; };
class rhsusf_acc_ACOG3_USMC      { quality = 1; price = 692; };
class rhsusf_acc_ACOG_MDO      { quality = 1; price = 692; };
class rhsusf_acc_ACOG_RMR      { quality = 1; price = 692; };
class rhsusf_acc_ACOG_USMC      { quality = 1; price = 692; };
class rhsusf_acc_ACOG_d      { quality = 1; price = 692; };
class rhsusf_acc_ACOG_pip      { quality = 1; price = 692; };
class rhsusf_acc_ACOG_wd      { quality = 1; price = 692; };
class rhsusf_acc_ELCAN      { quality = 1; price = 692; };
class rhsusf_acc_ELCAN_pip      { quality = 1; price = 692; };
class rhsusf_acc_EOTECH      { quality = 1; price = 692; };
class rhsusf_acc_LEUPOLDMK4      { quality = 1; price = 692; };
class rhsusf_acc_LEUPOLDMK4_2      { quality = 1; price = 692; };
class rhsusf_acc_M8541      { quality = 1; price = 692; };
class rhsusf_acc_M8541_low      { quality = 1; price = 692; };
class rhsusf_acc_M8541_low_d      { quality = 1; price = 692; };
class rhsusf_acc_M8541_low_wd      { quality = 1; price = 692; };
class rhsusf_acc_SpecterDR      { quality = 1; price = 692; };
class rhsusf_acc_SpecterDR_A_3d      { quality = 1; price = 692; };
class rhsusf_acc_SpecterDR_D      { quality = 1; price = 692; };
class rhsusf_acc_SpecterDR_OD      { quality = 1; price = 692; };
class rhsusf_acc_compm4      { quality = 1; price = 692; };
class rhsusf_acc_eotech_552      { quality = 1; price = 692; };
class rhsusf_acc_premier      { quality = 1; price = 692; };
class rhsusf_acc_premier_anpvs27      { quality = 1; price = 692; };
class rhsusf_acc_premier_low      { quality = 1; price = 692; };
class RHS_optic_maaws      { quality = 1; price = 692; };
	
	// Added in 1.0.3, but not used
	//class Exile_Item_SprayCan_Black				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Red					{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Green				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_White				{ quality = 2; price = 20; };
	//class Exile_Item_SprayCan_Blue				{ quality = 2; price = 20; };
	//class Exile_Item_BurlapSack					{ quality = 2; price = 5; };
	//class Exile_Item_Bullets_556					{ quality = 2; price = 5; };
	//class Exile_Item_Bullets_762					{ quality = 2; price = 5; };
	//class Exile_Item_WeaponParts					{ quality = 2; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
class Exile_Item_EMRE      { quality = 3; price = 36; };
class Exile_Item_GloriousKnakworst      { quality = 3; price = 36; };
class Exile_Item_Surstromming      { quality = 3; price = 37; };
class Exile_Item_SausageGravy      { quality = 2; price = 44; };
class Exile_Item_Catfood      { quality = 2; price = 47; };
class Exile_Item_ChristmasTinner      { quality = 2; price = 47; };
class Exile_Item_BBQSandwich      { quality = 2; price = 47; };
class Exile_Item_Dogfood      { quality = 1; price = 61; };
class Exile_Item_BeefParts      { quality = 1; price = 65; };
class Exile_Item_Cheathas      { quality = 1; price = 65; };
class Exile_Item_Noodles      { quality = 1; price = 63; };
class Exile_Item_SeedAstics      { quality = 1; price = 65; };
class Exile_Item_Raisins      { quality = 1; price = 67; };
class Exile_Item_Moobar      { quality = 1; price = 69; };
class Exile_Item_InstantCoffee      { quality = 1; price = 35; };
class Exile_Item_Can_Empty      { quality = 1; price = 135; };
class Exile_Item_PlasticBottleCoffee      { quality = 3; price = 210; };
class Exile_Item_PowerDrink      { quality = 3; price = 185; };
class Exile_Item_PlasticBottleFreshWater      { quality = 3; price = 35; };
class Exile_Item_Beer      { quality = 1; price = 2065; };
class Exile_Item_EnergyDrink      { quality = 2; price = 148; };
class Exile_Item_MountainDupe      { quality = 1; price = 85; };
class Exile_Item_PlasticBottleEmpty      { quality = 1; price = 35; };
class Exile_Item_CatSharkFilet_Raw      { quality = 1; price = 35; };
class Exile_Item_TunaFilet_Raw      { quality = 1; price = 35; };
class Exile_Item_AlsatianSteak_Raw      { quality = 1; price = 35; };
class Exile_Item_TurtleFilet_Raw      { quality = 1; price = 35; };
class Exile_Item_SheepSteak_Raw      { quality = 1; price = 800; };
class Exile_Item_FinSteak_Raw      { quality = 1; price = 35; };
class Exile_Item_GoatSteak_Raw      { quality = 1; price = 900; };
class Exile_Item_ChickenFilet_Raw      { quality = 1; price = 900; };
class Exile_Item_RoosterFilet_Raw      { quality = 1; price = 900; };
class Exile_Item_MackerelFilet_Raw      { quality = 1; price = 35; };
class Exile_Item_MulletFilet_Raw      { quality = 1; price = 800; };
class Exile_Item_OrnateFilet_Raw      { quality = 1; price = 35; };
class Exile_Item_RabbitSteak_Raw      { quality = 1; price = 800; };
class Exile_Item_SalemaFilet_Raw      { quality = 1; price = 35; };
class Exile_Item_SnakeFilet_Raw      { quality = 1; price = 35; };
	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////
class Exile_Item_InstaDoc      { quality = 3; price = 715; };
class Exile_Item_Vishpirin      { quality = 2; price = 240; };
class Exile_Item_Bandage      { quality = 1; price = 115; };
class Exile_Item_Defibrillator      { quality = 1; price = 3030; };
class Exile_Item_Heatpack      { quality = 1; price = 1230; };

	//class Exile_Item_Defibrillator				{ quality = 1; price = 7500; };

	///////////////////////////////////////////////////////////////////////////////
	// Tools-Hardware-mats
	///////////////////////////////////////////////////////////////////////////////
class Exile_Item_CamoTentKit      { quality = 1; price = 190; };
class Exile_Item_FloodLightKit      { quality = 1; price = 190; };
class Exile_Item_StorageCrateKit      { quality = 1; price = 125; };
class Exile_Item_WoodDoorKit      { quality = 1; price = 140; };
class Exile_Item_WoodFloorKit      { quality = 1; price = 140; };
class Exile_Item_WoodFloorPortKit      { quality = 1; price = 140; };
class Exile_Item_WoodGateKit      { quality = 1; price = 140; };
class Exile_Item_WoodPlank      { quality = 1; price = 180; };
class Exile_Item_WoodStairsKit      { quality = 1; price = 140; };
class Exile_Item_WoodSupportKit      { quality = 1; price = 140; };
class Exile_Item_WoodWallKit      { quality = 1; price = 140; };
class Exile_Item_WoodWallHalfKit      { quality = 1; price = 170; };
class Exile_Item_WoodWindowKit      { quality = 1; price = 140; };
class Exile_Item_PortableGeneratorKit      { quality = 2; price = 1000; };
class Exile_Item_CarWheel      { quality = 1; price = 100; };
class Exile_Item_Cement      { quality = 1; price = 100; };
class Exile_Item_CookingPot      { quality = 1; price = 180; };
class Exile_Item_DuctTape      { quality = 1; price = 2500; };
class Exile_Item_ExtensionCord      { quality = 1; price = 195; };
class Exile_Item_FuelCanisterEmpty      { quality = 1; price = 100; };
class Exile_Item_JunkMetal      { quality = 1; price = 175; };
class Exile_Item_LightBulb      { quality = 1; price = 195; };
class Exile_Item_Matches      { quality = 1; price = 199; };
class Exile_Item_MetalBoard      { quality = 1; price = 350; };
class Exile_Item_MetalHedgehogKit      { quality = 1; price = 150; };
class Exile_Item_MetalPole      { quality = 1; price = 350; };
class Exile_Item_MetalScrews      { quality = 1; price = 300; };
class Exile_Item_MetalWire      { quality = 1; price = 195; };
class Exile_Item_Rope      { quality = 1; price = 190; };
class Exile_Item_Sand      { quality = 1; price = 100; };
class Exile_Item_ZipTie      { quality = 1; price = 195; };
class Exile_Item_SleepingMat      { quality = 1; price = 170; };
class Exile_Melee_Axe      { quality = 1; price = 1000; };
class Exile_Item_CanOpener      { quality = 1; price = 1000; };
class Exile_Item_Handsaw      { quality = 1; price = 1000; };
class Exile_Item_Pliers      { quality = 2; price = 2000; };
class Exile_Item_Grinder      	{ quality = 2; price = 3500; };
class Exile_Magazine_Battery      { quality = 2; price = 4000; };
class Exile_Item_Foolbox      { quality = 1; price = 2500; };
class Exile_Item_CordlessScrewdriver      { quality = 1; price = 970; };
class Exile_Item_FireExtinguisher      { quality = 1; price = 970; };
class Exile_Item_Hammer      { quality = 1; price = 990; };
class Exile_Item_OilCanister      { quality = 1; price = 970; };
class Exile_Item_Screwdriver      { quality = 1; price = 990; };
class Exile_Item_Shovel      { quality = 1; price = 1000; };
class Exile_Melee_Shovel		{ quality = 1; price = 1000; };
class Exile_Item_Wrench      { quality = 1; price = 990; };
class Exile_Item_Laptop      { quality = 4; price = 10000; };
class Exile_Item_BaseCameraKit      { quality = 4; price = 5000; };
class Exile_Item_ThermalScannerPro      { quality = 6; price = 60000; };
class Exile_Item_SafeKit      { quality = 3; price = 60000; };
class Exile_Item_SafeSmallKit	{ quality = 2; price = 40000; };
class Exile_Item_CodeLock      { quality = 2; price = 15000; };
class Exile_Item_FortificationUpgrade      { quality = 2; price = 5000; };
class rhs_assault_umbts_engineer		{quality = 1; price = 250; };



	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 2; };
	class ItemGPS									{ quality = 2; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 3; price = 200; };
	class Laserdesignator							{ quality = 6; price = 750; };
	class Laserdesignator_02						{ quality = 6; price = 750; };
	class Laserdesignator_03						{ quality = 6; price = 750; };
	//class NVGoggles      { quality = 1; price = 104; };
	class Exile_Item_XM8							{ quality = 2; price = 20; };
	class Exile_Item_MobilePhone					{ quality = 6; price = 500; };


	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
class sfp_backpack_stridssack2000      { quality = 3; price = 389; };
class B_AssaultPack_blk      { quality = 1; price = 390; };
class B_AssaultPack_cbr      { quality = 1; price = 390; };
class B_AssaultPack_dgtl      { quality = 1; price = 390; };
class B_AssaultPack_khk      { quality = 1; price = 390; };
class B_AssaultPack_mcamo      { quality = 1; price = 390; };
class B_AssaultPack_rgr      { quality = 1; price = 390; };
class B_AssaultPack_sgg      { quality = 1; price = 390; };
class B_FieldPack_blk      { quality = 2; price = 470; };
class B_FieldPack_cbr      { quality = 2; price = 470; };
class B_FieldPack_ocamo      { quality = 2; price = 470; };
class B_FieldPack_oucamo      { quality = 2; price = 470; };
class B_TacticalPack_blk      { quality = 3; price = 550; };
class B_TacticalPack_rgr      { quality = 3; price = 550; };
class B_TacticalPack_ocamo      { quality = 3; price = 550; };
class B_TacticalPack_mcamo      { quality = 3; price = 550; };
class B_TacticalPack_oli      { quality = 3; price = 550; };
class B_Kitbag_cbr      { quality = 3; price = 550; };
class B_Kitbag_mcamo      { quality = 3; price = 550; };
class B_Kitbag_sgg      { quality = 3; price = 550; };
class B_Carryall_cbr      { quality = 4; price = 660; };
class B_Carryall_khk      { quality = 4; price = 660; };
class B_Carryall_mcamo      { quality = 4; price = 660; };
class B_Carryall_ocamo      { quality = 4; price = 660; };
class B_Carryall_oli      { quality = 4; price = 660; };
class B_Carryall_oucamo      { quality = 4; price = 660; };
class B_Bergen_blk      { quality = 2; price = 480; };
class B_Bergen_mcamo      { quality = 2; price = 480; };
class B_Bergen_rgr      { quality = 2; price = 480; };
class B_Bergen_sgg      { quality = 2; price = 480; };
class B_Bergen_mcamo_F      { quality = 6; price = 960; };
class B_Bergen_dgtl_F      { quality = 6; price = 960; };
class B_Bergen_hex_F      { quality = 6; price = 960; };
class B_Bergen_tna_F      { quality = 6; price = 960; };
class B_HuntingBackpack      { quality = 1; price = 270; };
class B_OutdoorPack_blk      { quality = 1; price = 270; };
class B_OutdoorPack_blu      { quality = 1; price = 270; };
class B_OutdoorPack_tan      { quality = 1; price = 270; };
class B_Parachute      { quality = 3; price = 250; };


	///////////////////////////////////////////////////////////////////////////////
	// RHS Backpacks
	///////////////////////////////////////////////////////////////////////////////
class rhsusf_assault_eagleaiii_coy      { quality = 1; price = 390; };
class rhsusf_assault_eagleaiii_ocp      { quality = 1; price = 390; };
class rhsusf_assault_eagleaiii_ucp      { quality = 1; price = 390; };
class rhsusf_falconii_coy      { quality = 1; price = 390; };
class rhsusf_falconii_mc      { quality = 1; price = 390; };
class rhsusf_falconii      { quality = 1; price = 390; };
class rhs_assault_umbts      { quality = 1; price = 370; };
class rhs_assault_umbts_engineer_empty      { quality = 1; price = 370; };
class rhs_medic_bag      { quality = 1; price = 331; };
class rhs_sidor      { quality = 1; price = 370; };
class rhssaf_kitbag_md2camo      { quality = 2; price = 530; };
class rhssaf_kitbag_digital      { quality = 2; price = 530; };
class rhssaf_kitbag_smb      { quality = 2; price = 530; };
class rhssaf_alice_md2camo      { quality = 3; price = 610; };
class rhssaf_alice_smb      { quality = 3; price = 610; };
class rhsgref_hidf_alicepack      { quality = 3; price = 610; };
class rhsgref_wdl_alicepack      { quality = 3; price = 610; };
class rhsgref_ttsko_alicepack      { quality = 3; price = 610; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition-Flare-Smoke
	///////////////////////////////////////////////////////////////////////////////
class 100Rnd_65x39_caseless_mag      { quality = 3; price = 205; };
class 100Rnd_65x39_caseless_mag_Tracer      { quality = 3; price = 205; };
class 10Rnd_127x54_Mag      { quality = 1; price = 418; };
class 10Rnd_338_Mag      { quality = 1; price = 52; };
class 10Rnd_762x54_Mag      { quality = 1; price = 54; };
class 10Rnd_93x64_DMR_05_Mag      { quality = 1; price = 52; };
class 11Rnd_45ACP_Mag      { quality = 1; price = 48; };
class 130Rnd_338_Mag      { quality = 2; price = 164; };
class 150Rnd_762x54_Box      { quality = 3; price = 232; };
class 150Rnd_762x54_Box_Tracer      { quality = 3; price = 232; };
class 150Rnd_93x64_Mag      { quality = 1; price = 138; };
class 16Rnd_9x21_Mag      { quality = 1; price = 53; };
class 200Rnd_65x39_cased_Box      { quality = 4; price = 320; };
class 200Rnd_65x39_cased_Box_Tracer      { quality = 4; price = 320; };
class 20Rnd_556x45_UW_mag      { quality = 4; price = 182; };
class 20Rnd_762x51_Mag      { quality = 1; price = 60; };
class 30Rnd_45ACP_Mag_SMG_01      { quality = 1; price = 64; };
class 30Rnd_45ACP_Mag_SMG_01_tracer_green      { quality = 1; price = 64; };
class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red      { quality = 1; price = 64; };
class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow      { quality = 1; price = 64; };
class 30Rnd_556x45_Stanag      { quality = 2; price = 110; };
class 30Rnd_556x45_Stanag_Tracer_Green      { quality = 2; price = 110; };
class 30Rnd_556x45_Stanag_Tracer_Red      { quality = 2; price = 110; };
class 30Rnd_556x45_Stanag_Tracer_Yellow      { quality = 2; price = 110; };
class 30Rnd_65x39_caseless_green      { quality = 1; price = 70; };
class 30Rnd_65x39_caseless_green_mag_Tracer      { quality = 1; price = 70; };
class 30Rnd_65x39_caseless_mag      { quality = 1; price = 70; };
class 30Rnd_65x39_caseless_mag_Tracer      { quality = 1; price = 70; };
class 30Rnd_9x21_Mag      { quality = 1; price = 63; };
class 30Rnd_9x21_Yellow_Mag      { quality = 1; price = 63; };
class 30Rnd_9x21_Green_Mag      { quality = 1; price = 63; };
class 30Rnd_9x21_Red_Mag      { quality = 1; price = 63; };
class 5Rnd_127x108_APDS_Mag      { quality = 3; price = 169; };
class 5Rnd_127x108_Mag      { quality = 3; price = 169; };
class 6Rnd_45ACP_Cylinder      { quality = 1; price = 46; };
class 6Rnd_GreenSignal_F      { quality = 1; price = 34; };
class 6Rnd_RedSignal_F      { quality = 1; price = 34; };
class 7Rnd_408_Mag      { quality = 1; price = 57; };
class 9Rnd_45ACP_Mag      { quality = 1; price = 47; };
class Exile_Magazine_30Rnd_545x39_AK_Green      { quality = 1; price = 74; };
class Exile_Magazine_30Rnd_545x39_AK_Red      { quality = 1; price = 74; };
class Exile_Magazine_30Rnd_545x39_AK_White      { quality = 1; price = 74; };
class Exile_Magazine_30Rnd_545x39_AK_Yellow      { quality = 1; price = 87; };
class Exile_Magazine_45Rnd_545x39_RPK_Green      { quality = 1; price = 87; };
class Exile_Magazine_75Rnd_545x39_RPK_Green      { quality = 1; price = 119; };
class Exile_Magazine_20Rnd_762x51_DMR      { quality = 1; price = 64; };
class Exile_Magazine_20Rnd_762x51_DMR_Yellow      { quality = 2; price = 142; };
class Exile_Magazine_20Rnd_762x51_DMR_Red      { quality = 1; price = 132; };
class Exile_Magazine_20Rnd_762x51_DMR_Green      { quality = 1; price = 102; };
class Exile_Magazine_10Rnd_303      { quality = 1; price = 68; };
class Exile_Magazine_100Rnd_762x54_PK_Green      { quality = 1; price = 68; };
class Exile_Magazine_7Rnd_45ACP      { quality = 1; price = 142; };
class Exile_Magazine_8Rnd_9x18      { quality = 1; price = 55; };
class Exile_Magazine_30Rnd_545x39_AK      { quality = 1; price = 72; };
class Exile_Magazine_6Rnd_45ACP      { quality = 1; price = 48; };
class Exile_Magazine_5Rnd_22LR      { quality = 1; price = 47; };
class Exile_Magazine_10Rnd_762x54      { quality = 1; price = 35; };
class Exile_Magazine_10Rnd_9x39      { quality = 1; price = 35; };
class Exile_Magazine_20Rnd_9x39      { quality = 1; price = 45; };
class Exile_Magazine_8Rnd_74Slug      { quality = 1; price = 33; };
class 30Rnd_9x21_Mag_SMG_02      { quality = 1; price = 55; };
class 30Rnd_9x21_Mag_SMG_02_Tracer_Red      { quality = 1; price = 55; };
class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow      { quality = 1; price = 55; };
class 30Rnd_9x21_Mag_SMG_02_Tracer_Green      { quality = 1; price = 55; };
class 30Rnd_580x42_Mag_F      { quality = 1; price = 55; };
class 30Rnd_580x42_Mag_Tracer_F      { quality = 1; price = 55; };
class 100Rnd_580x42_Mag_F      { quality = 1; price = 125; };
class 100Rnd_580x42_Mag_Tracer_F      { quality = 1; price = 125; };
class 20Rnd_650x39_Cased_Mag_F      { quality = 1; price = 225; };
class 10Rnd_50BW_Mag_F      { quality = 1; price = 35; };
class 150Rnd_556x45_Drum_Mag_F      { quality = 1; price = 175; };
class 150Rnd_556x45_Drum_Mag_Tracer_F      { quality = 1; price = 175; };
class 30Rnd_762x39_Mag_F      { quality = 1; price = 55; };
class 30Rnd_762x39_Mag_Green_F      { quality = 1; price = 55; };
class 30Rnd_762x39_Mag_Tracer_F      { quality = 1; price = 55; };
class 30Rnd_762x39_Mag_Tracer_Green_F      { quality = 1; price = 55; };
class 30Rnd_545x39_Mag_F      { quality = 1; price = 55; };
class 30Rnd_545x39_Mag_Green_F      { quality = 1; price = 55; };
class 30Rnd_545x39_Mag_Tracer_F      { quality = 1; price = 55; };
class 30Rnd_545x39_Mag_Tracer_Green_F      { quality = 1; price = 55; };
class 200Rnd_556x45_Box_F      { quality = 1; price = 225; };
class 200Rnd_556x45_Box_Red_F      { quality = 1; price = 225; };
class 200Rnd_556x45_Box_Tracer_F      { quality = 1; price = 225; };
class 200Rnd_556x45_Box_Tracer_Red_F      { quality = 1; price = 225; };
class 10Rnd_9x21_Mag      { quality = 1; price = 35; };
class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag      { quality = 1; price = 490; };
class Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      { quality = 1; price = 490; };
class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag      { quality = 1; price = 512; };
class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag      { quality = 1; price = 509; };
class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag      { quality = 1; price = 552; };
class Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag      { quality = 1; price = 552; };
class Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      { quality = 1; price = 507; };
class Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag      { quality = 1; price = 507; };
class Exile_Magazine_10Rnd_765x17_SA61      { quality = 1; price = 495; };
class Exile_Magazine_20Rnd_765x17_SA61      { quality = 1; price = 505; };
class Exile_Magazine_10Rnd_127x99_m107      { quality = 1; price = 512; };
class Exile_Magazine_5Rnd_127x108_APDS_KSVK      { quality = 1; price = 509; };
class Exile_Magazine_5Rnd_127x108_KSVK      { quality = 1; price = 509; };
class Chemlight_blue      { quality = 1; price = 39; };
class Chemlight_green      { quality = 1; price = 37; };
class Chemlight_red      { quality = 1; price = 37; };
class FlareGreen_F      { quality = 1; price = 37; };
class FlareRed_F      { quality = 1; price = 37; };
class FlareWhite_F      { quality = 1; price = 37; };
class FlareYellow_F      { quality = 1; price = 37; };
class UGL_FlareGreen_F      { quality = 1; price = 37; };
class UGL_FlareRed_F      { quality = 1; price = 37; };
class UGL_FlareWhite_F      { quality = 1; price = 29; };
class UGL_FlareYellow_F      { quality = 1; price = 29; };
class 3Rnd_UGL_FlareGreen_F      { quality = 1; price = 13; };
class 3Rnd_UGL_FlareRed_F      { quality = 1; price = 13; };
class 3Rnd_UGL_FlareWhite_F      { quality = 1; price = 37; };
class 3Rnd_UGL_FlareYellow_F      { quality = 1; price = 37; };
class SmokeShell      { quality = 1; price = 37; };
class SmokeShellBlue      { quality = 1; price = 37; };
class SmokeShellGreen      { quality = 1; price = 37; };
class SmokeShellOrange      { quality = 1; price = 37; };
class SmokeShellPurple      { quality = 1; price = 37; };
class SmokeShellRed      { quality = 1; price = 37; };
class SmokeShellYellow      { quality = 1; price = 37; };
class 1Rnd_Smoke_Grenade_shell      { quality = 1; price = 37; };
class 1Rnd_SmokeBlue_Grenade_shell      { quality = 1; price = 37; };
class 1Rnd_SmokeGreen_Grenade_shell      { quality = 1; price = 37; };
class 1Rnd_SmokeOrange_Grenade_shell      { quality = 1; price = 37; };
class 1Rnd_SmokePurple_Grenade_shell      { quality = 1; price = 37; };
class 1Rnd_SmokeRed_Grenade_shell      { quality = 1; price = 29; };
class 1Rnd_SmokeYellow_Grenade_shell      { quality = 1; price = 29; };
class 3Rnd_Smoke_Grenade_shell      { quality = 1; price = 13; };
class 3Rnd_SmokeBlue_Grenade_shell      { quality = 1; price = 13; };
class 3Rnd_SmokeGreen_Grenade_shell      { quality = 1; price = 13; };
class 3Rnd_SmokeOrange_Grenade_shell      { quality = 1; price = 13; };
class 3Rnd_SmokePurple_Grenade_shell      { quality = 1; price = 13; };
class 3Rnd_SmokeRed_Grenade_shell      { quality = 1; price = 13; };
class 3Rnd_SmokeYellow_Grenade_shell      { quality = 1; price = 13; };
class rhsusf_mag_7x45acp_MHP      { quality = 1; price = 47; };
class sfp_30rnd_556x45_stanag_plastic      { quality = 1; price = 67; };
class sfp_50rd_762x51_ksp58      { quality = 2; price = 108; };
class sfp_100Rnd_762x51_ksp58      { quality = 2; price = 158; };
class sfp_249Rnd_762x51_ksp58      { quality = 2; price = 307; };
class sfp_200rd_556x45_ksp90      { quality = 2; price = 258; };
class sfp_9rnd_762x51_psg90      { quality = 2; price = 67; };
class sfp_9rnd_762x51_psg90_prick      { quality = 2; price = 67; };
class sfp_9rnd_762x51_psg90_tracer      { quality = 2; price = 67; };
class sfp_20rnd_762_51_ak4      { quality = 2; price = 78; };
class sfp_36Rnd_9mm_kpistm45      { quality = 2; price = 94; };
class rhs_mag_9x18_12_57N181S      { quality = 1; price = 50; };
class rhs_mag_9x19_17      { quality = 1; price = 50; };
class rhs_mag_30Rnd_556x45_Mk318_Stanag      { quality = 1; price = 70; };
class rhs_mag_30Rnd_556x45_Mk262_Stanag      { quality = 1; price = 71; };
class rhs_mag_30Rnd_556x45_M855A1_Stanag      { quality = 1; price = 70; };
class rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer      { quality = 1; price = 70; };
class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red      { quality = 1; price = 70; };
class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green      { quality = 1; price = 70; };
class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow      { quality = 1; price = 70; };
class rhs_200rnd_556x45_M_SAW      { quality = 1; price = 212; };
class rhs_200rnd_556x45_B_SAW      { quality = 1; price = 212; };
class rhs_200rnd_556x45_T_SAW      { quality = 1; price = 212; };
class rhsusf_50Rnd_762x51      { quality = 1; price = 75; };
class rhsusf_50Rnd_762x51_m993      { quality = 1; price = 75; };
class rhsusf_50Rnd_762x51_m80a1epr      { quality = 1; price = 75; };
class rhsusf_100Rnd_762x51      { quality = 1; price = 120; };
class rhsusf_100Rnd_762x51_m993      { quality = 1; price = 120; };
class rhsusf_100Rnd_762x51_m80a1epr      { quality = 1; price = 120; };
class rhsusf_8Rnd_00Buck      { quality = 1; price = 47; };
class rhsusf_8Rnd_Slug      { quality = 1; price = 77; };
class rhsusf_20Rnd_762x51_m993_Mag      { quality = 1; price = 60; };
class rhsusf_5Rnd_300winmag_xm2010      { quality = 1; price = 61; };
class rhs_30Rnd_762x39mm      { quality = 1; price = 65; };
class rhs_30Rnd_762x39mm_tracer      { quality = 1; price = 65; };
class rhs_30Rnd_762x39mm_89      { quality = 1; price = 65; };
class rhs_30Rnd_545x39_AK      { quality = 1; price = 66; };
class rhs_30Rnd_545x39_AK_no_tracers      { quality = 1; price = 66; };
class rhs_30Rnd_545x39_7N10_AK      { quality = 1; price = 66; };
class rhs_30Rnd_545x39_7N22_AK      { quality = 1; price = 66; };
class rhs_30Rnd_545x39_AK_green      { quality = 1; price = 66; };
class rhs_45Rnd_545X39_AK      { quality = 1; price = 81; };
class rhs_45Rnd_545X39_7N10_AK      { quality = 1; price = 81; };
class rhs_45Rnd_545X39_7N22_AK      { quality = 1; price = 81; };
class rhs_45Rnd_545X39_AK_Green      { quality = 1; price = 81; };
class rhs_100Rnd_762x54mmR      { quality = 1; price = 138; };
class rhs_100Rnd_762x54mmR_green      { quality = 1; price = 138; };
class rhs_10Rnd_762x54mmR_7N1      { quality = 1; price = 48; };
class rhsusf_mag_10Rnd_STD_50BMG_M33      { quality = 1; price = 33; };
class rhsusf_mag_10Rnd_STD_50BMG_mk211      { quality = 1; price = 494; };
class rhsusf_mag_40Rnd_46x30_AP      { quality = 1; price = 75; };
class rhsusf_mag_40Rnd_46x30_FMJ      { quality = 1; price = 75; };
class rhsusf_mag_40Rnd_46x30_JHP      { quality = 1; price = 78; };
class rhs_5Rnd_338lapua_t5000      { quality = 1; price = 60; };
class rhsusf_5Rnd_762x51_m118_special_Mag      { quality = 1; price = 53; };
class rhsusf_5Rnd_762x51_m993_Mag      { quality = 1; price = 53; };
class rhsusf_5Rnd_762x51_m62_Mag      { quality = 1; price = 53; };
class rhsusf_10Rnd_762x51_m62_Mag      { quality = 1; price = 58; };
class rhsusf_10Rnd_762x51_m993_Mag      { quality = 1; price = 58; };
class rhsusf_10Rnd_762x51_m118_special_Mag      { quality = 1; price = 58; };
class rhsusf_mag_15Rnd_9x19_FMJ      { quality = 1; price = 53; };
class rhsusf_mag_15Rnd_9x19_JHP      { quality = 1; price = 53; };
class rhsusf_mag_17Rnd_9x19_JHP      { quality = 1; price = 55; };
class rhsusf_mag_17Rnd_9x19_FMJ      { quality = 1; price = 55; };
class rhs_mag_9x18_8_57N181S      { quality = 1; price = 43; };
class rhs_mag_9x19mm_7n31_44      { quality = 1; price = 43; };
class rhs_mag_9x19mm_7n21_44      { quality = 1; price = 43; };
class rhs_mag_9x19mm_7n31_20      { quality = 1; price = 46; };
class rhsusf_5Rnd_00Buck      { quality = 1; price = 42; };
class rhsusf_5Rnd_Slug      { quality = 1; price = 42; };
class rhsgref_5Rnd_762x54_m38      { quality = 1; price = 42; };
class rhs_mag_9x19mm_7n21_20      { quality = 1; price = 46; };
class rhs_20rnd_9x39mm_SP5      { quality = 1; price = 46; };
class rhs_20rnd_9x39mm_SP6      { quality = 1; price = 46; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives-launcher-rockets
	///////////////////////////////////////////////////////////////////////////////
class HandGrenade      { quality = 1; price = 250; };
class MiniGrenade      { quality = 1; price = 214; };
class B_IR_Grenade      { quality = 1; price = 92; };
class O_IR_Grenade      { quality = 1; price = 92; };
class I_IR_Grenade      { quality = 1; price = 92; };
class 1Rnd_HE_Grenade_shell      { quality = 1; price = 268; };
class 3Rnd_HE_Grenade_shell      { quality = 1; price = 744; };
class APERSBoundingMine_Range_Mag      { quality = 2; price = 384; };
class APERSMine_Range_Mag      { quality = 2; price = 184; };
class APERSTripMine_Wire_Mag      { quality = 2; price = 284; };
class ClaymoreDirectionalMine_Remote_Mag      { quality = 2; price = 784; };
class DemoCharge_Remote_Mag      { quality = 2; price = 884; };
class IEDLandBig_Remote_Mag      { quality = 2; price = 924; };
class IEDLandSmall_Remote_Mag      { quality = 2; price = 1064; };
class IEDUrbanBig_Remote_Mag      { quality = 2; price = 1124; };
class IEDUrbanSmall_Remote_Mag      { quality = 2; price = 1114; };
class SatchelCharge_Remote_Mag      { quality = 2; price = 1924; };
class SLAMDirectionalMine_Wire_Mag      { quality = 2; price = 2284; };
class ATMine_Range_Mag      { quality = 2; price = 2484; };
class rhs_weap_fim92      { quality = 2; price = 15000; };
class rhs_weap_rpg18      { quality = 2; price = 3900; };
class rhs_weap_rshg2      { quality = 2; price = 3900; };
class rhs_weap_smaw_green      { quality = 2; price = 5000; };
class rhs_weap_M136      { quality = 2; price = 3900; };
class rhs_weap_M136_hedp      { quality = 2; price = 3900; };
class rhs_weap_M136_hp      { quality = 2; price = 3900; };
class rhs_weap_m72a7      { quality = 2; price = 3900; };
class rhs_weap_maaws      { quality = 2; price = 5000; };
class rhs_weap_rpg7      { quality = 2; price = 4500; };
class rhs_weap_rpg26      { quality = 2; price = 3900; };
class rhs_weap_strela      { quality = 2; price = 5500; };
class rhs_weap_igla      { quality = 2; price = 12500; };
class rhs_mag_9k32_rocket      { quality = 2; price = 2500; };
class rhs_mag_9k38_rocket      { quality = 2; price = 4500; };
class rhs_fim92_mag      { quality = 2; price = 5000; };
class rhs_rpg7_PG7VL_mag      { quality = 2; price = 1900; };
class rhs_rpg7_PG7V_mag      { quality = 2; price = 1900; };
class rhs_rpg7_PG7VR_mag      { quality = 2; price = 1900; };
class rhs_rpg7_TBG7V_mag      { quality = 2; price = 1900; };
class rhs_rpg7_OG7V_mag      { quality = 2; price = 1900; };
class rhs_rpg7_type69_airburst_mag      { quality = 2; price = 1900; };
class rhs_mag_smaw_HEAA      { quality = 2; price = 1900; };
class rhs_mag_smaw_HEDP      { quality = 2; price = 1900; };
class rhs_mag_smaw_SR      { quality = 2; price = 500; };
class rhs_mag_maaws_HEAT      { quality = 2; price = 1900; };
class rhs_mag_maaws_HEDP      { quality = 2; price = 1900; };
class rhs_mag_maaws_HE      { quality = 2; price = 1900; };
class rhs_mag_maaws_SMOKE      { quality = 2; price = 500; };
class rhs_mag_maaws_ILLUM      { quality = 2; price = 500; };
class sfp_rbs17_support_bag      { quality = 3; price = 1100; };
class sfp_rbs17_weapon_bag      { quality = 3; price = 29900; };
class sfp_rbs17_missile_bag      { quality = 3; price = 5900; };
class sfp_rbs55_support_bag      { quality = 3; price = 1100; };
class sfp_rbs55_weapon_bag      { quality = 3; price = 11900; };
class sfp_rbs56_support_bag      { quality = 3; price = 1100; };
class sfp_rbs56_weapon_bag      { quality = 3; price = 11900; };
class sfp_rbs70_support_bag      { quality = 3; price = 1100; };
class sfp_rbs70_weapon_bag      { quality = 3; price = 20900; };
class sfp_grkm84_support_bag      { quality = 3; price = 1100; };
class sfp_grkm84_weapon_bag      { quality = 3; price = 14900; };
class rhs_weap_fgm148			{ quality = 4; price = 25000;};
class rhs_fgm148_magazine_AT		{ quality = 4; price = 5000;};
class rhssaf_mine_mrud_c_mag      { quality = 3; price = 2000; };
class rhs_weap_m32    { quality = 2; price = 3900; };
class rhsusf_mag_6Rnd_M441_HE      { quality = 1; price = 1500; };
class rhsusf_mag_6Rnd_M433_HEDP     { quality = 1; price = 1500; };
class rhsusf_mag_6Rnd_M397_HET     { quality = 1; price = 1500; };


	///////////////////////////////////////////////////////////////////////////////
	// Weapons
	///////////////////////////////////////////////////////////////////////////////
class Exile_Weapon_Makarov      { quality = 1; price = 670; };
class Exile_Weapon_Taurus      { quality = 1; price = 670; };
class Exile_Weapon_TaurusGold      { quality = 1; price = 670; };
class hgun_P07_F      { quality = 1; price = 670; };
class hgun_Pistol_Signal_F      { quality = 1; price = 870; };
class hgun_Pistol_heavy_01_F      { quality = 1; price = 870; };
class hgun_Pistol_heavy_02_F      { quality = 1; price = 670; };
class rhsusf_weap_glock17g4      { quality = 1; price = 409; };
class rhsusf_weap_m9      { quality = 1; price = 409; };
class rhsusf_weap_m1911a1      { quality = 1; price = 409; };
class rhs_weap_pp2000_folded      { quality = 1; price = 409; };
class rhs_weap_pya      { quality = 1; price = 409; };
class rhs_weap_makarov_pm      { quality = 1; price = 409; };
class hgun_ACPC2_F      { quality = 1; price = 409; };
class hgun_Rook40_F      { quality = 1; price = 409; };
class Exile_Weapon_Colt1911      { quality = 1; price = 409; };
class sfp_ak5c      { quality = 1; price = 659; };
class sfp_ak5c_m203      { quality = 1; price = 659; };
class sfp_ak4b      { quality = 1; price = 659; };
class sfp_ak5c_plastic      { quality = 1; price = 659; };
class arifle_Katiba_C_F      { quality = 1; price = 330; };
class arifle_Katiba_F      { quality = 1; price = 330; };
class arifle_Katiba_GL_F      { quality = 1; price = 320; };
class arifle_Mk20_F      { quality = 1; price = 320; };
class arifle_Mk20_GL_F      { quality = 1; price = 330; };
class arifle_Mk20_GL_plain_F      { quality = 1; price = 330; };
class arifle_Mk20_plain_F      { quality = 1; price = 630; };
class arifle_Mk20C_F      { quality = 1; price = 330; };
class arifle_Mk20C_plain_F      { quality = 1; price = 330; };
class arifle_MX_Black_F      { quality = 1; price = 330; };
class arifle_MX_F      { quality = 1; price = 330; };
class arifle_MX_GL_Black_F      { quality = 1; price = 330; };
class arifle_MX_GL_F      { quality = 1; price = 330; };
class arifle_MXC_Black_F      { quality = 1; price = 330; };
class arifle_MXC_F      { quality = 1; price = 330; };
class arifle_SDAR_F      { quality = 1; price = 620; };
class arifle_TRG20_F      { quality = 1; price = 410; };
class arifle_TRG21_F      { quality = 1; price = 400; };
class arifle_TRG21_GL_F      { quality = 1; price = 960; };
class Exile_Weapon_AK107      { quality = 1; price = 960; };
class Exile_Weapon_AK107_GL      { quality = 1; price = 430; };
class Exile_Weapon_AK74      { quality = 1; price = 430; };
class Exile_Weapon_AK74_GL      { quality = 1; price = 1080; };
class Exile_Weapon_AK47      { quality = 1; price = 1080; };
class Exile_Weapon_AKS_Gold      { quality = 1; price = 980; };
class arifle_AK12_F      { quality = 1; price = 980; };
class arifle_AK12_GL_F      { quality = 1; price = 1520; };
class arifle_AKM_F      { quality = 1; price = 1520; };
class arifle_AKM_FL_F      { quality = 1; price = 1960; };
class arifle_AKS_F      { quality = 1; price = 1960; };
class arifle_ARX_blk_F      { quality = 1; price = 1960; };
class arifle_ARX_ghex_F      { quality = 1; price = 1100; };
class arifle_ARX_hex_F      { quality = 1; price = 1100; };
class arifle_CTAR_blk_F      { quality = 1; price = 1100; };
class arifle_CTAR_hex_F      { quality = 1; price = 1100; };
class arifle_CTAR_ghex_F      { quality = 1; price = 1100; };
class arifle_CTAR_GL_blk_F      { quality = 1; price = 1100; };
class arifle_CTARS_blk_F      { quality = 1; price = 1100; };
class arifle_CTARS_hex_F      { quality = 1; price = 1100; };
class arifle_CTARS_ghex_F      { quality = 1; price = 1020; };
class arifle_SPAR_01_blk_F      { quality = 1; price = 1000; };
class arifle_SPAR_01_khk_F      { quality = 1; price = 980; };
class arifle_SPAR_01_snd_F      { quality = 1; price = 920; };
class arifle_SPAR_01_GL_blk_F      { quality = 1; price = 900; };
class arifle_SPAR_01_GL_khk_F      { quality = 1; price = 900; };
class arifle_SPAR_01_GL_snd_F      { quality = 1; price = 920; };
class arifle_SPAR_02_blk_F      { quality = 1; price = 930; };
class arifle_SPAR_02_khk_F      { quality = 1; price = 930; };
class arifle_SPAR_02_snd_F      { quality = 1; price = 900; };
class arifle_SPAR_03_blk_F      { quality = 1; price = 900; };
class arifle_SPAR_03_khk_F      { quality = 1; price = 880; };
class arifle_SPAR_03_snd_F      { quality = 1; price = 880; };
class arifle_MX_khk_F      { quality = 1; price = 920; };
class arifle_MX_GL_khk_F      { quality = 1; price = 920; };
class arifle_MXC_khk_F      { quality = 1; price = 255; };
class arifle_MXM_khk_F      { quality = 1; price = 840; };
class Exile_Weapon_M4      { quality = 1; price = 930; };
class Exile_Weapon_M16A4      { quality = 1; price = 910; };
class Exile_Weapon_M16A2      { quality = 1; price = 920; };
class Exile_Weapon_M1014      { quality = 1; price = 1020; };
class arifle_MXM_Black_F      { quality = 1; price = 1420; };
class arifle_MXM_F      { quality = 1; price = 1420; };
class srifle_DMR_01_F      { quality = 1; price = 1420; };
class srifle_DMR_02_camo_F      { quality = 1; price = 1420; };
class srifle_DMR_02_F      { quality = 1; price = 1420; };
class srifle_DMR_02_sniper_F      { quality = 1; price = 1420; };
class srifle_DMR_03_F      { quality = 1; price = 1420; };
class srifle_DMR_03_khaki_F      { quality = 1; price = 1420; };
class srifle_DMR_03_multicam_F      { quality = 1; price = 1420; };
class srifle_DMR_03_tan_F      { quality = 1; price = 1420; };
class srifle_DMR_03_woodland_F      { quality = 1; price = 1420; };
class srifle_DMR_04_F      { quality = 1; price = 1420; };
class srifle_DMR_04_Tan_F      { quality = 1; price = 1420; };
class srifle_DMR_05_blk_F      { quality = 1; price = 1620; };
class srifle_DMR_05_hex_F      { quality = 1; price = 1620; };
class srifle_DMR_05_tan_f      { quality = 1; price = 1620; };
class srifle_DMR_06_camo_F      { quality = 1; price = 1620; };
class srifle_DMR_06_olive_F      { quality = 1; price = 1620; };
class srifle_EBR_F      { quality = 1; price = 1620; };
class srifle_GM6_camo_F      { quality = 6; price = 5420; };
class srifle_GM6_F      { quality = 6; price = 5420; };
class srifle_LRR_camo_F      { quality = 6; price = 5420; };
class srifle_LRR_F      { quality = 6; price = 5420; };
class Exile_Weapon_CZ550      { quality = 1; price = 1420; };
class Exile_Weapon_SVD      { quality = 1; price = 1420; };
class Exile_Weapon_SVDCamo      { quality = 1; price = 1420; };
class Exile_Weapon_VSSVintorez      { quality = 1; price = 1420; };
class Exile_Weapon_DMR      { quality = 1; price = 1420; };
class Exile_Weapon_LeeEnfield      { quality = 1; price = 1420; };
class srifle_LRR_tna_F      { quality = 6; price = 5420; };
class srifle_GM6_ghex_F      { quality = 6; price = 5420; };
class srifle_DMR_07_blk_F      { quality = 1; price = 1420; };
class srifle_DMR_07_hex_F      { quality = 1; price = 1420; };
class srifle_DMR_07_ghex_F      { quality = 1; price = 1420; };
class Exile_Weapon_m107      { quality = 4; price = 3820; };
class Exile_Weapon_ksvk      { quality = 4; price = 3820; };
class sfp_psg90_camo      { quality = 4; price = 3820; };
class hgun_PDW2000_F      { quality = 1; price = 720; };
class SMG_01_F      { quality = 1; price = 720; };
class SMG_02_F      { quality = 1; price = 720; };
class sfp_kpistm45      { quality = 1; price = 720; };
class SMG_05_F      { quality = 1; price = 720; };
class Exile_Weapon_PK      { quality = 1; price = 1220; };
class Exile_Weapon_PKP      { quality = 1; price = 1220; };
class Exile_Weapon_RPK      { quality = 1; price = 1220; };
class LMG_03_F      { quality = 1; price = 1420; };
class LMG_Mk200_F      { quality = 1; price = 1200; };
class LMG_Zafir_F      { quality = 1; price = 1200; };
class arifle_MX_SW_Black_F      { quality = 1; price = 1320; };
class arifle_MX_SW_F      { quality = 1; price = 1320; };
class sfp_ksp58      { quality = 1; price = 1320; };
class sfp_ksp58B2      { quality = 1; price = 1320; };
class sfp_ksp90c      { quality = 1; price = 1320; };
class sfp_ksp90b      { quality = 1; price = 1320; };

class rhs_weap_sr25 	{ quality = 1; price = 1650; };
class rhs_weap_sr25_ec  { quality = 1; price = 1650; };
class rhsusf_weap_MP7A2      { quality = 1; price = 959; };
class rhsusf_weap_MP7A2_desert      { quality = 1; price = 959; };
class rhsusf_weap_MP7A2_aor1      { quality = 1; price = 959; };
class rhsusf_weap_MP7A2_winter      { quality = 1; price = 959; };
class rhs_weap_m249_pip_L      { quality = 1; price = 2459; };
class rhs_weap_m249_pip_L_para      { quality = 1; price = 2459; };
class rhs_weap_m249_pip_L_vfg      { quality = 1; price = 2459; };
class rhs_weap_m249_pip_S      { quality = 1; price = 2459; };
class rhs_weap_m249_pip_S_para      { quality = 1; price = 2459; };
class rhs_weap_m249_pip_S_vfg      { quality = 1; price = 2459; };
class rhs_weap_m240B      { quality = 1; price = 2459; };
class rhs_weap_m240B_CAP      { quality = 1; price = 2459; };
class rhs_weap_m240G      { quality = 1; price = 2459; };
class rhs_weap_pkm      { quality = 1; price = 2459; };
class rhs_weap_pkp      { quality = 1; price = 2459; };
class rhs_weap_M590_8RD      { quality = 1; price = 359; };
class rhs_weap_M590_5RD      { quality = 1; price = 359; };
class rhs_weap_hk416d10      { quality = 1; price = 2159; };
class rhs_weap_hk416d10_LMT      { quality = 1; price = 2159; };
class rhs_weap_hk416d10_m320      { quality = 1; price = 2159; };
class rhs_weap_hk416d145      { quality = 1; price = 2159; };
class rhs_weap_hk416d145_m320      { quality = 1; price = 2159; };
class rhs_weap_m16a4      { quality = 1; price = 2159; };
class rhs_weap_m16a4_carryhandle      { quality = 1; price = 2159; };
class rhs_weap_m16a4_carryhandle_M203      { quality = 1; price = 2159; };
class rhs_weap_m16a4_carryhandle_pmag      { quality = 1; price = 2159; };
class rhs_weap_m27iar      { quality = 1; price = 2159; };
class rhs_weap_m4_carryhandle      { quality = 1; price = 2159; };
class rhs_weap_m4_carryhandle_pmag      { quality = 1; price = 2159; };
class rhs_weap_m4_m203      { quality = 1; price = 2159; };
class rhs_weap_m4_m320      { quality = 1; price = 2159; };
class rhs_weap_m4a1      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_KAC      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_KAC_bk      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_KAC_d      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_KAC_wd      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_M203      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_M203_bk      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_M203_d      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_M203_wd      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_bk      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_d      { quality = 1; price = 2159; };
class rhs_weap_m4a1_blockII_wd      { quality = 1; price = 2159; };
class rhs_weap_m4a1_carryhandle      { quality = 1; price = 2159; };
class rhs_weap_m4a1_carryhandle_m203      { quality = 1; price = 2159; };
class rhs_weap_m4a1_carryhandle_pmag      { quality = 1; price = 2159; };
class rhs_weap_m4a1_m203      { quality = 1; price = 2159; };
class rhs_weap_m4a1_m320      { quality = 1; price = 2159; };
class rhs_weap_mk18      { quality = 1; price = 2159; };
class rhs_weap_mk18_KAC      { quality = 1; price = 2159; };
class rhs_weap_mk18_KAC_bk      { quality = 1; price = 2159; };
class rhs_weap_mk18_KAC_d      { quality = 1; price = 2159; };
class rhs_weap_mk18_KAC_wd      { quality = 1; price = 2159; };
class rhs_weap_mk18_bk      { quality = 1; price = 2159; };
class rhs_weap_mk18_d      { quality = 1; price = 2159; };
class rhs_weap_mk18_m320      { quality = 1; price = 2159; };
class rhs_weap_mk18_wd      { quality = 1; price = 2159; };
class rhs_weap_asval      { quality = 1; price = 2159; };
class rhs_weap_asval_npz      { quality = 1; price = 2159; };
class rhs_weap_kar98k      { quality = 1; price = 2659; };
class rhs_weap_m38      { quality = 1; price = 2659; };
class rhs_weap_m38_rail      { quality = 1; price = 2659; };
class rhs_weap_mosin_sbr      { quality = 1; price = 2659; };
class rhs_weap_XM2010      { quality = 1; price = 2659; };
class rhs_weap_XM2010_d      { quality = 1; price = 2659; };
class rhs_weap_XM2010_sa      { quality = 1; price = 2659; };
class rhs_weap_XM2010_wd      { quality = 1; price = 2659; };
class rhs_weap_M107_w      { quality = 2; price = 3459; };
class rhs_weap_svdp      { quality = 1; price = 2659; };
class rhs_weap_svdp_npz      { quality = 1; price = 2659; };
class rhs_weap_svdp_wd      { quality = 1; price = 2659; };
class rhs_weap_svdp_wd_npz      { quality = 1; price = 2659; };
class rhs_weap_svds      { quality = 1; price = 2659; };
class rhs_weap_svds_npz      { quality = 1; price = 2659; };
class rhs_weap_t5000      { quality = 1; price = 2659; };
class rhs_weap_m24sws      { quality = 1; price = 2659; };
//class vme_pla_LR4      { quality = 1; price = 2659; };

	///////////////////////////////////////////////////////////////////////////////////////////
	//////// aIRCRAFT
	///////////////////////////////////////////////////////////////////////////////////////////
class Exile_Plane_AN2_Green      { quality = 1; price = 4535; };
class Exile_Plane_Ceasar      { quality = 1; price = 3335; };
class Exile_Plane_BlackfishInfantry      { quality = 2; price = 13400; };
class Exile_Plane_BlackfishVehicle      { quality = 2; price = 13400; };
class sfp_sk60      { quality = 1; price = 2555; };
class sfp_saab340      { quality = 1; price = 2525; };
class sfp_tp100      { quality = 1; price = 2525; };
class sfp_s100b      { quality = 2; price = 4525; };
class RHS_C130J      { quality = 1; price = 2550; };
class Exile_Plane_Cessna      { quality = 1; price = 3320; };
class GNT_C185T      { quality = 2; price = 4020; };
class bwi_a3_at6b_cap {quality = 1; price = 80126};
class bwi_a3_at6b	{ quality = 1; price = 96124};
class sab_dc3      { quality = 1; price = 40535; };
class sab_dc3_c47      { quality = 1; price = 40535; };
class sab_w34      { quality = 1; price = 55025; };
class sab_zero      { quality = 1; price = 40505; };
class sab_avia      { quality = 1; price = 40515; };
class sab_bf110      { quality = 1; price = 40525; };
class sab_bf110_2      { quality = 1; price = 40525; };
class sab_bv141      { quality = 1; price = 40510; };
class sab_do335      { quality = 1; price = 40515; };
class sab_fiatg55      { quality = 1; price = 40525; };
class sab_he111      { quality = 1; price = 40528; };
class sab_hix      { quality = 1; price = 40040; };
class sab_ju87      { quality = 1; price = 40515; };
class sab_kate      { quality = 1; price = 40510; };
class sab_ki61      { quality = 1; price = 40514; };
class sab_me262      { quality = 1; price = 40510; };
class sab_me262_2      { quality = 1; price = 40510; };
class sab_aichival      { quality = 1; price = 40512; };
class sab_i16      { quality = 1; price = 40522; };
class sab_il2      { quality = 1; price = 40580; };
class sab_la5      { quality = 1; price = 40535; };
class sab_d510      { quality = 1; price = 40515; };
class sab_b17      { quality = 3; price = 120549; };
class sab_b24      { quality = 3; price = 120530; };
class sab_b25      { quality = 3; price = 120528; };
class sab_corsair      { quality = 1; price = 40515; };
class sab_f6f      { quality = 1; price = 40510; };
class sab_tigercat      { quality = 2; price = 80510; };
class sab_gladiator      { quality = 1; price = 40540; };
class sab_mb5      { quality = 1; price = 40540; };
class sab_p38      { quality = 1; price = 40539; };
class sab_mustang      { quality = 1; price = 40520; };
class sab_p61      { quality = 1; price = 40540; };
class sab_p26      { quality = 1; price = 40525; };
class sab_texan      { quality = 1; price = 40530; };
class sab_texan_c      { quality = 1; price = 40530; };
class sab_avenger      { quality = 1; price = 40528; };
class B_T_VTOL_01_armed_F      { quality = 6; price = 363400; };
class sfp_jas39_cap      { quality = 5; price = 230560; };
class sfp_jas39_bk90      { quality = 5; price = 230560; };
class sfp_jas39_gbu39      { quality = 5; price = 210560; };
class sfp_jas39      { quality = 5; price = 220560; };
class sfp_sk60_arak135      { quality = 2; price = 60555; };
class RHS_A10      { quality = 6; price = 270560; };
class RHS_A10_CBU      { quality = 6; price = 270560; };
class RHS_A10_AT      { quality = 6; price = 270560; };
class rhsusf_f22      { quality = 5; price = 230560; };
class RHS_Su25SM_vvsc      { quality = 5; price = 250560; };
class RHS_Su25SM_KH29_vvsc      { quality = 5; price = 250560; };
class RHS_Su25SM_CAS_vvsc      { quality = 5; price = 250560; };
class RHS_Su25SM_Cluster_vvsc      { quality = 5; price = 250560; };
class rhs_l159_CDF      { quality = 2; price = 100555; };
class rhs_l159_CDF_plamen      { quality = 2; price = 112555; };
class rhs_l159_CDF_CAP      { quality = 2; price = 100555; };
class rhs_l159_CDF_CAS      { quality = 2; price = 116555; };
class rhs_l39_cdf      { quality = 2; price = 60555; };
class RHS_T50_vvs_052      { quality = 5; price = 230555; };
/////////////////////////////////////
/////////////  Helicopters
//////////////////////////////////////
class RHS_MELB_MH6M      { quality = 2; price = 13035; };
class Exile_Chopper_Hummingbird_Civillian_Wasp      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Blue      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Red      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_BlueLine      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_ION      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Digital      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Elliptical     { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Furious      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_GrayWatcher      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Jeans     { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Light      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Shadow      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Speedy      { quality = 1; price = 7330; };
class Exile_Chopper_Hummingbird_Civillian_Sunset      { quality = 1; price = 7330; };
class Exile_Chopper_Huey_Green      { quality = 1; price = 8540; };
class Exile_Chopper_Taru_Transport_Black      { quality = 3; price = 19140; };
class rhs_ka60_c      { quality = 2; price = 15040; };
class rhs_ka60_grey      { quality = 2; price = 15040; };
class Exile_Chopper_Mohawk_FIA      { quality = 3; price = 22840; };
class Exile_Chopper_Hellcat_Green      { quality = 1; price = 8640; };
class RHS_UH60M2      { quality = 2; price = 15040; };
class RHS_UH60M2_d      { quality = 2; price = 15040; };
class RHS_UH1Y_UNARMED      { quality = 2; price = 14040; };
class rhsusf_CH53E_USMC      { quality = 2; price = 26540; };
class RHS_Mi8mt_Cargo_vdv      { quality = 2; price = 15525; };
class sfp_hkp6      { quality = 2; price = 13030; };
class sfp_jetranger_police      { quality = 2; price = 13030; };
class sfp_bell429_police      { quality = 2; price = 13030; };
class sfp_hkp9      { quality = 2; price = 12020; };
class sfp_hkp9_sog      { quality = 2; price = 12020; };
class sfp_hkp16_ffv      { quality = 2; price = 15020; };
class Exile_Chopper_Huey_Armed_Green      { quality = 2; price = 42540; };
class I_Heli_light_03_F      { quality = 4; price = 102040; };
class B_Heli_Attack_01_F      { quality = 5; price = 105040; };
class O_Heli_Light_02_F      { quality = 4; price = 103040; };
class sfp_hkp9_rb55      { quality = 3; price = 65020; };
class sfp_hkp4_asw      { quality = 4; price = 303020; };
class RHS_MELB_AH6M_H      { quality = 3; price = 79035; };
class RHS_MELB_AH6M_L      { quality = 3; price = 75035; };
class RHS_MELB_AH6M_M      { quality = 3; price = 77035; };
class RHS_MELB_AH6M      { quality = 3; price = 72035; };
class RHS_CH_47F      { quality = 2; price = 65045; };
class RHS_CH_47F_light      { quality = 2; price = 65030; };
class RHS_AH1Z      { quality = 4; price = 90050; };
class RHS_AH1Z_CS      { quality = 4; price = 90050; };
class RHS_AH1Z_GS      { quality = 4; price = 90050; };
class RHS_UH60M      { quality = 3; price = 63040; };
class RHS_UH60M_d      { quality = 3; price = 63040; };
class RHS_AH64D_noradar      { quality = 4; price = 99050; };
class RHS_AH64D_noradar_GS      { quality = 4; price = 99050; };
class RHS_AH64D_noradar_CS      { quality = 4; price = 99050; };
class RHS_AH64D_noradar_AA      { quality = 4; price = 99050; };
class RHS_AH64D      { quality = 5; price = 105050; };
class RHS_AH64D_GS      { quality = 5; price = 105050; };
class RHS_AH64D_CS      { quality = 5; price = 105050; };
class RHS_AH64D_AA      { quality = 5; price = 105050; };
class RHS_AH64DGrey      { quality = 5; price = 105050; };
class RHS_UH60M_ESSS      { quality = 4; price = 93040; };
class RHS_UH60M_ESSS_d      { quality = 4; price = 93040; };
class RHS_UH1Y      { quality = 3; price = 20040; };
class RHS_UH1Y_FFAR      { quality = 3; price = 82040; };
class RHS_UH1Y_d_GS      { quality = 3; price = 82040; };
class RHS_Mi8mt_vdv      { quality = 2; price = 53525; };
class RHS_Mi8MTV3_vdv      { quality = 3; price = 88525; };
class RHS_Mi8MTV3_UPK23_vdv      { quality = 3; price = 88525; };
class RHS_Mi8MTV3_FAB_vdv      { quality = 3; price = 88525; };
class RHS_Mi8MTV3_heavy_vdv      { quality = 4; price = 93525; };
class RHS_Ka52_UPK23_vvsc      { quality = 5; price = 117055; };
class RHS_Ka52_vvsc      { quality = 5; price = 117055; };
class RHS_Mi24V_vvsc      { quality = 3; price = 97045; };
class RHS_Mi24V_FAB_vvsc      { quality = 3; price = 97045; };
class RHS_Mi24V_UPK23_vvsc      { quality = 3; price = 97045; };
class RHS_Mi24V_AT_vvsc      { quality = 3; price = 97045; };
class RHS_Mi24P_CAS_vvsc      { quality = 3; price = 97045; };
class rhs_mi28n_vvsc      { quality = 5; price = 117045; };
class rhs_mi28n_s13_vvsc      { quality = 5; price = 117045; };


	//////Vehicles
class Exile_Bike_QuadBike_Guerilla01      { quality = 1; price = 1; };
class Exile_Bike_QuadBike_Guerilla02      { quality = 1; price = 1; };
class Exile_Car_OldTractor_Red      { quality = 1; price = 3515; };
class Exile_Car_Tractor_Red      { quality = 1; price = 3818; };
class Exile_Car_Octavius_White      { quality = 1; price = 3630; };
class Exile_Car_Golf_Red      { quality = 1; price = 3825; };
class Exile_Car_LandRover_Green      { quality = 1; price = 4030; };
class Exile_Car_LandRover_Ambulance_Green      { quality = 1; price = 4030; };
class Exile_Car_Lada_Green      { quality = 1; price = 4030; };
class Exile_Car_Volha_White      { quality = 1; price = 5680; };
class Exile_Car_Hatchback_Rusty1      { quality = 1; price = 3380; };
class Exile_Car_Hatchback_Rusty2      { quality = 1; price = 3380; };
class Exile_Car_Hatchback_Rusty3      { quality = 1; price = 3380; };
class Exile_Car_Hatchback_Sport_Red      { quality = 1; price = 3380; };
class Exile_Car_SUV_Red      { quality = 1; price = 3630; };
class Exile_Car_SUVXL_Black      { quality = 1; price = 3840; };
class Exile_Car_SUV_Armed_Black      { quality = 1; price = 3580; };
class Exile_Car_Offroad_Rusty1      { quality = 1; price = 4030; };
class Exile_Car_Offroad_Rusty2      { quality = 1; price = 4030; };
class Exile_Car_Offroad_Rusty3      { quality = 1; price = 4030; };
class Exile_Car_Offroad_Repair_Civillian      { quality = 1; price = 3330; };
class Exile_Car_Offroad_Armed_Guerilla01      { quality = 1; price = 3130; };
class Exile_Car_BTR40_MG_Green      { quality = 1; price = 3610; };
class Exile_Car_BTR40_Green      { quality = 1; price = 3610; };
class Exile_Car_Octavius_Black      { quality = 2; price = 5532; };
class RHS_UAZ_MSV_01      { quality = 1; price = 4552; };
class rhs_uaz_open_MSV_01      { quality = 1; price = 4552; };
class rhsgref_cdf_reg_uaz_dshkm      { quality = 1; price = 9552; };
class rhsgref_cdf_reg_uaz_ags      { quality = 1; price = 10552; };
class rhsgref_cdf_reg_uaz_spg9      { quality = 1; price = 11552; };
class rhsusf_m1025_w_m2      { quality = 1; price = 9080; };
class rhsusf_m1025_w_mk19      { quality = 1; price = 10080; };
class rhsusf_m1025_w_s      { quality = 1; price = 8080; };
class rhsusf_m1025_w      { quality = 1; price = 8080; };
class rhsusf_m1025_w_s_Mk19      { quality = 1; price = 10080; };
class rhsusf_m1025_w_s_m2      { quality = 1; price = 9080; };
class rhsusf_m998_w_2dr      { quality = 1; price = 8080; };
class rhsusf_m998_w_2dr_fulltop      { quality = 1; price = 8080; };
class rhsusf_m998_w_2dr_halftop      { quality = 1; price = 8080; };
class rhsusf_m998_w_4dr      { quality = 1; price = 8080; };
class rhsusf_m998_w_4dr_fulltop      { quality = 1; price = 8080; };
class rhsusf_m998_w_4dr_halftop      { quality = 1; price = 8080; };
class rhsusf_m998_w_s_2dr      { quality = 1; price = 4080; };
class rhsusf_m998_w_s_2dr_fulltop      { quality = 1; price = 4080; };
class rhsusf_m998_w_s_2dr_halftop      { quality = 1; price = 4080; };
class rhsusf_m998_w_s_4dr      { quality = 1; price = 4080; };
class rhsusf_m998_w_s_4dr_fulltop      { quality = 1; price = 4080; };
class rhsusf_m998_w_s_4dr_halftop      { quality = 1; price = 4080; };
class Exile_Car_ProwlerLight      { quality = 1; price = 5880; };
class Exile_Car_ProwlerUnarmed      { quality = 1; price = 5880; };
class Exile_Car_QilinUnarmed      { quality = 1; price = 5875; };
class Exile_Car_MB4WD      { quality = 1; price = 5030; };
class Exile_Car_MB4WDOpen      { quality = 1; price = 5030; };
class Exile_Car_HMMWV_M2_Green      { quality = 2; price = 5265; };
class Exile_Car_HMMWV_M134_Green      { quality = 5; price = 21565; };
class Exile_Car_Van_Black      { quality = 1; price = 7680; };
class Exile_Car_Van_Box_Black      { quality = 1; price = 8680; };
class Exile_Car_Van_Fuel_Black      { quality = 1; price = 5180; };
class Exile_Car_Zamak      { quality = 1; price = 8300; };
class Exile_Car_V3S_Covered      { quality = 1; price = 8550; };
class Exile_Car_Tempest      { quality = 1; price = 8550; };
class Exile_Car_HEMMT      { quality = 1; price = 8550; };
class Exile_Car_Ikarus_Blue      { quality = 1; price = 8500; };
class rhs_gaz66_ap2_msv      { quality = 1; price = 7050; };
class rhs_gaz66_flat_msv      { quality = 1; price = 7050; };
class rhs_gaz66_msv      { quality = 1; price = 7050; };
class rhs_gaz66_r142_msv      { quality = 1; price = 7050; };
class rhs_gaz66_repair_msv      { quality = 1; price = 7050; };
class rhs_gaz66o_flat_msv      { quality = 1; price = 7050; };
class rhs_gaz66o_msv      { quality = 1; price = 7050; };
class rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy      { quality = 1; price = 7200; };
class rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy      { quality = 1; price = 7200; };
class rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy      { quality = 1; price = 7200; };
class rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy      { quality = 1; price = 7200; };
class rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy      { quality = 1; price = 7200; };
class rhsusf_M1078A1P2_B_WD_fmtv_usarmy      { quality = 1; price = 7200; };
class rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy      { quality = 1; price = 7200; };
class rhs_kamaz5350_msv      { quality = 1; price = 7200; };
class rhs_kamaz5350_open_msv      { quality = 1; price = 7200; };
class rhs_kamaz5350_flatbed_msv      { quality = 1; price = 7200; };
class rhs_kamaz5350_flatbed_cover_msv      { quality = 1; price = 7200; };
class RHS_Ural_MSV_01      { quality = 1; price = 7052; };
class RHS_Ural_Flat_MSV_01      { quality = 1; price = 7052; };
class RHS_Ural_Open_MSV_01      { quality = 1; price = 7052; };
class RHS_Ural_Open_Flat_MSV_01      { quality = 1; price = 7052; };
class RHS_Ural_Fuel_MSV_01      { quality = 4; price = 37052; };
class RHS_Ural_Repair_MSV_01      { quality = 4; price = 37052; };
class Exile_Car_Strider      { quality = 2; price = 52050; };
class Exile_Car_Hunter      { quality = 2; price = 42400; };
class Exile_Car_Ifrit      { quality = 2; price = 41950; };
class rhs_tigr_3camo_msv      { quality = 1; price = 22060; };
class rhs_tigr_ffv_3camo_msv      { quality = 1; price = 22060; };
class rhs_tigr_ffv_msv      { quality = 1; price = 22060; };
class rhs_tigr_m_3camo_msv      { quality = 1; price = 22060; };
class rhs_tigr_m_msv      { quality = 1; price = 22060; };
class rhs_tigr_msv      { quality = 1; price = 22060; };
class rhs_tigr_sts_3camo_msv      { quality = 2; price = 42060; };
class rhs_tigr_sts_msv      { quality = 2; price = 42060; };
class rhsusf_rg33_wd      { quality = 1; price = 22052; };
class rhsusf_rg33_usmc_wd      { quality = 1; price = 22052; };
class rhsusf_rg33_m2_wd      { quality = 1; price = 23052; };
class rhsusf_rg33_m2_usmc_wd      { quality = 1; price = 23052; };
class rhsusf_M1220_usarmy_wd      { quality = 2; price = 40200; };
class rhsusf_M1220_M2_usarmy_wd      { quality = 3; price = 43200; };
class rhsusf_M1220_MK19_usarmy_wd      { quality = 4; price = 49200; };
class rhsusf_M1230_M2_usarmy_wd      { quality = 4; price = 43200; };
class rhsusf_M1230_MK19_usarmy_wd      { quality = 4; price = 49200; };
class rhsusf_M1220_M153_M2_usarmy_wd      { quality = 4; price = 43200; };
class rhsusf_M1230a1_usarmy_wd      { quality = 3; price = 43200; };
class rhsusf_M1232_usarmy_wd      { quality = 1; price = 40200; };
class rhsusf_M1232_M2_usarmy_wd      { quality = 3; price = 43200; };
class rhsusf_M1232_MK19_usarmy_wd      { quality = 4; price = 49200; };
class rhsusf_M1237_M2_usarmy_wd      { quality = 3; price = 43200; };
class rhsusf_M1237_MK19_usarmy_wd      { quality = 3; price = 49200; };
class rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom      { quality = 2; price = 33200; };
class rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom      { quality = 2; price = 33150; };
class rhsusf_M1117_W      { quality = 2; price = 43150; };
class rhsusf_M1117_O      { quality = 2; price = 43150; };
class sfp_ikv91      { quality = 5; price = 93400; };
class sfp_strf90c      { quality = 3; price = 83250; };
class sfp_lvkv90c_snow      { quality = 3; price = 83250; };
//class sfp_strv103c      { quality = 5; price = 93500; };
class sfp_grkpbv90120      { quality = 5; price = 93500; };
class sfp_strv121      { quality = 5; price = 87700; };
class sfp_strv122      { quality = 6; price = 95500; };
class sfp_patgb203      { quality = 2; price = 58030; };
class sfp_centurion      { quality = 5; price = 70500; };
class rhsusf_m1a1aimwd_usarmy      { quality = 5; price = 113600; };
class rhsusf_m1a1aim_tuski_wd      { quality = 5; price = 113600; };
class rhsusf_m1a1fep_wd      { quality = 5; price = 113600; };
class rhsusf_m1a1fep_od      { quality = 5; price = 113600; };
class rhsusf_m1a1hc_wd      { quality = 5; price = 113600; };
class rhsusf_m1a2sep1wd_usarmy      { quality = 5; price = 113600; };
class rhsusf_m1a2sep1tuskiwd_usarmy      { quality = 5; price = 113600; };
class rhsusf_m1a2sep1tuskiiwd_usarmy      { quality = 5; price = 113600; };
class rhsusf_m113_usarmy_M240      { quality = 2; price = 21200; };
class rhsusf_m113_usarmy_M2_90      { quality = 2; price = 23200; };
class rhsusf_m113_usarmy_MK19      { quality = 4; price = 25200; };
class rhsusf_m113_usarmy_MK19_90      { quality = 4; price = 25200; };
class rhsusf_m113_usarmy_unarmed      { quality = 1; price = 20200; };
class RHS_M2A2_wd      { quality = 4; price = 73290; };
class RHS_M2A3_wd      { quality = 4; price = 73290; };
class RHS_M2A2_BUSKI_wd      { quality = 5; price = 75290; };
class RHS_M2A3_BUSKI_wd      { quality = 5; price = 75290; };
class rhs_t72ba_tv      { quality = 5; price = 93290; };
class rhs_t72bb_tv      { quality = 5; price = 93550; };
class rhs_t72bc_tv      { quality = 5; price = 93550; };
class rhs_t72bd_tv      { quality = 5; price = 93550; };
class rhssaf_army_t72s   { quality = 5; price = 93550; };
class rhs_t80      { quality = 5; price = 123500; };
class rhs_t80a      { quality = 5; price = 123600; };
class rhs_t80b      { quality = 5; price = 123500; };
class rhs_t80bk      { quality = 5; price = 123500; };
class rhs_t80bv      { quality = 5; price = 123550; };
class rhs_t80bvk      { quality = 5; price = 123550; };
class rhs_t80u      { quality = 6; price = 133600; };
class rhs_t80ue1      { quality = 6; price = 133600; };
class rhs_t80uk      { quality = 6; price = 133600; };
class rhs_t80um      { quality = 6; price = 133600; };
class rhs_t80u45m      { quality = 6; price = 133600; };
class rhs_t90_tv      { quality = 5; price = 113550; };
class rhs_t90a_tv      { quality = 5; price = 113550; };
class rhsgref_BRDM2      { quality = 2; price = 33120; };
class rhsgref_BRDM2_ATGM      { quality = 2; price = 35120; };
class rhsgref_BRDM2UM      { quality = 2; price = 23120; };
class rhsgref_BRDM2_HQ      { quality = 2; price = 25120; };
class rhs_btr60_msv      { quality = 2; price = 43100; };
class RHS_BTR70_MSV      { quality = 2; price = 48100; };
class rhs_btr80_msv      { quality = 2; price = 53100; };
class rhs_btr80a_msv      { quality = 2; price = 55100; };
class rhs_bmd1      { quality = 2; price = 76260; };
class rhs_bmd1k      { quality = 2; price = 76260; };
class rhs_bmd1p      { quality = 2; price = 76260; };
class rhs_bmd1pk      { quality = 2; price = 76260; };
class rhs_bmd1r      { quality = 2; price = 76260; };
class rhs_bmd2      { quality = 2; price = 76260; };
class rhs_bmd2m      { quality = 2; price = 76260; };
class rhs_bmd2k      { quality = 2; price = 76260; };
class rhs_bmd4_vdv      { quality = 4; price = 83200; };
class rhs_bmd4m_vdv      { quality = 4; price = 83200; };
class rhs_bmd4ma_vdv      { quality = 4; price = 83200; };
class rhs_bmp1_msv      { quality = 2; price = 73200; };
class rhs_bmp1p_msv      { quality = 2; price = 73200; };
class rhs_bmp1k_msv      { quality = 2; price = 73200; };
class rhs_bmp1d_msv      { quality = 3; price = 73300; };
class rhs_bmp2_msv      { quality = 2; price = 73260; };
class rhs_bmp2e_msv      { quality = 2; price = 73260; };
class rhs_bmp2k_msv      { quality = 2; price = 73260; };
class rhs_bmp2d_msv      { quality = 3; price = 73300; };
class rhs_bmp3_msv      { quality = 2; price = 73200; };
class rhs_bmp3_late_msv      { quality = 2; price = 73200; };
class rhs_bmp3m_msv      { quality = 2; price = 73200; };
class rhs_bmp3mera_msv      { quality = 2; price = 73200; };
class rhs_Ob_681_2      { quality = 4; price = 83260; };
class rhs_sprut_vdv      { quality = 4; price = 83200; };
class VME_PLA_ZBL09			{ quality = 3; price = 45000; };
class VME_PLA_ZTL11			{ quality = 4; price = 49000; };
class RHS_BM21_MSV_01      { quality = 5; price = 223052; };
class rhs_2s3_tv      { quality = 5; price = 223300; };
class POOK_K300P_OPFOR      { quality = 5; price = 223400; };
class POOK_9K58_OPFOR      { quality = 6; price = 267400; };
class pook_A222_OPFOR      { quality = 3; price = 135080; };
class pook_2S1_BLUFOR      { quality = 4; price = 179400; };
class RHS_Ural_Zu23_MSV_01      { quality = 3; price = 49052; };
class rhs_gaz66_zu23_msv      { quality = 3; price = 49050; };
//class rhs_zsu234_aa      { quality = 4; price = 50000; };
class RHS_M6_wd      { quality = 4; price = 95000; };
//class VME_PLA_hq7				{ quality = 3; price = 56000; };
//class VME_PLA_HQ61				{ quality = 4; price = 50000; };
//class VME_PLA_HQ64				{ quality = 4; price = 55000; };
//class VME_PLA_PGZ07				{ quality = 5; price = 73000; };
///////////////////////////
//////          Boats
////////////////////////////////
class Exile_Boat_RubberDuck_CSAT      { quality = 1; price = 2510; };
class Exile_Boat_RubberDuck_Digital      { quality = 1; price = 2510; };
class Exile_Boat_RubberDuck_Orange      { quality = 1; price = 2510; };
class Exile_Boat_RubberDuck_Blue      { quality = 1; price = 2510; };
class Exile_Boat_RubberDuck_Black      { quality = 1; price = 2510; };
class Exile_Boat_MotorBoat_Orange      { quality = 1; price = 2560; };
class Exile_Boat_MotorBoat_White      { quality = 1; price = 2560; };
class Exile_Boat_SDV_CSAT      { quality = 1; price = 2530; };
class Exile_Boat_SDV_Digital      { quality = 1; price = 2530; };
class Exile_Boat_SDV_Grey      { quality = 1; price = 2530; };
class  I_Boat_Armed_01_minigun_F      { quality = 1; price = 17500; };
class  sfp_gruppbat      { quality = 1; price = 3200; };
class Exile_Boat_RHIB      { quality = 1; price = 2510; };
class Exile_Boat_WaterScooter      { quality = 1; price = 2100; };
class  sfp_strb90      { quality = 3; price = 41500; };
class  sfp_svavare2000      { quality = 2; price = 4580; };
class  rhsusf_mkvsoc      { quality = 3; price = 63600; };
//class vme_ZUBR_PLA		{ quality = 4; price = 120750; };

///////////////////////////
//////          Trucks
////////////////////////////////
class Exile_Car_Ural_Covered_Military      { quality = 1; price = 6500; };
class Exile_Car_Ural_Covered_Worker      { quality = 1; price = 6500; };
class Exile_Car_Ural_Covered_Yellow      { quality = 1; price = 6500; };
class Exile_Car_Ural_Covered_Blue      { quality = 1; price = 6500; };
class Exile_Car_Ural_Open_Military      { quality = 1; price = 6500; };
class Exile_Car_Ural_Open_Worker      { quality = 1; price = 6500; };
class Exile_Car_Ural_Open_Yellow      { quality = 1; price = 6500; };
class Exile_Car_Ural_Open_Blue      { quality = 1; price = 6500; };
class I_Truck_02_Ammo_F      { quality = 3; price = 150500; };
class I_Truck_02_Fuel_F      { quality = 2; price = 100500; };
class I_Truck_02_box_F      { quality = 1; price = 60500; };

	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 40000; sellPrice = 40000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 45000; sellPrice = 45000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 50000; sellPrice = 50000; };
	
	#include "TRADERS\NIA\ItemListNIA.hpp"
	#include "TRADERS\ACE\ItemListACE.hpp"
	#include "TRADERS\KA\ItemListKA.hpp"
};



class CfgExileCustomCode 
{
#include "CfgExileCustomCode.cpp" 
};
class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class Namalsk: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 1;
		};

		class Breathing: Breathing
		{
			enable = 1;
		};

		class Snow: Snow
		{
			enable = 1;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3960.14,	8454.75,	152.862}, 	80, 	140},	// Object A1
				{{4974.70,	6632.82,	4.74293}, 	40, 	150},	// Object A2
				{{6487.92,	9302.03,	36.0014}, 	60, 	110}	// Sebjan Chemical Factory
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {-2.00,-1.77,-1.12,-0.10,1.24,2.78,4.40,6.00,7.46,8.65,9.50,9.90,9.90,9.50,8.65,7.46,6.00,4.40,2.78,1.24,-0.10,-1.12,-1.77,-2.00,-2.00};
		};
	};

	class Tanoa: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 0;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 1;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};

	class Malden: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 0;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
	class chernarusredux: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 1;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		};
	};
	
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 50;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 3;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 100;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 250;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "BEA7";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class CfgGrinding
{
	// Enables code lock grinding on the server
	enableGrinding = 1;
	
	// Time it takes to grind a fresh lock in minutes
	grindDuration = 25;
	
	// Percentage chance the grinding will fail
	failChance = 25;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 20;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
};
class CfgHacking 
{
	// Enables safe hacking on the server
	enableHacking = 1;
	
	// Time it takes to hack in minutes
	hackDuration = 20;
	
	// Percentage chance the hacking will fail
	failChance = 50;
	
	// Percentage chance the laptop will be removed on fail
	removeChance = 5;
	
	// Max attepts to hack a safe during one restart
	maxHackAttempts = 3;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
	
	// The minimal amount of players on the server required in order to hack a safe (set to 0 to disable)
	minPlayers = 1;
	
	// How many safe hacks are allowed to be going at one time
	maxHacks = 5;
	
	// Show a map icon where the hacking is taking place
	showMapIcon = 1;
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			// Salvage a vehicle
            class GADDSalvage: ExileAbstractAction
            {
                title = "<t color='#ff0000'>GADD Salvage Vehicle</t>";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call GADD_SalvageVehicle";
			};
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};
class Tank
    {
        targetType=2;
        target="Tank";
        
        class Actions
        {
            // Salvage a vehicle
            class GADDSalvage: ExileAbstractAction
            {
                title = "<t color='#ff0000'>GADD Salvage Vehicle</t>";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call GADD_SalvageVehicle";
            };
        };
    };


	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
						// Salvage a vehicle
            class GADDSalvage: ExileAbstractAction
            {
                title = "<t color='#ff0000'>GADD Salvage Vehicle</t>";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call GADD_SalvageVehicle";
			};
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Abstract_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class HackLock: ExileAbstractAction
			{
				title = "Hack Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgHacking' >> 'enableHacking') isEqualTo 1) && ('Exile_Item_Laptop' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && !ExilePlayerInSafezone";
				action = "['HackLock', _this select 0] call ExileClient_action_execute";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};
	
	class Drawbridge
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_DrawBridge";

		class Actions
		{
			class Lower: ExileAbstractAction
			{
				title = "Lower";
				condition = "ExileClientInteractionObject call ExileClient_object_construction_openBridgeShow";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 0];";
			};
			
			class Raise: ExileAbstractAction
			{
				title = "Raise";
				condition = "((ExileClientInteractionObject animationSourcePhase 'DrawBridge_Source') < 0.5)";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 2]";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

			class GrindLock : ExileAbstractAction
			{
				title = "Grind Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgGrinding' >> 'enableGrinding') isEqualTo 1) && ('Exile_Item_Grinder' in (magazines player)) && ('Exile_Magazine_Battery' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && ((ExileClientInteractionObject animationPhase 'DoorRotation') < 0.5)";
				action = "['GrindLock', _this select 0] call ExileClient_action_execute";
			};
		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};
	
	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			// Salvage a vehicle
            class GADDSalvage: ExileAbstractAction
            {
                title = "<t color='#ff0000'>GADD Salvage Vehicle</t>";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this call GADD_SalvageVehicle";
			};
			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			// Ducks of war mod
         /*  class Trophy: ExileAbstractAction
            {
                title = "Claim Trophy";
                condition = "!(alive ExileClientInteractionObject)";
                action = "_this call DOW_FN_ClaimTrophy";
            };*/
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			
			class HideCorpse: ExileAbstractAction
			{
            title = "<t color='#ff0000'>Bury corpse</t>";
            condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
            action = "_this call VNM_fnc_Hidebody";
			}; 
		};
	};
	 class Animal
	{
		targetType = 2;
		target = "Exile_Animal_Abstract";

		class Actions 
		{			
			class Gut: ExileAbstractAction
			{
				title = "Gut Animal";
				condition = "!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['CanBeGutted', false])";
				action = "['GutAnimal', ExileClientInteractionObject] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" t_",
			" b_",
			" tw_",
			" bw_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"Land_FuelStation_Feed_F",
			"fuelstation_army.p3d",
			"ind_fuelstation_feed_ep1.p3d",
			"Land_Ind_FuelStation_Feed_EP1.p3d",
			"Land_Fuelstation_army.p3d",
			"fuelstation_02_pump_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 2000000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 60;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
	
	// Use the current gradient to affect the players movement when autorunning.
	// 0 == default exile auto run
	useGradientAffectedAutoRun = 0;
};
/*
	This config will allow you to override the default poptab storage for vehicles and containers. 
	The current system takes the maxLoad of a vehicle * 10, and that gives you the max poptabs that can be stored.
	This will allow you to override that max with your own value.
	
	To override, just add the vehicle/containers classname to this class, and define its max. Look at Exile_Container_Safe_Small as an example.
*/
class CfgPoptabStorage
{
	class Exile_Container_Safe_Small { max = 250000; };	
};
class CfgSimulation
{
	/*
		Use Arma built in Dynamic Simulation. 
		If you have any issues with players unable to get into cars, control vehicles, fly planes, etc. try turning this off
		Options:
			0: Use Exile's built in simulation system (Same system in 1.0.3 and below)
			1: Use Dynamic Simulation
	*/
	enableDynamicSimulation = 1;
	
	/*
		Simulation distance settings
		For more information:
			https://community.bistudio.com/wiki/setDynamicSimulationDistance
			https://community.bistudio.com/wiki/setDynamicSimulationDistanceCoef
	*/
	
	// The distance, in meters, will infantry units be simulated. Default: 500m
	groupSimulationDistance = 500;
	
	// The distance, in meters, will vehicles with crew be simulated. Default: 350m
	vehicleSimulationDistance = 250;
	
	// The distance, in meters, will all vehicles without crew be simulated. Default: 250m
	emptyVehicleSimulationDistance = 250;
	
	// The distance, in meters, will static objects be simulated. This includes anything from a small tin can to a building. Default: 50m
	propSimulationDistance = 50;
	
	// Multiplies the entity activation distance by set value if the entity is moving. Default: 2
	isMovingSimulationCoef = 2;
};




class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 50100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{10000,					30,			60 					}, // Level 2 
		{15000,					45,			90 					}, // Level 3
		{20000,					60,			120					}, // Level 4
		{25000,					75,			150					}, // Level 5
		{30000,					90,			180					}, // Level 6
		{35000,					105,		210					}, // Level 7
		{40000,					120,		240					}, // Level 8
		{45000,					135,		270					}, // Level 9
		{50000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 600;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 600;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 10;

	// Amount of minutes building is disabled after a charge has been planted
	// in a territory. This basically prevents people from placing tons of walls
	// or removing walls while their territory is under attack.
	constructionBlockDuration = 5;
};
class CfgTraderCategories
{
	
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class NavalVessels
	{
		name = "Naval Vessels";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"I_Boat_Armed_01_minigun_F",
"sfp_gruppbat",
"sfp_strb90",
//"sfp_svavare2000",
"rhsusf_mkvsoc"

		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
"sfp_m90s_uniform",
"sfp_m90w_uniform",
"sfp_m90w_uniform_folded",
"sfp_m59w_uniform",
"sfp_m90d_uniform_folded",
"sfp_m87_flying_suit",
"U_C_Poloshirt_blue",
"U_C_Poloshirt_burgundy",
"U_C_Poloshirt_salmon",
"U_C_Poloshirt_stripped",
"U_C_Poloshirt_tricolour",
"U_C_Poor_1",
"U_C_Poor_2",
"U_C_Poor_shorts_1",
"U_C_Scientist",
"U_OrestesBody",
"U_Rangemaster",
"U_NikosAgedBody",
"U_NikosBody",
"U_Competitor",
"U_I_CombatUniform",
"U_I_CombatUniform_shortsleeve",
"U_I_CombatUniform_tshirt",
"U_I_OfficerUniform",
"U_I_G_Story_Protagonist_F",
"Exile_Uniform_Woodland",
"U_C_HunterBody_grn",
"U_IG_Guerilla1_1",
"U_IG_Guerilla2_1",
"U_IG_Guerilla2_2",
"U_IG_Guerilla2_3",
"U_IG_Guerilla3_1",
"U_BG_Guerilla2_1",
"U_IG_Guerilla3_2",
"U_BG_Guerrilla_6_1",
"U_BG_Guerilla1_1",
"U_BG_Guerilla2_2",
"U_BG_Guerilla2_3",
"U_BG_Guerilla3_1",
"U_BG_leader",
"U_IG_leader",
"U_I_G_resistanceLeader_F",
"U_I_FullGhillie_ard",
"U_I_FullGhillie_lsh",
"U_I_FullGhillie_sard",
"U_I_GhillieSuit",
"U_I_Wetsuit",
"U_I_HeliPilotCoveralls",
"U_I_pilotCoveralls"

		};
	};
	
	class RHSUniforms
	{
		name = "RHS Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
"rhs_uniform_cu_ocp",
"rhs_uniform_cu_ucp",
"rhs_uniform_cu_ocp_101st",
"rhs_uniform_df15",
"rhs_uniform_emr_patchless",
"rhs_uniform_flora_patchless",
"rhs_uniform_flora_patchless_alt",
"rhs_uniform_m88_patchless",
"rhs_uniform_mflora_patchless",
"rhs_uniform_vdv_mflora",
"rhs_uniform_FROG01_m81",
"rhs_uniform_FROG01_d",
"rhs_uniform_FROG01_wd",
"rhs_uniform_vdv_emr_des",
"rhs_uniform_msv_emr",
"rhs_uniform_flora",
"rhs_uniform_vdv_flora",
"rhs_uniform_gorka_r_g",
"rhs_uniform_gorka_r_y",
"rhs_chdkz_uniform_5",
"rhs_chdkz_uniform_4",
"rhs_chdkz_uniform_3",
"rhs_chdkz_uniform_2",
"rhs_chdkz_uniform_1",
"rhs_uniform_mvd_izlom",
"rhs_uniform_cu_ocp_10th",
"rhs_uniform_cu_ocp_1stcav",
"rhs_uniform_cu_ocp_82nd",
"rhs_uniform_cu_ucp_101st",
"rhs_uniform_cu_ucp_10th",
"rhs_uniform_cu_ucp_1stcav",
"rhs_uniform_cu_ucp_82nd",
"rhs_uniform_g3_m81",
"rhs_uniform_g3_blk",
"rhs_uniform_g3_mc",
"rhs_uniform_g3_rgr",
"rhs_uniform_g3_tan",
"rhsgref_uniform_ttsko_forest",
"rhsgref_uniform_ttsko_mountain",
"rhsgref_uniform_para_ttsko_oxblood",
"rhsgref_uniform_ttsko_urban",
"rhsgref_uniform_vsr",
"rhsgref_uniform_alpenflage",
"rhsgref_uniform_flecktarn",
"rhsgref_uniform_specter",
"rhsgref_uniform_flecktarn_full",
"rhsgref_uniform_tigerstripe",
"rhsgref_uniform_woodland",
"rhsgref_uniform_woodland_olive",
"rhsgref_uniform_ERDL",
"rhsgref_uniform_og107",
"rhsgref_uniform_og107_erdl",
"rhsgref_uniform_altis_lizard",
"rhsgref_uniform_olive",
"rhsgref_uniform_altis_lizard_olive",
"rhsgref_uniform_dpm",
"rhsgref_uniform_dpm_olive",
"rhsgref_uniform_3color_desert",
"rhssaf_uniform_m10_digital",
"rhssaf_uniform_m10_digital_summer",
"rhssaf_uniform_m10_digital_desert",
"rhssaf_uniform_m10_digital_tan_boots",
"rhssaf_uniform_m93_oakleaf",
"rhssaf_uniform_m93_oakleaf_summer"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{

"V_RebreatherB",
"V_Rangemaster_belt",
"V_TacVest_blk",
"V_TacVest_blk_POLICE",
"V_TacVest_brn",
"V_TacVest_camo",
"V_TacVest_khk",
"V_TacVest_oli",
"V_TacVestCamo_khk",
"V_TacVestIR_blk",
"V_I_G_resistanceLeader_F",
"V_BandollierB_ghex_F",
"sfp_stridsvast08",
"V_BandollierB_blk",
"V_BandollierB_cbr",
"V_BandollierB_khk",
"V_BandollierB_oli",
"V_BandollierB_rgr",
"V_Chestrig_blk",
"V_Chestrig_khk",
"V_Chestrig_oli",
"V_Chestrig_rgr",
"V_HarnessO_brn",
"V_HarnessO_gry",
"V_HarnessOGL_brn",
"V_HarnessOGL_gry",
"V_HarnessOSpec_brn",
"V_HarnessOSpec_gry",
"V_PlateCarrier1_blk",
"V_PlateCarrier1_rgr",
"V_PlateCarrier2_rgr",
"V_PlateCarrier3_rgr",
"V_PlateCarrierGL_blk",
"V_PlateCarrierGL_mtp",
"V_PlateCarrierGL_rgr",
"V_PlateCarrierH_CTRG",
"V_PlateCarrierIA1_dgtl",
"V_PlateCarrierIA2_dgtl",
"V_PlateCarrierIAGL_dgtl",
"V_PlateCarrierIAGL_oli",
"V_PlateCarrierL_CTRG",
"V_PlateCarrierSpec_blk",
"V_PlateCarrierSpec_mtp",
"V_PlateCarrierSpec_rgr"

		};
	};
	
	class RHSVests
	{
		name = "RHS Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
"rhs_6sh92",
"rhs_6sh92_radio",
"rhs_6sh92_vog",
"rhs_6sh92_vog_headset",
"rhs_6sh92_headset",
"rhs_6sh92_digi",
"rhs_6sh92_digi_radio",
"rhs_6sh92_digi_vog",
"rhs_6sh92_digi_vog_headset",
"rhs_6sh92_digi_headset",
"rhs_6b23",
"rhs_6b23_crew",
"rhs_6b23_crewofficer",
//"rhs_6b23_engineer",
"rhs_6b23_medic",
"rhs_6b23_rifleman",
"rhs_6b23_sniper",
"rhs_6b23_6sh92",
"rhs_6b23_6sh92_radio",
"rhs_6b23_6sh92_vog",
"rhs_6b23_6sh92_vog_headset",
"rhs_6b23_6sh92_headset",
"rhs_6b23_6sh92_headset_mapcase",
"rhs_6b23_digi",
"rhs_6b23_digi_crew",
"rhs_6b23_digi_crewofficer",
//"rhs_6b23_digi_engineer",
"rhs_6b23_digi_medic",
"rhs_6b23_digi_rifleman",
"rhs_6b23_digi_sniper",
"rhs_6b23_digi_6sh92",
"rhs_6b23_digi_6sh92_radio",
"rhs_6b23_digi_6sh92_vog",
"rhs_6b23_digi_6sh92_vog_headset",
"rhs_6b23_digi_6sh92_headset",
"rhs_6b23_digi_6sh92_headset_mapcase",
"rhs_6b23_ML",
"rhs_6b23_ML_crew",
"rhs_6b23_ML_crewofficer",
//"rhs_6b23_ML_engineer",
"rhs_6b23_ML_medic",
"rhs_6b23_ML_rifleman",
"rhs_6b23_ML_sniper",
"rhs_6b23_ML_6sh92",
"rhs_6b23_ML_6sh92_radio",
"rhs_6b23_ML_6sh92_vog",
"rhs_6b23_ML_6sh92_vog_headset",
"rhs_6b23_ML_6sh92_headset",
"rhs_6b23_ML_6sh92_headset_mapcase",
"rhs_6sh46",
"rhs_vest_commander",
"rhs_vydra_3m",
"rhsusf_iotv_ucp",
"rhsusf_iotv_ucp_grenadier",
"rhsusf_iotv_ucp_medic",
"rhsusf_iotv_ucp_repair",
"rhsusf_iotv_ucp_rifleman",
"rhsusf_iotv_ucp_SAW",
"rhsusf_iotv_ucp_squadleader",
"rhsusf_iotv_ucp_teamleader",
"rhsusf_iotv_ocp",
"rhsusf_iotv_ocp_grenadier",
"rhsusf_iotv_ocp_medic",
"rhsusf_iotv_ocp_repair",
"rhsusf_iotv_ocp_rifleman",
"rhsusf_iotv_ocp_SAW",
"rhsusf_iotv_ocp_squadleader",
"rhsusf_iotv_ocp_teamleader",
"rhsusf_spc",
"rhsusf_spc_corpsman",
"rhsusf_spc_patchless",
"rhsusf_spc_squadleader",
"rhsusf_spc_teamleader",
"rhsusf_spc_light",
"rhsusf_spc_rifleman",
"rhsusf_spc_iar",
"rhsusf_spcs_ocp_rifleman",
"rhsusf_spcs_ocp",
"rhsusf_spcs_ucp_rifleman",
"rhsusf_spcs_ucp",
"rhs_6b43",
"rhsgref_alice_webbing",
"sfp_kroppsskydd12_holster",
"sfp_kroppsskydd12",

		};
	};

	class Headgear
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
"H_Hat_Safari_sand_F",
"H_Hat_Safari_olive_F",
"H_Construction_basic_yellow_F",
"H_Construction_basic_white_F",
"H_Construction_basic_orange_F",
"H_Construction_basic_red_F",
"H_Construction_basic_vrana_F",
"H_Construction_basic_black_F",
"H_Construction_earprot_yellow_F",
"H_Construction_earprot_white_F",
"H_Construction_earprot_orange_F",
"H_Construction_earprot_red_F",
"H_Construction_earprot_vrana_F",
"H_Construction_earprot_black_F",
"H_Construction_headset_yellow_F",
"H_Construction_headset_white_F",
"H_Construction_headset_orange_F",
"H_Construction_headset_red_F",
"H_Construction_headset_vrana_F",
"H_Construction_headset_black_F",
"H_EarProtectors_yellow_F",
"H_EarProtectors_white_F",
"H_EarProtectors_orange_F",
"H_EarProtectors_red_F",
"H_EarProtectors_black_F",
"H_HeadSet_yellow_F",
"H_HeadSet_white_F",
"H_HeadSet_orange_F",
"H_HeadSet_red_F",
"H_HeadSet_black_F",
"H_PASGT_basic_white_F",
"H_PASGT_basic_olive_F",
"H_PASGT_basic_black_F",
"H_HeadBandage_stained_F",
"H_HeadBandage_clean_F",
"H_HeadBandage_bloody_F",
"H_Cap_White_IDAP_F",
"H_Cap_Orange_IDAP_F",
"H_Cap_Black_IDAP_F",
"H_WirelessEarpiece_F",
"H_Tank_black_F",
"H_HelmetB",
"H_HelmetB_camo",
"H_HelmetB_paint",
"H_HelmetB_light",
"H_Booniehat_khk",
"H_Booniehat_oli",
"H_Booniehat_indp",
"H_Booniehat_mcamo",
"H_Booniehat_grn",
"H_Booniehat_tan",
"H_Booniehat_dirty",
"H_Booniehat_dgtl",
"H_Booniehat_khk_hs",
"H_HelmetB_plain_mcamo",
"H_HelmetB_plain_blk",
"H_HelmetSpecB",
"H_HelmetSpecB_paint1",
"H_HelmetSpecB_paint2",
"H_HelmetSpecB_blk",
"H_HelmetSpecB_snakeskin",
"H_HelmetSpecB_sand",
"H_HelmetIA",
"H_HelmetIA_net",
"H_HelmetIA_camo",
"H_Helmet_Kerry",
"H_HelmetB_grass",
"H_HelmetB_snakeskin",
"H_HelmetB_desert",
"H_HelmetB_black",
"H_HelmetB_sand",
"H_Cap_red",
"H_Cap_blu",
"H_Cap_oli",
"H_Cap_headphones",
"H_Cap_tan",
"H_Cap_blk",
"H_Cap_blk_CMMG",
"H_Cap_brn_SPECOPS",
"H_Cap_tan_specops_US",
"H_Cap_khaki_specops_UK",
"H_Cap_grn",
"H_Cap_grn_BI",
"H_Cap_blk_Raven",
"H_Cap_blk_ION",
"H_Cap_oli_hs",
"H_Cap_usblack",
"H_Cap_surfer",
"H_Cap_police",
"H_HelmetCrew_B",
"H_HelmetCrew_O",
"H_HelmetCrew_I",
"H_PilotHelmetFighter_B",
"H_PilotHelmetFighter_O",
"H_PilotHelmetFighter_I",
"H_PilotHelmetHeli_B",
"H_PilotHelmetHeli_O",
"H_PilotHelmetHeli_I",
"H_CrewHelmetHeli_B",
"H_CrewHelmetHeli_O",
"H_CrewHelmetHeli_I",
"H_HelmetO_ocamo",
"H_HelmetLeaderO_ocamo",
"H_MilCap_ocamo",
"H_MilCap_mcamo",
"H_MilCap_oucamo",
"H_MilCap_rucamo",
"H_MilCap_gry",
"H_MilCap_dgtl",
"H_MilCap_blue",
"H_HelmetB_light_grass",
"H_HelmetB_light_snakeskin",
"H_HelmetB_light_desert",
"H_HelmetB_light_black",
"H_HelmetB_light_sand",
"H_BandMask_blk",
"H_BandMask_khk",
"H_BandMask_reaper",
"H_BandMask_demon",
"H_HelmetO_oucamo",
"H_HelmetLeaderO_oucamo",
"H_HelmetSpecO_ocamo",
"H_HelmetSpecO_blk",
"H_Bandanna_surfer",
"H_Bandanna_khk",
"H_Bandanna_khk_hs",
"H_Bandanna_cbr",
"H_Bandanna_sgg",
"H_Bandanna_sand",
"H_Bandanna_surfer_blk",
"H_Bandanna_surfer_grn",
"H_Bandanna_gry",
"H_Bandanna_blu",
"H_Bandanna_camo",
"H_Bandanna_mcamo",
"H_Shemag_khk",
"H_Shemag_tan",
"H_Shemag_olive",
"H_Shemag_olive_hs",
"H_ShemagOpen_khk",
"H_ShemagOpen_tan",
"H_Beret_blk",
"H_Beret_blk_POLICE",
"H_Beret_red",
"H_Beret_grn",
"H_Beret_grn_SF",
"H_Beret_brn_SF",
"H_Beret_ocamo",
"H_Beret_02",
"H_Beret_Colonel",
"H_Watchcap_blk",
"H_Watchcap_cbr",
"H_Watchcap_khk",
"H_Watchcap_camo",
"H_Watchcap_sgg",
"H_TurbanO_blk",
"H_StrawHat",
"H_StrawHat_dark",
"H_Hat_blue",
"H_Hat_brown",
"H_Hat_camo",
"H_Hat_grey",
"H_Hat_checker",
"H_Hat_tan",
"H_RacingHelmet_1_F",
"H_RacingHelmet_2_F",
"H_RacingHelmet_3_F",
"H_RacingHelmet_4_F",
"H_RacingHelmet_1_black_F",
"H_RacingHelmet_1_blue_F",
"H_RacingHelmet_1_green_F",
"H_RacingHelmet_1_red_F",
"H_RacingHelmet_1_white_F",
"H_RacingHelmet_1_yellow_F",
"H_RacingHelmet_1_orange_F",
"H_Cap_marshal",
"H_Helmet_Skate",
"H_HelmetB_TI_tna_F",
"H_HelmetB_tna_F",
"H_HelmetB_Enh_tna_F",
"H_HelmetB_Light_tna_F",
"H_HelmetO_ghex_F",
"H_HelmetCrew_O_ghex_F",
"H_MilCap_tna_F",
"H_MilCap_ghex_F",
"H_Booniehat_tna_F",
"H_Beret_gen_F",
"H_MilCap_gen_F",
"H_Cap_oli_Syndikat_F",
"H_Cap_tan_Syndikat_F",
"H_Cap_blk_Syndikat_F",
"H_Cap_grn_Syndikat_F",
"sfp_m90w_Helmet",
"sfp_m90s_Helmet",
"sfp_m90d_cap_isaf",
"sfp_m59w_cap",
"sfp_m90w_cap",
"sfp_bashatt90",
"sfp_m90w_helmet_peltor_nvg",
"sfp_flighthelmet116"
		};
	};
	
	class RHSHeadgear
	{
		name = "RHS Helmets";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
"rhs_6b27m_digi",
"rhs_6b27m_digi_ess",
"rhs_6b27m_digi_bala",
"rhs_6b27m_digi_ess_bala",
"rhs_6b27m",
"rhs_6b27m_bala",
"rhs_6b27m_ess",
"rhs_6b27m_ess_bala",
"rhs_6b27m_ml",
"rhs_6b27m_ml_ess",
"rhs_6b27m_ml_bala",
"rhs_6b27m_ML_ess_bala",
"rhs_6b27m_green",
"rhs_6b27m_green_ess",
"rhs_6b27m_green_ess_bala",
"rhs_6b26_green",
"rhs_6b26_bala_green",
"rhs_6b26_ess_green",
"rhs_6b26_ess_bala_green",
"rhs_6b26",
"rhs_6b26_bala",
"rhs_6b26_ess",
"rhs_6b26_ess_bala",
"rhs_6b28_green",
"rhs_6b28_green_bala",
"rhs_6b28_green_ess",
"rhs_6b28_green_ess_bala",
"rhs_6b28",
"rhs_6b28_bala",
"rhs_6b28_ess",
"rhs_6b28_ess_bala",
"rhs_6b28_flora",
"rhs_6b28_flora_bala",
"rhs_6b28_flora_ess",
"rhs_6b28_flora_ess_bala",
"rhs_Booniehat_digi",
"rhs_Booniehat_flora",
"rhs_ssh68",
"rhs_Booniehat_m81",
"rhs_Booniehat_marpatd",
"rhs_Booniehat_marpatwd",
"rhs_Booniehat_ocp",
"rhs_Booniehat_ucp",
"rhsusf_Bowman",
"rhsusf_ach_bare",
"rhsusf_ach_bare_des",
"rhsusf_ach_bare_des_ess",
"rhsusf_ach_bare_des_headset",
"rhsusf_ach_bare_des_headset_ess",
"rhsusf_ach_bare_ess",
"rhsusf_ach_bare_headset",
"rhsusf_ach_bare_headset_ess",
"rhsusf_ach_bare_semi",
"rhsusf_ach_bare_semi_ess",
"rhsusf_ach_bare_semi_headset",
"rhsusf_ach_bare_semi_headset_ess",
"rhsusf_ach_bare_tan",
"rhsusf_ach_bare_tan_ess",
"rhsusf_ach_bare_tan_headset",
"rhsusf_ach_bare_tan_headset_ess",
"rhsusf_ach_bare_wood",
"rhsusf_ach_bare_wood_ess",
"rhsusf_ach_bare_wood_headset",
"rhsusf_ach_bare_wood_headset_ess",
"rhsusf_ach_helmet_ESS_ocp",
"rhsusf_ach_helmet_ESS_ucp",
"rhsusf_ach_helmet_M81",
"rhsusf_ach_helmet_camo_ocp",
"rhsusf_ach_helmet_headset_ess_ocp",
"rhsusf_ach_helmet_headset_ess_ucp",
"rhsusf_ach_helmet_headset_ocp",
"rhsusf_ach_helmet_headset_ucp",
"rhsusf_ach_helmet_ocp",
"rhsusf_ach_helmet_ocp_norotos",
"rhsusf_ach_helmet_ucp",
"rhsusf_ach_helmet_ucp_norotos",
"rhsusf_bowman_cap",
"rhsusf_lwh_helmet_M1942",
"rhsusf_lwh_helmet_marpatd",
"rhsusf_lwh_helmet_marpatd_ess",
"rhsusf_lwh_helmet_marpatd_headset",
"rhsusf_lwh_helmet_marpatwd",
"rhsusf_lwh_helmet_marpatwd_ess",
"rhsusf_lwh_helmet_marpatwd_headset",
"rhsusf_mich_bare",
"rhsusf_mich_bare_alt",
"rhsusf_mich_bare_alt_semi",
"rhsusf_mich_bare_alt_tan",
"rhsusf_mich_bare_headset",
"rhsusf_mich_bare_norotos",
"rhsusf_mich_bare_norotos_alt",
"rhsusf_mich_bare_norotos_alt_headset",
"rhsusf_mich_bare_norotos_alt_semi",
"rhsusf_mich_bare_norotos_alt_semi_headset",
"rhsusf_mich_bare_norotos_alt_tan",
"rhsusf_mich_bare_norotos_alt_tan_headset",
"rhsusf_mich_bare_norotos_arc",
"rhsusf_mich_bare_norotos_arc_alt",
"rhsusf_mich_bare_norotos_arc_alt_headset",
"rhsusf_mich_bare_norotos_arc_alt_semi",
"rhsusf_mich_bare_norotos_arc_alt_semi_headset",
"rhsusf_mich_bare_norotos_arc_alt_tan",
"rhsusf_mich_bare_norotos_arc_alt_tan_headset",
"rhsusf_mich_bare_norotos_arc_headset",
"rhsusf_mich_bare_norotos_arc_semi",
"rhsusf_mich_bare_norotos_arc_semi_headset",
"rhsusf_mich_bare_norotos_arc_tan",
"rhsusf_mich_bare_norotos_headset",
"rhsusf_mich_bare_norotos_semi",
"rhsusf_mich_bare_norotos_semi_headset",
"rhsusf_mich_bare_norotos_tan",
"rhsusf_mich_bare_norotos_tan_headset",
"rhsusf_mich_bare_semi",
"rhsusf_mich_bare_semi_headset",
"rhsusf_mich_bare_tan",
"rhsusf_mich_bare_tan_headset",
"rhsusf_mich_helmet_marpatd_alt_headset",
"rhsusf_mich_helmet_marpatd_headset",
"rhsusf_mich_helmet_marpatd_norotos",
"rhsusf_mich_helmet_marpatd_norotos_arc",
"rhsusf_mich_helmet_marpatd_norotos_arc_headset",
"rhsusf_mich_helmet_marpatd_norotos_headset",
"rhsusf_mich_helmet_marpatwd",
"rhsusf_mich_helmet_marpatwd_alt",
"rhsusf_mich_helmet_marpatwd_alt_headset",
"rhsusf_mich_helmet_marpatwd_headset",
"rhsusf_mich_helmet_marpatwd_norotos",
"rhsusf_mich_helmet_marpatwd_norotos_arc",
"rhsusf_mich_helmet_marpatwd_norotos_arc_headset",
"rhsusf_mich_helmet_marpatwd_norotos_headset",
"rhs_altyn_novisor",
"rhs_altyn_novisor_bala",
"rhs_altyn_novisor_ess",
"rhs_altyn_novisor_ess_bala",
"rhs_altyn_visordown",
"rhs_altyn",
"rhs_altyn_bala",
"rhsusf_opscore_bk_pelt",
"rhsusf_opscore_bk",
"rhsusf_opscore_coy_cover",
"rhsusf_opscore_coy_cover_pelt",
"rhsusf_opscore_fg",
"rhsusf_opscore_fg_pelt",
"rhsusf_opscore_fg_pelt_cam",
"rhsusf_opscore_fg_pelt_nsw",
"rhsusf_opscore_mc",
"rhsusf_opscore_mc_pelt",
"rhsusf_opscore_mc_pelt_nsw",
"rhsusf_opscore_mc_cover",
"rhsusf_opscore_mc_cover_pelt",
"rhsusf_opscore_mc_cover_pelt_nsw",
"rhsusf_opscore_mc_cover_pelt_cam",
"rhsusf_opscore_paint",
"rhsusf_opscore_paint_pelt",
"rhsusf_opscore_paint_pelt_nsw",
"rhsusf_opscore_paint_pelt_nsw_cam",
"rhsusf_opscore_rg_cover",
"rhsusf_opscore_rg_cover_pelt",
"rhsusf_opscore_ut",
"rhsusf_opscore_ut_pelt",
"rhsusf_opscore_ut_pelt_cam",
"rhsusf_opscore_ut_pelt_nsw",
"rhsusf_opscore_ut_pelt_nsw_cam",
"rhsusf_opscore_mar_ut_pelt",
"rhsusf_opscore_mar_ut",
"rhsusf_opscore_mar_fg_pelt",
"rhsusf_opscore_mar_fg",
"rhsusf_protech_helmet",
"rhsusf_protech_helmet_ess",
"rhsusf_protech_helmet_rhino",
"rhsusf_protech_helmet_rhino_ess",
"rhsgref_helmet_pasgt_3color_desert",
"rhsgref_helmet_pasgt_3color_desert_rhino",
"rhsgref_helmet_pasgt_altis_lizard",
"rhsgref_helmet_pasgt_erdl",
"rhsgref_helmet_pasgt_erdl_rhino",
"rhsgref_helmet_pasgt_flecktarn",
"rhsgref_helmet_pasgt_olive",
"rhsgref_helmet_pasgt_woodland",
"rhsgref_helmet_pasgt_woodland_rhino",
"rhs_Booniehat2_marpatwd",
"rhsgref_Booniehat_alpen",
"rhssaf_Booniehat_digital",
"rhssaf_Booniehat_md2camo",
//"Exile_Headgear_GasMask",
"rhssaf_Booniehat_woodland"

		};
	};

	class Glasses
	{
		name = "Glasses";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
"G_Aviator",
"G_Balaclava_TI_G_blk_F",
"G_Balaclava_TI_G_tna_F",
"G_Balaclava_TI_blk_F",
"G_Balaclava_TI_tna_F",
"G_Balaclava_blk",
"G_Balaclava_combat",
"G_Balaclava_lowprofile",
"G_Balaclava_oli",
"G_Bandanna_aviator",
"G_Bandanna_beast",
"G_Bandanna_blk",
"G_Bandanna_khk",
"G_Bandanna_oli",
"G_Bandanna_shades",
"G_Bandanna_sport",
"G_Bandanna_tan",
"G_Combat",
"G_Combat_Goggles_tna_F",
"G_Diving",
"G_EyeProtectors_Earpiece_F",
"G_EyeProtectors_F",
"G_Goggles_VR",
"G_I_Diving",
"G_Lady_Blue",
"G_Lady_Dark",
"G_Lady_Mirror",
"G_Lady_Red",
"G_Lowprofile",
"G_Respirator_blue_F",
"G_Respirator_white_F",
"G_Respirator_yellow_F",
"G_Shades_Black",
"G_Shades_Blue",
"G_Shades_Green",
"G_Shades_Red",
"G_Spectacles",
"G_Spectacles_Tinted",
"G_Sport_BlackWhite",
"G_Sport_Blackred",
"G_Sport_Blackyellow",
"G_Sport_Checkered",
"G_Sport_Greenblack",
"G_Sport_Red",
"G_Squares",
"G_Squares_Tinted",
"G_Tactical_Black",
"G_Tactical_Clear",
"G_WirelessEarpiece_F",
"KA_MCU"
//"NVGoggles"
		};
	};

	class PointerAttachments
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
"bipod_01_F_blk",
"bipod_01_F_mtp",
"bipod_01_F_snd",
"bipod_02_F_blk",
"bipod_02_F_hex",
"bipod_02_F_tan",
"bipod_03_F_blk",
"bipod_03_F_oli"
		};
	};

	class MuzzleAttachments
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
"muzzle_snds_338_black",
"muzzle_snds_338_green",
"muzzle_snds_338_sand",
"muzzle_snds_93mmg",
"muzzle_snds_93mmg_tan",
"muzzle_snds_acp",
"muzzle_snds_B",
"muzzle_snds_H",
"muzzle_snds_H_MG",
"muzzle_snds_H_SW",
"muzzle_snds_L",
"muzzle_snds_M"
		};
	};
	
	class RHSAttachments
	{
		name = "RHS Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
"rhsusf_acc_anpeq15side",
"rhsusf_acc_anpeq15",
"rhsusf_acc_anpeq15A",
"rhsusf_acc_anpeq15_light",
"rhsusf_acc_M952V",
"rhs_acc_perst3",
"rhs_acc_perst3_top",
"rhs_acc_perst3_2dp_h",
"rhs_acc_perst3_2dp_light_h",
"rhs_acc_2dpZenit",
"rhs_acc_2dpZenit_ris",
"rhs_acc_perst1ik",
"rhs_acc_perst1ik_ris",
"rhsusf_acc_anpeq15_bk",
"rhsusf_acc_anpeq15_bk_light",
"rhsusf_acc_SF3P556",
"rhsusf_acc_SFMB556",
"rhsusf_acc_nt4_black",
"rhsusf_acc_nt4_tan",
"rhsusf_acc_rotex5_grey",
"rhsusf_acc_rotex5_tan",
"rhsusf_acc_SR25S",
"rhsusf_acc_M2010S",
"rhs_acc_ak5",
"rhs_acc_dtk1",
"rhs_acc_dtk3",
"rhs_acc_dtk4screws",
"rhs_acc_dtk4long",
"rhs_acc_dtk4short",
"rhs_acc_tgpa",
"rhs_acc_dtk1l",
"rhs_acc_pbs1",
"rhsusf_acc_omega9k",
"rhs_acc_uuk",
"rhsusf_acc_rotex_mp7",
"rhsusf_acc_rotex_mp7_desert",
"rhsusf_acc_rotex_mp7_winter",
"rhsusf_acc_rotex_mp7_aor1",
//"VME_M99_Suppressor_Fix",
//"VME_LR4_bipod",
//"VME_LR4_Silencer",
"rhsusf_acc_T1_high"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] =
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F",
			"I_UAV_06_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
"optic_Aco",
"optic_ACO_grn",
"optic_ACO_grn_smg",
"optic_Aco_smg",
"optic_AMS",
"optic_AMS_khk",
"optic_AMS_snd",
"optic_Arco",
"optic_DMS",
"optic_Hamr",
"optic_Holosight",
"optic_Holosight_smg",
"optic_KHS_blk",
"optic_KHS_hex",
"optic_KHS_old",
"optic_KHS_tan",
"optic_LRPS",
"optic_MRCO",
"optic_MRD",
"optic_NVS",
"optic_SOS",
"optic_Yorris",
"sfp_optic_aimpoint",
"sfp_optic_aimpoint_t1",
"sfp_optic_3x_aimpoint",
"sfp_optic_kikarsikte90b_10x",
"ME_LR4_Scope"
		};
	};
	
	class RHSOptics
	{
		name = "RHS Optics";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
"rhs_acc_1p29",
"rhs_acc_1p63",
"rhs_acc_1p78",
"rhs_acc_1pn93_1",
"rhs_acc_1pn93_2",
"rhs_acc_dh520x56",
"rhs_acc_ekp1",
"rhs_acc_pgo7v",
"rhs_acc_pkas",
"rhs_acc_pso1m2",
"rhs_acc_rakursPM",
"rhs_weap_optic_smaw",
"rhsusf_acc_ACOG",
"rhsusf_acc_ACOG2",
"rhsusf_acc_ACOG2_USMC",
"rhsusf_acc_ACOG3",
"rhsusf_acc_ACOG3_USMC",
"rhsusf_acc_ACOG_MDO",
"rhsusf_acc_ACOG_RMR",
"rhsusf_acc_ACOG_USMC",
"rhsusf_acc_ACOG_d",
"rhsusf_acc_ACOG_pip",
"rhsusf_acc_ACOG_wd",
"rhsusf_acc_ELCAN",
"rhsusf_acc_ELCAN_pip",
"rhsusf_acc_EOTECH",
"rhsusf_acc_LEUPOLDMK4",
"rhsusf_acc_LEUPOLDMK4_2",
"rhsusf_acc_M8541",
"rhsusf_acc_M8541_low",
"rhsusf_acc_M8541_low_d",
"rhsusf_acc_M8541_low_wd",
"rhsusf_acc_SpecterDR",
"rhsusf_acc_SpecterDR_A_3d",
"rhsusf_acc_SpecterDR_D",
"rhsusf_acc_SpecterDR_OD",
"rhsusf_acc_compm4",
"rhsusf_acc_eotech_552",
"rhsusf_acc_premier",
"rhsusf_acc_premier_anpvs27",
"rhsusf_acc_premier_low",
"RHS_optic_maaws"
		};
	};

	class Hardware
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"Exile_Item_CamoTentKit",
"Exile_Item_FloodLightKit",
"Exile_Item_StorageCrateKit",
"Exile_Item_WoodDoorKit",
"Exile_Item_WoodFloorKit",
"Exile_Item_WoodFloorPortKit",
"Exile_Item_WoodGateKit",
"Exile_Item_WoodPlank",
"Exile_Item_WoodStairsKit",
"Exile_Item_WoodSupportKit",
"Exile_Item_WoodWallKit",
"Exile_Item_WoodWallHalfKit",
"Exile_Item_WoodWindowKit",
"Exile_Item_PortableGeneratorKit",
"Exile_Item_CarWheel",
"Exile_Item_Cement",
"Exile_Item_CookingPot",
"Exile_Item_DuctTape",
"Exile_Item_ExtensionCord",
"Exile_Item_FuelCanisterEmpty",
"Exile_Item_JunkMetal",
"Exile_Item_LightBulb",
"Exile_Item_Matches",
"Exile_Item_MetalBoard",
"Exile_Item_MetalHedgehogKit",
"Exile_Item_MetalPole",
"Exile_Item_MetalScrews",
"Exile_Item_MetalWire",
"Exile_Item_Rope",
"Exile_Item_Sand",
"Exile_Item_ZipTie",
"Exile_Item_SleepingMat",
"rhs_assault_umbts_engineer",
"Exile_Item_ToiletPaper"

			/*
			--Not for Sale--
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_MobilePhone",
			--Unused--
			"Exile_Item_SprayCan_Black",
			"Exile_Item_SprayCan_Red",
			"Exile_Item_SprayCan_Green",
			"Exile_Item_SprayCan_White",
			"Exile_Item_SprayCan_Blue",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_Wrench",
			"Exile_Item_Rope"
		*/
		};
	};

	class Food
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",
"Exile_Item_Dogfood",
"Exile_Item_BeefParts",
"Exile_Item_Cheathas",
"Exile_Item_Noodles",
"Exile_Item_SeedAstics",
"Exile_Item_Raisins",
"Exile_Item_Moobar"

			// Hunted Animals
			// Note: Adding these to the trader will defeat the purpose of hunting!
			/*
			"Exile_Item_SheepSteak_Cooked",
			"Exile_Item_AlsatianSteak_Cooked",
			"Exile_Item_CatSharkFilet_Cooked",
			"Exile_Item_FinSteak_Cooked",
			"Exile_Item_GoatSteak_Cooked",
			"Exile_Item_TurtleFilet_Cooked",
			"Exile_Item_TunaFilet_Cooked",
			"Exile_Item_RabbitSteak_Cooked",
			"Exile_Item_ChickenFilet_Cooked",
			"Exile_Item_RoosterFilet_Cooked",
			"Exile_Item_MulletFilet_Cooked",
			"Exile_Item_SalemaFilet_Cooked",
			"Exile_Item_MackerelFilet_Cooked",
			"Exile_Item_OrnateFilet_Cooked",
			"Exile_Item_SnakeFilet_Cooked",
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
			*/
		};
	};
	
	class NonVeganFood
	{
		name = "Non-Vegan Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_CatSharkFilet_Raw",
			"Exile_Item_TunaFilet_Raw",
			"Exile_Item_AlsatianSteak_Raw",
			"Exile_Item_TurtleFilet_Raw",
			"Exile_Item_SheepSteak_Raw",
			"Exile_Item_FinSteak_Raw",
			"Exile_Item_GoatSteak_Raw",
			"Exile_Item_ChickenFilet_Raw",
			"Exile_Item_RoosterFilet_Raw",
			"Exile_Item_MackerelFilet_Raw",
			"Exile_Item_MulletFilet_Raw",
			"Exile_Item_OrnateFilet_Raw",
			"Exile_Item_RabbitSteak_Raw",
			"Exile_Item_SalemaFilet_Raw",
			"Exile_Item_SnakeFilet_Raw"
		};
	};
	

	class Drinks
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"Exile_Item_InstantCoffee",
"Exile_Item_Can_Empty",
"Exile_Item_PlasticBottleCoffee",
"Exile_Item_PowerDrink",
"Exile_Item_PlasticBottleFreshWater",
"Exile_Item_Beer",
"Exile_Item_EnergyDrink",
"Exile_Item_MountainDupe",
"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"Exile_Melee_Axe",
"Exile_Item_CanOpener",
"Exile_Item_Handsaw",
"Exile_Item_Pliers",
"Exile_Item_Grinder",
"Exile_Magazine_Battery",
"Exile_Item_Foolbox",
"Exile_Item_CordlessScrewdriver",
"Exile_Item_FireExtinguisher",
"Exile_Item_Hammer",
"Exile_Item_OilCanister",
"Exile_Item_Screwdriver",
//"Exile_Item_Shovel",
"Exile_Melee_Shovel",
"Exile_Item_Wrench",
"Exile_Item_Laptop",
"Exile_Item_BaseCameraKit",
"Exile_Item_ThermalScannerPro",
"Exile_Item_SafeKit",
"Exile_Item_SafeSmallKit",
"Exile_Item_CodeLock",
"Exile_Item_FortificationUpgrade",
"Exile_Item_Knife",

			/*
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",
			"Exile_Item_BurlapSack",
			"Exile_Item_Bullets_556",
			"Exile_Item_Bullets_762",
			"Exile_Item_WeaponParts",
			*/

			"Binocular",
			"Rangefinder",
			/*
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			*/
			
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8"			
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",
			"Exile_Item_Magazine01",
			"Exile_Item_Magazine02",
			"Exile_Item_Magazine03",
			"Exile_Item_Magazine04"

			// Not available in 0.9.4!
			//"Exile_Item_Defibrillator"
		};
	};

	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"B_Parachute",
			"V_RebreatherB",
			"G_Diving",
			"NVGoggles"
		
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
"sfp_backpack_stridssack2000",
"B_AssaultPack_blk",
"B_AssaultPack_cbr",
"B_AssaultPack_dgtl",
"B_AssaultPack_khk",
"B_AssaultPack_mcamo",
"B_AssaultPack_rgr",
"B_AssaultPack_sgg",
"B_FieldPack_blk",
"B_FieldPack_cbr",
"B_FieldPack_ocamo",
"B_FieldPack_oucamo",
"B_TacticalPack_blk",
"B_TacticalPack_rgr",
"B_TacticalPack_ocamo",
"B_TacticalPack_mcamo",
"B_TacticalPack_oli",
"B_Kitbag_cbr",
"B_Kitbag_mcamo",
"B_Kitbag_sgg",
"B_Carryall_cbr",
"B_Carryall_khk",
"B_Carryall_mcamo",
"B_Carryall_ocamo",
"B_Carryall_oli",
"B_Carryall_oucamo",
"B_Bergen_blk",
"B_Bergen_mcamo",
"B_Bergen_rgr",
"B_Bergen_sgg",
"B_HuntingBackpack",
"B_OutdoorPack_blk",
"B_OutdoorPack_blu",
"B_OutdoorPack_tan",
"B_Parachute"


		};
	};
	
	class RHSBackpacks
	{
		name = "RHS Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
"rhsusf_assault_eagleaiii_coy",
"rhsusf_assault_eagleaiii_ocp",
"rhsusf_assault_eagleaiii_ucp",
"rhsusf_falconii_coy",
"rhsusf_falconii_mc",
"rhsusf_falconii",
"rhs_assault_umbts",
//"rhs_assault_umbts_engineer_empty",
"rhs_medic_bag",
"rhs_sidor",
"rhssaf_kitbag_md2camo",
"rhssaf_kitbag_digital",
"rhssaf_kitbag_smb",
"rhssaf_alice_md2camo",
"rhssaf_alice_smb",
"rhsgref_hidf_alicepack",
"rhsgref_wdl_alicepack",
"rhsgref_ttsko_alicepack"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] =
		{
"100Rnd_65x39_caseless_mag",
"100Rnd_65x39_caseless_mag_Tracer",
"10Rnd_127x54_Mag",
"10Rnd_338_Mag",
"10Rnd_762x54_Mag",
"10Rnd_93x64_DMR_05_Mag",
"11Rnd_45ACP_Mag",
"130Rnd_338_Mag",
"150Rnd_762x54_Box",
"150Rnd_762x54_Box_Tracer",
"150Rnd_93x64_Mag",
"16Rnd_9x21_Mag",
"200Rnd_65x39_cased_Box",
"200Rnd_65x39_cased_Box_Tracer",
"20Rnd_556x45_UW_mag",
"20Rnd_762x51_Mag",
"30Rnd_45ACP_Mag_SMG_01",
"30Rnd_45ACP_Mag_SMG_01_tracer_green",
"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Green",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Yellow",
"30Rnd_65x39_caseless_green",
"30Rnd_65x39_caseless_green_mag_Tracer",
"30Rnd_65x39_caseless_mag",
"30Rnd_65x39_caseless_mag_Tracer",
"30Rnd_9x21_Mag",
"30Rnd_9x21_Yellow_Mag",
"30Rnd_9x21_Green_Mag",
"30Rnd_9x21_Red_Mag",
"5Rnd_127x108_APDS_Mag",
"5Rnd_127x108_Mag",
"6Rnd_45ACP_Cylinder",
"6Rnd_GreenSignal_F",
"6Rnd_RedSignal_F",
"7Rnd_408_Mag",
"9Rnd_45ACP_Mag",
"Exile_Magazine_30Rnd_545x39_AK_Green",
"Exile_Magazine_30Rnd_545x39_AK_Red",
"Exile_Magazine_30Rnd_545x39_AK_White",
"Exile_Magazine_30Rnd_545x39_AK_Yellow",
"Exile_Magazine_45Rnd_545x39_RPK_Green",
"Exile_Magazine_75Rnd_545x39_RPK_Green",
"Exile_Magazine_20Rnd_762x51_DMR",
"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
"Exile_Magazine_20Rnd_762x51_DMR_Red",
"Exile_Magazine_20Rnd_762x51_DMR_Green",
"Exile_Magazine_10Rnd_303",
"Exile_Magazine_100Rnd_762x54_PK_Green",
"Exile_Magazine_7Rnd_45ACP",
"Exile_Magazine_8Rnd_9x18",
"Exile_Magazine_30Rnd_545x39_AK",
"Exile_Magazine_6Rnd_45ACP",
"Exile_Magazine_5Rnd_22LR",
"Exile_Magazine_10Rnd_762x54",
"Exile_Magazine_10Rnd_9x39",
"Exile_Magazine_20Rnd_9x39",
"Exile_Magazine_8Rnd_74Slug",
"30Rnd_9x21_Mag_SMG_02",
"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
"30Rnd_580x42_Mag_F",
"30Rnd_580x42_Mag_Tracer_F",
"100Rnd_580x42_Mag_F",
"100Rnd_580x42_Mag_Tracer_F",
"20Rnd_650x39_Cased_Mag_F",
"10Rnd_50BW_Mag_F",
"150Rnd_556x45_Drum_Mag_F",
"150Rnd_556x45_Drum_Mag_Tracer_F",
"30Rnd_762x39_Mag_F",
"30Rnd_762x39_Mag_Green_F",
"30Rnd_762x39_Mag_Tracer_F",
"30Rnd_762x39_Mag_Tracer_Green_F",
"30Rnd_545x39_Mag_F",
"30Rnd_545x39_Mag_Green_F",
"30Rnd_545x39_Mag_Tracer_F",
"30Rnd_545x39_Mag_Tracer_Green_F",
"200Rnd_556x45_Box_F",
"200Rnd_556x45_Box_Red_F",
"200Rnd_556x45_Box_Tracer_F",
"200Rnd_556x45_Box_Tracer_Red_F",
"10Rnd_9x21_Mag",
"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
"Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag",
"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
"Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag",
"Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag",
"Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag",
"Exile_Magazine_10Rnd_765x17_SA61",
"Exile_Magazine_20Rnd_765x17_SA61",
"Exile_Magazine_10Rnd_127x99_m107",
"Exile_Magazine_5Rnd_127x108_APDS_KSVK",
"Exile_Magazine_5Rnd_127x108_KSVK",
"Chemlight_blue",
"Chemlight_green",
"Chemlight_red",
"FlareGreen_F",
"FlareRed_F",
"FlareWhite_F",
"FlareYellow_F",
"UGL_FlareGreen_F",
"UGL_FlareRed_F",
"UGL_FlareWhite_F",
"UGL_FlareYellow_F",
"3Rnd_UGL_FlareGreen_F",
"3Rnd_UGL_FlareRed_F",
"3Rnd_UGL_FlareWhite_F",
"3Rnd_UGL_FlareYellow_F",
"SmokeShell",
"SmokeShellBlue",
"SmokeShellGreen",
"SmokeShellOrange",
"SmokeShellPurple",
"SmokeShellRed",
"SmokeShellYellow",
"1Rnd_Smoke_Grenade_shell",
"1Rnd_SmokeBlue_Grenade_shell",
"1Rnd_SmokeGreen_Grenade_shell",
"1Rnd_SmokeOrange_Grenade_shell",
"1Rnd_SmokePurple_Grenade_shell",
"1Rnd_SmokeRed_Grenade_shell",
"1Rnd_SmokeYellow_Grenade_shell",
"3Rnd_Smoke_Grenade_shell",
"3Rnd_SmokeBlue_Grenade_shell",
"3Rnd_SmokeGreen_Grenade_shell",
"3Rnd_SmokeOrange_Grenade_shell",
"3Rnd_SmokePurple_Grenade_shell",
"3Rnd_SmokeRed_Grenade_shell",
"3Rnd_SmokeYellow_Grenade_shell",
"rhsusf_mag_7x45acp_MHP",
"rhs_mag_9x18_12_57N181S",
"rhs_mag_9x19_17",
"sfp_100Rnd_762x51_ksp58",
"sfp_249Rnd_762x51_ksp58",
"sfp_200rd_556x45_ksp90",
"sfp_9rnd_762x51_psg90",
"sfp_9rnd_762x51_psg90_prick",
"sfp_9rnd_762x51_psg90_tracer",
"sfp_20rnd_762_51_ak4",
"sfp_30rnd_556x45_stanag_plastic",
"sfp_36Rnd_9mm_kpistm45",
"rhs_20rnd_9x39mm_SP5",
"rhs_20rnd_9x39mm_SP6"
		};
	};
	
	class RHSAmmo
	{
		name = "RHS Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] =
		{
"rhs_mag_30Rnd_556x45_Mk318_Stanag",
"rhs_mag_30Rnd_556x45_Mk262_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
"rhs_200rnd_556x45_M_SAW",
"rhs_200rnd_556x45_B_SAW",
"rhs_200rnd_556x45_T_SAW",
"rhsusf_50Rnd_762x51",
"rhsusf_50Rnd_762x51_m993",
"rhsusf_50Rnd_762x51_m80a1epr",
"rhsusf_100Rnd_762x51",
"rhsusf_100Rnd_762x51_m993",
"rhsusf_100Rnd_762x51_m80a1epr",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_Slug",
"rhsusf_20Rnd_762x51_m993_Mag",
"rhsusf_5Rnd_300winmag_xm2010",
"rhs_30Rnd_762x39mm",
"rhs_30Rnd_762x39mm_tracer",
"rhs_30Rnd_762x39mm_89",
"rhs_30Rnd_545x39_AK",
"rhs_30Rnd_545x39_AK_no_tracers",
"rhs_30Rnd_545x39_7N10_AK",
"rhs_30Rnd_545x39_7N22_AK",
"rhs_30Rnd_545x39_AK_green",
"rhs_45Rnd_545X39_AK",
"rhs_45Rnd_545X39_7N10_AK",
"rhs_45Rnd_545X39_7N22_AK",
"rhs_45Rnd_545X39_AK_Green",
"rhs_100Rnd_762x54mmR",
"rhs_100Rnd_762x54mmR_green",
"rhs_10Rnd_762x54mmR_7N1",
"rhsusf_mag_10Rnd_STD_50BMG_M33",
"rhsusf_mag_10Rnd_STD_50BMG_mk211",
"rhsusf_mag_40Rnd_46x30_AP",
"rhsusf_mag_40Rnd_46x30_FMJ",
"rhsusf_mag_40Rnd_46x30_JHP",
"rhs_5Rnd_338lapua_t5000",
"rhsusf_5Rnd_762x51_m118_special_Mag",
"rhsusf_5Rnd_762x51_m62_Mag",
"rhsusf_10Rnd_762x51_m62_Mag",
"rhsusf_10Rnd_762x51_m993_Mag",
"rhsusf_10Rnd_762x51_m118_special_Mag",
"rhsusf_mag_15Rnd_9x19_FMJ",
"rhsusf_mag_15Rnd_9x19_JHP",
"rhsusf_mag_17Rnd_9x19_JHP",
"rhsusf_mag_17Rnd_9x19_FMJ",
"rhs_mag_9x18_8_57N181S",
"rhs_mag_9x19mm_7n31_44",
"rhs_mag_9x19mm_7n21_44",
"rhs_mag_9x19mm_7n31_20",
"rhsusf_5Rnd_00Buck",
"rhsusf_5Rnd_Slug",
"rhsgref_5Rnd_762x54_m38",
"rhs_mag_9x19mm_7n21_20",
"rhsusf_5Rnd_762x51_m118_special_Mag",
//"VME_LR4_5Rnd_M80",
//"VME_LR4_5Rnd_M61_AP",
//"VME_LR4_5Rnd_M118_Special",
"rhsusf_5Rnd_762x51_m993_Mag"


		};
	};

	class Flares
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"Chemlight_blue",
"Chemlight_green",
"Chemlight_red",
"FlareGreen_F",
"FlareRed_F",
"FlareWhite_F",
"FlareYellow_F",
"UGL_FlareGreen_F",
"UGL_FlareRed_F",
"UGL_FlareWhite_F",
"UGL_FlareYellow_F",
"3Rnd_UGL_FlareGreen_F",
"3Rnd_UGL_FlareRed_F",
"3Rnd_UGL_FlareWhite_F",
"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"SmokeShell",
"SmokeShellBlue",
"SmokeShellGreen",
"SmokeShellOrange",
"SmokeShellPurple",
"SmokeShellRed",
"SmokeShellYellow",
"1Rnd_Smoke_Grenade_shell",
"1Rnd_SmokeBlue_Grenade_shell",
"1Rnd_SmokeGreen_Grenade_shell",
"1Rnd_SmokeOrange_Grenade_shell",
"1Rnd_SmokePurple_Grenade_shell",
"1Rnd_SmokeRed_Grenade_shell",
"1Rnd_SmokeYellow_Grenade_shell",
"3Rnd_Smoke_Grenade_shell",
"3Rnd_SmokeBlue_Grenade_shell",
"3Rnd_SmokeGreen_Grenade_shell",
"3Rnd_SmokeOrange_Grenade_shell",
"3Rnd_SmokePurple_Grenade_shell",
"3Rnd_SmokeRed_Grenade_shell",
"3Rnd_SmokeYellow_Grenade_shell"
		};
	};

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
"HandGrenade",
"MiniGrenade",
"B_IR_Grenade",
"O_IR_Grenade",
"I_IR_Grenade",
"1Rnd_HE_Grenade_shell",
"3Rnd_HE_Grenade_shell",
"APERSBoundingMine_Range_Mag",
"rhssaf_mine_mrud_c_mag",
"APERSMine_Range_Mag",
"APERSTripMine_Wire_Mag",
"ClaymoreDirectionalMine_Remote_Mag",
"DemoCharge_Remote_Mag",
"IEDLandBig_Remote_Mag",
"IEDLandSmall_Remote_Mag",
"IEDUrbanBig_Remote_Mag",
"IEDUrbanSmall_Remote_Mag",
"SatchelCharge_Remote_Mag",
"SLAMDirectionalMine_Wire_Mag"
		};
	};
	
	class Launchers
	{
		name = "Launchers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{

"rhs_weap_fim92",
"rhs_weap_rpg18",
"rhs_weap_rshg2",
"rhs_weap_smaw_green",
"rhs_weap_M136",
"rhs_weap_M136_hedp",
"rhs_weap_M136_hp",
"rhs_weap_m72a7",
"rhs_weap_maaws",
"rhs_weap_rpg7",
"rhs_weap_rpg26",
"rhs_weap_igla",
"rhs_mag_9k38_rocket",
"rhs_fim92_mag",
"rhs_rpg7_PG7VL_mag",
"rhs_rpg7_PG7V_mag",
"rhs_rpg7_PG7VR_mag",
"rhs_rpg7_TBG7V_mag",
"rhs_rpg7_OG7V_mag",
"rhs_rpg7_type69_airburst_mag",
"rhs_mag_smaw_HEAA",
"rhs_mag_smaw_HEDP",
"rhs_mag_smaw_SR",
"rhs_mag_maaws_HEAT",
"rhs_mag_maaws_HEDP",
"rhs_mag_maaws_HE",
"rhs_mag_maaws_SMOKE",
"rhs_mag_maaws_ILLUM",
//"sfp_rbs17_support_bag",
//"sfp_rbs17_weapon_bag",
//"sfp_rbs17_missile_bag",
"sfp_rbs55_support_bag",
"sfp_rbs55_weapon_bag",
"sfp_rbs56_support_bag",
"sfp_rbs56_weapon_bag",
"sfp_rbs70_support_bag",
"sfp_rbs70_weapon_bag",
"sfp_grkm84_support_bag",
"sfp_grkm84_weapon_bag",
"rhs_weap_fgm148",
"rhs_fgm148_magazine_AT",
"rhs_weap_m32",
"rhsusf_mag_6Rnd_M441_HE",
"rhsusf_mag_6Rnd_M433_HEDP",
"rhsusf_mag_6Rnd_M397_HET"

		};
	};
	

	class Pistols
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
"Exile_Weapon_Colt1911",
"Exile_Weapon_Makarov",
"Exile_Weapon_Taurus",
"Exile_Weapon_TaurusGold",
"hgun_P07_F",
"hgun_Pistol_Signal_F",
"hgun_Pistol_heavy_01_F",
"hgun_Pistol_heavy_02_F",
"hgun_ACPC2_F",
"hgun_Rook40_F"
		};
	};
	
	class RHSUSPistols
	{
		name = "RHS US Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
"rhsusf_weap_glock17g4",
"rhsusf_weap_m9",
"rhsusf_weap_m1911a1",
"rhs_weap_pp2000_folded"

		};
	};
	
	class RHSRusPistols
	{
		name = "RHS Russian Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"rhs_weap_pya",
			"rhs_weap_makarov_pm"
		};
	};

	class SubMachineGuns
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"hgun_PDW2000_F",
"SMG_01_F",
"SMG_02_F",
"sfp_kpistm45",
"SMG_05_F"
		};
	};
	
	class RHSUSSmgs
	{
		name = "RHS US Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhsusf_weap_MP7A2",
			"rhsusf_weap_MP7A2_desert",
			"rhsusf_weap_MP7A2_aor1",
			"rhsusf_weap_MP7A2_winter"
		};
	};
	
	class RHSRusSmgs
	{
		name = "RHS Russian Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
	
		};
	};

	class LightMachineGuns
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"Exile_Weapon_PK",
"Exile_Weapon_PKP",
"Exile_Weapon_RPK",
"LMG_03_F",
"LMG_Mk200_F",
"LMG_Zafir_F",
"arifle_MX_SW_Black_F",
"arifle_MX_SW_F",
"sfp_ksp58",
"sfp_ksp58B2",
"sfp_ksp90c",
"sfp_ksp90b"
			/*
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"
			*/
		};
	};
	
	class RHSUSLMGs
	{
		name = "RHS US Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhs_weap_m249_pip_L",
"rhs_weap_m249_pip_L_para",
"rhs_weap_m249_pip_L_vfg",
"rhs_weap_m249_pip_S",
"rhs_weap_m249_pip_S_para",
"rhs_weap_m249_pip_S_vfg",
"rhs_weap_m240B",
"rhs_weap_m240B_CAP",
"rhs_weap_m240G"
		};
	};
	
	class RHSRusLMGs
	{
		name = "RHS Russian Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhs_weap_pkm",
			"rhs_weap_pkp"
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"sfp_ak5c",
"sfp_ak5c_m203",
"sfp_ak4b",
"sfp_ak5c_plastic",
"arifle_Katiba_C_F",
"arifle_Katiba_F",
"arifle_Katiba_GL_F",
"arifle_Mk20_F",
"arifle_Mk20_GL_F",
"arifle_Mk20_GL_plain_F",
"arifle_Mk20_plain_F",
"arifle_Mk20C_F",
"arifle_Mk20C_plain_F",
"arifle_MX_Black_F",
"arifle_MX_F",
"arifle_MX_GL_Black_F",
"arifle_MX_GL_F",
"arifle_MXC_Black_F",
"arifle_MXC_F",
"arifle_SDAR_F",
"arifle_TRG20_F",
"arifle_TRG21_F",
"arifle_TRG21_GL_F",
"Exile_Weapon_AK107",
"Exile_Weapon_AK107_GL",
"Exile_Weapon_AK74",
"Exile_Weapon_AK74_GL",
"Exile_Weapon_AK47",
"Exile_Weapon_AKS_Gold",
"arifle_AK12_F",
"arifle_AK12_GL_F",
"arifle_AKM_F",
"arifle_AKM_FL_F",
"arifle_AKS_F",
"arifle_ARX_blk_F",
"arifle_ARX_ghex_F",
"arifle_ARX_hex_F",
"arifle_CTAR_blk_F",
"arifle_CTAR_hex_F",
"arifle_CTAR_ghex_F",
"arifle_CTAR_GL_blk_F",
"arifle_CTARS_blk_F",
"arifle_CTARS_hex_F",
"arifle_CTARS_ghex_F",
"arifle_SPAR_01_blk_F",
"arifle_SPAR_01_khk_F",
"arifle_SPAR_01_snd_F",
"arifle_SPAR_01_GL_blk_F",
"arifle_SPAR_01_GL_khk_F",
"arifle_SPAR_01_GL_snd_F",
"arifle_SPAR_02_blk_F",
"arifle_SPAR_02_khk_F",
"arifle_SPAR_02_snd_F",
"arifle_SPAR_03_blk_F",
"arifle_SPAR_03_khk_F",
"arifle_SPAR_03_snd_F",
"arifle_MX_khk_F",
"arifle_MX_GL_khk_F",
"arifle_MXC_khk_F",
"arifle_MXM_khk_F",
"Exile_Weapon_M4",
"Exile_Weapon_M16A4",
"Exile_Weapon_M16A2",
"Exile_Weapon_M1014"
		};
	};
	
	class RHSUSARs
	{
		name = "RHS US Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"rhs_weap_hk416d10",
"rhs_weap_hk416d10_LMT",
"rhs_weap_hk416d10_m320",
"rhs_weap_hk416d145",
"rhs_weap_hk416d145_m320",
"rhs_weap_m16a4",
"rhs_weap_m16a4_carryhandle",
"rhs_weap_m16a4_carryhandle_M203",
"rhs_weap_m16a4_carryhandle_pmag",
"rhs_weap_m27iar",
"rhs_weap_m4_carryhandle",
"rhs_weap_m4_carryhandle_pmag",
"rhs_weap_m4_m203",
"rhs_weap_m4_m320",
"rhs_weap_m4a1",
"rhs_weap_m4a1_blockII",
"rhs_weap_m4a1_blockII_KAC",
"rhs_weap_m4a1_blockII_KAC_bk",
"rhs_weap_m4a1_blockII_KAC_d",
"rhs_weap_m4a1_blockII_KAC_wd",
"rhs_weap_m4a1_blockII_M203",
"rhs_weap_m4a1_blockII_M203_bk",
"rhs_weap_m4a1_blockII_M203_d",
"rhs_weap_m4a1_blockII_M203_wd",
"rhs_weap_m4a1_blockII_bk",
"rhs_weap_m4a1_blockII_d",
"rhs_weap_m4a1_blockII_wd",
"rhs_weap_m4a1_carryhandle",
"rhs_weap_m4a1_carryhandle_m203",
"rhs_weap_m4a1_carryhandle_pmag",
"rhs_weap_m4a1_m203",
"rhs_weap_m4a1_m320",
"rhs_weap_mk18",
"rhs_weap_mk18_KAC",
"rhs_weap_mk18_KAC_bk",
"rhs_weap_mk18_KAC_d",
"rhs_weap_mk18_KAC_wd",
"rhs_weap_mk18_bk",
"rhs_weap_mk18_d",
"rhs_weap_mk18_m320",
"rhs_weap_mk18_wd"

		};
	};
	
	class RHSRusARs
	{
		name = "RHS Russian Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"rhs_weap_asval",
"rhs_weap_asval_npz"
		};
	};

	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Weapon_M1014",
			"rhs_weap_M590_8RD",
			"rhs_weap_M590_5RD"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"arifle_MXM_Black_F",
"arifle_MXM_F",
"srifle_DMR_01_F",
"srifle_DMR_02_camo_F",
"srifle_DMR_02_F",
"srifle_DMR_02_sniper_F",
"srifle_DMR_03_F",
"srifle_DMR_03_khaki_F",
"srifle_DMR_03_multicam_F",
"srifle_DMR_03_tan_F",
"srifle_DMR_03_woodland_F",
"srifle_DMR_04_F",
"srifle_DMR_04_Tan_F",
"srifle_DMR_05_blk_F",
"srifle_DMR_05_hex_F",
"srifle_DMR_05_tan_f",
"srifle_DMR_06_camo_F",
"srifle_DMR_06_olive_F",
"srifle_EBR_F",
"srifle_GM6_camo_F",
"srifle_GM6_F",
"srifle_LRR_camo_F",
"srifle_LRR_F",
"Exile_Weapon_CZ550",
"Exile_Weapon_SVD",
"Exile_Weapon_SVDCamo",
"Exile_Weapon_VSSVintorez",
"Exile_Weapon_DMR",
"Exile_Weapon_LeeEnfield",
"srifle_LRR_tna_F",
"srifle_GM6_ghex_F",
"srifle_DMR_07_blk_F",
"srifle_DMR_07_hex_F",
"srifle_DMR_07_ghex_F",
"Exile_Weapon_m107",
"Exile_Weapon_ksvk",
"sfp_psg90_camo"
//"vme_pla_LR4"
		};
	};
	
	class RHSSnipers
	{
		name = "RHS Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
"rhs_weap_kar98k",
"rhs_weap_m38",
"rhs_weap_m38_rail",
"rhs_weap_mosin_sbr",
"rhs_weap_XM2010",
"rhs_weap_XM2010_d",
"rhs_weap_XM2010_sa",
"rhs_weap_XM2010_wd",
"rhs_weap_M107_w",
"rhs_weap_svdp",
"rhs_weap_svdp_npz",
"rhs_weap_svdp_wd",
"rhs_weap_svdp_wd_npz",
"rhs_weap_svds",
"rhs_weap_svds_npz",
"rhs_weap_t5000",
"rhs_weap_sr25",
"rhs_weap_sr25_ec",
"rhs_weap_m24sws"

		};
	};


	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"Exile_Car_OldTractor_Red",
"Exile_Car_Tractor_Red",
"Exile_Car_Octavius_White",
"Exile_Car_Golf_Red",
"Exile_Car_LandRover_Green",
"Exile_Car_LandRover_Ambulance_Green",
"Exile_Car_Lada_Green",
"Exile_Car_Volha_White",
"Exile_Car_Hatchback_Rusty1",
"Exile_Car_Hatchback_Rusty2",
"Exile_Car_Hatchback_Rusty3",
"Exile_Car_Hatchback_Sport_Red",
"Exile_Car_SUV_Red",
"Exile_Car_SUVXL_Black",
"Exile_Car_SUV_Armed_Black",
"Exile_Car_Offroad_Rusty1",
"Exile_Car_Offroad_Rusty2",
"Exile_Car_Offroad_Rusty3",
//"Exile_Car_Offroad_Repair_Civillian",
"Exile_Car_Offroad_Armed_Guerilla01",
"Exile_Car_BTR40_MG_Green",
"Exile_Car_BTR40_Green",
"Exile_Car_Octavius_Black",
"RHS_UAZ_MSV_01",
"rhs_uaz_open_MSV_01",
"rhsgref_cdf_reg_uaz_dshkm",
"rhsgref_cdf_reg_uaz_ags",
"rhsgref_cdf_reg_uaz_spg9",
"rhsusf_m1025_w_m2",
"rhsusf_m1025_w_mk19",
"rhsusf_m1025_w_s",
"rhsusf_m1025_w",
"rhsusf_m1025_w_s_Mk19",
"rhsusf_m1025_w_s_m2",
"rhsusf_m998_w_2dr",
"rhsusf_m998_w_2dr_fulltop",
"rhsusf_m998_w_2dr_halftop",
"rhsusf_m998_w_4dr",
"rhsusf_m998_w_4dr_fulltop",
"rhsusf_m998_w_4dr_halftop",
"rhsusf_m998_w_s_2dr",
"rhsusf_m998_w_s_2dr_fulltop",
"rhsusf_m998_w_s_2dr_halftop",
"rhsusf_m998_w_s_4dr",
"rhsusf_m998_w_s_4dr_fulltop",
"rhsusf_m998_w_s_4dr_halftop",
"Exile_Car_ProwlerLight",
"Exile_Car_ProwlerUnarmed",
"Exile_Car_QilinUnarmed",
"Exile_Car_MB4WD",
"Exile_Car_MB4WDOpen"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"Exile_Car_HMMWV_M2_Green",
"Exile_Car_HMMWV_M134_Green",
"Exile_Car_Van_Black",
"Exile_Car_Van_Box_Black",
"Exile_Car_Van_Fuel_Black",
"Exile_Car_Zamak",
"Exile_Car_V3S_Covered",
"Exile_Car_Tempest",
"Exile_Car_HEMMT",
"Exile_Car_Ikarus_Blue",
"rhs_gaz66_ap2_msv",
"rhs_gaz66_flat_msv",
"rhs_gaz66_msv",
"rhs_gaz66_r142_msv",
//"rhs_gaz66_repair_msv",
"rhs_gaz66o_flat_msv",
"rhs_gaz66o_msv",
"rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy",
"rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy",
"rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy",
"rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy",
"rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy",
"rhsusf_M1078A1P2_B_WD_fmtv_usarmy",
"rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy",
"rhs_kamaz5350_msv",
"rhs_kamaz5350_open_msv",
"rhs_kamaz5350_flatbed_msv",
"rhs_kamaz5350_flatbed_cover_msv",
"RHS_Ural_MSV_01",
"RHS_Ural_Flat_MSV_01",
"RHS_Ural_Open_MSV_01",
"RHS_Ural_Open_Flat_MSV_01",
//"RHS_Ural_Repair_MSV_01",
"RHS_Ural_Fuel_MSV_01"
		};
	};
	
	class MRAPs
	{
		name = "MRAPs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"Exile_Car_Strider",
"Exile_Car_Hunter",
"Exile_Car_Ifrit",
"rhs_tigr_3camo_msv",
"rhs_tigr_ffv_3camo_msv",
"rhs_tigr_ffv_msv",
"rhs_tigr_m_3camo_msv",
"rhs_tigr_m_msv",
"rhs_tigr_msv",
"rhs_tigr_sts_3camo_msv",
"rhs_tigr_sts_msv",
"rhsusf_rg33_wd",
"rhsusf_rg33_usmc_wd",
"rhsusf_rg33_m2_wd",
"rhsusf_rg33_m2_usmc_wd",
"rhsusf_M1220_usarmy_wd",
"rhsusf_M1220_M2_usarmy_wd",
"rhsusf_M1220_MK19_usarmy_wd",
"rhsusf_M1230_M2_usarmy_wd",
"rhsusf_M1230_MK19_usarmy_wd",
"rhsusf_M1220_M153_M2_usarmy_wd",
"rhsusf_M1230a1_usarmy_wd",
"rhsusf_M1232_usarmy_wd",
"rhsusf_M1232_M2_usarmy_wd",
"rhsusf_M1232_MK19_usarmy_wd",
"rhsusf_M1237_M2_usarmy_wd",
"rhsusf_M1237_MK19_usarmy_wd",
"rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom",
"rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom",
"rhsusf_M1117_W",
"rhsusf_M1117_O"
		};
	};
	
	class SwedVics
	{
		name = "Swedish Armored Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"sfp_ikv91",
"sfp_strf90c",
"sfp_lvkv90c_snow",
//"sfp_strv103c",
"sfp_grkpbv90120",
"sfp_strv121",
"sfp_strv122",
"sfp_patgb203",
"sfp_centurion"
		};
	};
	
	class USMBT
	{
		name = "US MBTs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhsusf_m1a1aimwd_usarmy",
"rhsusf_m1a1aim_tuski_wd",
"rhsusf_m1a1fep_wd",
"rhsusf_m1a1fep_od",
"rhsusf_m1a1hc_wd",
"rhsusf_m1a2sep1wd_usarmy",
"rhsusf_m1a2sep1tuskiwd_usarmy",
"rhsusf_m1a2sep1tuskiiwd_usarmy"
		};
	};
	
	class USIFV
	{
		name = "US IFVs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
//"rhsusf_m113_usarmy_M240",
//"rhsusf_m113_usarmy_M2_90",
//"rhsusf_m113_usarmy_MK19",
//"rhsusf_m113_usarmy_MK19_90",
"rhsusf_m113_usarmy_unarmed",
"RHS_M2A2_wd",
"RHS_M2A3_wd",
"RHS_M2A2_BUSKI_wd",
"RHS_M2A3_BUSKI_wd"
		};
	};
	
	class RusMBT
	{
		name = "Russian MBTs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhs_t72ba_tv",
"rhs_t72bb_tv",
"rhs_t72bc_tv",
"rhs_t72bd_tv",
"rhssaf_army_t72s",
"rhs_t80",
"rhs_t80a",
"rhs_t80b",
"rhs_t80bk",
"rhs_t80bv",
"rhs_t80bvk",
"rhs_t80u",
"rhs_t80ue1",
"rhs_t80uk",
"rhs_t80um",
"rhs_t80u45m",
"rhs_t90a_tv",
"rhs_t90a_tv"
		};
	};
	
	class RusIFV
	{
		name = "Russian IFVs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"rhsgref_BRDM2",
"rhsgref_BRDM2_ATGM",
"rhsgref_BRDM2UM",
"rhsgref_BRDM2_HQ",
"rhs_btr60_msv",
"RHS_BTR70_MSV",
"rhs_btr80_msv",
"rhs_btr80a_msv",
"rhs_bmd1",
"rhs_bmd1k",
"rhs_bmd1p",
"rhs_bmd1pk",
"rhs_bmd1r",
"rhs_bmd2",
"rhs_bmd2m",
"rhs_bmd2k",
"rhs_bmd4_vdv",
"rhs_bmd4m_vdv",
"rhs_bmd4ma_vdv",
"rhs_bmp1_msv",
"rhs_bmp1p_msv",
"rhs_bmp1k_msv",
"rhs_bmp1d_msv",
"rhs_bmp2_msv",
"rhs_bmp2e_msv",
"rhs_bmp2k_msv",
"rhs_bmp2d_msv",
"rhs_bmp3_msv",
"rhs_bmp3_late_msv",
"rhs_bmp3m_msv",
"rhs_bmp3mera_msv",
"rhs_Ob_681_2",
"rhs_sprut_vdv",
//"VME_PLA_ZBL09",
//"VME_PLA_ZTL11",
"I_Truck_02_Ammo_F",
"I_Truck_02_Fuel_F",
"I_Truck_02_box_F"

		};
	};
	
	class MobileArty
	{
		name = "Mobile Artillery";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"RHS_BM21_MSV_01",
"rhs_2s3_tv",
"POOK_K300P_OPFOR",
"POOK_9K58_OPFOR",
"pook_A222_OPFOR",
"pook_2S1_BLUFOR"
		};
	};
	
	class MobileAA
	{
		name = "Mobile AA Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			
			//"VME_PLA_hq7",
			//"VME_PLA_HQ61",
			//"VME_PLA_HQ64",
			//"VME_PLA_PGZ07",
			"RHS_Ural_Zu23_MSV_01",
"rhs_gaz66_zu23_msv",
//"rhs_zsu234_aa",
"RHS_M6_wd"
		};
	};

	class CivChoppers
	{
		name = "Unarmed Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"RHS_MELB_MH6M",
"Exile_Chopper_Hummingbird_Civillian_Wasp",
"Exile_Chopper_Huey_Green",
"Exile_Chopper_Taru_Transport_Black",
"rhs_ka60_c",
"rhs_ka60_grey",
"Exile_Chopper_Mohawk_FIA",
"Exile_Chopper_Hellcat_Green",
"RHS_UH60M2",
"RHS_UH60M2_d",
"RHS_UH1Y_UNARMED",
"rhsusf_CH53E_USMC",
"RHS_Mi8mt_Cargo_vdv",
"sfp_hkp6",
"sfp_jetranger_police",
"sfp_bell429_police",
"sfp_hkp9",
"sfp_hkp9_sog",
"sfp_hkp16_ffv"
		};
	};
	
	class MilChoppers
	{
		name = "Armed Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{			
"Exile_Chopper_Huey_Armed_Green",
"I_Heli_light_03_F",
"O_Heli_Light_02_F",
"sfp_hkp9_rb55",
"RHS_MELB_AH6M_H",
"RHS_MELB_AH6M_L",
"RHS_MELB_AH6M_M",
"RHS_MELB_AH6M"
};
	};
	
	class USChoppers
	{
		name = "US RHS Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"B_Heli_Attack_01_F",
"RHS_CH_47F",
"RHS_CH_47F_light",
"RHS_AH1Z",
"RHS_AH1Z_CS",
"RHS_AH1Z_GS",
"RHS_UH60M",
"RHS_UH60M_d",
"RHS_AH64D_noradar",
"RHS_AH64D_noradar_GS",
"RHS_AH64D_noradar_CS",
"RHS_AH64D_noradar_AA",
"RHS_AH64D",
"RHS_AH64D_GS",
"RHS_AH64D_CS",
"RHS_AH64D_AA",
"RHS_AH64DGrey",
"RHS_UH60M_ESSS",
"RHS_UH60M_ESSS_d",
"RHS_UH1Y",
"RHS_UH1Y_FFAR",
"RHS_UH1Y_d_GS"
		};
	};
	
	class RusChoppers
	{
		name = "Russian RHS Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
"RHS_Mi8mt_vdv",
"RHS_Mi8MTV3_vdv",
"RHS_Mi8MTV3_UPK23_vdv",
"RHS_Mi8MTV3_FAB_vdv",
"RHS_Mi8MTV3_heavy_vdv",
"RHS_Ka52_UPK23_vvsc",
"RHS_Ka52_vvsc",
"RHS_Mi24V_vvsc",
"RHS_Mi24V_FAB_vvsc",
"RHS_Mi24V_UPK23_vvsc",
"RHS_Mi24V_AT_vvsc",
"RHS_Mi24P_CAS_vvsc",
"rhs_mi28n_vvsc",
"rhs_mi28n_s13_vvsc"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			//"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB",
			"I_Boat_Armed_01_minigun_F",
"sfp_gruppbat",
"sfp_strb90",
//"sfp_svavare2000",
"rhsusf_mkvsoc"
//"vme_ZUBR_PLA"
		};
	};
	
	class Naval
	{
		name = "Warships";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"I_Boat_Armed_01_minigun_F",
			"sfp_gruppbat",
			"sfp_strb90",
			//"sfp_svavare2000",
			"rhsusf_mkvsoc"
			
		};
	};

	class CivPlanes
	{
		name = "Civilian Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
		"Exile_Plane_AN2_Green",
"Exile_Plane_Ceasar",
"Exile_Plane_BlackfishInfantry",
"Exile_Plane_BlackfishVehicle",
"sfp_sk60",
"sfp_saab340",
"sfp_tp100",
"sfp_s100b",
"RHS_C130J",
"Exile_Plane_Cessna",
"GNT_C185T",
"sab_dc3",
"sab_dc3_c47",
"sab_w34"			
		};
	};
	
	class MilPlanes
	{
		name = "Military Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"sab_zero",
	"sab_avia",
	"sab_bf110",
	"sab_bf110_2",
	"sab_bv141",
	"sab_do335",
	"sab_fiatg55",
	"sab_he111",
	"sab_hix",
	"sab_ju87",
	"sab_kate",
	"sab_ki61",
	"sab_me262",
	"sab_me262_2",
	"sab_aichival",
	"sab_d510",
	"sab_i16",
	"sab_il2",
	"sab_la5",
	"sab_b17",
	"sab_b24",
	"sab_b25",
	"sab_corsair",
	"sab_f6f",
	"sab_tigercat",
	"sab_gladiator",
	"sab_mb5",
	"sab_p38",
	"sab_mustang",
	"sab_p61",
	"sab_p26",
	"sab_texan",
	"sab_avenger",
	"bwi_a3_at6b_cap",
	"bwi_a3_at6b",
	"B_T_VTOL_01_armed_F"
		};
	};
	
	class SwedPlanes
	{
		name = "Swedish Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
	"sfp_jas39_cap",
"sfp_jas39_bk90",
"sfp_jas39_gbu39",
"sfp_jas39",
"sfp_sk60_arak135"
		};
	};
	
	class USPlanes
	{
		name = "RHS US Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"RHS_A10",
"RHS_A10_CBU",
"RHS_A10_AT",
"rhsusf_f22"
		};
	};
	
	class RusPlanes
	{
		name = "RHS Russian Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"RHS_Su25SM_vvsc",
			"RHS_Su25SM_KH29_vvsc",
			"RHS_Su25SM_CAS_vvsc",
			"RHS_Su25SM_Cluster_vvsc",
			"rhs_l159_CDF",
			"rhs_l159_CDF_plamen",
			"rhs_l159_CDF_CAP",
			"rhs_l159_CDF_CAS",
			"rhs_l39_cdf",
			"RHS_T50_vvs_052"
		};
	};

	class Diving
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_SDAR_F",
			"20Rnd_556x45_UW_mag",
			"G_I_Diving",
			"G_Diving",
			"U_I_Wetsuit",
			"V_RebreatherB"
			
		};
	};
	#include "TRADERS\NIA\TraderCategoriesNIA.hpp"
	#include "TRADERS\ACE\TraderCategoriesACE.hpp"
	#include "TRADERS\KA\TraderCategoriesKA.hpp"
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"ACELaser",
			"BipodAttachments",
			"MuzzleAttachments",
			"KAMuzzleAttachments",
			"NIAMuzzleAttachments",
			"RHSAttachments",
			"KAAttachments",
			"OpticAttachments",
			"NIAOpticAttachments",			
			"RHSOptics",
			"KAOpticAttachments",
			"ACEOptics",
			"Ammunition",
			"ACEammo",
			"RHSAmmo",
			"KAAmmunition",
			"NIAAmmunition",
			"Pistols",
			"RHSUSPistols",
			"RHSRusPistols",
			"Shotguns",
			"KAPistolsShottys",
			"SubMachineGuns",
			"RHSUSSmgs",
			"KASubMachineGuns",
			"NIASubMachineGuns",
			"LightMachineGuns",
			"RHSUSLMGs",
			"RHSRusLMGs",
			"KALightMachineGuns",
			"NIALightMachineGuns",
			"AssaultRifles",
			"NIAAssaultRifles",
			"KAAssaultRifles",
			"RHSUSARs",
			"RHSRusARs",
			"SniperRifles",
			"RHSSnipers",
			"KASniperRifles",
			"NIASniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"ACEExplosives",
			"ACEMisc",
			"Launchers",
			"NIAMiniGun",
			"Navigation"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"RHSHeadgear",
			"ACENVG",
			"Glasses",
			"Uniforms",
			"RHSUniforms",
			"Nlunit",
			"Vests",
			"RHSVests",
			"Backpacks",
			"RHSBackpacks",
			"FirstAid"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks",
			"NonVeganFood"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks",
			"MRAPs",
			"USIFV",
			"USMBT",
			"SwedVics",
			"RusIFV",
			"RusMBT",
			"MobileArty",
			"MobileAA"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "Helicopters";
		showWeaponFilter = 0;
		categories[] = 
		{
			"CivChoppers", 
			"MilChoppers"
			
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats",
			
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "Civilian Planes";
		showWeaponFilter = 0;
		categories[] = 
		{
			"CivPlanes",
			"MilPlanes"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "Combat Aircraft";
		showWeaponFilter = 0;
		categories[] = 
		{
			"CivPlanes",
			"MilPlanes",
			"USChoppers",
			"RusChoppers",
			"SwedPlanes",
			"USPlanes",
			"RusPlanes"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "Naval Vessels Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Naval"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "Armored Vehicles";
		showWeaponFilter = 0;
		categories[] = 
		{
			"USIFV",
			"USMBT",
			"SwedVics",
			"RusIFV",
			"RusMBT",
			"MobileArty",
			"MobileAA"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] =
		{

			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"}},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"}},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"}},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"}},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"}},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"}},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"}},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"}},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"}},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"}},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"}},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"}},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"}},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"}},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"}},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"}},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"}},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"}},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"}},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"}},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"}},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"}},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"}},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"}},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"}},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"}},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"}},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"}},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"}},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"}},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"}},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"}},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"}},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"}},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"}},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"}},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"}},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"}},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"}},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"}},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"}},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
    {
        skins[] = 
        {
            {"Exile_Car_SUVXL_Black", 100, "Black", {"\Exile_psycho_SUV_a3\Data\suv_body_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Blue White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Charcoal", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_charcoal_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Orange", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_orange_co.paa"}},
            {"Exile_Car_SUVXL_Black", 200, "Hello Kitty", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_Pink_hello_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Red", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_red_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Silver", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"}},
            {"Exile_Car_SUVXL_Black", 100, "White", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"}},
            {"Exile_Car_SUVXL_Black", 150, "Yellow", {"\Exile_psycho_SUV_a3\Data\textures\suv_body_yellow_co.paa"}}
        };
    };

	///////////////////////////////////////////////////////////////////////////////
	// Van
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"}},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"}},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"}},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"}},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"}},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"}},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"}},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"}},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"}}
		};
	};

	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] =
		{

			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"}},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	class Exile_Car_BTR40_Abstract
	{
		skins[] =
		{

			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"}},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] =
		{

			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"}},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] =
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"}},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"}},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] =
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] =
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"}},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"}}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}}
		};
	};

	class I_C_Offroad_02_unarmed_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"}},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"}}
		};
	};
};

class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};
class CfgVirtualGarage
{
	/*
		Enable or disable virtual garage on the server
		Options:
			0: Disable virtual garage
			1: Enable virtual garage
	*/
	enableVirtualGarage = 1;	
	
	/*
		Enables or disables the ability to access virtual garage while in combat
		Options:
			0: Players cannot access virtual garage while they are in combat
			1: Players can access virtual garage when they are in combat
	*/
	canAccessGarageInCombat = 0;
	
	/*
		When enabled, this will dump any items and money from the vehicle onto the ground where the car was.
		Options:
			0: Do not clear inventory and money
			1: Clear inventory and money
	*/
	clearInventoryOnStore = 1;
	
	/*
		The maximum number of vehicles that can be stored in the VG for that territory.
		Use -1 to disable the ability to store vehicles at that level.
		Make sure to have the same number of levels here as you do in CfgTerritories!
	*/
	numberOfVehicles[] = 
	{
		1,			// Level 1
		4, 			// Level 2 
		6, 			// Level 3
		8, 		// Level 4
		10, 		// Level 5
		12, 		// Level 6
		14, 		// Level 7
		16, 		// Level 8
		18, 		// Level 9
		20 			// Level 10
	};
	
	/*
		The allowed types of vehicles that can be stored in the garage	
		Available Types: "Car", "Tank", "Plane", "Air", "Ship", "Submarine"
	*/
	allowedVehicleTypes[] = {"Car","Tank","Plane","Air","Ship","Submarine"};
};

class CfgXM8 
{
	extraApps[] = {""};
	class settings
	{
		controlID = 4070;
		appID = "App01";
		title = "Settings";
	};
	
	class healthScanner
	{
		controlID = 4120;
		appID = "App02";
		title = "Health Scanner";
	};
	
	class slothMachine
	{
		controlID = 4140;
		appID = "App03";
		title = "Sloth Machine";
	};



	
};
/*
	XM8 Extra apps, the Exile way of doing it
	
	Here is an example app layout:
	class XM8_App01_Button: RscExileXM8AppButton1x1
	{
	    textureNoShortcut = "";  	// Path to picture. This can be via mission file or client side PBO
	    text = "";					// The name of the app to be display on the button
	    onButtonClick = "";			// The code to fire when the app is clicked
	    resource = "";				// The name of the resource to load for the app, leave as an empty string if you just want to run code without a GUI, like BOOM or spawning a bike
	};
*/

class XM8_App01_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
    text = "Settings";
    onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSettings";
};

class XM8_App02_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_health_scanner_ca.paa";
    text = "Health Scanner";
    onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideHealthScanner";
};

class XM8_App03_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_slothMachine_ca.paa";
    text = "Sloth Machine";
    onButtonClick = "['slothMachine', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSlothMachine";
};

class XM8_App04_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_boom_ca.paa";
    text = "BOOM!";
    onButtonClick = "call ExileClient_system_breaching_detonate";
    resource = "";
};

class XM8_App05_Button: RscExileXM8AppButton1x1
{
   /* play button */
textureNoShortcut = "scratchie\icons\scratchie.paa";
text = "Play Scratchie";
onButtonClick = "['use',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];";
resource = "";
};

class XM8_App06_Button: RscExileXM8AppButton1x1
{
/* buy button */
textureNoShortcut = "scratchie\icons\scratchie-buy.paa";
text = "Buy Scratchie";
onButtonClick = "['buy',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];";
resource = "";
};

class XM8_App07_Button: RscExileXM8AppButton1x1
{
/* get prize */
textureNoShortcut = "scratchie\icons\scratchie-prize.paa";
text = "Get Prize";
onButtonClick = "['get',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];";
resource = "";
};

class XM8_App08_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App09_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App10_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App11_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App12_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App13_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App14_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											   BELOW IS WHERE ALL THE XM8 APP RESOURCES CAN GO
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class XM8SlideSettings: RscExileXM8Slide 
{
	idc = 4070;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4071;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class 8GDropDown: RscExileXM8Combo
		{
			idc = 4072;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
		};

		class 8GLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Show my device in global 8G network."; 
			x = (13 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class SoundDropDown: RscExileXM8Combo
		{
			idc = 4075;
			x = (5 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
		};

		class SoundLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Play a beep sound on notifications."; 
			x = (13 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspDropDown: RscExileXM8Combo
		{
			idc = 4076;
			x = (5 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
		};

		class PartyEspLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Color of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspSlider: RscExileXM8XSliderH
		{
			idc = 4078;
			x = (5 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
		};

		class PartyEspSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyMarkerSlider: RscExileXM8XSliderH
		{
			idc = 4079;
			x = (5 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
		};

		class PartyMarkerSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party markers."; 
			x = (13 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class StreamModeDropDown: RscExileXM8Combo
		{
			idc = 4077;
			x = (5 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
		};

		class StreamModeLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Masquerade PIN codes. Perfect for streamers."; 
			x = (13 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};
	};
};

class XM8SlideHealthScanner: RscExileXM8Slide
{
	idc = 4120;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4122;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class HealthInfoControlGroup: RscExileXM8ControlsGroupNoHScrollbars
		{
			idc = -1;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 30 * (0.025);
			h = 15 * (0.04);
			colorBackground[] = {0,0,0,0.25};

			class controls
			{
				class HealthInfo: RscExileXM8StructuredText
				{
					idc = 4121;
					x = 0;
					y = 0;
					w = 29 * (0.025); // minus 1!
					h = 15 * (0.04);
				};
			};
		};
	};
};

class XM8SlideSlothMachine: RscExileXM8Slide
{
	idc = 4140;
	class Controls 
	{
		class Background: RscExileXM8PictureKeepAspect
		{
			idc = -1;
			text = "\exile_assets\texture\ui\slothMachine\xm8_slothMachineBackground.paa";
			x = -3.1 * (0.025) + (0);
			y = -6 * (0.04) + (0);
			w = 40 * (0.025);
			h = 33 * (0.04);
		};
		
		class XM8SlothMachineSpinButton: RscExileXM8PictureButton
		{
			idc = 4141;
			style = 0x30;
			x = 14.3 * (0.025) + (0);
			y = 15.9 * (0.04) + (0);
			w = 5.7 * (0.025);
			h = 2 * (0.04);
			text = "\exile_assets\texture\ui\slothMachine\button_off_ca.paa";
			action = "[] call ExileClient_gui_xm8_slide_slothMachine_event_onSpinButtonClick;";
		};
		
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4148;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			sizeEx = .9 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};
		
		class PopTabsLabel: RscExileXM8StructuredText
		{
			idc = 4142;
			text = "<t align='center'><t color='#e14141'><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = 6.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class JackpotLabel: RscExileXM8StructuredText
		{
			idc = 4143;
			text = "<t align='center'><t color='#e14141'></t>";
			x = 14 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class WinningsLabel: RscExileXM8StructuredText
		{
			idc = 4144;
			text = "<t align='center'><t color='#e14141'>0</t>";
			x = 21.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class Symbol01: RscExileXM8PictureKeepAspect
		{
			idc = 4145;
			text = "";
			x = 6.55 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol02: RscExileXM8PictureKeepAspect
		{
			idc = 4146;
			text = "";
			x = 14.1 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol03: RscExileXM8PictureKeepAspect
		{
			idc = 4147;
			text = "";
			x = 21.6 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
	};
};