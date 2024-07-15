cmake_minimum_required(VERSION 3.8)
project(node_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
# find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 添加消息文件
set(msg_files
  "msg/GraphicDataType.msg"
  "msg/DebugDataType.msg"
  "msg/GameStatus.msg"
  "msg/GameResult.msg"
  "msg/HealthPoint.msg"
  "msg/DartStatus.msg"
  "msg/IcraBuffDebuffZoneStatus.msg"
  "msg/EventData.msg"
  "msg/SupplyProjectileAction.msg"
  "msg/RefereeWarning.msg"
  "msg/DartRemainingTime.msg"
  "msg/GameRobotStatus.msg"
  "msg/PowerHeatData.msg"
  "msg/GameRobotPos.msg"
  "msg/BuffInfo.msg"
  "msg/AerialRobotEnergy.msg"
  "msg/RobotHurt.msg"
  "msg/ShootData.msg"
  "msg/BulletRemaining.msg"
  "msg/RfidStatus.msg"
  "msg/DartClientCmds.msg"
  "msg/ClientCustomGraphicDelete.msg"
  "msg/ClientCustomGraphicSingle.msg"
  "msg/ClientCustomGraphicDouble.msg"
  "msg/ClientCustomGraphicFive.msg"
  "msg/ClientCustomCharacter.msg"
  "msg/ClientCustomGraphicSeven.msg"
  "msg/DebugInfo.msg"
  "msg/ErrorInfo.msg"
  "msg/Heartbeat.msg"
  "msg/AutoaimData.msg"
  "msg/ChassisData.msg"
  "msg/GyroscopeData.msg"
  "msg/DbugData.msg"
  "msg/JointState.msg"
  "msg/JointControl.msg"
  "msg/JointCalibration.msg"
  "msg/RobotCommunication.msg"
  "msg/BoardAlpha.msg"
  "msg/BoardBeta.msg"
)

# 添加服务文件
set(srv_files
  "srv/SendGameStatus.srv"
  "srv/SendGameResult.srv"
  "srv/SendHealthPoint.srv"
  "srv/SendDartStatus.srv"
  "srv/SendIcraBuffDebuffZoneStatus.srv"
  "srv/SendEventData.srv"
  "srv/SendSupplyProjectileAction.srv"
  "srv/SendRefereeWarning.srv"
  "srv/SendDartRemainingTime.srv"
  "srv/SendGameRobotStatus.srv"
  "srv/SendPowerHeatData.srv"
  "srv/SendGameRobotPos.srv"
  "srv/SendBuffInfo.srv"
  "srv/SendAerialRobotEnergy.srv"
  "srv/SendRobotHurt.srv"
  "srv/SendShootData.srv"
  "srv/SendBulletRemaining.srv"
  "srv/SendRfidStatus.srv"
  "srv/SendDartClientCmds.srv"
  "srv/SendClientCustomGraphicDelete.srv"
  "srv/SendClientCustomGraphicSingle.srv"
  "srv/SendClientCustomGraphicDouble.srv"
  "srv/SendClientCustomGraphicFive.srv"
  "srv/SendClientCustomCharacter.srv"
  "srv/SendClientCustomGraphicSeven.srv"
  "srv/SendDebugInfo.srv"
  "srv/SendErrorInfo.srv"
  "srv/SendHeartbeat.srv"
  "srv/SendAutoaimData.srv"
  "srv/SendChassisData.srv"
  "srv/SendGyroscopeData.srv"
  "srv/SendDbugData.srv"
  "srv/SendJointState.srv"
  "srv/SendJointControl.srv"
  "srv/SendJointCalibration.srv"
  "srv/SendRobotCommunication.srv"
  "srv/SendBoardAlpha.srv"
  "srv/SendBoardBeta.srv"
)


# 生成接口
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
