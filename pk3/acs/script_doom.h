script SAMSARA_DOOM (int class, int slot, int dropped)
{
    switch (slot)
    {
      case 1:
        GiveInventory(" Chainsaw ", 1);
        GiveInventory("Stunner Rifle", 1);
        break;
      case 4:
        GiveInventory("Super Shotgun", 1);
        GiveInventory("Automatic Shotgun", 1);
        break;
      case 6:
        GiveInventory("Rocket Launcher", 1);
        GiveInventory("Land Mine Layer", 1);
        break;
      case 7:
        GiveInventory("Plasma Rifle", 1);
        GiveInventory(" Railgun ", 1);
        break;
      case 8:
        GiveInventory("B.F.G. 9000", 1);
        GiveInventory("Plasma Repeater", 1);
        break;
    }
}