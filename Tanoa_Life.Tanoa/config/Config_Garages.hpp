/*
    Anything defined in Config_Garages is strictly just a garage, it will not act like a house.

    price - Cost of the garage
    garageSpawnPos[] - worldToModel position to spawn vehicles
    garageSpawnDir - Offset to garage direction to spawn at (+-90 etc). It will be used in the manner: getDir _garage + spawnDir
    garageBlacklists[] - List of blacklisted houses for buying garages
        default: {}
*/

class Garages {

    class Altis {

        class Land_i_Garage_V1_F {
            price = 500000;
            garageSpawnPos[] = {-11.5,0,0};
            garageSpawnDir = -90;
            garageBlacklists[] = {};
        };

        class Land_i_Garage_V2_F : Land_i_Garage_V1_F{};

    };

    class Tanoa {


        class Land_Addon_05_F {
            price = 130000;
            garageSpawnPos[] = {0.0668793,-13.8677,-1.85385};
            garageSpawnDir = 0;
            garageBlacklists[] = {{5684.74,10216.8,1.16831},{5730.31,10326.1,-0.30881}};
        };

        class Land_DPP_01_smallFactory_F {
            price = 160000;
            garageSpawnPos[] = {-1.13538,6.99512,-2.21416};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
        };

        class Land_Warehouse_03_F {
            price = 180000;
            garageSpawnPos[] = {-3.90981,-8.46338,-2.53567};
            garageSpawnDir = 90;
            garageBlacklists[] = {};
        };

    };

};