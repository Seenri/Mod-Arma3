class CfgPatches
{
	class GSRI_Training
	{
		addonRootClass="Training";
		requiredAddons[]=
		{
			"Training"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Palissade",
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Training;
	class Palissade
	{
		author="Seenri";
		mapSize=4.0799999;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.80400002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\GSRI\Training\Palissade_01.jpg";
		scope=2;
		scopeCurator=2;
		displayName="Palissade";
		model="\GSRI\Training\Palissade_01.p3d";
		DLC="Expansion";
		icon="iconObject_10x1";
		editorSubcategory="EdSubcat_Residential_Village";
		vehicleClass="Structures_Walls";
	};
};
