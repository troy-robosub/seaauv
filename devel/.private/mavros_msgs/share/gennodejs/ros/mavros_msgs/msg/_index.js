
"use strict";

let VehicleInfo = require('./VehicleInfo.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let RCIn = require('./RCIn.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let RadioStatus = require('./RadioStatus.js');
let ActuatorControl = require('./ActuatorControl.js');
let ParamValue = require('./ParamValue.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let MountControl = require('./MountControl.js');
let HilSensor = require('./HilSensor.js');
let FileEntry = require('./FileEntry.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let Param = require('./Param.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let LogData = require('./LogData.js');
let Altitude = require('./Altitude.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let WaypointList = require('./WaypointList.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let Tunnel = require('./Tunnel.js');
let HilGPS = require('./HilGPS.js');
let Trajectory = require('./Trajectory.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let Thrust = require('./Thrust.js');
let CellularStatus = require('./CellularStatus.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let TerrainReport = require('./TerrainReport.js');
let GPSRTK = require('./GPSRTK.js');
let DebugValue = require('./DebugValue.js');
let StatusText = require('./StatusText.js');
let State = require('./State.js');
let GPSINPUT = require('./GPSINPUT.js');
let HilControls = require('./HilControls.js');
let LandingTarget = require('./LandingTarget.js');
let RTCM = require('./RTCM.js');
let ExtendedState = require('./ExtendedState.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let BatteryStatus = require('./BatteryStatus.js');
let Waypoint = require('./Waypoint.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let PositionTarget = require('./PositionTarget.js');
let RCOut = require('./RCOut.js');
let GPSRAW = require('./GPSRAW.js');
let ManualControl = require('./ManualControl.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let ESCStatus = require('./ESCStatus.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let ESCInfo = require('./ESCInfo.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let WaypointReached = require('./WaypointReached.js');
let LogEntry = require('./LogEntry.js');
let Mavlink = require('./Mavlink.js');
let CommandCode = require('./CommandCode.js');
let RTKBaseline = require('./RTKBaseline.js');
let Vibration = require('./Vibration.js');
let VFR_HUD = require('./VFR_HUD.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let HomePosition = require('./HomePosition.js');

module.exports = {
  VehicleInfo: VehicleInfo,
  ESCInfoItem: ESCInfoItem,
  RCIn: RCIn,
  OpticalFlowRad: OpticalFlowRad,
  RadioStatus: RadioStatus,
  ActuatorControl: ActuatorControl,
  ParamValue: ParamValue,
  HilStateQuaternion: HilStateQuaternion,
  MountControl: MountControl,
  HilSensor: HilSensor,
  FileEntry: FileEntry,
  HilActuatorControls: HilActuatorControls,
  Param: Param,
  ESCTelemetryItem: ESCTelemetryItem,
  LogData: LogData,
  Altitude: Altitude,
  TimesyncStatus: TimesyncStatus,
  WaypointList: WaypointList,
  PlayTuneV2: PlayTuneV2,
  Tunnel: Tunnel,
  HilGPS: HilGPS,
  Trajectory: Trajectory,
  ESCTelemetry: ESCTelemetry,
  CameraImageCaptured: CameraImageCaptured,
  Thrust: Thrust,
  CellularStatus: CellularStatus,
  EstimatorStatus: EstimatorStatus,
  TerrainReport: TerrainReport,
  GPSRTK: GPSRTK,
  DebugValue: DebugValue,
  StatusText: StatusText,
  State: State,
  GPSINPUT: GPSINPUT,
  HilControls: HilControls,
  LandingTarget: LandingTarget,
  RTCM: RTCM,
  ExtendedState: ExtendedState,
  NavControllerOutput: NavControllerOutput,
  BatteryStatus: BatteryStatus,
  Waypoint: Waypoint,
  ADSBVehicle: ADSBVehicle,
  OnboardComputerStatus: OnboardComputerStatus,
  MagnetometerReporter: MagnetometerReporter,
  PositionTarget: PositionTarget,
  RCOut: RCOut,
  GPSRAW: GPSRAW,
  ManualControl: ManualControl,
  CamIMUStamp: CamIMUStamp,
  WheelOdomStamped: WheelOdomStamped,
  ESCStatus: ESCStatus,
  CompanionProcessStatus: CompanionProcessStatus,
  OverrideRCIn: OverrideRCIn,
  ESCInfo: ESCInfo,
  ESCStatusItem: ESCStatusItem,
  WaypointReached: WaypointReached,
  LogEntry: LogEntry,
  Mavlink: Mavlink,
  CommandCode: CommandCode,
  RTKBaseline: RTKBaseline,
  Vibration: Vibration,
  VFR_HUD: VFR_HUD,
  GlobalPositionTarget: GlobalPositionTarget,
  AttitudeTarget: AttitudeTarget,
  HomePosition: HomePosition,
};
