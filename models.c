typedef struct Levels {
    int level_participants;
    float level_weight;
} Level;

struct Tower {
    int num_participants;
    int num_leveles;
    double air_resistance;
    Level levels[];
};

struct Tower getAirResistance(struct Tower tower) {
    for(int j = 0; j < tower.num_leveles; j++) {
        tower.air_resistance = tower.air_resistance +
                               sqrt(j + 1) * pow(tower.levels[j].level_weight,
                                                 2.00 / tower.levels[j].level_participants);
    }
    return tower;
}
