
// params -> [id, text, code, condition, param]
private _addActions = 
{
	private _id = param [0];
	private _text = param [1, ""];
	private _code = param [2, {hint localize "STR_erreur";}];
	private _condition = param [3, "true"];
	private _param = param [4, []];

	private _id_shop = _id addAction [_text, _code, _param, 1.5, true, true, "", _condition, 10];
};

[player, (localize "STR_fourriere"), {
	[cursorObject] call mission_fnc_fourriere;
}, "((cursorObject getVariable ['imatriculation', [false, nil, nil]]) select 0) and ((['classe', _this] call mission_fnc_getBDD) == 3) and (alive _this)"] call _addActions;

[player, (localize "STR_lock_vehicle"), {
	cursorObject lock true;
}, "((cursorObject getVariable ['imatriculation', [false, nil, nil]]) select 0) and (((cursorObject getVariable ['imatriculation', [false, nil, nil]]) select 1) == (getPlayerUID _this)) and (((locked cursorObject) == 0) or ((locked cursorObject) == 1)) and (alive _this)"] call _addActions;

[player, (localize "STR_unlock_vehicle"), {
	cursorObject lock false;
}, "((cursorObject getVariable ['imatriculation', [false, nil, nil]]) select 0) and (((cursorObject getVariable ['imatriculation', [false, nil, nil]]) select 1) == (getPlayerUID _this)) and (((locked cursorObject) == 2) or ((locked cursorObject) == 3)) and (alive _this)"] call _addActions;

[player, (localize "STR_lock_vehicle"), {
	(vehicle (_this select 0)) lock true;
}, "(((vehicle _this) getVariable ['imatriculation', [false, nil, nil]]) select 0) and ((((vehicle _this) getVariable ['imatriculation', [false, nil, nil]]) select 1) == (getPlayerUID _this)) and (((locked (vehicle _this)) == 0) or ((locked (vehicle _this)) == 1)) and (alive _this)"] call _addActions;

[player, (localize "STR_unlock_vehicle"), {
	(vehicle (_this select 0)) lock false;
}, "(((vehicle _this) getVariable ['imatriculation', [false, nil, nil]]) select 0) and ((((vehicle _this) getVariable ['imatriculation', [false, nil, nil]]) select 1) == (getPlayerUID _this)) and (((locked (vehicle _this)) == 2) or ((locked (vehicle _this)) == 3)) and (alive _this)"] call _addActions;


