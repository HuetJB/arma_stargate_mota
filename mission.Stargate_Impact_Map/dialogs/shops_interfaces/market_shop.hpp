
class market_shop
{
	idd = 13100;
	movingEnable = 0;
    enableSimulation = 1;
    duration = 999999;
	class Controls
	{
		class background_picture
		{
			type = 0;
			idc = 13101;
			x = safeZoneX + safeZoneW * 0.11354167;
			y = safeZoneY + safeZoneH * -0.01574074;
			w = safeZoneW * 0.7875;
			h = safeZoneH * 1.01481482;
			style = 48;
			text = "pictures\interfaces\shops\market_shops\market_shop_tauri.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class inventory_background_button
		{
			type = 0;
			idc = 13103;
			x = safeZoneX + safeZoneW * 0.52552084;
			y = safeZoneY + safeZoneH * 0.23888889;
			w = safeZoneW * 0.13541667;
			h = safeZoneH * 0.06111112;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class shop_background_button
		{
			type = 0;
			idc = 13102;
			x = safeZoneX + safeZoneW * 0.3375;
			y = safeZoneY + safeZoneH * 0.23888889;
			w = safeZoneW * 0.13541667;
			h = safeZoneH * 0.06111112;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class inventory_button
		{
			type = 1;
			idc = 13105;
			x = safeZoneX + safeZoneW * 0.52552084;
			y = safeZoneY + safeZoneH * 0.23888889;
			w = safeZoneW * 0.13541667;
			h = safeZoneH * 0.06111112;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0.6,0,0,0.25};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"",0.5,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "playSound 'button'; [] call mission_fnc_marcher_bouton_inventaire;";
		};
		class shop_button
		{
			type = 1;
			idc = 13104;
			x = safeZoneX + safeZoneW * 0.3375;
			y = safeZoneY + safeZoneH * 0.23888889;
			w = safeZoneW * 0.13541667;
			h = safeZoneH * 0.06111112;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0.6,0,0,0.25};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"",0.5,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "playSound 'button'; [] call mission_fnc_marcher_bouton_magasin;";
		};
		class buy_sell_button
		{
			type = 1;
			idc = 13106;
			x = safeZoneX + safeZoneW * 0.43333334;
			y = safeZoneY + safeZoneH * 0.75277778;
			w = safeZoneW * 0.13541667;
			h = safeZoneH * 0.06203704;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0.6,0,0,0.25};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"",0.5,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "playSound 'button'; [] call mission_fnc_marcher_bouton_acheter;";
		};
		class close_button
		{
			type = 1;
			idc = 13107;
			x = safeZoneX + safeZoneW * 0.64947917;
			y = safeZoneY + safeZoneH * 0.19351852;
			w = safeZoneW * 0.02864584;
			h = safeZoneH * 0.03240741;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0.6,0,0,0.5};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"",0.5,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "playSound 'button'; closeDialog 1;";
		};
		class objects_list
		{
			type = 5;
			idc = 13108;
			x = safeZoneX + safeZoneW * 0.40520834;
			y = safeZoneY + safeZoneH * 0.32870371;
			w = safeZoneW * 0.18697917;
			h = safeZoneH * 0.38148149;
			style = 16;
			colorBackground[] = {0,0,0,0};
			colorSelectBackground[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0};
			colorSelect[] = {1,0,0,1};
			colorText[] = {1,1,1,1};
			colorPicture[] = {1,1,1,1};
			colorPictureSelected[] = {1,1,1,1};
    		colorPictureDisabled[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
            onLBSelChanged = "[] call mission_fnc_marcher_liste_objets;";
            onLBDblClick = "playSound 'button'; [] call mission_fnc_marcher_bouton_acheter;";
		};
	};
};