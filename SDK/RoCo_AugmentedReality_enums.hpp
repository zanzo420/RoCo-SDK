#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown      = 0,
	EARTrackingState__Tracking     = 1,
	EARTrackingState__NotTracking  = 2,
	EARTrackingState__StoppedTracking = 3,
	EARTrackingState__EARTrackingState_MAX = 4
};


// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None = 0,
	EARSessionTrackingFeature__PoseDetection2D = 1,
	EARSessionTrackingFeature__PersonSegmentation = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX = 4
};


// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo = 0,
	EARFaceTrackingUpdate__CurvesOnly = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX = 2
};


// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None = 0,
	EAREnvironmentCaptureProbeType__Manual = 1,
	EAREnvironmentCaptureProbeType__Automatic = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX = 3
};


// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX = 2
};


// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None   = 0,
	EARLightEstimationMode__AmbientLightEstimate = 1,
	EARLightEstimationMode__DirectionalLightEstimate = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX = 3
};


// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None    = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX = 3
};


// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	EARSessionType__None           = 0,
	EARSessionType__Orientation    = 1,
	EARSessionType__World          = 2,
	EARSessionType__Face           = 3,
	EARSessionType__Image          = 4,
	EARSessionType__ObjectScanning = 5,
	EARSessionType__PoseTracking   = 6,
	EARSessionType__EARSessionType_MAX = 7
};


// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity     = 0,
	EARWorldAlignment__GravityAndHeading = 1,
	EARWorldAlignment__Camera      = 2,
	EARWorldAlignment__EARWorldAlignment_MAX = 3
};


// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown       = 0,
	EARDepthAccuracy__Approximate  = 1,
	EARDepthAccuracy__Accurate     = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX = 3
};


// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown        = 0,
	EARDepthQuality__Low           = 1,
	EARDepthQuality__High          = 2,
	EARDepthQuality__EARDepthQuality_MAX = 3
};


// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	EARTextureType__CameraImage    = 0,
	EARTextureType__CameraDepth    = 1,
	EARTextureType__EnvironmentCapture = 2,
	EARTextureType__EARTextureType_MAX = 3
};


// Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	EAREye__LeftEye                = 0,
	EAREye__RightEye               = 1,
	EAREye__EAREye_MAX             = 2
};


// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft = 0,
	EARFaceBlendShape__EyeLookDownLeft = 1,
	EARFaceBlendShape__EyeLookInLeft = 2,
	EARFaceBlendShape__EyeLookOutLeft = 3,
	EARFaceBlendShape__EyeLookUpLeft = 4,
	EARFaceBlendShape__EyeSquintLeft = 5,
	EARFaceBlendShape__EyeWideLeft = 6,
	EARFaceBlendShape__EyeBlinkRight = 7,
	EARFaceBlendShape__EyeLookDownRight = 8,
	EARFaceBlendShape__EyeLookInRight = 9,
	EARFaceBlendShape__EyeLookOutRight = 10,
	EARFaceBlendShape__EyeLookUpRight = 11,
	EARFaceBlendShape__EyeSquintRight = 12,
	EARFaceBlendShape__EyeWideRight = 13,
	EARFaceBlendShape__JawForward  = 14,
	EARFaceBlendShape__JawLeft     = 15,
	EARFaceBlendShape__JawRight    = 16,
	EARFaceBlendShape__JawOpen     = 17,
	EARFaceBlendShape__MouthClose  = 18,
	EARFaceBlendShape__MouthFunnel = 19,
	EARFaceBlendShape__MouthPucker = 20,
	EARFaceBlendShape__MouthLeft   = 21,
	EARFaceBlendShape__MouthRight  = 22,
	EARFaceBlendShape__MouthSmileLeft = 23,
	EARFaceBlendShape__MouthSmileRight = 24,
	EARFaceBlendShape__MouthFrownLeft = 25,
	EARFaceBlendShape__MouthFrownRight = 26,
	EARFaceBlendShape__MouthDimpleLeft = 27,
	EARFaceBlendShape__MouthDimpleRight = 28,
	EARFaceBlendShape__MouthStretchLeft = 29,
	EARFaceBlendShape__MouthStretchRight = 30,
	EARFaceBlendShape__MouthRollLower = 31,
	EARFaceBlendShape__MouthRollUpper = 32,
	EARFaceBlendShape__MouthShrugLower = 33,
	EARFaceBlendShape__MouthShrugUpper = 34,
	EARFaceBlendShape__MouthPressLeft = 35,
	EARFaceBlendShape__MouthPressRight = 36,
	EARFaceBlendShape__MouthLowerDownLeft = 37,
	EARFaceBlendShape__MouthLowerDownRight = 38,
	EARFaceBlendShape__MouthUpperUpLeft = 39,
	EARFaceBlendShape__MouthUpperUpRight = 40,
	EARFaceBlendShape__BrowDownLeft = 41,
	EARFaceBlendShape__BrowDownRight = 42,
	EARFaceBlendShape__BrowInnerUp = 43,
	EARFaceBlendShape__BrowOuterUpLeft = 44,
	EARFaceBlendShape__BrowOuterUpRight = 45,
	EARFaceBlendShape__CheekPuff   = 46,
	EARFaceBlendShape__CheekSquintLeft = 47,
	EARFaceBlendShape__CheekSquintRight = 48,
	EARFaceBlendShape__NoseSneerLeft = 49,
	EARFaceBlendShape__NoseSneerRight = 50,
	EARFaceBlendShape__TongueOut   = 51,
	EARFaceBlendShape__HeadYaw     = 52,
	EARFaceBlendShape__HeadPitch   = 53,
	EARFaceBlendShape__HeadRoll    = 54,
	EARFaceBlendShape__LeftEyeYaw  = 55,
	EARFaceBlendShape__LeftEyePitch = 56,
	EARFaceBlendShape__LeftEyeRoll = 57,
	EARFaceBlendShape__RightEyeYaw = 58,
	EARFaceBlendShape__RightEyePitch = 59,
	EARFaceBlendShape__RightEyeRoll = 60,
	EARFaceBlendShape__MAX         = 61
};


// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative = 0,
	EARFaceTrackingDirection__FaceMirrored = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX = 2
};


// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape = 0,
	EARCandidateImageOrientation__Portrait = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX = 2
};


// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model  = 0,
	EARJointTransformSpace__ParentJoint = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX = 2
};


// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable = 0,
	EARObjectClassification__Unknown = 1,
	EARObjectClassification__Wall  = 2,
	EARObjectClassification__Ceiling = 3,
	EARObjectClassification__Floor = 4,
	EARObjectClassification__Table = 5,
	EARObjectClassification__Seat  = 6,
	EARObjectClassification__Face  = 7,
	EARObjectClassification__Image = 8,
	EARObjectClassification__World = 9,
	EARObjectClassification__SceneObject = 10,
	EARObjectClassification__HandMesh = 11,
	EARObjectClassification__EARObjectClassification_MAX = 12
};


// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal = 0,
	EARPlaneOrientation__Vertical  = 1,
	EARPlaneOrientation__Diagonal  = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX = 3
};


// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable = 0,
	EARWorldMappingState__StillMappingNotRelocalizable = 1,
	EARWorldMappingState__StillMappingRelocalizable = 2,
	EARWorldMappingState__Mapped   = 3,
	EARWorldMappingState__EARWorldMappingState_MAX = 4
};


// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted   = 0,
	EARSessionStatus__Running      = 1,
	EARSessionStatus__NotSupported = 2,
	EARSessionStatus__FatalError   = 3,
	EARSessionStatus__PermissionNotGranted = 4,
	EARSessionStatus__UnsupportedConfiguration = 5,
	EARSessionStatus__Other        = 6,
	EARSessionStatus__EARSessionStatus_MAX = 7
};


// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None = 0,
	EARTrackingQualityReason__Initializing = 1,
	EARTrackingQualityReason__Relocalizing = 2,
	EARTrackingQualityReason__ExcessiveMotion = 3,
	EARTrackingQualityReason__InsufficientFeatures = 4,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX = 5
};


// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking = 0,
	EARTrackingQuality__OrientationOnly = 1,
	EARTrackingQuality__OrientationAndPosition = 2,
	EARTrackingQuality__EARTrackingQuality_MAX = 3
};


// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None     = 0,
	EARLineTraceChannels__FeaturePoint = 1,
	EARLineTraceChannels__GroundPlane = 2,
	EARLineTraceChannels__PlaneUsingExtent = 3,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels__EARLineTraceChannels_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
