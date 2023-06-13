
"use strict";

let WaypointClear = require('./WaypointClear.js')
let WaypointPush = require('./WaypointPush.js')
let LogRequestList = require('./LogRequestList.js')
let LogRequestData = require('./LogRequestData.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let MessageInterval = require('./MessageInterval.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileRead = require('./FileRead.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileTruncate = require('./FileTruncate.js')
let WaypointPull = require('./WaypointPull.js')
let SetMavFrame = require('./SetMavFrame.js')
let CommandInt = require('./CommandInt.js')
let CommandHome = require('./CommandHome.js')
let ParamGet = require('./ParamGet.js')
let CommandAck = require('./CommandAck.js')
let FileOpen = require('./FileOpen.js')
let FileList = require('./FileList.js')
let StreamRate = require('./StreamRate.js')
let CommandBool = require('./CommandBool.js')
let FileRemove = require('./FileRemove.js')
let ParamPush = require('./ParamPush.js')
let ParamPull = require('./ParamPull.js')
let SetMode = require('./SetMode.js')
let FileClose = require('./FileClose.js')
let FileRename = require('./FileRename.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let FileWrite = require('./FileWrite.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileChecksum = require('./FileChecksum.js')
let ParamSet = require('./ParamSet.js')
let CommandLong = require('./CommandLong.js')
let CommandTOL = require('./CommandTOL.js')
let MountConfigure = require('./MountConfigure.js')
let FileRemoveDir = require('./FileRemoveDir.js')

module.exports = {
  WaypointClear: WaypointClear,
  WaypointPush: WaypointPush,
  LogRequestList: LogRequestList,
  LogRequestData: LogRequestData,
  CommandTriggerControl: CommandTriggerControl,
  VehicleInfoGet: VehicleInfoGet,
  CommandVtolTransition: CommandVtolTransition,
  MessageInterval: MessageInterval,
  WaypointSetCurrent: WaypointSetCurrent,
  FileRead: FileRead,
  CommandTriggerInterval: CommandTriggerInterval,
  FileTruncate: FileTruncate,
  WaypointPull: WaypointPull,
  SetMavFrame: SetMavFrame,
  CommandInt: CommandInt,
  CommandHome: CommandHome,
  ParamGet: ParamGet,
  CommandAck: CommandAck,
  FileOpen: FileOpen,
  FileList: FileList,
  StreamRate: StreamRate,
  CommandBool: CommandBool,
  FileRemove: FileRemove,
  ParamPush: ParamPush,
  ParamPull: ParamPull,
  SetMode: SetMode,
  FileClose: FileClose,
  FileRename: FileRename,
  LogRequestEnd: LogRequestEnd,
  FileWrite: FileWrite,
  FileMakeDir: FileMakeDir,
  FileChecksum: FileChecksum,
  ParamSet: ParamSet,
  CommandLong: CommandLong,
  CommandTOL: CommandTOL,
  MountConfigure: MountConfigure,
  FileRemoveDir: FileRemoveDir,
};
