#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_Rat.h>



AnimationGraphDescriptor_Rat::AnimationGraphDescriptor_Rat(
    AnimationGraphDescriptorManager& aManager)
{
    enum Variables
    {
        kiState = 0,
        kiState_Molerat = 1,
        kbGraphDriven = 2,
        kbGraphDrivenRotation = 3,
        kbGraphDrivenTranslation = 4,
        kbAnimationDriven = 5,
        kbAllowRotation = 6,
        kcHitReactionBodyPart = 7,
        kfTimeStep = 8,
        kfSpineTwistGainAdj = 9,
        kfSpineTwistGain = 10,
        kSpineXTwist = 11,
        kSpineYTwist = 12,
        kSpineZTwist = 13,
        kSpineXTwistMult = 14,
        kSpineYTwistMult = 15,
        kSpineZTwistMult = 16,
        kiGetUpType = 17,
        kiCombatState = 18,
        kcHitReactionDir = 19,
        kcamerafromx = 20,
        kcamerafromy = 21,
        kcamerafromz = 22,
        kbHeadTrackingEnabled = 23,
        kbGraphWantsHeadTracking = 24,
        kfHeadTrackingGainOn = 25,
        kfHeadTrackingGainOff = 26,
        kLookAtOutOfRange = 27,
        kbHeadTrackingDebug = 28,
        kbSupportedDeathAnim = 29,
        kfHitReactionEndTimer = 30,
        kiSyncTurnState = 31,
        kiNonCombatStandingState = 32,
        kiNonCombatLocomotionState = 33,
        kiSyncIdleLocomotion = 34,
        kSpeed = 35,
        kiCombatStandingState = 36,
        kiCombatLocomotionState = 37,
        kIsAttackReady = 38,
        kbEnableAttackMod = 39,
        kDirection = 40,
        kbEquipOk = 41,
        kfRandomClipStartTimePercentage = 42,
        kTurnDeltaSmoothed = 43,
        kbIsSynced = 44,
        kidleTimeMax = 45,
        kidleTimeMin = 46,
        kiSyncForwardState = 47,
        kbIsTunneling = 48,
        kiDynamicAnimSelector = 49,
        kfLocomotionWalkSpeedMult = 50,
        kfLocomotionRunSpeedMult = 51,
        kiSyncLocomotionSpeed = 52,
        kbAllowHeadTracking = 53,
        kLookAtChest_Enabled = 54,
        kLookAtSpine2_Enabled = 55,
        kbFreezeSpeedUpdate = 56,
        kiIsInSneak = 57,
        kbGraphWantsFootIK = 58,
        kbRenderFirstPersonInWorld = 59,
        kbDisableSpineTracking = 60,
        kIsPlayer = 61,
        kbBlockPOVSwitch = 62,
        kbBlockPipboy = 63,
        kPose = 64,
        kbAdjust1stPersonFOV = 65,
        kiRecoilSelector = 66,
        kstaggerDirection = 67,
        kstaggerMagnitude = 68,
        kTurnDelta = 69,
        kIsBlocking = 70,
        kiSyncWalkRun = 71,
        kbManualGraphChange = 72,
        krecoilShortMult = 73,
        kLookAtOutsideLimit = 74,
        kbForceIdleStop = 75,
        kbDoNotInterrupt = 76,
        kLookAtLimitAngleDeg = 77,
        kLookAtChest_LimitAngleDeg = 78,
        kLookAtNeck_LimitAngleDeg = 79,
        kLookAtHead_LimitAngleDeg = 80,
        kLookAtHead_OnGain = 81,
        kLookAtAdditive = 82,
        kbEnableRoot_IsActiveMod = 83,
        kIsNPC = 84,
        kLookAtOnGain = 85,
        kLookAtOffGain = 86,
        kbTalkableWithItem = 87,
        kiTalkGenerator = 88,
        kbFreezeRotationUpdate = 89,
        kiPcapTalkGenerator = 90,
        kSpeedSmoothed = 91,
        kbIsInFlavor = 92,
    };

    uint64_t key = 10665350860146563200;

    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
            {
                kcHitReactionBodyPart,
                kbEquipOk,
                kbGraphWantsHeadTracking,
                kLookAtOutOfRange,
                kbAnimationDriven,
                kIsAttackReady,
                kbSupportedDeathAnim,
            },
            {
                kstaggerDirection,
                kfLocomotionWalkSpeedMult,
                kSpineXTwist,
                kDirection,
                kSpeedSmoothed,
                kTurnDelta,
                kSpeed,
                kSpineZTwist,
                kTurnDeltaSmoothed,
                kfLocomotionRunSpeedMult,
                kSpineYTwist,
            },
            {
                kiDynamicAnimSelector,
                kiRecoilSelector,
                kiSyncTurnState,
                kiSyncLocomotionSpeed,
                kiCombatState,
                kiSyncForwardState,
                kiSyncIdleLocomotion,
            }
        ));
}
