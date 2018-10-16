class SimTools_Compositions {
};
class LARs_spawnComp {
    tag = "LARs";
    class Compositions {
        file = "SimTools\Compositions\LARs\functions";
        class createComp{};
        class spawnComp{};
    };
    class Compositions_debug {
        file = "SimTools\Compositions\LARs\functions\Debug";
        class drawBounds{};
    };
    class Compositions_utilities {
        file = "SimTools\Compositions\LARs\functions\Utilities";
        class deleteComp{};
        class getCompObjects{};
        class getCompItem{};
        class getItemComp{};
    };
};
