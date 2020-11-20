
// fonction name : mission_fnc_remove_licence
// parmettres : [numero 1 licence, numero 2 licence, numero 3 licence, numero 4 licence ...etc]

private _nomVarPlayer = format ["variable_%1", getPlayerUID player]; // BDD player

private _variable = missionNamespace getVariable _nomVarPlayer;

private _licences = _variable select 3;

private _num_licence = _this;

{
	if (_x in _licences) then {
		private _index = _licences find _x;
		_licences deleteAt _index;
	};
} forEach _num_licence;

[[3, _licences]] call mission_fnc_modif_var_bdd;