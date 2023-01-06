#include <spdlog/spdlog.h>

#include <json_dto/pub.hpp>
#include <filesystem>
#include <fstream>
#include <iostream>
using namespace std;

struct Data {
  uint16_t id;
  json_dto::nullable_t<std::string> command;
  uint16_t commandType;

  template <typename Json_Io> void json_io(Json_Io &io) {
    io &json_dto::mandatory("id", id) &
        json_dto::optional("command", command, nullptr) &
        json_dto::mandatory("commandType", commandType);
  }
};
struct KeepaliveResult {
  bool active;
  uint16_t data_type;
  json_dto::nullable_t <Data> data;

  template <typename Json_Io> void json_io(Json_Io &io) {
    io &json_dto::mandatory("active", active) &
        json_dto::mandatory("data_type", data_type) &
        json_dto::optional("data", data, nullptr);
  }
};
 int main(int argc, char** argv) {
  spdlog::info("cpp template app started");
  const auto *const testJson = "{\"active\": true,\"data_type\": 1,\"data\":{\"id\":11,\"command\":\"test cmd xxx \",\"commandType\":3}}";
  auto result = json_dto::from_json<KeepaliveResult>(testJson);
  auto data = *(result.data);
  spdlog::info("command is: {}", *result.data->command);
  uint16_t id = data.id;
  spdlog::info("id is: {}", (*result.data).id);
}