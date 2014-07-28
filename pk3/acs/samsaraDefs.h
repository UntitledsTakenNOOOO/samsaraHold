#define SAMSARA_ENTER               611
#define SAMSARA_RETURN              613
#define SAMSARA_RESPAWN             618
#define SAMSARA_DEATH               619
#define SAMSARA_OPEN                623
#define SAMSARA_SPAWN               624
#define SAMSARA_DISCONNECT          617
#define SAMSARA_WOLFMOVE            673
#define SAMSARA_SCHEDULED           674
#define SAMSARA_PDWTAK              675
#define SAMSARA_GETSETTINGS         676

#define SAMSARA_CONFIRMCLASS        206
#define SAMSARA_DECORATE            215
#define SAMSARA_GIVEWEAPON          229
#define SAMSARA_GIVEUNIQUE          231
#define SAMSARA_CLIENT_WEAPONPICKUP 616
#define SAMSARA_CLIENT_UNIQUEPICKUP 633
#define SAMSARA_MARATHON            609
#define SAMSARA_QUAKE               606
#define SAMSARA_RESONATE            608
#define SAMSARA_SYNTHFIRE           607
#define SAMSARA_MEGAHEALTH          232
#define SAMSARA_QPOWERS             636
#define SAMSARA_DOOM                610

#define SAMSARA_TIPBOX              300
#define SAMSARA_TIPBOX_CLIENT       301

#define SAMSARA_PUKE                226
#define SAMSARA_PUKE_CLIENT         227
#define SAMSARA_OPEN_CLIENT         548
#define SAMSARA_ENTER_CLIENT        521
#define SAMSARA_DISCONNECT_CLIENT   522
#define SAMSARA_CLIENT_CLASS        228
#define SAMSARA_RECOIL              312
#define SAMSARA_CLIENT_DECORATE     212

#define SAMSARA_STRIFEACCURACY      313
#define SAMSARA_CLIENT_ACCURACY     314
#define SAMSARA_BEACON              315
#define SAMSARA_SPECTRES            316
#define SAMSARA_SIGIL               317

#define SAMSARA_CL_VERSION          2601

#define CLASSCOUNT          8
#define UNIQUECOUNT         2
#define SLOTCOUNT           10
#define TIPCOUNT            2

#define LMSMODES            6
#define ARMORMODES          5

#define CLASS_DOOM      0
#define CLASS_CHEX      1
#define CLASS_HERETIC   2
#define CLASS_WOLFEN    3
#define CLASS_HEXEN     4
#define CLASS_DUKE      5
#define CLASS_MARATHON  6
#define CLASS_QUAKE     7

#define SPEED_FORWARD       15
#define SPEED_SIDE          13

#define UNLOADCOUNT 59

#define P_COUNT 2
#define P_QUAD  0
#define P_REGEN 1

#define QUAD_THRESHOLD      2100   // one minute

#define PY640   380.0
#define PY320   (PY640/2)

#define POFF640 40.0
#define POFF320 20.0

#define REGEN_CENTER_X      0.953125    // 610 / 640
#define REGEN_CENTER_Y      (PY640 / 480)
#define REGEN_OFFSET        0.083333    // 40 / 480

#define TIP_SCROLLRATE      8

#define GLOBAL_DONEBITCHING     0
#define GLOBAL_SIGILBASE        1

int HELPSTR = 
"Welcome to the Wheel of Samsara! There are a few optional RCon commands you may want to consider.\n\
samsara_banjetpack 0/1: Toggles whether Duke is allowed to pick up his jetpack or not.\n\
samsara_banwolfmove 0/1: Toggles whether Wolfenstein movement is allowed or not.\n\
samsara_nocustomgravity 0/1: Toggles whether the heroes have custom gravity or use only Doom gravity.\n\
samsara_jumpmod: Gives the indicated multiplier to jump height. 9 for HeXen, -8 for Strife.\n\
samsara_permault 0/1: Toggles whether the Weapon VII is persistent or vanishes on pickup.\n\
samsara_lmslife [0-5]: Affects how much health/armor people have on LMS spawn/respawn.\n\
samsara_lmsult 0/1: Toggles whether players get their VII in LMS.\n\
samsara_uniquestart [0-4]: Toggles whether players get their unique on enter or spawn.\n\
samsara_chainsawstart [0-2]: Toggles whether players get their I on enter or spawn.\n\
samsara_peoplediewhentheyarekilled [0-3]: Players explode on death.\n\
samsara_punchdrunk 0/1: Toggles melee-only mode. Only works in deathmatch or coop.\n\
samsara_punchdrunkuniques 0/1: Toggles whether Punchdrunk uniques are present in normal play.\n\
samsara_punchdrunksaws 0/1: Toggles whether Punchdrunk Chainsaws are present in normal play.\n\
samsara_armormode [0-4]: Toggles the type of armor that spawns in-game.\n\
samsara_nohealthcap 0/1: Toggles whether 100/200 is the health cap for players, or infinity.\n\
samsara_noult 0/1: Toggles whether the VII comes into play or never spawns.\n\
samsara_nomonologues 0/1: Toggles whether the bosses speak on spawn or not.\n\
samsara_backpackstart 0/1: Toggles whether players spawn normally or with backpacks.\n\
samsara_classiclaz 0/1: Toggles whether the LAZ Device has Samsara behavior or original behavior.\n\
samsara_allcanrj 0/1: Every character with non-self-damaging rockets will be able to RJ with them.\n\
samsara_nounique 0/1: Toggles whether Unique Item spawns.\n\
samsara_noinvuln 0/1: Toggles whether Invulnerability spawns.\n\
samsara_ban[class] 0/1: Forbids players from playing certain classes. bandoomguy for Doomguy, banchex for Chex Warrior, etc.\n\
samsara_lmsrules 0/1: For players who want Rocket Arena-style showdowns or just to spawn with all weapons.\n\
samsara_[class]damage -10-30: Adjusts the character's damage multiplier.\n\
samsara_[class]defense -10-20: Adjusts the character's defense multiplier.";

int HELPSTR_CL = 
"Likewise, there are several clientside console variables, including:\n\
samsara_cl_printpickup 0/1: 1 = Print, 0 = Log.\n\
samsara_cl_expparticles [1-100000]: How many particles does Ranger's explosions emit? 0 is default, -1 to disable.\n\
samsara_cl_norecoil 0/1: Controls whether Ranger's weapons recoil.\n\
samsara_cl_sinerecoil 0/1: Toggles whether Ranger's recoil movement uses a sine wave.\n\
samsara_cl_weaponhud 0/1: Controls whether the weapon bar at the top of your screen appears.\n\
samsara_cl_vanilladoom 0/1: Toggles the vanilla weapon animations for Doomguy.\n\
samsara_cl_wolfmove 0/1: Toggles classic Wolfenstein movement on B.J. Blazkowicz.\n\
samsara_cl_bloodyhell -1-2: Fancy Clientside blood effects. Modes are None, Nashgore, Brutal, and Happyfun.\n\
samsarahold_cl_strweapons 0/1: Toggles stronghold graphics on Doom Weapons.\n\
samsarahold_cl_dukemusic 0/1: Toggles amazing duke nukem remix music near the end of the mission.";


int LMSArmors[LMSMODES] = 
{
    "",
    "GreenArmor",
    "BlueArmor",
    "LMSArmor", 
    "LMSArmor2",
    "LMSArmor3",
};

int ClassItems[CLASSCOUNT] =
{
    "DoomguyClass",
    "ChexClass",
    "CorvusClass",
    "WolfenClass",
    "HexenClass",
    "DukeClass",
    "MarathonClass",
    "QuakeClass",
};

int PickupStates[CLASSCOUNT][8] = 
{
    {"Doomguy", "DoomFull",     "DoomEmpty",        "DoomSpecial",      "DoomPunchdrunk",      "DoomPDFull",       "DoomPDEmpty",      "DoomPDSpecial"},
    {"Chexguy", "ChexFull",     "ChexEmpty",        "ChexSpecial",      "ChexPunchdrunk",      "ChexPDFull",       "ChexPDEmpty",      "ChexPDSpecial"},
    {"Heretic", "HereticFull",  "HereticEmpty",     "HereticSpecial",   "HereticPunchdrunk",   "HereticPDFull",    "HereticPDEmpty",   "HereticPDSpecial"},
    {"Wolfguy", "WolfFull",     "WolfEmpty",        "WolfSpecial",      "WolfPunchdrunk",      "WolfPDFull",       "WolfPDEmpty",      "WolfPDSpecial"},
    {"Hexen",   "HexenFull",    "HexenEmpty",       "HexenSpecial",     "HexenPunchdrunk",     "HexenPDFull",      "HexenPDEmpty",     "HexenPDSpecial"},
    {"Dukeguy", "DukeFull",     "DukeEmpty",        "DukeSpecial",      "DukePunchdrunk",      "DukePDFull",       "DukePDEmpty",      "DukePDSpecial"},
    {"Marathon","MarathonFull", "MarathonEmpty",    "MarathonSpecial",  "MarathonPunchdrunk",  "MarathonPDFull",   "MarathonPDEmpty",  "MarathonPDSpecial"},
    {"Quake",   "QuakeFull",    "QuakeEmpty",       "QuakeSpecial",     "QuakePunchdrunk",     "QuakePDFull",      "QuakePDEmpty",     "QuakePDSpecial"},   
};

int ItoSArray[7] = {1, 3, 4, 5, 6, 7, 8};
int StoIArray[SLOTCOUNT] = {-1, 1, -1, 2, 3, 4, 5, 6, 7, -1};

int ClassFades[CLASSCOUNT][5] =
{
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {0,   255, 0,   0.4, 8},
    {255, 255, 0,   0.1, 5},
};

int SlotItems[SLOTCOUNT] = 
{
    "",
    "GotWeapon0",
    "",
    "GotWeapon2",
    "GotWeapon3",
    "GotWeapon4",
    "GotWeapon5",
    "GotWeapon6",
    "GotWeapon7",
    "",
};

int LMSItems[CLASSCOUNT] =
{
    "",
    "",
    "PortGhostly",
    "WolfenAmmoCrate",
    "",
    "",
    "",
    "",
};

int UnloadRemove[UNLOADCOUNT] =
{
    "TomeOfPowerCooldown", "DiscOfRepulsionCooldown", "RainTracker", 
    "DukeTauntCooldown", "MaceAmmo", "MacePowered", "Mace", "DukeFlying", 
    "DukePetJack", "DukeVision", "DukeReady", "DukeWaiting", "Infrared", 
    "SynthFireActive", "SynthFireLeft", "SynthFireRight", "LevelLimiter", 
    "LeftReload", "RightReload", "UsingSMG", "UsingFists", "UsingPistols", 
    "UsingShotguns", "UsingFusionPistol", "UsingAssaultRifle", "UsingSpanker", 
    "UsingToasty", "UsingAlienWeapon", "UsingAlienWeapon2", "UsingWMC", 
    "UsingDualPistols", "UsingDualShotguns", "InvasionDualShottyCheck",
    "QuakeQuadTimer", "QuakeRegenTimer", "QuakeInvisTimer", "ChickenKillCount",
    "GibfistSide", "DBSHOT", "DBSHOT1", "DB1", "DB2", "DB3", "DB4", "DB5", "DB6",
    "DB7", "DB8", "DB9", "DB10", "DB11", "DB12", "DB13", "DB14", "DB15", "DB16", "DB17",
    "DB18", "DB19",
};

int PowerOutVols[5] = {96, 104, 112, 120, 127};

int Tipboxes[CLASSCOUNT][TIPCOUNT] =
{
    {"DOOMTIP1", "DOOMTIP2"},
    {"CHEXTIP1", "CHEXTIP2"},
    {"HERETIP1", "HERETIP2"},
    {"WOLFTIP1", "WOLFTIP2"},
    {"HEXNTIP1", "HEXNTIP2"},
    {"DUKETIP1", "DUKETIP2"},
    {"MARATIP1", "MARATIP2"},
    {"QUAKTIP1", "QUAKTIP2"},
};


int DMTipboxes[CLASSCOUNT][TIPCOUNT] =
{
    {"", ""},
    {"", "CHEXTIP3"},
    {"", "HERETIP3"},
    {"", "WOLFTIP3"},
    {"", "HEXNTIP3"},
    {"", "DUKETIP3"},
    {"", "MARATIP3"},
    {"", "QUAKTIP3"},
};

#define RESCOUNT 2
int ResonantItems[RESCOUNT][3] =
{
    {"UnknownResonator1", 0, 100},
    {"UnknownResonator2", 0, 100},
};


#define PDWTAKCOUNT 3

int PeopleDieParticles[CLASSCOUNT] = 
{
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    /*
    "ChexguysDieParticle",
    "CorvusDiesParticle",
    "BlazkoDiesParticle",
    "PariasDiesParticle",
    "DukeguysDieParticle",
    "VidBoisDieParticle",
    "RangersDieParticle",
    */
};

int PeopleDiePulses[CLASSCOUNT] = 
{
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    /*
    "ChexguysDiePulse",
    "CorvusDiesPulse",
    "BlazkoDiesPulse",
    "PariasDiesPulse",
    "DukeguysDiePulse",
    "VidBoisDiePulse",
    "RangersDiePulse",
    */
};

int PeopleDieBlasts[CLASSCOUNT] = 
{
    "DoomguyDiesWhenHeIsKilled",
    "ChexguyDiesWhenHeIsKilled",
    "CorvusDiesWhenHeIsKilled",
    "BlazkoDiesWhenHeIsKilled",
    "PariasDiesWhenHeIsKilled",
    "DukeDiesWhenHeIsKilled",
    "ManathorDiesWhenHeIsKilled",
    "RangerDiesWhenHeIsKilled",
};

int PDWTAKItems[PDWTAKCOUNT][2] = 
{
    {"InvPeopleDie",  "InvPeopleZorch"},
    {"InvPeopleDie2", "InvPeopleZorch2"},
    {"InvPeopleDie3", "InvPeopleZorch3"},
};

#define ARMORCOUNT  6

#define ARMOR_GREEN             0
#define ARMOR_YELLOW            1
#define ARMOR_BLUE              2
#define ARMOR_BLUE_WITHYELLOW   3
#define ARMOR_RED               4
#define ARMOR_MEGASPHERE        5

int ArmorPickups[ARMORCOUNT] = 
{
    "GreenArmorPickup",
    "YellowArmorPickup",
    "BlueArmorPickup",
    "BlueArmorPickup",
    "RedArmor",
    "MegaPack",
};

int ArmorItems[ARMORMODES][ARMORCOUNT][3] = 
{
    {
        {"ArmorPack1",          100, "GreenArmorNoDrop"},
        {"SamsaraYellowArmor",  150, "YellowArmorNoDrop"},
        {"ArmorPack2",          200, "BlueArmorNoDrop"},
        {"ArmorPack2",          200, "BlueArmorNoDrop"},
        {"ArmorPack3",          250, "RedArmorNoDrop"},
        {"ArmorPack2",          200, "BlueArmorNoDrop"},
    },
    {
        {"QuakeGreenArmor",     100, "QGreenArmorNoDrop"},
        {"QuakeYellowArmor",    150, "QYellowArmorNoDrop"},
        {"QuakeYellowArmor",    150, "QYellowArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
        {"SamsaraSilverArmor",  250, "SilverArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
    },
    {
        {"QuakeYellowArmor",    150, "QYellowArmorNoDrop"},
        {"QuakeYellowArmor",    150, "QYellowArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
        {"SamsaraSilverArmor",  250, "SilverArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
    },
    {
        {"MarathonGreenArmor",  100, "MGreenArmorNoDrop"},
        {"MarathonYellowArmor", 150, "MYellowArmorNoDrop"},
        {"MarathonBlueArmor",   200, "MBlueArmorNoDrop"},
        {"MarathonBlueArmor",   200, "MBlueArmorNoDrop"},
        {"MarathonRedArmor",    300, "MRedArmorNoDrop"},
        {"MarathonRedArmor",    300, "MRedArmorNoDrop"},
    },
    {
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
    }
};

int ArmorModeStates[ARMORMODES][4] = 
{
    {"Armor1", "Armor1_Drop", "Armor1_WithYellow", "Armor1_YellowDrop"},
    {"Armor2", "Armor2_Drop", "Armor2_WithYellow", "Armor2_YellowDrop"},
    {"Armor3", "Armor3_Drop", "Armor3_WithYellow", "Armor3_YellowDrop"},
    {"Armor4", "Armor4_Drop", "Armor4_WithYellow", "Armor4_YellowDrop"},
    {"Armor5", "Armor5_Drop", "Armor5_WithYellow", "Armor5_YellowDrop"},
};

int ArmorModeNames[ARMORMODES] = 
{
    "Normal",
    "Quake",
    "Quake (old)",
    "Marathon",
    "None",
};

int PunchDrunkItems[CLASSCOUNT][2] = 
{
    {"DoomguyPunchDrunk",   "DoomguyPunchUnique"},
    {"ChexguyPunchDrunk",   "ChexguyPunchUnique"},
    {"CorvusPunchDrunk",    "CorvusPunchUnique"},
    {"BlazkoPunchDrunk",    "BlazkoPunchUnique"},
    {"PariasPunchDrunk",    "PariasPunchUnique"},
    {"DukePunchDrunk",      "DukePunchUnique"},
    {"ManathorPunchDrunk",  "ManathorPunchUnique"},
    {"RangerPunchDrunk",    "RangerPunchUnique"},
};

int BanCVars[CLASSCOUNT] = 
{
    "samsara_bandoomguy",
    "samsara_banchex",
    "samsara_bancorvus",
    "samsara_banbj",
    "samsara_banparias",
    "samsara_banduke",
    "samsara_banso",
    "samsara_banranger",
};

int BanStrings[CLASSCOUNT] =
{
	"\c[m7]The admin has banned \cdDoomguy\c[m7] from play.",
	"\c[m7]The admin has banned \chChex Warrior\c[m7] from play.",
	"\c[m7]The admin has banned \cqCorvus\c[m7] from play.",
	"\c[m7]The admin has banned \cjB.J. Blazkowicz\c[m7] from play.",
	"\c[m7]The admin has banned \chParias\c[m7] from play.",
	"\c[m7]The admin has banned \cfDuke Nukem\c[m7] from play.",
	"\c[m7]The admin has banned \cnSecurity Officer\c[m7] from play.",
	"\c[m7]The admin has banned \csRanger\c[m7] from play.",
};


#define DAMAGEMODES 41
#define DAMAGEZEROINDEX 10

#define DEFENSEMODES 31
#define DEFENSEZEROINDEX 10

int DamageCVars[CLASSCOUNT] = 
{
    "samsara_doomguydamage",
    "samsara_chexdamage",
    "samsara_corvusdamage",
    "samsara_bjdamage",
    "samsara_pariasdamage",
    "samsara_dukedamage",
    "samsara_sodamage",
    "samsara_rangerdamage",
};

int DefenseCVars[CLASSCOUNT] = 
{
    "samsara_doomguydefense",
    "samsara_chexdefense",
    "samsara_corvusdefense",
    "samsara_bjdefense",
    "samsara_pariasdefense",
    "samsara_dukedefense",
    "samsara_sodefense",
    "samsara_rangerdefense",
};

int CVarDamageItems[DAMAGEMODES] = 
{
    "PowerDamageBuff-10",
    "PowerDamageBuff-9",
    "PowerDamageBuff-8",
    "PowerDamageBuff-7",
    "PowerDamageBuff-6",
    "PowerDamageBuff-5",
    "PowerDamageBuff-4",
    "PowerDamageBuff-3",
    "PowerDamageBuff-2",
    "PowerDamageBuff-1",
    "", // middle point
    "PowerDamageBuff1",
    "PowerDamageBuff2",
    "PowerDamageBuff3",
    "PowerDamageBuff4",
    "PowerDamageBuff5",
    "PowerDamageBuff6",
    "PowerDamageBuff7",
    "PowerDamageBuff8",
    "PowerDamageBuff9",
    "PowerDamageBuff10",
    "PowerDamageBuff11",
    "PowerDamageBuff12",
    "PowerDamageBuff13",
    "PowerDamageBuff14",
    "PowerDamageBuff15",
    "PowerDamageBuff16",
    "PowerDamageBuff17",
    "PowerDamageBuff18",
    "PowerDamageBuff19",
    "PowerDamageBuff20",
    "PowerDamageBuff21",
    "PowerDamageBuff22",
    "PowerDamageBuff23",
    "PowerDamageBuff24",
    "PowerDamageBuff25",
    "PowerDamageBuff26",
    "PowerDamageBuff27",
    "PowerDamageBuff28",
    "PowerDamageBuff29",
    "PowerDamageBuff30",
};

int CVarDefenseItems[DEFENSEMODES] =
{
    "PowerDefenseBuff-10",
    "PowerDefenseBuff-9",
    "PowerDefenseBuff-8",
    "PowerDefenseBuff-7",
    "PowerDefenseBuff-6",
    "PowerDefenseBuff-5",
    "PowerDefenseBuff-4",
    "PowerDefenseBuff-3",
    "PowerDefenseBuff-2",
    "PowerDefenseBuff-1",
    "", // middle point
    "PowerDefenseBuff1",
    "PowerDefenseBuff2",
    "PowerDefenseBuff3",
    "PowerDefenseBuff4",
    "PowerDefenseBuff5",
    "PowerDefenseBuff6",
    "PowerDefenseBuff7",
    "PowerDefenseBuff8",
    "PowerDefenseBuff9",
    "PowerDefenseBuff10",
    "PowerDefenseBuff11",
    "PowerDefenseBuff12",
    "PowerDefenseBuff13",
    "PowerDefenseBuff14",
    "PowerDefenseBuff15",
    "PowerDefenseBuff16",
    "PowerDefenseBuff17",
    "PowerDefenseBuff18",
    "PowerDefenseBuff19",
    "PowerDefenseBuff20",
};


int ChangelogString =
"Changes made to the Game\n
========================\n
SAMSARA CHANGES\n
- Chex Zorches custom enemies, of course.\n
- Duke taunts on custom enemies, because I would feel bad if people complained about it.\n
- Duke's Freezethrower and Parias' Frost shards do extra damage against fire-based enemies, as a benefit to those who read the README, and to make them usable (since freezethrower is pretty terrible for a slot 6).\n
- The weapon powerup device now spreads three unique items and a mystic ambit for team use. Sorry, folks, but making an original powered-up version of every samsara weapon is not in our itinerary at the moment, and never will be.\n
- Unique Team Powerup Item has a max of 3, rather than 1, since it's not that powerful.\n
- Fuel for flamer replaced by replaced with heretic and hexen ammo gems.\n
^- Landmines give a slot one. Ammo for landmines replaced with strife ammo boxes.\n
^- Autoshotgun is a slot 2+3\n
^- HRL is a slot 5+1 unique.\n
^- Stunner is 3 unique items straight up.\n
^- Railgun is slot 6+1 unique.\n
^- Flamer is slot6+2 uniques.\n
^- Pyro Cannon is slot7+2 uniques.\n
^- Repeater is slot6+2 uniques.\n
^- Devastator (Stronghold one, not Samsara one, which is renamed to prevent code confusion, we are very sorry) is slot7+2 uniques.\n
^- Most custom weapons also drop uniques (pretty easy to see), as to allow them to see more play, as they have to be split among the team.\n
- Fusion Pistol does some extra-extra damage versus the terminator, due to its entirely mechanical nature.\n
- Catharsi Detonators provide some extra explosive oomph if shot with the fusion pistol, along with detonating prematurely.\n
- The terminator explodes when killed by the fusion pistol, in reference to Marathon's hunters.\n
- Marine Item replaced with strife beacon.\n
^- Super Marine Item replaced with a custom, \"Super\" strife beacon. (Oh god I'm not looking forward for the ninth hero anymore)\n
- Random weapon device now can also give a unique, and now works for samsara.\n
^- Random weapon's chances for each slot are NOT equal. The chances of getting a slot 7 is 3%-4%, for example.\n
- Core now immune to friendly fire, and doing this required a new damagetype \"FaithInHumanity\" because seriously, why are you that dedicated to core-trolling?!\n
- Custom mechanical monsters take appropriate damage from the fusion pistol.\n
- Security Officer attains both WSTEM-5s on pick up, as per invasion mode.\n
- Parias' and Corvus' medikit capacity has been reduced to 4, and urn/invulnerability/megasphere capacity to 1, to prevent mass stealing from these classes (harming the team). This is for in-mission items, not buyable ones.\n
^- In mission Timefreeze and quad damages give corvus inventory ones.\n
^- These are separate from the ones you buy.\n
- Melee Slot 1's are buffed to allow the other heroes to share in the slot 1 fun.\n
- Parias' Backpack capacity limited to 1, but it gives full ammo instead of half, in order to prevent mass-steals and to prevent overpoweredness with having 6 and a RWD'd wraithverge.\n
- Various damage values have been tweaked for balance (most noticable on Parias). The bad news is that I forgot most of them.\n
- The Super Shield is replaced by Red Armor to prevent EZ Godlike.\n
- The intermission map is modified to have new rooms to adjust settings.\n
- New Achievements!\n
NOTE: This is meant to be played in coop mode. If UV single player is Impossible at certain points, please do not complain. \nJust play HMP, or start farming some items first. Also, give yourself \"CoopModeOn\" to let samsara do some stuff.\n\n
STRONGHOLD CHANGES\n
- Most of these should remain secret, but...\n
- Par times are now much, much, much larger (as in like 4 Times Longer), as to allow people to have an easy time re-running previous missions for free cash. Now, the real goal is get the Time Slicer Achievement (Yes, that's a thing).\n
- Changes to various missions all over the place. Most of these are going to remain secret, since, well, I want you to be surprised... Here, I'll give one to you.\n
- STR18 (Smoldering Caves) replaced with STR18 (Delta Bunker) from the RC2, because seriously, Delta Bunker was more worthy of being in Tier 4, and much cooler than Smoldering Caves. It's also much harder.\n
- Changes to various monsters. Most of these should not be noticeable, with the Key Word being Most. Again, most of these are to remain secret.\n
- The one I'm giving to you is that Dune Warriors can now be shot while cloaked, because they say they have a cloaking device, not a phase-out-of-existence device (same goes to apprentices in STR52)!\n
- The Bruiser Demon Powerup, as fun as it was, had it's novelty wear out a long time ago. I replaced with a Terminator Powerup. Much better.\n
- I have a separate patch for the non Samsara related changes.";