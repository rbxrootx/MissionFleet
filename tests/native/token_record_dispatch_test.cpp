#include "../../src/client-current/semantic/TokenRecordDispatch.h"

#include <array>
#include <cassert>
#include <cstring>
#include <utility>
#include <vector>

namespace {
struct Log {
    unsigned comparisons = 0;
    std::vector<std::pair<MissionFleetNameNode*, const unsigned char*>> applied;
};

int compare(const char* query, const char* name, void* context) noexcept {
    auto& log = *static_cast<Log*>(context);
    ++log.comparisons;
    return std::strcmp(query, name);
}

void apply(MissionFleetNameNode* node, const unsigned char* record,
           void* context) noexcept {
    auto& log = *static_cast<Log*>(context);
    log.applied.emplace_back(node, record);
}

void setRecord(unsigned char* record, unsigned char tag, const char* name) {
    record[0] = tag;
    std::strcpy(reinterpret_cast<char*>(record + 1), name);
}
}

int main() {
    MissionFleetNameNode at130{"FleetB", nullptr};
    MissionFleetNameNode at138{"FleetA", nullptr};
    MissionFleetTokenNameLists lists{&at130, &at138};
    std::array<unsigned char, 5 * 0x60> records{};
    setRecord(records.data() + 0 * 0x60, 0, "FleetA");
    setRecord(records.data() + 1 * 0x60, 1, "FleetB");
    setRecord(records.data() + 2 * 0x60, 2, "FleetA");
    setRecord(records.data() + 3 * 0x60, 0, "FleetB");
    setRecord(records.data() + 4 * 0x60, 1, "FleetA");

    Log log;
    MissionFleet_ApplyTokenRecords(&lists, nullptr, records.data(), 5,
                                   compare, apply, &log);
    MissionFleet_ApplyTokenRecords(&lists, &lists, records.data(), 0,
                                   compare, apply, &log);
    assert(log.comparisons == 0 && log.applied.empty());

    MissionFleet_ApplyTokenRecords(&lists, &lists, records.data(), 5,
                                   compare, apply, &log);
    assert(log.comparisons == 4);
    assert(log.applied.size() == 2);
    assert(log.applied[0].first == &at138 &&
           log.applied[0].second == records.data());
    assert(log.applied[1].first == &at130 &&
           log.applied[1].second == records.data() + 0x60);

    MissionFleetNameNode at64{"Beta", nullptr};
    MissionFleetNameNode at6C{"Alpha", nullptr};
    MissionFleetDualNameLists dual{&at64, &at6C};
    std::array<unsigned char, 4 * 0x60> otherRecords{};
    setRecord(otherRecords.data() + 0 * 0x60, 0, "Alpha");
    setRecord(otherRecords.data() + 1 * 0x60, 1, "Beta");
    setRecord(otherRecords.data() + 2 * 0x60, 2, "Alpha");
    setRecord(otherRecords.data() + 3 * 0x60, 0, "Beta");
    Log otherLog;
    MissionFleet_ApplyDualTokenRecords(&dual, nullptr, otherRecords.data(), 4,
                                       compare, apply, &otherLog);
    MissionFleet_ApplyDualTokenRecords(&dual, &dual, otherRecords.data(), 0,
                                       compare, apply, &otherLog);
    assert(otherLog.comparisons == 0 && otherLog.applied.empty());
    MissionFleet_ApplyDualTokenRecords(&dual, &dual, otherRecords.data(), 4,
                                       compare, apply, &otherLog);
    assert(otherLog.comparisons == 3 && otherLog.applied.size() == 2);
    assert(otherLog.applied[0].first == &at6C &&
           otherLog.applied[0].second == otherRecords.data());
    assert(otherLog.applied[1].first == &at64 &&
           otherLog.applied[1].second == otherRecords.data() + 0x60);
}
