inline struct CPulseCell_WaitForCursorsWithTagOffsets {
	DWORD m_bTagSelfWhenComplete;
	DWORD m_nDesiredKillPriority;
} CPulseCell_WaitForCursorsWithTag;

inline struct CPulseCell_BaseOffsets {
	DWORD m_nEditorNodeID;
} CPulseCell_Base;

inline struct CPulseCell_PickBestOutflowSelectorOffsets {
	DWORD m_nCheckType;
	DWORD m_OutflowList;
} CPulseCell_PickBestOutflowSelector;

inline struct CPulseCell_WaitForObservableOffsets {
	DWORD m_Condition;
	DWORD m_OnTrue;
} CPulseCell_WaitForObservable;

inline struct CPulse_OutflowConnectionOffsets {
	DWORD m_SourceOutflowName;
	DWORD m_nDestChunk;
	DWORD m_nInstruction;
	DWORD m_OutflowRegisterMap;
} CPulse_OutflowConnection;

inline struct CPulseGraphDefOffsets {
	DWORD m_DomainIdentifier;
	DWORD m_DomainSubType;
	DWORD m_ParentMapName;
	DWORD m_ParentXmlName;
	DWORD m_Chunks;
	DWORD m_Cells;
	DWORD m_Vars;
	DWORD m_PublicOutputs;
	DWORD m_InvokeBindings;
	DWORD m_CallInfos;
	DWORD m_Constants;
	DWORD m_DomainValues;
	DWORD m_BlackboardReferences;
	DWORD m_OutputConnections;
} CPulseGraphDef;

inline struct CPulseCell_FireCursorsOffsets {
	DWORD m_Outflows;
	DWORD m_bWaitForChildOutflows;
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
} CPulseCell_FireCursors;

inline struct CPulseCell_Timeline__TimelineEvent_tOffsets {
	DWORD m_flTimeFromPrevious;
	DWORD m_EventOutflow;
} CPulseCell_Timeline__TimelineEvent_t;

inline struct CPulseCell_IntervalTimer__CursorState_tOffsets {
	DWORD m_StartTime;
	DWORD m_EndTime;
	DWORD m_flWaitInterval;
	DWORD m_flWaitIntervalHigh;
	DWORD m_bCompleteOnNextWake;
} CPulseCell_IntervalTimer__CursorState_t;

inline struct OutflowWithRequirements_tOffsets {
	DWORD m_Connection;
	DWORD m_DestinationFlowNodeID;
	DWORD m_RequirementNodeIDs;
	DWORD m_nCursorStateBlockIndex;
} OutflowWithRequirements_t;

inline struct CPulseCell_Value_GradientOffsets {
	DWORD m_Gradient;
} CPulseCell_Value_Gradient;

inline struct PulseNodeDynamicOutflows_t__DynamicOutflow_tOffsets {
	DWORD m_OutflowID;
	DWORD m_Connection;
} PulseNodeDynamicOutflows_t__DynamicOutflow_t;

inline struct CPulseCell_Inflow_GraphHookOffsets {
	DWORD m_HookName;
} CPulseCell_Inflow_GraphHook;

inline struct CPulseCell_Inflow_BaseEntrypointOffsets {
	DWORD m_EntryChunk;
	DWORD m_RegisterMap;
} CPulseCell_Inflow_BaseEntrypoint;

inline struct CPulseCell_WaitForCursorsWithTagBaseOffsets {
	DWORD m_nCursorsAllowedToWait;
	DWORD m_WaitComplete;
} CPulseCell_WaitForCursorsWithTagBase;

inline struct CPulse_InvokeBindingOffsets {
	DWORD m_RegisterMap;
	DWORD m_FuncName;
	DWORD m_nCellIndex;
	DWORD m_nSrcChunk;
	DWORD m_nSrcInstruction;
} CPulse_InvokeBinding;

inline struct CPulseCell_IntervalTimerOffsets {
	DWORD m_Completed;
	DWORD m_OnInterval;
} CPulseCell_IntervalTimer;

inline struct CPulseCell_BaseLerpOffsets {
	DWORD m_WakeResume;
} CPulseCell_BaseLerp;

inline struct CPulseCell_Value_CurveOffsets {
	DWORD m_Curve;
} CPulseCell_Value_Curve;

inline struct CPulseCell_Inflow_EventHandlerOffsets {
	DWORD m_EventName;
} CPulseCell_Inflow_EventHandler;

inline struct CPulseCell_Outflow_CycleShuffled__InstanceState_tOffsets {
	DWORD m_Shuffle;
	DWORD m_nNextShuffle;
} CPulseCell_Outflow_CycleShuffled__InstanceState_t;

inline struct CPulseCell_BaseLerp__CursorState_tOffsets {
	DWORD m_StartTime;
	DWORD m_EndTime;
} CPulseCell_BaseLerp__CursorState_t;

inline struct CPulseCell_WaitForCursorsWithTagBase__CursorState_tOffsets {
	DWORD m_TagName;
} CPulseCell_WaitForCursorsWithTagBase__CursorState_t;

inline struct CPulseCell_TimelineOffsets {
	DWORD m_TimelineEvents;
	DWORD m_bWaitForChildOutflows;
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
} CPulseCell_Timeline;

inline struct CPulseCell_Inflow_EntOutputHandlerOffsets {
	DWORD m_SourceEntity;
	DWORD m_SourceOutput;
	DWORD m_ExpectedParamType;
} CPulseCell_Inflow_EntOutputHandler;

inline struct CPulseCell_Outflow_CycleOrdered__InstanceState_tOffsets {
	DWORD m_nNextIndex;
} CPulseCell_Outflow_CycleOrdered__InstanceState_t;

inline struct CPulseCell_LimitCount__InstanceState_tOffsets {
	DWORD m_nCurrentCount;
} CPulseCell_LimitCount__InstanceState_t;

inline struct PulseNodeDynamicOutflows_tOffsets {
	DWORD m_Outflows;
} PulseNodeDynamicOutflows_t;

inline struct CPulseCell_IsRequirementValid__Criteria_tOffsets {
	DWORD m_bIsValid;
} CPulseCell_IsRequirementValid__Criteria_t;

inline struct CPulseCell_Inflow_ObservableVariableListenerOffsets {
	DWORD m_nBlackboardReference;
	DWORD m_bSelfReference;
} CPulseCell_Inflow_ObservableVariableListener;

inline struct CPulseCell_Outflow_CycleOrderedOffsets {
	DWORD m_Outputs;
} CPulseCell_Outflow_CycleOrdered;

inline struct PulseSelectorOutflowList_tOffsets {
	DWORD m_Outflows;
} PulseSelectorOutflowList_t;

inline struct CPulseCell_Inflow_WaitOffsets {
	DWORD m_WakeResume;
} CPulseCell_Inflow_Wait;

inline struct CPulseCell_Outflow_CycleShuffledOffsets {
	DWORD m_Outputs;
} CPulseCell_Outflow_CycleShuffled;

inline struct CPulseCell_Inflow_MethodOffsets {
	DWORD m_MethodName;
	DWORD m_Description;
	DWORD m_bIsPublic;
	DWORD m_ReturnType;
	DWORD m_Args;
} CPulseCell_Inflow_Method;

inline struct CPulseCell_BooleanSwitchStateOffsets {
	DWORD m_Condition;
	DWORD m_SubGraph;
	DWORD m_WhenTrue;
	DWORD m_WhenFalse;
} CPulseCell_BooleanSwitchState;

inline struct CPulseCell_Inflow_YieldOffsets {
	DWORD m_UnyieldResume;
} CPulseCell_Inflow_Yield;

inline struct CPulseCell_UnknownOffsets {
	DWORD m_UnknownKeys;
} CPulseCell_Unknown;

inline struct CPulseCell_Outflow_CycleRandomOffsets {
	DWORD m_Outputs;
} CPulseCell_Outflow_CycleRandom;

inline struct CPulseCell_Step_PublicOutputOffsets {
	DWORD m_OutputIndex;
} CPulseCell_Step_PublicOutput;

inline struct CPulse_BlackboardReferenceOffsets {
	DWORD m_hBlackboardResource;
	DWORD m_BlackboardResource;
	DWORD m_nNodeID;
	DWORD m_NodeName;
} CPulse_BlackboardReference;

inline struct CPulse_CallInfoOffsets {
	DWORD m_PortName;
	DWORD m_nEditorNodeID;
	DWORD m_RegisterMap;
	DWORD m_CallMethodID;
	DWORD m_nSrcChunk;
	DWORD m_nSrcInstruction;
} CPulse_CallInfo;

inline struct CPulseCell_InlineNodeSkipSelectorOffsets {
	DWORD m_nFlowNodeID;
	DWORD m_bAnd;
	DWORD m_PassOutflow;
	DWORD m_FailOutflow;
} CPulseCell_InlineNodeSkipSelector;

inline struct CPulseCell_LimitCountOffsets {
	DWORD m_nLimitCount;
} CPulseCell_LimitCount;

inline struct CPulseCell_Step_CallExternalMethodOffsets {
	DWORD m_MethodName;
	DWORD m_GameBlackboard;
	DWORD m_ExpectedArgs;
	DWORD m_nAsyncCallMode;
	DWORD m_OnFinished;
} CPulseCell_Step_CallExternalMethod;

inline struct PulseObservableBoolExpression_tOffsets {
	DWORD m_EvaluateConnection;
	DWORD m_DependentObservableVars;
	DWORD m_DependentObservableBlackboardReferences;
} PulseObservableBoolExpression_t;

inline struct CPulseCell_LimitCount__Criteria_tOffsets {
	DWORD m_bLimitCountPasses;
} CPulseCell_LimitCount__Criteria_t;

inline struct CPulseCell_CursorQueueOffsets {
	DWORD m_nCursorsAllowedToRunParallel;
} CPulseCell_CursorQueue;

inline struct buttonsOffsets {
	DWORD attack;
	DWORD attack2;
	DWORD back;
	DWORD duck;
	DWORD forward;
	DWORD jump;
	DWORD left;
	DWORD lookatweapon;
	DWORD reload;
	DWORD right;
	DWORD showscores;
	DWORD sprint;
	DWORD turnleft;
	DWORD turnright;
	DWORD use;
	DWORD zoom;
} buttons;

inline struct C_SceneEntity__QueuedEvents_tOffsets {
	DWORD starttime;
} C_SceneEntity__QueuedEvents_t;

inline struct CCSPlayer_PingServicesOffsets {
	DWORD m_hPlayerPing;
	DWORD m_flPlayerPingTokens;
} CCSPlayer_PingServices;

inline struct CEconItemAttributeOffsets {
	DWORD m_iAttributeDefinitionIndex;
	DWORD m_flValue;
	DWORD m_flInitialValue;
	DWORD m_nRefundableCurrency;
	DWORD m_bSetBonus;
} CEconItemAttribute;

inline struct PredictedDamageTag_tOffsets {
	DWORD nTagTick;
	DWORD flFlinchModSmall;
	DWORD flFlinchModLarge;
	DWORD flFriendlyFireDamageReductionRatio;
} PredictedDamageTag_t;

inline struct C_EnvWindSharedOffsets {
	DWORD m_flStartTime;
	DWORD m_iWindSeed;
	DWORD m_iMinWind;
	DWORD m_iMaxWind;
	DWORD m_windRadius;
	DWORD m_iMinGust;
	DWORD m_iMaxGust;
	DWORD m_flMinGustDelay;
	DWORD m_flMaxGustDelay;
	DWORD m_flGustDuration;
	DWORD m_iGustDirChange;
	DWORD m_iInitialWindDir;
	DWORD m_flInitialWindSpeed;
	DWORD m_location;
	DWORD m_hEntOwner;
} C_EnvWindShared;

inline struct C_SkyCameraOffsets {
	DWORD m_skyboxData;
	DWORD m_skyboxSlotToken;
	DWORD m_bUseAngles;
	DWORD m_pNext;
} C_SkyCamera;

inline struct C_SoundOpvarSetPointBaseOffsets {
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_iOpvarIndex;
	DWORD m_bUseAutoCompare;
	DWORD m_bFastRefresh;
} C_SoundOpvarSetPointBase;

inline struct C_EnvCubemapFogOffsets {
	DWORD m_flEndDistance;
	DWORD m_flStartDistance;
	DWORD m_flFogFalloffExponent;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogHeightWidth;
	DWORD m_flFogHeightEnd;
	DWORD m_flFogHeightStart;
	DWORD m_flFogHeightExponent;
	DWORD m_flLODBias;
	DWORD m_bActive;
	DWORD m_bStartDisabled;
	DWORD m_flFogMaxOpacity;
	DWORD m_nCubemapSourceType;
	DWORD m_hSkyMaterial;
	DWORD m_iszSkyEntity;
	DWORD m_hFogCubemapTexture;
	DWORD m_bHasHeightFogEnd;
	DWORD m_bFirstTime;
} C_EnvCubemapFog;

inline struct C_BaseFlex__Emphasized_PhonemeOffsets {
	DWORD m_sClassName;
	DWORD m_flAmount;
	DWORD m_bRequired;
	DWORD m_bBasechecked;
	DWORD m_bValid;
} C_BaseFlex__Emphasized_Phoneme;

inline struct C_EnvParticleGlowOffsets {
	DWORD m_flAlphaScale;
	DWORD m_flRadiusScale;
	DWORD m_flSelfIllumScale;
	DWORD m_ColorTint;
	DWORD m_hTextureOverride;
} C_EnvParticleGlow;

inline struct CCSPlayerController_InventoryServicesOffsets {
	DWORD m_vecNetworkableLoadout;
	DWORD m_unMusicID;
	DWORD m_rank;
	DWORD m_nPersonaDataPublicLevel;
	DWORD m_nPersonaDataPublicCommendsLeader;
	DWORD m_nPersonaDataPublicCommendsTeacher;
	DWORD m_nPersonaDataPublicCommendsFriendly;
	DWORD m_nPersonaDataXpTrailLevel;
	DWORD m_vecServerAuthoritativeWeaponSlots;
	DWORD m_unEquippedPlayerSprayIDs;
	DWORD m_unCurrentLoadoutHash;
} CCSPlayerController_InventoryServices;

inline struct CCSPlayerModernJumpOffsets {
	DWORD m_nLastActualJumpPressTick;
	DWORD m_flLastActualJumpPressFrac;
	DWORD m_nLastUsableJumpPressTick;
	DWORD m_flLastUsableJumpPressFrac;
	DWORD m_nLastLandedTick;
	DWORD m_flLastLandedFrac;
	DWORD m_flLastLandedVelocityX;
	DWORD m_flLastLandedVelocityY;
} CCSPlayerModernJump;

inline struct C_EconEntity__AttachedModelData_tOffsets {
	DWORD m_iModelDisplayFlags;
} C_EconEntity__AttachedModelData_t;

inline struct CTriggerFanOffsets {
	DWORD m_vFanOriginOffset;
	DWORD m_vDirection;
	DWORD m_bPushTowardsInfoTarget;
	DWORD m_bPushAwayFromInfoTarget;
	DWORD m_qNoiseDelta;
	DWORD m_hInfoFan;
	DWORD m_flForce;
	DWORD m_bFalloff;
	DWORD m_RampTimer;
	DWORD m_vFanOriginWS;
	DWORD m_vFanOriginLS;
	DWORD m_vFanEndLS;
	DWORD m_vNoiseDirectionTarget;
	DWORD m_iszInfoFan;
	DWORD m_flRopeForceScale;
	DWORD m_flParticleForceScale;
	DWORD m_flPlayerForce;
	DWORD m_bPlayerWindblock;
	DWORD m_flNPCForce;
	DWORD m_flRampTime;
	DWORD m_fNoiseDegrees;
	DWORD m_fNoiseSpeed;
	DWORD m_bPushPlayer;
	DWORD m_bRampDown;
	DWORD m_nManagerFanIdx;
} CTriggerFan;

inline struct C_BulletHitModelOffsets {
	DWORD m_matLocal;
	DWORD m_iBoneIndex;
	DWORD m_hPlayerParent;
	DWORD m_bIsHit;
	DWORD m_flTimeCreated;
	DWORD m_vecStartPos;
} C_BulletHitModel;

inline struct C_FuncElectrifiedVolumeOffsets {
	DWORD m_nAmbientEffect;
	DWORD m_EffectName;
	DWORD m_bState;
} C_FuncElectrifiedVolume;

inline struct C_MapVetoPickControllerOffsets {
	DWORD m_nDraftType;
	DWORD m_nTeamWinningCoinToss;
	DWORD m_nTeamWithFirstChoice;
	DWORD m_nVoteMapIdsList;
	DWORD m_nAccountIDs;
	DWORD m_nMapId0;
	DWORD m_nMapId1;
	DWORD m_nMapId2;
	DWORD m_nMapId3;
	DWORD m_nMapId4;
	DWORD m_nMapId5;
	DWORD m_nStartingSide0;
	DWORD m_nCurrentPhase;
	DWORD m_nPhaseStartTick;
	DWORD m_nPhaseDurationTicks;
	DWORD m_nPostDataUpdateTick;
	DWORD m_bDisabledHud;
} C_MapVetoPickController;

inline struct C_EnvVolumetricFogVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_bIndirectUseLPVs;
	DWORD m_flStrength;
	DWORD m_nFalloffShape;
	DWORD m_flFalloffExponent;
	DWORD m_flHeightFogDepth;
	DWORD m_fHeightFogEdgeWidth;
	DWORD m_fIndirectLightStrength;
	DWORD m_fSunLightStrength;
	DWORD m_fNoiseStrength;
	DWORD m_TintColor;
	DWORD m_bOverrideTintColor;
	DWORD m_bOverrideIndirectLightStrength;
	DWORD m_bOverrideSunLightStrength;
	DWORD m_bOverrideNoiseStrength;
} C_EnvVolumetricFogVolume;

inline struct CPulseCell_PlaySequenceOffsets {
	DWORD m_SequenceName;
	DWORD m_PulseAnimEvents;
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
} CPulseCell_PlaySequence;

inline struct C_BarnLightOffsets {
	DWORD m_bEnabled;
	DWORD m_nColorMode;
	DWORD m_Color;
	DWORD m_flColorTemperature;
	DWORD m_flBrightness;
	DWORD m_flBrightnessScale;
	DWORD m_nDirectLight;
	DWORD m_nBakedShadowIndex;
	DWORD m_nLightPathUniqueId;
	DWORD m_nLightMapUniqueId;
	DWORD m_nLuminaireShape;
	DWORD m_flLuminaireSize;
	DWORD m_flLuminaireAnisotropy;
	DWORD m_LightStyleString;
	DWORD m_flLightStyleStartTime;
	DWORD m_QueuedLightStyleStrings;
	DWORD m_LightStyleEvents;
	DWORD m_LightStyleTargets;
	DWORD m_StyleEvent;
	DWORD m_hLightCookie;
	DWORD m_flShape;
	DWORD m_flSoftX;
	DWORD m_flSoftY;
	DWORD m_flSkirt;
	DWORD m_flSkirtNear;
	DWORD m_vSizeParams;
	DWORD m_flRange;
	DWORD m_vShear;
	DWORD m_nBakeSpecularToCubemaps;
	DWORD m_vBakeSpecularToCubemapsSize;
	DWORD m_nCastShadows;
	DWORD m_nShadowMapSize;
	DWORD m_nShadowPriority;
	DWORD m_bContactShadow;
	DWORD m_bForceShadowsEnabled;
	DWORD m_nBounceLight;
	DWORD m_flBounceScale;
	DWORD m_bDynamicBounce;
	DWORD m_flMinRoughness;
	DWORD m_vAlternateColor;
	DWORD m_fAlternateColorBrightness;
	DWORD m_nFog;
	DWORD m_flFogStrength;
	DWORD m_nFogShadows;
	DWORD m_flFogScale;
	DWORD m_bFogMixedShadows;
	DWORD m_flFadeSizeStart;
	DWORD m_flFadeSizeEnd;
	DWORD m_flShadowFadeSizeStart;
	DWORD m_flShadowFadeSizeEnd;
	DWORD m_bPrecomputedFieldsValid;
	DWORD m_vPrecomputedBoundsMins;
	DWORD m_vPrecomputedBoundsMaxs;
	DWORD m_vPrecomputedOBBOrigin;
	DWORD m_vPrecomputedOBBAngles;
	DWORD m_vPrecomputedOBBExtent;
	DWORD m_nPrecomputedSubFrusta;
	DWORD m_vPrecomputedOBBOrigin0;
	DWORD m_vPrecomputedOBBAngles0;
	DWORD m_vPrecomputedOBBExtent0;
	DWORD m_vPrecomputedOBBOrigin1;
	DWORD m_vPrecomputedOBBAngles1;
	DWORD m_vPrecomputedOBBExtent1;
	DWORD m_vPrecomputedOBBOrigin2;
	DWORD m_vPrecomputedOBBAngles2;
	DWORD m_vPrecomputedOBBExtent2;
	DWORD m_vPrecomputedOBBOrigin3;
	DWORD m_vPrecomputedOBBAngles3;
	DWORD m_vPrecomputedOBBExtent3;
	DWORD m_vPrecomputedOBBOrigin4;
	DWORD m_vPrecomputedOBBAngles4;
	DWORD m_vPrecomputedOBBExtent4;
	DWORD m_vPrecomputedOBBOrigin5;
	DWORD m_vPrecomputedOBBAngles5;
	DWORD m_vPrecomputedOBBExtent5;
	DWORD m_bInitialBoneSetup;
	DWORD m_VisClusters;
} C_BarnLight;

inline struct CPulseCell_LerpCameraSettingsOffsets {
	DWORD m_flSeconds;
	DWORD m_Start;
	DWORD m_End;
} CPulseCell_LerpCameraSettings;

inline struct CPointOffScreenIndicatorUiOffsets {
	DWORD m_bBeenEnabled;
	DWORD m_bHide;
	DWORD m_flSeenTargetTime;
	DWORD m_pTargetPanel;
} CPointOffScreenIndicatorUi;

inline struct C_PostProcessingVolumeOffsets {
	DWORD m_hPostSettings;
	DWORD m_flFadeDuration;
	DWORD m_flMinLogExposure;
	DWORD m_flMaxLogExposure;
	DWORD m_flMinExposure;
	DWORD m_flMaxExposure;
	DWORD m_flExposureCompensation;
	DWORD m_flExposureFadeSpeedUp;
	DWORD m_flExposureFadeSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
	DWORD m_bMaster;
	DWORD m_bExposureControl;
} C_PostProcessingVolume;

inline struct CInfoFanOffsets {
	DWORD m_fFanForceMaxRadius;
	DWORD m_fFanForceMinRadius;
	DWORD m_flCurveDistRange;
	DWORD m_FanForceCurveString;
} CInfoFan;

inline struct C_VoteControllerOffsets {
	DWORD m_iActiveIssueIndex;
	DWORD m_iOnlyTeamToVote;
	DWORD m_nVoteOptionCount;
	DWORD m_nPotentialVotes;
	DWORD m_bVotesDirty;
	DWORD m_bTypeDirty;
	DWORD m_bIsYesNoVote;
} C_VoteController;

inline struct C_CSPlayerPawnBaseOffsets {
	DWORD m_pPingServices;
	DWORD m_previousPlayerState;
	DWORD m_iPlayerState;
	DWORD m_bHasMovedSinceSpawn;
	DWORD m_flLastSpawnTimeIndex;
	DWORD m_iProgressBarDuration;
	DWORD m_flProgressBarStartTime;
	DWORD m_flClientDeathTime;
	DWORD m_flFlashBangTime;
	DWORD m_flFlashScreenshotAlpha;
	DWORD m_flFlashOverlayAlpha;
	DWORD m_bFlashBuildUp;
	DWORD m_bFlashDspHasBeenCleared;
	DWORD m_bFlashScreenshotHasBeenGrabbed;
	DWORD m_flFlashMaxAlpha;
	DWORD m_flFlashDuration;
	DWORD m_flClientHealthFadeChangeTimestamp;
	DWORD m_nClientHealthFadeParityValue;
	DWORD m_fNextThinkPushAway;
	DWORD m_flCurrentMusicStartTime;
	DWORD m_flMusicRoundStartTime;
	DWORD m_bDeferStartMusicOnWarmup;
	DWORD m_flLastSmokeOverlayAlpha;
	DWORD m_flLastSmokeAge;
	DWORD m_vLastSmokeOverlayColor;
	DWORD m_hOriginalController;
} C_CSPlayerPawnBase;

inline struct C_C4Offsets {
	DWORD m_activeLightParticleIndex;
	DWORD m_eActiveLightEffect;
	DWORD m_bStartedArming;
	DWORD m_fArmedTime;
	DWORD m_bBombPlacedAnimation;
	DWORD m_bIsPlantingViaUse;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bPlayedArmingBeeps;
	DWORD m_bBombPlanted;
} C_C4;

inline struct C_BreakablePropOffsets {
	DWORD m_CPropDataComponent;
	DWORD m_OnStartDeath;
	DWORD m_OnBreak;
	DWORD m_OnHealthChanged;
	DWORD m_OnTakeDamage;
	DWORD m_impactEnergyScale;
	DWORD m_iMinHealthDmg;
	DWORD m_flPressureDelay;
	DWORD m_flDefBurstScale;
	DWORD m_vDefBurstOffset;
	DWORD m_hBreaker;
	DWORD m_PerformanceMode;
	DWORD m_flPreventDamageBeforeTime;
	DWORD m_BreakableContentsType;
	DWORD m_strBreakableContentsPropGroupOverride;
	DWORD m_strBreakableContentsParticleOverride;
	DWORD m_bHasBreakPiecesOrCommands;
	DWORD m_explodeDamage;
	DWORD m_explodeRadius;
	DWORD m_nExplosionType;
	DWORD m_explosionDelay;
	DWORD m_explosionBuildupSound;
	DWORD m_explosionCustomEffect;
	DWORD m_explosionCustomSound;
	DWORD m_explosionModifier;
	DWORD m_hPhysicsAttacker;
	DWORD m_flLastPhysicsInfluenceTime;
	DWORD m_flDefaultFadeScale;
	DWORD m_hLastAttacker;
} C_BreakableProp;

inline struct CPrecipitationVDataOffsets {
	DWORD m_szParticlePrecipitationEffect;
	DWORD m_flInnerDistance;
	DWORD m_nAttachType;
	DWORD m_bBatchSameVolumeType;
	DWORD m_nRTEnvCP;
	DWORD m_nRTEnvCPComponent;
	DWORD m_szModifier;
} CPrecipitationVData;

inline struct C_RetakeGameRulesOffsets {
	DWORD m_nMatchSeed;
	DWORD m_bBlockersPresent;
	DWORD m_bRoundInProgress;
	DWORD m_iFirstSecondHalfRound;
	DWORD m_iBombSite;
	DWORD m_hBombPlanter;
} C_RetakeGameRules;

inline struct C_SoundAreaEntitySphereOffsets {
	DWORD m_flRadius;
} C_SoundAreaEntitySphere;

inline struct CPulseCell_Step_EntFireOffsets {
	DWORD m_Input;
} CPulseCell_Step_EntFire;

inline struct C_BaseButtonOffsets {
	DWORD m_glowEntity;
	DWORD m_usable;
	DWORD m_szDisplayText;
} C_BaseButton;

inline struct CCSObserver_ObserverServicesOffsets {
	DWORD m_obsInterpState;
} CCSObserver_ObserverServices;

inline struct CHitboxComponentOffsets {
	DWORD m_flBoundsExpandRadius;
} CHitboxComponent;

inline struct ServerAuthoritativeWeaponSlot_tOffsets {
	DWORD unClass;
	DWORD unSlot;
	DWORD unItemDefIdx;
} ServerAuthoritativeWeaponSlot_t;

inline struct C_PrecipitationOffsets {
	DWORD m_flDensity;
	DWORD m_flParticleInnerDist;
	DWORD m_pParticleDef;
	DWORD m_tParticlePrecipTraceTimer;
	DWORD m_bActiveParticlePrecipEmitter;
	DWORD m_bParticlePrecipInitialized;
	DWORD m_bHasSimulatedSinceLastSceneObjectUpdate;
	DWORD m_nAvailableSheetSequencesMaxIndex;
} C_Precipitation;

inline struct CLogicRelayOffsets {
	DWORD m_bDisabled;
	DWORD m_bWaitForRefire;
	DWORD m_bTriggerOnce;
	DWORD m_bFastRetrigger;
	DWORD m_bPassthoughCaller;
} CLogicRelay;

inline struct SequenceHistory_tOffsets {
	DWORD m_hSequence;
	DWORD m_flSeqStartTime;
	DWORD m_flSeqFixedCycle;
	DWORD m_nSeqLoopMode;
	DWORD m_flPlaybackRate;
	DWORD m_flCyclesPerSecond;
} SequenceHistory_t;

inline struct C_SpotlightEndOffsets {
	DWORD m_flLightScale;
	DWORD m_Radius;
} C_SpotlightEnd;

inline struct C_FishOffsets {
	DWORD m_pos;
	DWORD m_vel;
	DWORD m_angles;
	DWORD m_localLifeState;
	DWORD m_deathDepth;
	DWORD m_deathAngle;
	DWORD m_buoyancy;
	DWORD m_wiggleTimer;
	DWORD m_wigglePhase;
	DWORD m_wiggleRate;
	DWORD m_actualPos;
	DWORD m_actualAngles;
	DWORD m_poolOrigin;
	DWORD m_waterLevel;
	DWORD m_gotUpdate;
	DWORD m_x;
	DWORD m_y;
	DWORD m_z;
	DWORD m_angle;
	DWORD m_errorHistory;
	DWORD m_errorHistoryIndex;
	DWORD m_errorHistoryCount;
	DWORD m_averageError;
} C_Fish;

inline struct C_EnvVolumetricFogControllerOffsets {
	DWORD m_flScattering;
	DWORD m_TintColor;
	DWORD m_flAnisotropy;
	DWORD m_flFadeSpeed;
	DWORD m_flDrawDistance;
	DWORD m_flFadeInStart;
	DWORD m_flFadeInEnd;
	DWORD m_flIndirectStrength;
	DWORD m_nVolumeDepth;
	DWORD m_fFirstVolumeSliceThickness;
	DWORD m_nIndirectTextureDimX;
	DWORD m_nIndirectTextureDimY;
	DWORD m_nIndirectTextureDimZ;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bActive;
	DWORD m_flStartAnisoTime;
	DWORD m_flStartScatterTime;
	DWORD m_flStartDrawDistanceTime;
	DWORD m_flStartAnisotropy;
	DWORD m_flStartScattering;
	DWORD m_flStartDrawDistance;
	DWORD m_flDefaultAnisotropy;
	DWORD m_flDefaultScattering;
	DWORD m_flDefaultDrawDistance;
	DWORD m_bStartDisabled;
	DWORD m_bEnableIndirect;
	DWORD m_bIsMaster;
	DWORD m_hFogIndirectTexture;
	DWORD m_nForceRefreshCount;
	DWORD m_fNoiseSpeed;
	DWORD m_fNoiseStrength;
	DWORD m_vNoiseScale;
	DWORD m_fWindSpeed;
	DWORD m_vWindDirection;
	DWORD m_bFirstTime;
} C_EnvVolumetricFogController;

inline struct C_EnvDetailControllerOffsets {
	DWORD m_flFadeStartDist;
	DWORD m_flFadeEndDist;
} C_EnvDetailController;

inline struct C_EnvWindVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_nShape;
	DWORD m_fWindSpeedMultiplier;
	DWORD m_fWindTurbulenceMultiplier;
	DWORD m_fWindSpeedVariationMultiplier;
	DWORD m_fWindDirectionVariationMultiplier;
} C_EnvWindVolume;

inline struct CCSPlayer_HostageServicesOffsets {
	DWORD m_hCarriedHostage;
	DWORD m_hCarriedHostageProp;
} CCSPlayer_HostageServices;

inline struct CRenderComponentOffsets {
	DWORD __m_pChainEntity;
	DWORD m_bIsRenderingWithViewModels;
	DWORD m_nSplitscreenFlags;
	DWORD m_bEnableRendering;
	DWORD m_bInterpolationReadyToDraw;
} CRenderComponent;

inline struct C_TeamOffsets {
	DWORD m_aPlayerControllers;
	DWORD m_aPlayers;
	DWORD m_iScore;
	DWORD m_szTeamname;
} C_Team;

inline struct CPointChildModifierOffsets {
	DWORD m_bOrphanInsteadOfDeletingChildrenOnRemove;
} CPointChildModifier;

inline struct CCSPlayerLegacyJumpOffsets {
	DWORD m_bOldJumpPressed;
	DWORD m_flJumpPressedTime;
} CCSPlayerLegacyJump;

inline struct C_CSGO_TeamPreviewCameraOffsets {
	DWORD m_nVariant;
} C_CSGO_TeamPreviewCamera;

inline struct C_ColorCorrectionVolumeOffsets {
	DWORD m_LastEnterWeight;
	DWORD m_LastEnterTime;
	DWORD m_LastExitWeight;
	DWORD m_LastExitTime;
	DWORD m_bEnabled;
	DWORD m_MaxWeight;
	DWORD m_FadeDuration;
	DWORD m_Weight;
	DWORD m_lookupFilename;
} C_ColorCorrectionVolume;

inline struct CPlayer_MovementServicesOffsets {
	DWORD m_nImpulse;
	DWORD m_nButtons;
	DWORD m_nQueuedButtonDownMask;
	DWORD m_nQueuedButtonChangeMask;
	DWORD m_nButtonDoublePressed;
	DWORD m_pButtonPressedCmdNumber;
	DWORD m_nLastCommandNumberProcessed;
	DWORD m_nToggleButtonDownMask;
	DWORD m_flMaxspeed;
	DWORD m_arrForceSubtickMoveWhen;
	DWORD m_flForwardMove;
	DWORD m_flLeftMove;
	DWORD m_flUpMove;
	DWORD m_vecLastMovementImpulses;
	DWORD m_vecOldViewAngles;
} CPlayer_MovementServices;

inline struct CInfoDynamicShadowHintBoxOffsets {
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
} CInfoDynamicShadowHintBox;

inline struct CBaseAnimGraphControllerOffsets {
	DWORD m_nAnimationAlgorithm;
	DWORD m_animGraphNetworkedVars;
	DWORD m_pAnimGraphInstance;
	DWORD m_nNextExternalGraphHandle;
	DWORD m_vecSecondarySkeletonNames;
	DWORD m_vecSecondarySkeletons;
	DWORD m_nSecondarySkeletonMasterCount;
	DWORD m_flSoundSyncTime;
	DWORD m_nActiveIKChainMask;
	DWORD m_hSequence;
	DWORD m_flSeqStartTime;
	DWORD m_flSeqFixedCycle;
	DWORD m_nAnimLoopMode;
	DWORD m_flPlaybackRate;
	DWORD m_nNotifyState;
	DWORD m_bNetworkedAnimationInputsChanged;
	DWORD m_bNetworkedSequenceChanged;
	DWORD m_bLastUpdateSkipped;
	DWORD m_bSequenceFinished;
	DWORD m_nPrevAnimUpdateTick;
	DWORD m_hGraphDefinitionAG2;
	DWORD m_serializedPoseRecipeAG2;
	DWORD m_nSerializePoseRecipeSizeAG2;
	DWORD m_nSerializePoseRecipeVersionAG2;
	DWORD m_flPrevAnimUpdateTime;
	DWORD m_nServerGraphInstanceIteration;
	DWORD m_nGraphCreationFlagsAG2;
	DWORD m_nServerGraphDefReloadCountAG2;
	DWORD m_nServerSerializationContextIteration;
	DWORD m_primaryGraphId;
	DWORD m_vecExternalGraphIds;
	DWORD m_vecExternalClipIds;
	DWORD m_sAnimGraph2Identifier;
	DWORD m_vecExternalGraphs;
	DWORD m_nPrevAnimationAlgorithm;
} CBaseAnimGraphController;

inline struct C_ColorCorrectionOffsets {
	DWORD m_vecOrigin;
	DWORD m_MinFalloff;
	DWORD m_MaxFalloff;
	DWORD m_flFadeInDuration;
	DWORD m_flFadeOutDuration;
	DWORD m_flMaxWeight;
	DWORD m_flCurWeight;
	DWORD m_netlookupFilename;
	DWORD m_bEnabled;
	DWORD m_bMaster;
	DWORD m_bClientSide;
	DWORD m_bExclusive;
	DWORD m_bEnabledOnClient;
	DWORD m_flCurWeightOnClient;
	DWORD m_bFadingIn;
	DWORD m_flFadeStartWeight;
	DWORD m_flFadeStartTime;
	DWORD m_flFadeDuration;
} C_ColorCorrection;

inline struct CBuoyancyHelperOffsets {
	DWORD m_nFluidType;
	DWORD m_flFluidDensity;
	DWORD m_flNeutrallyBuoyantGravity;
	DWORD m_flNeutrallyBuoyantLinearDamping;
	DWORD m_flNeutrallyBuoyantAngularDamping;
	DWORD m_bNeutrallyBuoyant;
	DWORD m_vecFractionOfWheelSubmergedForWheelFriction;
	DWORD m_vecWheelFrictionScales;
	DWORD m_vecFractionOfWheelSubmergedForWheelDrag;
	DWORD m_vecWheelDrag;
} CBuoyancyHelper;

inline struct CCSPlayer_CameraServicesOffsets {
	DWORD m_flDeathCamTilt;
	DWORD m_vClientScopeInaccuracy;
} CCSPlayer_CameraServices;

inline struct CFilterMultipleOffsets {
	DWORD m_nFilterType;
	DWORD m_iFilterName;
	DWORD m_hFilter;
} CFilterMultiple;

inline struct CEnvSoundscapeOffsets {
	DWORD m_OnPlay;
	DWORD m_flRadius;
	DWORD m_soundEventName;
	DWORD m_bOverrideWithEvent;
	DWORD m_soundscapeIndex;
	DWORD m_soundscapeEntityListId;
	DWORD m_positionNames;
	DWORD m_hProxySoundscape;
	DWORD m_bDisabled;
	DWORD m_soundscapeName;
	DWORD m_soundEventHash;
} CEnvSoundscape;

inline struct C_FogControllerOffsets {
	DWORD m_fog;
	DWORD m_bUseAngles;
	DWORD m_iChangedVariables;
} C_FogController;

inline struct CBodyComponentPointOffsets {
	DWORD m_sceneNode;
} CBodyComponentPoint;

inline struct C_EconItemViewOffsets {
	DWORD m_bInventoryImageRgbaRequested;
	DWORD m_bInventoryImageTriedCache;
	DWORD m_nInventoryImageRgbaWidth;
	DWORD m_nInventoryImageRgbaHeight;
	DWORD m_szCurrentLoadCachedFileName;
	DWORD m_bRestoreCustomMaterialAfterPrecache;
	DWORD m_iItemDefinitionIndex;
	DWORD m_iEntityQuality;
	DWORD m_iEntityLevel;
	DWORD m_iItemID;
	DWORD m_iItemIDHigh;
	DWORD m_iItemIDLow;
	DWORD m_iAccountID;
	DWORD m_iInventoryPosition;
	DWORD m_bInitialized;
	DWORD m_bDisallowSOC;
	DWORD m_bIsStoreItem;
	DWORD m_bIsTradeItem;
	DWORD m_iEntityQuantity;
	DWORD m_iRarityOverride;
	DWORD m_iQualityOverride;
	DWORD m_iOriginOverride;
	DWORD m_ubStyleOverride;
	DWORD m_unClientFlags;
	DWORD m_AttributeList;
	DWORD m_NetworkedDynamicAttributes;
	DWORD m_szCustomName;
	DWORD m_szCustomNameOverride;
	DWORD m_bInitializedTags;
} C_EconItemView;

inline struct C_SoundEventPathCornerEntityOffsets {
	DWORD m_vecCornerPairsNetworked;
} C_SoundEventPathCornerEntity;

inline struct C_InfoVisibilityBoxOffsets {
	DWORD m_nMode;
	DWORD m_vBoxSize;
	DWORD m_bEnabled;
} C_InfoVisibilityBox;

inline struct CCSPlayer_ItemServicesOffsets {
	DWORD m_bHasDefuser;
	DWORD m_bHasHelmet;
} CCSPlayer_ItemServices;

inline struct IntervalTimerOffsets {
	DWORD m_timestamp;
	DWORD m_nWorldGroupId;
} IntervalTimer;

inline struct audioparams_tOffsets {
	DWORD localSound;
	DWORD soundscapeIndex;
	DWORD localBits;
	DWORD soundscapeEntityListIndex;
	DWORD soundEventHash;
} audioparams_t;

inline struct C_PathParticleRopeOffsets {
	DWORD m_bStartActive;
	DWORD m_flMaxSimulationTime;
	DWORD m_iszEffectName;
	DWORD m_PathNodes_Name;
	DWORD m_flParticleSpacing;
	DWORD m_flSlack;
	DWORD m_flRadius;
	DWORD m_ColorTint;
	DWORD m_nEffectState;
	DWORD m_iEffectIndex;
	DWORD m_PathNodes_Position;
	DWORD m_PathNodes_TangentIn;
	DWORD m_PathNodes_TangentOut;
	DWORD m_PathNodes_Color;
	DWORD m_PathNodes_PinEnabled;
	DWORD m_PathNodes_RadiusScale;
} C_PathParticleRope;

inline struct C_DecoyProjectileOffsets {
	DWORD m_nDecoyShotTick;
	DWORD m_nClientLastKnownDecoyShotTick;
	DWORD m_flTimeParticleEffectSpawn;
} C_DecoyProjectile;

inline struct C_AttributeContainerOffsets {
	DWORD m_Item;
	DWORD m_iExternalItemProviderRegisteredToken;
	DWORD m_ullRegisteredAsItemID;
} C_AttributeContainer;

inline struct C_CSWeaponBaseOffsets {
	DWORD m_iWeaponGameplayAnimState;
	DWORD m_flWeaponGameplayAnimStateTimestamp;
	DWORD m_flInspectCancelCompleteTime;
	DWORD m_bInspectPending;
	DWORD m_bInspectShouldLoop;
	DWORD m_flCrosshairDistance;
	DWORD m_iAmmoLastCheck;
	DWORD m_nLastEmptySoundCmdNum;
	DWORD m_bFireOnEmpty;
	DWORD m_OnPlayerPickup;
	DWORD m_weaponMode;
	DWORD m_flTurningInaccuracyDelta;
	DWORD m_vecTurningInaccuracyEyeDirLast;
	DWORD m_flTurningInaccuracy;
	DWORD m_fAccuracyPenalty;
	DWORD m_flLastAccuracyUpdateTime;
	DWORD m_fAccuracySmoothedForZoom;
	DWORD m_iRecoilIndex;
	DWORD m_flRecoilIndex;
	DWORD m_bBurstMode;
	DWORD m_flLastBurstModeChangeTime;
	DWORD m_nPostponeFireReadyTicks;
	DWORD m_flPostponeFireReadyFrac;
	DWORD m_bInReload;
	DWORD m_flDroppedAtTime;
	DWORD m_bIsHauledBack;
	DWORD m_bSilencerOn;
	DWORD m_flTimeSilencerSwitchComplete;
	DWORD m_flWeaponActionPlaybackRate;
	DWORD m_iOriginalTeamNumber;
	DWORD m_iMostRecentTeamNumber;
	DWORD m_bDroppedNearBuyZone;
	DWORD m_flNextAttackRenderTimeOffset;
	DWORD m_bClearWeaponIdentifyingUGC;
	DWORD m_bVisualsDataSet;
	DWORD m_bUIWeapon;
	DWORD m_nCustomEconReloadEventId;
	DWORD m_nextPrevOwnerUseTime;
	DWORD m_hPrevOwner;
	DWORD m_nDropTick;
	DWORD m_bWasActiveWeaponWhenDropped;
	DWORD m_donated;
	DWORD m_fLastShotTime;
	DWORD m_bWasOwnedByCT;
	DWORD m_bWasOwnedByTerrorist;
	DWORD m_flNextClientFireBulletTime;
	DWORD m_flNextClientFireBulletTime_Repredict;
	DWORD m_IronSightController;
	DWORD m_iIronSightMode;
	DWORD m_flLastLOSTraceFailureTime;
	DWORD m_flWatTickOffset;
	DWORD m_flLastShakeTime;
} C_CSWeaponBase;

inline struct CTimelineOffsets {
	DWORD m_flValues;
	DWORD m_nValueCounts;
	DWORD m_nBucketCount;
	DWORD m_flInterval;
	DWORD m_flFinalValue;
	DWORD m_nCompressionType;
	DWORD m_bStopped;
} CTimeline;

inline struct C_TonemapController2Offsets {
	DWORD m_flAutoExposureMin;
	DWORD m_flAutoExposureMax;
	DWORD m_flExposureAdaptationSpeedUp;
	DWORD m_flExposureAdaptationSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
} C_TonemapController2;

inline struct CountdownTimerOffsets {
	DWORD m_duration;
	DWORD m_timestamp;
	DWORD m_timescale;
	DWORD m_nWorldGroupId;
} CountdownTimer;

inline struct WeaponPurchaseCount_tOffsets {
	DWORD m_nItemDefIndex;
	DWORD m_nCount;
} WeaponPurchaseCount_t;

inline struct FilterHealthOffsets {
	DWORD m_bAdrenalineActive;
	DWORD m_iHealthMin;
	DWORD m_iHealthMax;
} FilterHealth;

inline struct C_PointClientUIHUDOffsets {
	DWORD m_bCheckCSSClasses;
	DWORD m_bIgnoreInput;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDPI;
	DWORD m_flInteractDistance;
	DWORD m_flDepthOffset;
	DWORD m_unOwnerContext;
	DWORD m_unHorizontalAlign;
	DWORD m_unVerticalAlign;
	DWORD m_unOrientation;
	DWORD m_bAllowInteractionFromAllSceneWorlds;
	DWORD m_vecCSSClasses;
} C_PointClientUIHUD;

inline struct C_PointCommentaryNodeOffsets {
	DWORD m_bActive;
	DWORD m_bWasActive;
	DWORD m_flEndTime;
	DWORD m_flStartTime;
	DWORD m_flStartTimeInCommentary;
	DWORD m_iszCommentaryFile;
	DWORD m_iszTitle;
	DWORD m_iszSpeakers;
	DWORD m_iNodeNumber;
	DWORD m_iNodeNumberMax;
	DWORD m_bListenedTo;
	DWORD m_sndCommentary;
	DWORD m_hViewPosition;
	DWORD m_bRestartAfterRestore;
} C_PointCommentaryNode;

inline struct shard_model_desc_tOffsets {
	DWORD m_nModelID;
	DWORD m_hMaterialBase;
	DWORD m_hMaterialDamageOverlay;
	DWORD m_solid;
	DWORD m_vecPanelSize;
	DWORD m_vecStressPositionA;
	DWORD m_vecStressPositionB;
	DWORD m_vecPanelVertices;
	DWORD m_vInitialPanelVertices;
	DWORD m_flGlassHalfThickness;
	DWORD m_bHasParent;
	DWORD m_bParentFrozen;
	DWORD m_SurfacePropStringToken;
} shard_model_desc_t;

inline struct C_KeychainModuleOffsets {
	DWORD m_nKeychainDefID;
	DWORD m_nKeychainSeed;
} C_KeychainModule;

inline struct CFuncWaterOffsets {
	DWORD m_BuoyancyHelper;
} CFuncWater;

inline struct CCSGameModeRulesOffsets {
	DWORD __m_pChainEntity;
} CCSGameModeRules;

inline struct C_PointClientUIWorldTextPanelOffsets {
	DWORD m_messageText;
} C_PointClientUIWorldTextPanel;

inline struct CCSPlayer_WaterServicesOffsets {
	DWORD m_flWaterJumpTime;
	DWORD m_vecWaterJumpVel;
	DWORD m_flSwimSoundTime;
	DWORD m_NextDrownDamageTime;
	DWORD m_nDrownDmgRate;
	DWORD m_AirFinishedTime;
} CCSPlayer_WaterServices;

inline struct C_CSObserverPawnOffsets {
	DWORD m_hDetectParentChange;
} C_CSObserverPawn;

inline struct ViewAngleServerChange_tOffsets {
	DWORD nType;
	DWORD qAngle;
	DWORD nIndex;
} ViewAngleServerChange_t;

inline struct C_FuncLadderOffsets {
	DWORD m_vecLadderDir;
	DWORD m_Dismounts;
	DWORD m_vecLocalTop;
	DWORD m_vecPlayerMountPositionTop;
	DWORD m_vecPlayerMountPositionBottom;
	DWORD m_flAutoRideSpeed;
	DWORD m_bDisabled;
	DWORD m_bFakeLadder;
	DWORD m_bHasSlack;
} C_FuncLadder;

inline struct CCSPlayerBase_CameraServicesOffsets {
	DWORD m_iFOV;
	DWORD m_iFOVStart;
	DWORD m_flFOVTime;
	DWORD m_flFOVRate;
	DWORD m_hZoomOwner;
	DWORD m_flLastShotFOV;
	DWORD m_hTriggerFogList;
	DWORD m_hLastFogTrigger;
} CCSPlayerBase_CameraServices;

inline struct C_CSPlayerPawnOffsets {
	DWORD m_pBulletServices;
	DWORD m_pHostageServices;
	DWORD m_pBuyServices;
	DWORD m_pGlowServices;
	DWORD m_pActionTrackingServices;
	DWORD m_pDamageReactServices;
	DWORD m_flHealthShotBoostExpirationTime;
	DWORD m_flLastFiredWeaponTime;
	DWORD m_bHasFemaleVoice;
	DWORD m_flLandingTimeSeconds;
	DWORD m_flOldFallVelocity;
	DWORD m_szLastPlaceName;
	DWORD m_bPrevDefuser;
	DWORD m_bPrevHelmet;
	DWORD m_nPrevArmorVal;
	DWORD m_nPrevGrenadeAmmoCount;
	DWORD m_unPreviousWeaponHash;
	DWORD m_unWeaponHash;
	DWORD m_bInBuyZone;
	DWORD m_bPreviouslyInBuyZone;
	DWORD m_aimPunchAngle;
	DWORD m_aimPunchAngleVel;
	DWORD m_aimPunchTickBase;
	DWORD m_aimPunchTickFraction;
	DWORD m_aimPunchCache;
	DWORD m_bInLanding;
	DWORD m_flLandingStartTime;
	DWORD m_bInHostageRescueZone;
	DWORD m_bInBombZone;
	DWORD m_bIsBuyMenuOpen;
	DWORD m_flTimeOfLastInjury;
	DWORD m_flNextSprayDecalTime;
	DWORD m_iRetakesOffering;
	DWORD m_iRetakesOfferingCard;
	DWORD m_bRetakesHasDefuseKit;
	DWORD m_bRetakesMVPLastRound;
	DWORD m_iRetakesMVPBoostItem;
	DWORD m_RetakesMVPBoostExtraUtility;
	DWORD m_bNeedToReApplyGloves;
	DWORD m_EconGloves;
	DWORD m_nEconGlovesChanged;
	DWORD m_bMustSyncRagdollState;
	DWORD m_nRagdollDamageBone;
	DWORD m_vRagdollDamageForce;
	DWORD m_vRagdollDamagePosition;
	DWORD m_szRagdollDamageWeaponName;
	DWORD m_bRagdollDamageHeadshot;
	DWORD m_vRagdollServerOrigin;
	DWORD m_lastLandTime;
	DWORD m_bOnGroundLastTick;
	DWORD m_hHudModelArms;
	DWORD m_qDeathEyeAngles;
	DWORD m_bSkipOneHeadConstraintUpdate;
	DWORD m_bLeftHanded;
	DWORD m_fSwitchedHandednessTime;
	DWORD m_flViewmodelOffsetX;
	DWORD m_flViewmodelOffsetY;
	DWORD m_flViewmodelOffsetZ;
	DWORD m_flViewmodelFOV;
	DWORD m_vecPlayerPatchEconIndices;
	DWORD m_GunGameImmunityColor;
	DWORD m_vecBulletHitModels;
	DWORD m_bIsWalking;
	DWORD m_thirdPersonHeading;
	DWORD m_flSlopeDropOffset;
	DWORD m_flSlopeDropHeight;
	DWORD m_vHeadConstraintOffset;
	DWORD m_entitySpottedState;
	DWORD m_bIsScoped;
	DWORD m_bResumeZoom;
	DWORD m_bIsDefusing;
	DWORD m_bIsGrabbingHostage;
	DWORD m_iBlockingUseActionInProgress;
	DWORD m_flEmitSoundTime;
	DWORD m_bInNoDefuseArea;
	DWORD m_nWhichBombZone;
	DWORD m_iShotsFired;
	DWORD m_flFlinchStack;
	DWORD m_flVelocityModifier;
	DWORD m_flHitHeading;
	DWORD m_nHitBodyPart;
	DWORD m_bWaitForNoAttack;
	DWORD m_ignoreLadderJumpTime;
	DWORD m_bKilledByHeadshot;
	DWORD m_ArmorValue;
	DWORD m_unCurrentEquipmentValue;
	DWORD m_unRoundStartEquipmentValue;
	DWORD m_unFreezetimeEndEquipmentValue;
	DWORD m_nLastKillerIndex;
	DWORD m_bOldIsScoped;
	DWORD m_bHasDeathInfo;
	DWORD m_flDeathInfoTime;
	DWORD m_vecDeathInfoOrigin;
	DWORD m_grenadeParameterStashTime;
	DWORD m_bGrenadeParametersStashed;
	DWORD m_angStashedShootAngles;
	DWORD m_vecStashedGrenadeThrowPosition;
	DWORD m_vecStashedVelocity;
	DWORD m_angShootAngleHistory;
	DWORD m_vecThrowPositionHistory;
	DWORD m_vecVelocityHistory;
	DWORD m_PredictedDamageTags;
	DWORD m_nPrevHighestReceivedDamageTagTick;
	DWORD m_nHighestAppliedDamageTagTick;
	DWORD m_bShouldAutobuyDMWeapons;
	DWORD m_fImmuneToGunGameDamageTime;
	DWORD m_bGunGameImmunity;
	DWORD m_fImmuneToGunGameDamageTimeLast;
	DWORD m_fMolotovDamageTime;
	DWORD m_vecLastAliveLocalVelocity;
	DWORD m_fRenderingClipPlane;
	DWORD m_nLastClipPlaneSetupFrame;
	DWORD m_vecLastClipCameraPos;
	DWORD m_vecLastClipCameraForward;
	DWORD m_bClipHitStaticWorld;
	DWORD m_bCachedPlaneIsValid;
	DWORD m_pClippingWeapon;
	DWORD m_nPlayerInfernoBodyFx;
	DWORD m_angEyeAngles;
	DWORD m_arrOldEyeAnglesTimes;
	DWORD m_arrOldEyeAngles;
	DWORD m_angEyeAnglesVelocity;
	DWORD m_iIDEntIndex;
	DWORD m_delayTargetIDTimer;
	DWORD m_iTargetItemEntIdx;
	DWORD m_iOldIDEntIndex;
	DWORD m_holdTargetIDTimer;
} C_CSPlayerPawn;

inline struct C_HostageOffsets {
	DWORD m_entitySpottedState;
	DWORD m_leader;
	DWORD m_reuseTimer;
	DWORD m_vel;
	DWORD m_isRescued;
	DWORD m_jumpedThisFrame;
	DWORD m_nHostageState;
	DWORD m_bHandsHaveBeenCut;
	DWORD m_hHostageGrabber;
	DWORD m_fLastGrabTime;
	DWORD m_vecGrabbedPos;
	DWORD m_flRescueStartTime;
	DWORD m_flGrabSuccessTime;
	DWORD m_flDropStartTime;
	DWORD m_flDeadOrRescuedTime;
	DWORD m_blinkTimer;
	DWORD m_lookAt;
	DWORD m_lookAroundTimer;
	DWORD m_isInit;
	DWORD m_eyeAttachment;
	DWORD m_chestAttachment;
	DWORD m_pPredictionOwner;
	DWORD m_fNewestAlphaThinkTime;
} C_Hostage;

inline struct C_fogplayerparams_tOffsets {
	DWORD m_hCtrl;
	DWORD m_flTransitionTime;
	DWORD m_OldColor;
	DWORD m_flOldStart;
	DWORD m_flOldEnd;
	DWORD m_flOldMaxDensity;
	DWORD m_flOldHDRColorScale;
	DWORD m_flOldFarZ;
	DWORD m_NewColor;
	DWORD m_flNewStart;
	DWORD m_flNewEnd;
	DWORD m_flNewMaxDensity;
	DWORD m_flNewHDRColorScale;
	DWORD m_flNewFarZ;
} C_fogplayerparams_t;

inline struct CGameSceneNodeOffsets {
	DWORD m_nodeToWorld;
	DWORD m_pOwner;
	DWORD m_pParent;
	DWORD m_pChild;
	DWORD m_pNextSibling;
	DWORD m_hParent;
	DWORD m_vecOrigin;
	DWORD m_angRotation;
	DWORD m_flScale;
	DWORD m_vecAbsOrigin;
	DWORD m_angAbsRotation;
	DWORD m_flAbsScale;
	DWORD m_vecWrappedLocalOrigin;
	DWORD m_angWrappedLocalRotation;
	DWORD m_flWrappedScale;
	DWORD m_nParentAttachmentOrBone;
	DWORD m_bDebugAbsOriginChanges;
	DWORD m_bDormant;
	DWORD m_bForceParentToBeNetworked;
	DWORD m_bDirtyHierarchy;
	DWORD m_bDirtyBoneMergeInfo;
	DWORD m_bNetworkedPositionChanged;
	DWORD m_bNetworkedAnglesChanged;
	DWORD m_bNetworkedScaleChanged;
	DWORD m_bWillBeCallingPostDataUpdate;
	DWORD m_bBoneMergeFlex;
	DWORD m_nLatchAbsOrigin;
	DWORD m_bDirtyBoneMergeBoneToRoot;
	DWORD m_nHierarchicalDepth;
	DWORD m_nHierarchyType;
	DWORD m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
	DWORD m_name;
	DWORD m_hierarchyAttachName;
	DWORD m_flZOffset;
	DWORD m_flClientLocalScale;
	DWORD m_vRenderOrigin;
} CGameSceneNode;

inline struct CPlayer_ObserverServicesOffsets {
	DWORD m_iObserverMode;
	DWORD m_hObserverTarget;
	DWORD m_iObserverLastMode;
	DWORD m_bForcedObserverMode;
	DWORD m_flObserverChaseDistance;
	DWORD m_flObserverChaseDistanceCalcTime;
} CPlayer_ObserverServices;

inline struct C_SoundAreaEntityBaseOffsets {
	DWORD m_bDisabled;
	DWORD m_bWasEnabled;
	DWORD m_iszSoundAreaType;
	DWORD m_vPos;
} C_SoundAreaEntityBase;

inline struct C_PlayerVisibilityOffsets {
	DWORD m_flVisibilityStrength;
	DWORD m_flFogDistanceMultiplier;
	DWORD m_flFogMaxDensityMultiplier;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
} C_PlayerVisibility;

inline struct CAttributeManager__cached_attribute_float_tOffsets {
	DWORD flIn;
	DWORD iAttribHook;
	DWORD flOut;
} CAttributeManager__cached_attribute_float_t;

inline struct C_BasePlayerWeaponOffsets {
	DWORD m_nNextPrimaryAttackTick;
	DWORD m_flNextPrimaryAttackTickRatio;
	DWORD m_nNextSecondaryAttackTick;
	DWORD m_flNextSecondaryAttackTickRatio;
	DWORD m_iClip1;
	DWORD m_iClip2;
	DWORD m_pReserveAmmo;
} C_BasePlayerWeapon;

inline struct CRagdollManagerOffsets {
	DWORD m_iCurrentMaxRagdollCount;
	DWORD m_iMaxRagdollCount;
	DWORD m_bSaveImportant;
	DWORD m_bCanTakeDamage;
} CRagdollManager;

inline struct C_EnvSkyOffsets {
	DWORD m_hSkyMaterial;
	DWORD m_hSkyMaterialLightingOnly;
	DWORD m_bStartDisabled;
	DWORD m_vTintColor;
	DWORD m_vTintColorLightingOnly;
	DWORD m_flBrightnessScale;
	DWORD m_nFogType;
	DWORD m_flFogMinStart;
	DWORD m_flFogMinEnd;
	DWORD m_flFogMaxStart;
	DWORD m_flFogMaxEnd;
	DWORD m_bEnabled;
} C_EnvSky;

inline struct C_EnvWindControllerOffsets {
	DWORD m_EnvWindShared;
	DWORD m_fDirectionVariation;
	DWORD m_fSpeedVariation;
	DWORD m_fTurbulence;
	DWORD m_fVolumeHalfExtentXY;
	DWORD m_fVolumeHalfExtentZ;
	DWORD m_nVolumeResolutionXY;
	DWORD m_nVolumeResolutionZ;
	DWORD m_nClipmapLevels;
	DWORD m_bIsMaster;
	DWORD m_bFirstTime;
} C_EnvWindController;

inline struct C_GameRulesOffsets {
	DWORD __m_pChainEntity;
	DWORD m_nTotalPausedTicks;
	DWORD m_nPauseStartTick;
	DWORD m_bGamePaused;
} C_GameRules;

inline struct C_CSGO_MapPreviewCameraPathOffsets {
	DWORD m_flZFar;
	DWORD m_flZNear;
	DWORD m_bLoop;
	DWORD m_bVerticalFOV;
	DWORD m_bConstantSpeed;
	DWORD m_flDuration;
	DWORD m_flPathLength;
	DWORD m_flPathDuration;
	DWORD m_bDofEnabled;
	DWORD m_flDofNearBlurry;
	DWORD m_flDofNearCrisp;
	DWORD m_flDofFarCrisp;
	DWORD m_flDofFarBlurry;
	DWORD m_flDofTiltToGround;
} C_CSGO_MapPreviewCameraPath;

inline struct C_PointWorldTextOffsets {
	DWORD m_bForceRecreateNextUpdate;
	DWORD m_nTextWidthPx;
	DWORD m_nTextHeightPx;
	DWORD m_messageText;
	DWORD m_FontName;
	DWORD m_BackgroundMaterialName;
	DWORD m_bEnabled;
	DWORD m_bFullbright;
	DWORD m_flWorldUnitsPerPx;
	DWORD m_flFontSize;
	DWORD m_flDepthOffset;
	DWORD m_bDrawBackground;
	DWORD m_flBackgroundBorderWidth;
	DWORD m_flBackgroundBorderHeight;
	DWORD m_flBackgroundWorldToUV;
	DWORD m_Color;
	DWORD m_nJustifyHorizontal;
	DWORD m_nJustifyVertical;
	DWORD m_nReorientMode;
} C_PointWorldText;

inline struct C_RopeKeyframeOffsets {
	DWORD m_LinksTouchingSomething;
	DWORD m_nLinksTouchingSomething;
	DWORD m_bApplyWind;
	DWORD m_fPrevLockedPoints;
	DWORD m_iForcePointMoveCounter;
	DWORD m_bPrevEndPointPos;
	DWORD m_vPrevEndPointPos;
	DWORD m_flCurScroll;
	DWORD m_flScrollSpeed;
	DWORD m_RopeFlags;
	DWORD m_iRopeMaterialModelIndex;
	DWORD m_nSegments;
	DWORD m_hStartPoint;
	DWORD m_hEndPoint;
	DWORD m_iStartAttachment;
	DWORD m_iEndAttachment;
	DWORD m_Subdiv;
	DWORD m_RopeLength;
	DWORD m_Slack;
	DWORD m_TextureScale;
	DWORD m_fLockedPoints;
	DWORD m_nChangeCount;
	DWORD m_Width;
	DWORD m_PhysicsDelegate;
	DWORD m_hMaterial;
	DWORD m_TextureHeight;
	DWORD m_vecImpulse;
	DWORD m_vecPreviousImpulse;
	DWORD m_flCurrentGustTimer;
	DWORD m_flCurrentGustLifetime;
	DWORD m_flTimeToNextGust;
	DWORD m_vWindDir;
	DWORD m_vColorMod;
	DWORD m_vCachedEndPointAttachmentPos;
	DWORD m_vCachedEndPointAttachmentAngle;
	DWORD m_bConstrainBetweenEndpoints;
	DWORD m_bEndPointAttachmentPositionsDirty;
	DWORD m_bEndPointAttachmentAnglesDirty;
	DWORD m_bNewDataThisFrame;
	DWORD m_bPhysicsInitted;
} C_RopeKeyframe;

inline struct C_RopeKeyframe__CPhysicsDelegateOffsets {
	DWORD m_pKeyframe;
} C_RopeKeyframe__CPhysicsDelegate;

inline struct CInfoDynamicShadowHintOffsets {
	DWORD m_bDisabled;
	DWORD m_flRange;
	DWORD m_nImportance;
	DWORD m_nLightChoice;
	DWORD m_hLight;
} CInfoDynamicShadowHint;

inline struct CPathNodeOffsets {
	DWORD m_vInTangentLocal;
	DWORD m_vOutTangentLocal;
	DWORD m_strParentPathUniqueID;
	DWORD m_strPathNodeParameter;
	DWORD m_xWSPrevParent;
	DWORD m_hPath;
} CPathNode;

inline struct C_SoundEventOBBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} C_SoundEventOBBEntity;

inline struct C_BasePropDoorOffsets {
	DWORD m_eDoorState;
	DWORD m_modelChanged;
	DWORD m_bLocked;
	DWORD m_bNoNPCs;
	DWORD m_closedPosition;
	DWORD m_closedAngles;
	DWORD m_hMaster;
	DWORD m_vWhereToSetLightingOrigin;
} C_BasePropDoor;

inline struct CNetworkedSequenceOperationOffsets {
	DWORD m_hSequence;
	DWORD m_flPrevCycle;
	DWORD m_flCycle;
	DWORD m_flWeight;
	DWORD m_bSequenceChangeNetworked;
	DWORD m_bDiscontinuity;
	DWORD m_flPrevCycleFromDiscontinuity;
	DWORD m_flPrevCycleForAnimEventDetection;
} CNetworkedSequenceOperation;

inline struct CEntityInstanceOffsets {
	DWORD m_iszPrivateVScripts;
	DWORD m_pEntity;
	DWORD m_CScriptComponent;
} CEntityInstance;

inline struct C_BaseModelEntityOffsets {
	DWORD m_CRenderComponent;
	DWORD m_CHitboxComponent;
	DWORD m_nDestructiblePartInitialStateDestructed0;
	DWORD m_nDestructiblePartInitialStateDestructed1;
	DWORD m_nDestructiblePartInitialStateDestructed2;
	DWORD m_nDestructiblePartInitialStateDestructed3;
	DWORD m_nDestructiblePartInitialStateDestructed4;
	DWORD m_nDestructiblePartInitialStateDestructed0_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed1_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed2_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed3_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed4_PartIndex;
	DWORD m_pDestructiblePartsSystemComponent;
	DWORD m_bInitModelEffects;
	DWORD m_bDoingModelEffects;
	DWORD m_bIsStaticProp;
	DWORD m_iOldHealth;
	DWORD m_nRenderMode;
	DWORD m_nRenderFX;
	DWORD m_bAllowFadeInView;
	DWORD m_clrRender;
	DWORD m_vecRenderAttributes;
	DWORD m_bRenderToCubemaps;
	DWORD m_bNoInterpolate;
	DWORD m_Collision;
	DWORD m_Glow;
	DWORD m_flGlowBackfaceMult;
	DWORD m_fadeMinDist;
	DWORD m_fadeMaxDist;
	DWORD m_flFadeScale;
	DWORD m_flShadowStrength;
	DWORD m_nObjectCulling;
	DWORD m_nRequiredDecalRtEncoding;
	DWORD m_vecViewOffset;
	DWORD m_pClientAlphaProperty;
	DWORD m_ClientOverrideTint;
	DWORD m_bUseClientOverrideTint;
	DWORD m_bvDisabledHitGroups;
} C_BaseModelEntity;

inline struct CCSPlayer_BulletServicesOffsets {
	DWORD m_totalHitsOnServer;
} CCSPlayer_BulletServices;

inline struct C_EnvCombinedLightProbeVolumeOffsets {
	DWORD m_Entity_Color;
	DWORD m_Entity_flBrightness;
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} C_EnvCombinedLightProbeVolume;

inline struct C_BaseEntityOffsets {
	DWORD m_CBodyComponent;
	DWORD m_NetworkTransmitComponent;
	DWORD m_nLastThinkTick;
	DWORD m_pGameSceneNode;
	DWORD m_pRenderComponent;
	DWORD m_pCollision;
	DWORD m_iMaxHealth;
	DWORD m_iHealth;
	DWORD m_flDamageAccumulator;
	DWORD m_lifeState;
	DWORD m_bTakesDamage;
	DWORD m_nTakeDamageFlags;
	DWORD m_nPlatformType;
	DWORD m_ubInterpolationFrame;
	DWORD m_hSceneObjectController;
	DWORD m_nNoInterpolationTick;
	DWORD m_nVisibilityNoInterpolationTick;
	DWORD m_flProxyRandomValue;
	DWORD m_iEFlags;
	DWORD m_nWaterType;
	DWORD m_bInterpolateEvenWithNoModel;
	DWORD m_bPredictionEligible;
	DWORD m_bApplyLayerMatchIDToModel;
	DWORD m_tokLayerMatchID;
	DWORD m_nSubclassID;
	DWORD m_nSimulationTick;
	DWORD m_iCurrentThinkContext;
	DWORD m_aThinkFunctions;
	DWORD m_bDisabledContextThinks;
	DWORD m_flAnimTime;
	DWORD m_flSimulationTime;
	DWORD m_nSceneObjectOverrideFlags;
	DWORD m_bHasSuccessfullyInterpolated;
	DWORD m_bHasAddedVarsToInterpolation;
	DWORD m_bRenderEvenWhenNotSuccessfullyInterpolated;
	DWORD m_nInterpolationLatchDirtyFlags;
	DWORD m_ListEntry;
	DWORD m_flCreateTime;
	DWORD m_flSpeed;
	DWORD m_EntClientFlags;
	DWORD m_bClientSideRagdoll;
	DWORD m_iTeamNum;
	DWORD m_spawnflags;
	DWORD m_nNextThinkTick;
	DWORD m_fFlags;
	DWORD m_vecAbsVelocity;
	DWORD m_vecServerVelocity;
	DWORD m_vecVelocity;
	DWORD m_vecBaseVelocity;
	DWORD m_hEffectEntity;
	DWORD m_hOwnerEntity;
	DWORD m_MoveCollide;
	DWORD m_MoveType;
	DWORD m_nActualMoveType;
	DWORD m_flWaterLevel;
	DWORD m_fEffects;
	DWORD m_hGroundEntity;
	DWORD m_nGroundBodyIndex;
	DWORD m_flFriction;
	DWORD m_flElasticity;
	DWORD m_flGravityScale;
	DWORD m_flTimeScale;
	DWORD m_bAnimatedEveryTick;
	DWORD m_bGravityDisabled;
	DWORD m_flNavIgnoreUntilTime;
	DWORD m_hThink;
	DWORD m_fBBoxVisFlags;
	DWORD m_flActualGravityScale;
	DWORD m_bGravityActuallyDisabled;
	DWORD m_bPredictable;
	DWORD m_bRenderWithViewModels;
	DWORD m_nFirstPredictableCommand;
	DWORD m_nLastPredictableCommand;
	DWORD m_hOldMoveParent;
	DWORD m_Particles;
	DWORD m_vecAngVelocity;
	DWORD m_DataChangeEventRef;
	DWORD m_dependencies;
	DWORD m_nCreationTick;
	DWORD m_bAnimTimeChanged;
	DWORD m_bSimulationTimeChanged;
	DWORD m_sUniqueHammerID;
	DWORD m_nBloodType;
} C_BaseEntity;

inline struct ActiveModelConfig_tOffsets {
	DWORD m_Handle;
	DWORD m_Name;
	DWORD m_AssociatedEntities;
	DWORD m_AssociatedEntityNames;
} ActiveModelConfig_t;

inline struct C_BasePlayerPawnOffsets {
	DWORD m_pWeaponServices;
	DWORD m_pItemServices;
	DWORD m_pAutoaimServices;
	DWORD m_pObserverServices;
	DWORD m_pWaterServices;
	DWORD m_pUseServices;
	DWORD m_pFlashlightServices;
	DWORD m_pCameraServices;
	DWORD m_pMovementServices;
	DWORD m_ServerViewAngleChanges;
	DWORD v_angle;
	DWORD v_anglePrevious;
	DWORD m_iHideHUD;
	DWORD m_skybox3d;
	DWORD m_flDeathTime;
	DWORD m_vecPredictionError;
	DWORD m_flPredictionErrorTime;
	DWORD m_vecLastCameraSetupLocalOrigin;
	DWORD m_flLastCameraSetupTime;
	DWORD m_flFOVSensitivityAdjust;
	DWORD m_flMouseSensitivity;
	DWORD m_vOldOrigin;
	DWORD m_flOldSimulationTime;
	DWORD m_nLastExecutedCommandNumber;
	DWORD m_nLastExecutedCommandTick;
	DWORD m_hController;
	DWORD m_hDefaultController;
	DWORD m_bIsSwappingToPredictableController;
} C_BasePlayerPawn;

inline struct C_ChickenOffsets {
	DWORD m_hHolidayHatAddon;
	DWORD m_jumpedThisFrame;
	DWORD m_leader;
	DWORD m_AttributeManager;
	DWORD m_bAttributesInitialized;
	DWORD m_hWaterWakeParticles;
	DWORD m_bIsPreviewModel;
} C_Chicken;

inline struct C_StattrakModuleOffsets {
	DWORD m_bKnife;
} C_StattrakModule;

inline struct CEnvSoundscapeProxyOffsets {
	DWORD m_MainSoundscapeName;
} CEnvSoundscapeProxy;

inline struct C_SoundEventEntityOffsets {
	DWORD m_bStartOnSpawn;
	DWORD m_bToLocalPlayer;
	DWORD m_bStopOnNew;
	DWORD m_bSaveRestore;
	DWORD m_bSavedIsPlaying;
	DWORD m_flSavedElapsedTime;
	DWORD m_iszSourceEntityName;
	DWORD m_iszAttachmentName;
	DWORD m_onGUIDChanged;
	DWORD m_onSoundFinished;
	DWORD m_flClientCullRadius;
	DWORD m_iszSoundName;
	DWORD m_hSource;
	DWORD m_nEntityIndexSelection;
	DWORD m_bClientSideOnly;
} C_SoundEventEntity;

inline struct CBombTargetOffsets {
	DWORD m_bBombPlantedHere;
	DWORD m_OnBombExplode;
	DWORD m_OnBombPlanted;
	DWORD m_OnBombDefused;
	DWORD m_bIsBombSiteB;
	DWORD m_bIsHeistBombTarget;
	DWORD m_szMountTarget;
	DWORD m_hInstructorHint;
	DWORD m_nBombSiteDesignation;
} CBombTarget;

inline struct C_KnifeOffsets {
	DWORD m_bFirstAttack;
} C_Knife;

inline struct CSkeletonInstanceOffsets {
	DWORD m_modelState;
	DWORD m_bIsAnimationEnabled;
	DWORD m_bUseParentRenderBounds;
	DWORD m_bDisableSolidCollisionsForHierarchy;
	DWORD m_bDirtyMotionType;
	DWORD m_bIsGeneratingLatchedParentSpaceState;
	DWORD m_materialGroup;
	DWORD m_nHitboxSet;
	DWORD m_bForceServerConstraintsEnabled;
} CSkeletonInstance;

inline struct C_ItemDogtagsOffsets {
	DWORD m_OwningPlayer;
	DWORD m_KillingPlayer;
} C_ItemDogtags;

inline struct C_BaseClientUIEntityOffsets {
	DWORD m_bEnabled;
	DWORD m_DialogXMLName;
	DWORD m_PanelClassName;
	DWORD m_PanelID;
} C_BaseClientUIEntity;

inline struct C_MolotovProjectileOffsets {
	DWORD m_bIsIncGrenade;
} C_MolotovProjectile;

inline struct CBasePropOffsets {
	DWORD m_bModelOverrodeBlockLOS;
	DWORD m_iShapeType;
	DWORD m_bConformToCollisionBounds;
	DWORD m_mPreferredCatchTransform;
} CBaseProp;

inline struct CInfoOffscreenPanoramaTextureOffsets {
	DWORD m_bDisabled;
	DWORD m_nResolutionX;
	DWORD m_nResolutionY;
	DWORD m_szPanelType;
	DWORD m_szLayoutFileName;
	DWORD m_RenderAttrName;
	DWORD m_TargetEntities;
	DWORD m_nTargetChangeCount;
	DWORD m_vecCSSClasses;
	DWORD m_szTargetsName;
	DWORD m_AdditionalTargetEntities;
	DWORD m_bCheckCSSClasses;
} CInfoOffscreenPanoramaTexture;

inline struct CCSWeaponBaseVDataOffsets {
	DWORD m_WeaponType;
	DWORD m_WeaponCategory;
	DWORD m_szAnimSkeleton;
	DWORD m_vecMuzzlePos0;
	DWORD m_vecMuzzlePos1;
	DWORD m_szTracerParticle;
	DWORD m_GearSlot;
	DWORD m_GearSlotPosition;
	DWORD m_DefaultLoadoutSlot;
	DWORD m_nPrice;
	DWORD m_nKillAward;
	DWORD m_nPrimaryReserveAmmoMax;
	DWORD m_nSecondaryReserveAmmoMax;
	DWORD m_bMeleeWeapon;
	DWORD m_bHasBurstMode;
	DWORD m_bIsRevolver;
	DWORD m_bCannotShootUnderwater;
	DWORD m_szName;
	DWORD m_eSilencerType;
	DWORD m_nCrosshairMinDistance;
	DWORD m_nCrosshairDeltaDistance;
	DWORD m_bIsFullAuto;
	DWORD m_nNumBullets;
	DWORD m_bReloadsSingleShells;
	DWORD m_flCycleTime;
	DWORD m_flMaxSpeed;
	DWORD m_flSpread;
	DWORD m_flInaccuracyCrouch;
	DWORD m_flInaccuracyStand;
	DWORD m_flInaccuracyJump;
	DWORD m_flInaccuracyLand;
	DWORD m_flInaccuracyLadder;
	DWORD m_flInaccuracyFire;
	DWORD m_flInaccuracyMove;
	DWORD m_flRecoilAngle;
	DWORD m_flRecoilAngleVariance;
	DWORD m_flRecoilMagnitude;
	DWORD m_flRecoilMagnitudeVariance;
	DWORD m_nTracerFrequency;
	DWORD m_flInaccuracyJumpInitial;
	DWORD m_flInaccuracyJumpApex;
	DWORD m_flInaccuracyReload;
	DWORD m_flDeployDuration;
	DWORD m_flDisallowAttackAfterReloadStartDuration;
	DWORD m_nBurstShotCount;
	DWORD m_bAllowBurstHolster;
	DWORD m_nRecoilSeed;
	DWORD m_nSpreadSeed;
	DWORD m_flAttackMovespeedFactor;
	DWORD m_flInaccuracyPitchShift;
	DWORD m_flInaccuracyAltSoundThreshold;
	DWORD m_szUseRadioSubtitle;
	DWORD m_bUnzoomsAfterShot;
	DWORD m_bHideViewModelWhenZoomed;
	DWORD m_nZoomLevels;
	DWORD m_nZoomFOV1;
	DWORD m_nZoomFOV2;
	DWORD m_flZoomTime0;
	DWORD m_flZoomTime1;
	DWORD m_flZoomTime2;
	DWORD m_flIronSightPullUpSpeed;
	DWORD m_flIronSightPutDownSpeed;
	DWORD m_flIronSightFOV;
	DWORD m_flIronSightPivotForward;
	DWORD m_flIronSightLooseness;
	DWORD m_nDamage;
	DWORD m_flHeadshotMultiplier;
	DWORD m_flArmorRatio;
	DWORD m_flPenetration;
	DWORD m_flRange;
	DWORD m_flRangeModifier;
	DWORD m_flFlinchVelocityModifierLarge;
	DWORD m_flFlinchVelocityModifierSmall;
	DWORD m_flRecoveryTimeCrouch;
	DWORD m_flRecoveryTimeStand;
	DWORD m_flRecoveryTimeCrouchFinal;
	DWORD m_flRecoveryTimeStandFinal;
	DWORD m_nRecoveryTransitionStartBullet;
	DWORD m_nRecoveryTransitionEndBullet;
	DWORD m_flThrowVelocity;
	DWORD m_vSmokeColor;
	DWORD m_szAnimClass;
} CCSWeaponBaseVData;

inline struct CAttributeManagerOffsets {
	DWORD m_Providers;
	DWORD m_iReapplyProvisionParity;
	DWORD m_hOuter;
	DWORD m_bPreventLoopback;
	DWORD m_ProviderType;
	DWORD m_CachedResults;
} CAttributeManager;

inline struct CPlayer_CameraServicesOffsets {
	DWORD m_vecCsViewPunchAngle;
	DWORD m_nCsViewPunchAngleTick;
	DWORD m_flCsViewPunchAngleTickRatio;
	DWORD m_PlayerFog;
	DWORD m_hColorCorrectionCtrl;
	DWORD m_hViewEntity;
	DWORD m_hTonemapController;
	DWORD m_audio;
	DWORD m_PostProcessingVolumes;
	DWORD m_flOldPlayerZ;
	DWORD m_flOldPlayerViewOffsetZ;
	DWORD m_CurrentFog;
	DWORD m_hOldFogController;
	DWORD m_bOverrideFogColor;
	DWORD m_OverrideFogColor;
	DWORD m_bOverrideFogStartEnd;
	DWORD m_fOverrideFogStart;
	DWORD m_fOverrideFogEnd;
	DWORD m_hActivePostProcessingVolume;
	DWORD m_angDemoViewAngles;
	DWORD m_hTriggerSoundscapeList;
} CPlayer_CameraServices;

inline struct C_BaseCSGrenadeOffsets {
	DWORD m_bClientPredictDelete;
	DWORD m_bRedraw;
	DWORD m_bIsHeldByPlayer;
	DWORD m_bPinPulled;
	DWORD m_bJumpThrow;
	DWORD m_bThrowAnimating;
	DWORD m_fThrowTime;
	DWORD m_flThrowStrength;
	DWORD m_fDropTime;
	DWORD m_fPinPullTime;
	DWORD m_bJustPulledPin;
	DWORD m_nNextHoldTick;
	DWORD m_flNextHoldFrac;
	DWORD m_hSwitchToWeaponAfterThrow;
} C_BaseCSGrenade;

inline struct CFilterAttributeIntOffsets {
	DWORD m_sAttributeName;
} CFilterAttributeInt;

inline struct CPointTemplateOffsets {
	DWORD m_iszWorldName;
	DWORD m_iszSource2EntityLumpName;
	DWORD m_iszEntityFilterName;
	DWORD m_flTimeoutInterval;
	DWORD m_bAsynchronouslySpawnEntities;
	DWORD m_clientOnlyEntityBehavior;
	DWORD m_ownerSpawnGroupType;
	DWORD m_createdSpawnGroupHandles;
	DWORD m_SpawnedEntityHandles;
	DWORD m_ScriptSpawnCallback;
	DWORD m_ScriptCallbackScope;
} CPointTemplate;

inline struct CCSPlayerControllerOffsets {
	DWORD m_pInGameMoneyServices;
	DWORD m_pInventoryServices;
	DWORD m_pActionTrackingServices;
	DWORD m_pDamageServices;
	DWORD m_iPing;
	DWORD m_bHasCommunicationAbuseMute;
	DWORD m_uiCommunicationMuteFlags;
	DWORD m_szCrosshairCodes;
	DWORD m_iPendingTeamNum;
	DWORD m_flForceTeamTime;
	DWORD m_iCompTeammateColor;
	DWORD m_bEverPlayedOnTeam;
	DWORD m_flPreviousForceJoinTeamTime;
	DWORD m_szClan;
	DWORD m_sSanitizedPlayerName;
	DWORD m_iCoachingTeam;
	DWORD m_nPlayerDominated;
	DWORD m_nPlayerDominatingMe;
	DWORD m_iCompetitiveRanking;
	DWORD m_iCompetitiveWins;
	DWORD m_iCompetitiveRankType;
	DWORD m_iCompetitiveRankingPredicted_Win;
	DWORD m_iCompetitiveRankingPredicted_Loss;
	DWORD m_iCompetitiveRankingPredicted_Tie;
	DWORD m_nEndMatchNextMapVote;
	DWORD m_unActiveQuestId;
	DWORD m_rtActiveMissionPeriod;
	DWORD m_nQuestProgressReason;
	DWORD m_unPlayerTvControlFlags;
	DWORD m_iDraftIndex;
	DWORD m_msQueuedModeDisconnectionTimestamp;
	DWORD m_uiAbandonRecordedReason;
	DWORD m_eNetworkDisconnectionReason;
	DWORD m_bCannotBeKicked;
	DWORD m_bEverFullyConnected;
	DWORD m_bAbandonAllowsSurrender;
	DWORD m_bAbandonOffersInstantSurrender;
	DWORD m_bDisconnection1MinWarningPrinted;
	DWORD m_bScoreReported;
	DWORD m_nDisconnectionTick;
	DWORD m_bControllingBot;
	DWORD m_bHasControlledBotThisRound;
	DWORD m_bHasBeenControlledByPlayerThisRound;
	DWORD m_nBotsControlledThisRound;
	DWORD m_bCanControlObservedBot;
	DWORD m_hPlayerPawn;
	DWORD m_hObserverPawn;
	DWORD m_bPawnIsAlive;
	DWORD m_iPawnHealth;
	DWORD m_iPawnArmor;
	DWORD m_bPawnHasDefuser;
	DWORD m_bPawnHasHelmet;
	DWORD m_nPawnCharacterDefIndex;
	DWORD m_iPawnLifetimeStart;
	DWORD m_iPawnLifetimeEnd;
	DWORD m_iPawnBotDifficulty;
	DWORD m_hOriginalControllerOfCurrentPawn;
	DWORD m_iScore;
	DWORD m_recentKillQueue;
	DWORD m_nFirstKill;
	DWORD m_nKillCount;
	DWORD m_bMvpNoMusic;
	DWORD m_eMvpReason;
	DWORD m_iMusicKitID;
	DWORD m_iMusicKitMVPs;
	DWORD m_iMVPs;
	DWORD m_bIsPlayerNameDirty;
	DWORD m_bFireBulletsSeedSynchronized;
	DWORD m_bAttemptedToGetColor;
	DWORD m_iTeammatePreferredColor;
	DWORD m_bTeamChanged;
	DWORD m_bInSwitchTeam;
	DWORD m_bHasSeenJoinGame;
	DWORD m_bJustBecameSpectator;
	DWORD m_bSwitchTeamsOnNextRoundReset;
	DWORD m_bRemoveAllItemsOnNextRoundReset;
	DWORD m_flLastJoinTeamTime;
	DWORD m_DesiredObserverMode;
	DWORD m_hDesiredObserverTarget;
	DWORD m_iRoundScore;
	DWORD m_iRoundsWon;
	DWORD m_nUpdateCounter;
	DWORD m_flSmoothedPing;
	DWORD m_lastHeldVoteTimer;
	DWORD m_bShowHints;
	DWORD m_iNextTimeCheck;
	DWORD m_bJustDidTeamKill;
	DWORD m_bPunishForTeamKill;
	DWORD m_bGaveTeamDamageWarning;
	DWORD m_bGaveTeamDamageWarningThisRound;
	DWORD m_dblLastReceivedPacketPlatFloatTime;
	DWORD m_LastTeamDamageWarningTime;
	DWORD m_LastTimePlayerWasDisconnectedForPawnsRemove;
	DWORD m_nSuspiciousHitCount;
	DWORD m_nNonSuspiciousHitStreak;
} CCSPlayerController;

inline struct C_CSGO_PreviewModelOffsets {
	DWORD m_defaultAnim;
	DWORD m_nDefaultAnimLoopMode;
	DWORD m_flInitialModelScale;
	DWORD m_sInitialWeaponState;
} C_CSGO_PreviewModel;

inline struct C_SoundEventAABBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} C_SoundEventAABBEntity;

inline struct CCSPlayer_MovementServicesOffsets {
	DWORD m_vecLadderNormal;
	DWORD m_nLadderSurfacePropIndex;
	DWORD m_bDucked;
	DWORD m_flDuckAmount;
	DWORD m_flDuckSpeed;
	DWORD m_bDuckOverride;
	DWORD m_bDesiresDuck;
	DWORD m_bDucking;
	DWORD m_flDuckOffset;
	DWORD m_nDuckTimeMsecs;
	DWORD m_nDuckJumpTimeMsecs;
	DWORD m_nJumpTimeMsecs;
	DWORD m_flLastDuckTime;
	DWORD m_vecLastPositionAtFullCrouchSpeed;
	DWORD m_duckUntilOnGround;
	DWORD m_bHasWalkMovedSinceLastJump;
	DWORD m_bInStuckTest;
	DWORD m_nTraceCount;
	DWORD m_StuckLast;
	DWORD m_bSpeedCropped;
	DWORD m_nOldWaterLevel;
	DWORD m_flWaterEntryTime;
	DWORD m_vecForward;
	DWORD m_vecLeft;
	DWORD m_vecUp;
	DWORD m_nGameCodeHasMovedPlayerAfterCommand;
	DWORD m_fStashGrenadeParameterWhen;
	DWORD m_nButtonDownMaskPrev;
	DWORD m_flOffsetTickCompleteTime;
	DWORD m_flOffsetTickStashedSpeed;
	DWORD m_flStamina;
	DWORD m_flHeightAtJumpStart;
	DWORD m_flMaxJumpHeightThisJump;
	DWORD m_flMaxJumpHeightLastJump;
	DWORD m_flStaminaAtJumpStart;
	DWORD m_flVelMulAtJumpStart;
	DWORD m_flAccumulatedJumpError;
	DWORD m_LegacyJump;
	DWORD m_ModernJump;
	DWORD m_nLastJumpTick;
	DWORD m_flLastJumpFrac;
	DWORD m_flLastJumpVelocityZ;
	DWORD m_bJumpApexPending;
	DWORD m_flTicksSinceLastSurfingDetected;
	DWORD m_bWasSurfing;
	DWORD m_vecInputRotated;
	DWORD m_bMadeFootstepNoise;
	DWORD m_iFootsteps;
} CCSPlayer_MovementServices;

inline struct SellbackPurchaseEntry_tOffsets {
	DWORD m_unDefIdx;
	DWORD m_nCost;
	DWORD m_nPrevArmor;
	DWORD m_bPrevHelmet;
	DWORD m_hItem;
} SellbackPurchaseEntry_t;

inline struct C_WeaponBaseItemOffsets {
	DWORD m_bSequenceInProgress;
	DWORD m_bRedraw;
} C_WeaponBaseItem;

inline struct PhysicsRagdollPose_tOffsets {
	DWORD m_Transforms;
	DWORD m_hOwner;
	DWORD m_bSetFromDebugHistory;
} PhysicsRagdollPose_t;

inline struct CPropDataComponentOffsets {
	DWORD m_flDmgModBullet;
	DWORD m_flDmgModClub;
	DWORD m_flDmgModExplosive;
	DWORD m_flDmgModFire;
	DWORD m_iszPhysicsDamageTableName;
	DWORD m_iszBasePropData;
	DWORD m_nInteractions;
	DWORD m_bSpawnMotionDisabled;
	DWORD m_nDisableTakePhysicsDamageSpawnFlag;
	DWORD m_nMotionDisabledSpawnFlag;
} CPropDataComponent;

inline struct C_WeaponCZ75aOffsets {
	DWORD m_bMagazineRemoved;
} C_WeaponCZ75a;

inline struct C_DynamicLightOffsets {
	DWORD m_Flags;
	DWORD m_LightStyle;
	DWORD m_Radius;
	DWORD m_Exponent;
	DWORD m_InnerAngle;
	DWORD m_OuterAngle;
	DWORD m_SpotRadius;
} C_DynamicLight;

inline struct EngineCountdownTimerOffsets {
	DWORD m_duration;
	DWORD m_timestamp;
	DWORD m_timescale;
} EngineCountdownTimer;

inline struct C_SoundEventSphereEntityOffsets {
	DWORD m_flRadius;
} C_SoundEventSphereEntity;

inline struct CCSPlayerController_DamageServicesOffsets {
	DWORD m_nSendUpdate;
	DWORD m_DamageList;
} CCSPlayerController_DamageServices;

inline struct C_InfernoOffsets {
	DWORD m_nfxFireDamageEffect;
	DWORD m_hInfernoPointsSnapshot;
	DWORD m_hInfernoFillerPointsSnapshot;
	DWORD m_hInfernoOutlinePointsSnapshot;
	DWORD m_hInfernoClimbingOutlinePointsSnapshot;
	DWORD m_hInfernoDecalsSnapshot;
	DWORD m_firePositions;
	DWORD m_fireParentPositions;
	DWORD m_bFireIsBurning;
	DWORD m_BurnNormal;
	DWORD m_fireCount;
	DWORD m_nInfernoType;
	DWORD m_nFireLifetime;
	DWORD m_bInPostEffectTime;
	DWORD m_lastFireCount;
	DWORD m_nFireEffectTickBegin;
	DWORD m_drawableCount;
	DWORD m_blosCheck;
	DWORD m_nlosperiod;
	DWORD m_maxFireHalfWidth;
	DWORD m_maxFireHeight;
	DWORD m_minBounds;
	DWORD m_maxBounds;
	DWORD m_flLastGrassBurnThink;
} C_Inferno;

inline struct CPointOrientOffsets {
	DWORD m_iszSpawnTargetName;
	DWORD m_hTarget;
	DWORD m_bActive;
	DWORD m_nGoalDirection;
	DWORD m_nConstraint;
	DWORD m_flMaxTurnRate;
	DWORD m_flLastGameTime;
} CPointOrient;

inline struct C_GlobalLightOffsets {
	DWORD m_WindClothForceHandle;
} C_GlobalLight;

inline struct C_EnvWindClientsideOffsets {
	DWORD m_EnvWindShared;
} C_EnvWindClientside;

inline struct sky3dparams_tOffsets {
	DWORD scale;
	DWORD origin;
	DWORD bClip3DSkyBoxNearToWorldFar;
	DWORD flClip3DSkyBoxNearToWorldFarOffset;
	DWORD fog;
	DWORD m_nWorldGroupID;
} sky3dparams_t;

inline struct C_SoundEventConeEntityOffsets {
	DWORD m_flEmitterAngle;
	DWORD m_flSweetSpotAngle;
	DWORD m_flAttenMin;
	DWORD m_flAttenMax;
	DWORD m_iszParameterName;
} C_SoundEventConeEntity;

inline struct CDestructiblePartsComponentOffsets {
	DWORD __m_pChainEntity;
	DWORD m_vecDamageTakenByHitGroup;
	DWORD m_hOwner;
} CDestructiblePartsComponent;

inline struct C_EnvWindOffsets {
	DWORD m_EnvWindShared;
} C_EnvWind;

inline struct CCSPlayerController_ActionTrackingServicesOffsets {
	DWORD m_perRoundStats;
	DWORD m_matchStats;
	DWORD m_iNumRoundKills;
	DWORD m_iNumRoundKillsHeadshots;
	DWORD m_flTotalRoundDamageDealt;
} CCSPlayerController_ActionTrackingServices;

inline struct CBodyComponentBaseAnimGraphOffsets {
	DWORD m_animationController;
} CBodyComponentBaseAnimGraph;

inline struct C_TriggerBuoyancyOffsets {
	DWORD m_BuoyancyHelper;
	DWORD m_flFluidDensity;
} C_TriggerBuoyancy;

inline struct CPlayer_MovementServices_HumanoidOffsets {
	DWORD m_flStepSoundTime;
	DWORD m_flFallVelocity;
	DWORD m_groundNormal;
	DWORD m_flSurfaceFriction;
	DWORD m_surfaceProps;
	DWORD m_nStepside;
	DWORD m_vecSmoothedVelocity;
} CPlayer_MovementServices_Humanoid;

inline struct C_PhysPropClientsideOffsets {
	DWORD m_flTouchDelta;
	DWORD m_fDeathTime;
	DWORD m_vecDamagePosition;
	DWORD m_vecDamageDirection;
	DWORD m_nDamageType;
} C_PhysPropClientside;

inline struct C_BaseDoorOffsets {
	DWORD m_bIsUsable;
} C_BaseDoor;

inline struct CSMatchStats_tOffsets {
	DWORD m_iEnemy5Ks;
	DWORD m_iEnemy4Ks;
	DWORD m_iEnemy3Ks;
	DWORD m_iEnemyKnifeKills;
	DWORD m_iEnemyTaserKills;
	DWORD m_iEnemy2Ks;
	DWORD m_iUtility_Count;
	DWORD m_iUtility_Successes;
	DWORD m_iUtility_Enemies;
	DWORD m_iFlash_Count;
	DWORD m_iFlash_Successes;
	DWORD m_flHealthPointsRemovedTotal;
	DWORD m_flHealthPointsDealtTotal;
	DWORD m_nShotsFiredTotal;
	DWORD m_nShotsOnTargetTotal;
	DWORD m_i1v1Count;
	DWORD m_i1v1Wins;
	DWORD m_i1v2Count;
	DWORD m_i1v2Wins;
	DWORD m_iEntryCount;
	DWORD m_iEntryWins;
} CSMatchStats_t;

inline struct EntityRenderAttribute_tOffsets {
	DWORD m_ID;
	DWORD m_Values;
} EntityRenderAttribute_t;

inline struct CModelStateOffsets {
	DWORD m_hModel;
	DWORD m_ModelName;
	DWORD m_bClientClothCreationSuppressed;
	DWORD m_MeshGroupMask;
	DWORD m_nBodyGroupChoices;
	DWORD m_nIdealMotionType;
	DWORD m_nForceLOD;
	DWORD m_nClothUpdateFlags;
} CModelState;

inline struct CPulseCell_LerpCameraSettings__CursorState_tOffsets {
	DWORD m_hCamera;
	DWORD m_OverlaidStart;
	DWORD m_OverlaidEnd;
} CPulseCell_LerpCameraSettings__CursorState_t;

inline struct C_CSWeaponBaseGunOffsets {
	DWORD m_zoomLevel;
	DWORD m_iBurstShotsRemaining;
	DWORD m_iSilencerBodygroup;
	DWORD m_silencedModelIndex;
	DWORD m_inPrecache;
	DWORD m_bNeedsBoltAction;
	DWORD m_nRevolverCylinderIdx;
} C_CSWeaponBaseGun;

inline struct C_CSGameRulesProxyOffsets {
	DWORD m_pGameRules;
} C_CSGameRulesProxy;

inline struct CCollisionPropertyOffsets {
	DWORD m_collisionAttribute;
	DWORD m_vecMins;
	DWORD m_vecMaxs;
	DWORD m_usSolidFlags;
	DWORD m_nSolidType;
	DWORD m_triggerBloat;
	DWORD m_nSurroundType;
	DWORD m_CollisionGroup;
	DWORD m_nEnablePhysics;
	DWORD m_flBoundingRadius;
	DWORD m_vecSpecifiedSurroundingMins;
	DWORD m_vecSpecifiedSurroundingMaxs;
	DWORD m_vecSurroundingMaxs;
	DWORD m_vecSurroundingMins;
	DWORD m_vCapsuleCenter1;
	DWORD m_vCapsuleCenter2;
	DWORD m_flCapsuleRadius;
} CCollisionProperty;

inline struct C_ShatterGlassShardPhysicsOffsets {
	DWORD m_ShardDesc;
} C_ShatterGlassShardPhysics;

inline struct CFilterMassGreaterOffsets {
	DWORD m_fFilterMass;
} CFilterMassGreater;

inline struct C_EntityDissolveOffsets {
	DWORD m_flStartTime;
	DWORD m_flFadeInStart;
	DWORD m_flFadeInLength;
	DWORD m_flFadeOutModelStart;
	DWORD m_flFadeOutModelLength;
	DWORD m_flFadeOutStart;
	DWORD m_flFadeOutLength;
	DWORD m_flNextSparkTime;
	DWORD m_nDissolveType;
	DWORD m_vDissolverOrigin;
	DWORD m_nMagnitude;
	DWORD m_bCoreExplode;
	DWORD m_bLinkedToServerEnt;
} C_EntityDissolve;

inline struct CCSGameModeRules_ArmsRaceOffsets {
	DWORD m_WeaponSequence;
} CCSGameModeRules_ArmsRace;

inline struct C_FuncMonitorOffsets {
	DWORD m_targetCamera;
	DWORD m_nResolutionEnum;
	DWORD m_bRenderShadows;
	DWORD m_bUseUniqueColorTarget;
	DWORD m_brushModelName;
	DWORD m_hTargetCamera;
	DWORD m_bEnabled;
	DWORD m_bDraw3DSkybox;
} C_FuncMonitor;

inline struct C_ClientRagdollOffsets {
	DWORD m_bFadeOut;
	DWORD m_bImportant;
	DWORD m_flEffectTime;
	DWORD m_gibDespawnTime;
	DWORD m_iCurrentFriction;
	DWORD m_iMinFriction;
	DWORD m_iMaxFriction;
	DWORD m_iFrictionAnimState;
	DWORD m_bReleaseRagdoll;
	DWORD m_iEyeAttachment;
	DWORD m_bFadingOut;
	DWORD m_flScaleEnd;
	DWORD m_flScaleTimeStart;
	DWORD m_flScaleTimeEnd;
} C_ClientRagdoll;

inline struct CPulseCell_PlaySequence__CursorState_tOffsets {
	DWORD m_hTarget;
} CPulseCell_PlaySequence__CursorState_t;

inline struct CBodyComponentSkeletonInstanceOffsets {
	DWORD m_skeletonInstance;
} CBodyComponentSkeletonInstance;

inline struct C_CSGO_TeamPreviewCharacterPositionOffsets {
	DWORD m_nVariant;
	DWORD m_nRandom;
	DWORD m_nOrdinal;
	DWORD m_sWeaponName;
	DWORD m_xuid;
	DWORD m_agentItem;
	DWORD m_glovesItem;
	DWORD m_weaponItem;
} C_CSGO_TeamPreviewCharacterPosition;

inline struct C_SmokeGrenadeProjectileOffsets {
	DWORD m_nSmokeEffectTickBegin;
	DWORD m_bDidSmokeEffect;
	DWORD m_nRandomSeed;
	DWORD m_vSmokeColor;
	DWORD m_vSmokeDetonationPos;
	DWORD m_VoxelFrameData;
	DWORD m_nVoxelFrameDataSize;
	DWORD m_nVoxelUpdate;
	DWORD m_bSmokeVolumeDataReceived;
	DWORD m_bSmokeEffectSpawned;
} C_SmokeGrenadeProjectile;

inline struct CScriptComponentOffsets {
	DWORD m_scriptClassName;
} CScriptComponent;

inline struct CCSPlayer_BuyServicesOffsets {
	DWORD m_vecSellbackPurchaseEntries;
} CCSPlayer_BuyServices;

inline struct C_DynamicPropOffsets {
	DWORD m_bUseHitboxesForRenderBox;
	DWORD m_bUseAnimGraph;
	DWORD m_pOutputAnimBegun;
	DWORD m_pOutputAnimOver;
	DWORD m_pOutputAnimLoopCycleOver;
	DWORD m_OnAnimReachedStart;
	DWORD m_OnAnimReachedEnd;
	DWORD m_iszIdleAnim;
	DWORD m_nIdleAnimLoopMode;
	DWORD m_bRandomizeCycle;
	DWORD m_bStartDisabled;
	DWORD m_bFiredStartEndOutput;
	DWORD m_bForceNpcExclude;
	DWORD m_bCreateNonSolid;
	DWORD m_bIsOverrideProp;
	DWORD m_iInitialGlowState;
	DWORD m_nGlowRange;
	DWORD m_nGlowRangeMin;
	DWORD m_glowColor;
	DWORD m_nGlowTeam;
	DWORD m_iCachedFrameCount;
	DWORD m_vecCachedRenderMins;
	DWORD m_vecCachedRenderMaxs;
} C_DynamicProp;

inline struct C_CSTeamOffsets {
	DWORD m_szTeamMatchStat;
	DWORD m_numMapVictories;
	DWORD m_bSurrendered;
	DWORD m_scoreFirstHalf;
	DWORD m_scoreSecondHalf;
	DWORD m_scoreOvertime;
	DWORD m_szClanTeamname;
	DWORD m_iClanID;
	DWORD m_szTeamFlagImage;
	DWORD m_szTeamLogoImage;
} C_CSTeam;

inline struct C_TextureBasedAnimatableOffsets {
	DWORD m_bLoop;
	DWORD m_flFPS;
	DWORD m_hPositionKeys;
	DWORD m_hRotationKeys;
	DWORD m_vAnimationBoundsMin;
	DWORD m_vAnimationBoundsMax;
	DWORD m_flStartTime;
	DWORD m_flStartFrame;
} C_TextureBasedAnimatable;

inline struct C_TriggerPhysicsOffsets {
	DWORD m_gravityScale;
	DWORD m_linearLimit;
	DWORD m_linearDamping;
	DWORD m_angularLimit;
	DWORD m_angularDamping;
	DWORD m_linearForce;
	DWORD m_flFrequency;
	DWORD m_flDampingRatio;
	DWORD m_vecLinearForcePointAt;
	DWORD m_bCollapseToForcePoint;
	DWORD m_vecLinearForcePointAtWorld;
	DWORD m_vecLinearForceDirection;
	DWORD m_bConvertToDebrisWhenPossible;
} C_TriggerPhysics;

inline struct C_HandleTestOffsets {
	DWORD m_Handle;
	DWORD m_bSendHandle;
} C_HandleTest;

inline struct CInfoWorldLayerOffsets {
	DWORD m_pOutputOnEntitiesSpawned;
	DWORD m_worldName;
	DWORD m_layerName;
	DWORD m_bWorldLayerVisible;
	DWORD m_bEntitiesSpawned;
	DWORD m_bCreateAsChildSpawnGroup;
	DWORD m_hLayerSpawnGroup;
	DWORD m_bWorldLayerActuallyVisible;
} CInfoWorldLayer;

inline struct C_MultimeterOffsets {
	DWORD m_hTargetC4;
} C_Multimeter;

inline struct C_BaseTriggerOffsets {
	DWORD m_OnStartTouch;
	DWORD m_OnStartTouchAll;
	DWORD m_OnEndTouch;
	DWORD m_OnEndTouchAll;
	DWORD m_OnTouching;
	DWORD m_OnTouchingEachEntity;
	DWORD m_OnNotTouching;
	DWORD m_hTouchingEntities;
	DWORD m_iFilterName;
	DWORD m_hFilter;
	DWORD m_bDisabled;
} C_BaseTrigger;

inline struct FilterDamageTypeOffsets {
	DWORD m_iDamageType;
} FilterDamageType;

inline struct CAttributeListOffsets {
	DWORD m_Attributes;
	DWORD m_pManager;
} CAttributeList;

inline struct CFilterProximityOffsets {
	DWORD m_flRadius;
} CFilterProximity;

inline struct CCS2WeaponGraphControllerOffsets {
	DWORD m_action;
	DWORD m_bActionReset;
	DWORD m_flWeaponActionSpeedScale;
	DWORD m_weaponCategory;
	DWORD m_weaponType;
	DWORD m_weaponExtraInfo;
	DWORD m_flWeaponAmmo;
	DWORD m_flWeaponAmmoMax;
	DWORD m_flWeaponAmmoReserve;
	DWORD m_bWeaponIsSilenced;
	DWORD m_flWeaponIronsightAmount;
	DWORD m_bIsUsingLegacyModel;
	DWORD m_idleVariation;
	DWORD m_deployVariation;
	DWORD m_attackType;
	DWORD m_attackThrowStrength;
	DWORD m_flAttackVariation;
	DWORD m_inspectVariation;
	DWORD m_inspectExtraInfo;
	DWORD m_reloadStage;
} CCS2WeaponGraphController;

inline struct CEffectDataOffsets {
	DWORD m_vOrigin;
	DWORD m_vStart;
	DWORD m_vNormal;
	DWORD m_vAngles;
	DWORD m_hEntity;
	DWORD m_hOtherEntity;
	DWORD m_flScale;
	DWORD m_flMagnitude;
	DWORD m_flRadius;
	DWORD m_nSurfaceProp;
	DWORD m_nEffectIndex;
	DWORD m_nDamageType;
	DWORD m_nPenetrate;
	DWORD m_nMaterial;
	DWORD m_nHitBox;
	DWORD m_nColor;
	DWORD m_fFlags;
	DWORD m_nAttachmentIndex;
	DWORD m_nAttachmentName;
	DWORD m_iEffectName;
	DWORD m_nExplosionType;
} CEffectData;

inline struct C_ParticleSystemOffsets {
	DWORD m_szSnapshotFileName;
	DWORD m_bActive;
	DWORD m_bFrozen;
	DWORD m_flFreezeTransitionDuration;
	DWORD m_nStopType;
	DWORD m_bAnimateDuringGameplayPause;
	DWORD m_iEffectIndex;
	DWORD m_flStartTime;
	DWORD m_flPreSimTime;
	DWORD m_vServerControlPoints;
	DWORD m_iServerControlPointAssignments;
	DWORD m_hControlPointEnts;
	DWORD m_bNoSave;
	DWORD m_bNoFreeze;
	DWORD m_bNoRamp;
	DWORD m_bStartActive;
	DWORD m_iszEffectName;
	DWORD m_iszControlPointNames;
	DWORD m_nDataCP;
	DWORD m_vecDataCPValue;
	DWORD m_nTintCP;
	DWORD m_clrTint;
	DWORD m_bOldActive;
	DWORD m_bOldFrozen;
} C_ParticleSystem;

inline struct C_BaseFlexOffsets {
	DWORD m_flexWeight;
	DWORD m_vLookTargetPosition;
	DWORD m_nLastFlexUpdateFrameCount;
	DWORD m_CachedViewTarget;
	DWORD m_nNextSceneEventId;
	DWORD m_iMouthAttachment;
	DWORD m_iEyeAttachment;
	DWORD m_bResetFlexWeightsOnModelChange;
	DWORD m_nEyeOcclusionRendererBone;
	DWORD m_mEyeOcclusionRendererCameraToBoneTransform;
	DWORD m_vEyeOcclusionRendererHalfExtent;
	DWORD m_PhonemeClasses;
} C_BaseFlex;

inline struct CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_tOffsets {
	DWORD pItem;
	DWORD team;
	DWORD slot;
} CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t;

inline struct CLightComponentOffsets {
	DWORD __m_pChainEntity;
	DWORD m_Color;
	DWORD m_SecondaryColor;
	DWORD m_flBrightness;
	DWORD m_flBrightnessScale;
	DWORD m_flBrightnessMult;
	DWORD m_flRange;
	DWORD m_flFalloff;
	DWORD m_flAttenuation0;
	DWORD m_flAttenuation1;
	DWORD m_flAttenuation2;
	DWORD m_flTheta;
	DWORD m_flPhi;
	DWORD m_hLightCookie;
	DWORD m_nCascades;
	DWORD m_nCastShadows;
	DWORD m_nShadowWidth;
	DWORD m_nShadowHeight;
	DWORD m_bRenderDiffuse;
	DWORD m_nRenderSpecular;
	DWORD m_bRenderTransmissive;
	DWORD m_flOrthoLightWidth;
	DWORD m_flOrthoLightHeight;
	DWORD m_nStyle;
	DWORD m_Pattern;
	DWORD m_nCascadeRenderStaticObjects;
	DWORD m_flShadowCascadeCrossFade;
	DWORD m_flShadowCascadeDistanceFade;
	DWORD m_flShadowCascadeDistance0;
	DWORD m_flShadowCascadeDistance1;
	DWORD m_flShadowCascadeDistance2;
	DWORD m_flShadowCascadeDistance3;
	DWORD m_nShadowCascadeResolution0;
	DWORD m_nShadowCascadeResolution1;
	DWORD m_nShadowCascadeResolution2;
	DWORD m_nShadowCascadeResolution3;
	DWORD m_bUsesBakedShadowing;
	DWORD m_nShadowPriority;
	DWORD m_nBakedShadowIndex;
	DWORD m_nLightPathUniqueId;
	DWORD m_nLightMapUniqueId;
	DWORD m_bRenderToCubemaps;
	DWORD m_bAllowSSTGeneration;
	DWORD m_nDirectLight;
	DWORD m_nIndirectLight;
	DWORD m_bDynamicBounce;
	DWORD m_flFadeMinDist;
	DWORD m_flFadeMaxDist;
	DWORD m_flShadowFadeMinDist;
	DWORD m_flShadowFadeMaxDist;
	DWORD m_bEnabled;
	DWORD m_bFlicker;
	DWORD m_bPrecomputedFieldsValid;
	DWORD m_vPrecomputedBoundsMins;
	DWORD m_vPrecomputedBoundsMaxs;
	DWORD m_vPrecomputedOBBOrigin;
	DWORD m_vPrecomputedOBBAngles;
	DWORD m_vPrecomputedOBBExtent;
	DWORD m_flPrecomputedMaxRange;
	DWORD m_nFogLightingMode;
	DWORD m_flFogContributionStength;
	DWORD m_flNearClipPlane;
	DWORD m_SkyColor;
	DWORD m_flSkyIntensity;
	DWORD m_SkyAmbientBounce;
	DWORD m_bUseSecondaryColor;
	DWORD m_bMixedShadows;
	DWORD m_flLightStyleStartTime;
	DWORD m_flCapsuleLength;
	DWORD m_flMinRoughness;
	DWORD m_bPvsModifyEntity;
} CLightComponent;

inline struct CCSPlayer_ActionTrackingServicesOffsets {
	DWORD m_hLastWeaponBeforeC4AutoSwitch;
	DWORD m_bIsRescuing;
	DWORD m_weaponPurchasesThisMatch;
	DWORD m_weaponPurchasesThisRound;
} CCSPlayer_ActionTrackingServices;

inline struct C_EnvCubemapOffsets {
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_flInfluenceRadius;
	DWORD m_Entity_vBoxProjectMins;
	DWORD m_Entity_vBoxProjectMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_flDiffuseScale;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_bDefaultEnvMap;
	DWORD m_Entity_bDefaultSpecEnvMap;
	DWORD m_Entity_bIndoorCubeMap;
	DWORD m_Entity_bCopyDiffuseFromDefaultCubemap;
	DWORD m_Entity_bEnabled;
} C_EnvCubemap;

inline struct CBodyComponentOffsets {
	DWORD m_pSceneNode;
	DWORD __m_pChainEntity;
} CBodyComponent;

inline struct C_BaseCombatCharacterOffsets {
	DWORD m_hMyWearables;
	DWORD m_leftFootAttachment;
	DWORD m_rightFootAttachment;
	DWORD m_nWaterWakeMode;
	DWORD m_flWaterWorldZ;
	DWORD m_flWaterNextTraceTime;
} C_BaseCombatCharacter;

inline struct CGlowPropertyOffsets {
	DWORD m_fGlowColor;
	DWORD m_iGlowType;
	DWORD m_iGlowTeam;
	DWORD m_nGlowRange;
	DWORD m_nGlowRangeMin;
	DWORD m_glowColorOverride;
	DWORD m_bFlashing;
	DWORD m_flGlowTime;
	DWORD m_flGlowStartTime;
	DWORD m_bEligibleForScreenHighlight;
	DWORD m_bGlowing;
} CGlowProperty;

inline struct C_PointClientUIDialogOffsets {
	DWORD m_hActivator;
	DWORD m_bStartEnabled;
} C_PointClientUIDialog;

inline struct C_FootstepControlOffsets {
	DWORD m_source;
	DWORD m_destination;
} C_FootstepControl;

inline struct CCitadelSoundOpvarSetOBBOffsets {
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_vDistanceInnerMins;
	DWORD m_vDistanceInnerMaxs;
	DWORD m_vDistanceOuterMins;
	DWORD m_vDistanceOuterMaxs;
	DWORD m_nAABBDirection;
} CCitadelSoundOpvarSetOBB;

inline struct CDamageRecordOffsets {
	DWORD m_PlayerDamager;
	DWORD m_PlayerRecipient;
	DWORD m_hPlayerControllerDamager;
	DWORD m_hPlayerControllerRecipient;
	DWORD m_szPlayerDamagerName;
	DWORD m_szPlayerRecipientName;
	DWORD m_DamagerXuid;
	DWORD m_RecipientXuid;
	DWORD m_flBulletsDamage;
	DWORD m_flDamage;
	DWORD m_flActualHealthRemoved;
	DWORD m_iNumHits;
	DWORD m_iLastBulletUpdate;
	DWORD m_bIsOtherEnemy;
	DWORD m_killType;
} CDamageRecord;

inline struct VPhysicsCollisionAttribute_tOffsets {
	DWORD m_nInteractsAs;
	DWORD m_nInteractsWith;
	DWORD m_nInteractsExclude;
	DWORD m_nEntityId;
	DWORD m_nOwnerId;
	DWORD m_nHierarchyId;
	DWORD m_nDetailLayerMask;
	DWORD m_nDetailLayerMaskType;
	DWORD m_nTargetDetailLayer;
	DWORD m_nCollisionGroup;
	DWORD m_nCollisionFunctionMask;
} VPhysicsCollisionAttribute_t;

inline struct C_OmniLightOffsets {
	DWORD m_flInnerAngle;
	DWORD m_flOuterAngle;
	DWORD m_bShowLight;
} C_OmniLight;

inline struct C_SceneEntityOffsets {
	DWORD m_bIsPlayingBack;
	DWORD m_bPaused;
	DWORD m_bMultiplayer;
	DWORD m_bAutogenerated;
	DWORD m_flForceClientTime;
	DWORD m_nSceneStringIndex;
	DWORD m_bClientOnly;
	DWORD m_hOwner;
	DWORD m_hActorList;
	DWORD m_bWasPlaying;
	DWORD m_QueuedEvents;
	DWORD m_flCurrentTime;
} C_SceneEntity;

inline struct C_NametagModuleOffsets {
	DWORD m_strNametagString;
} C_NametagModule;

inline struct C_EconEntityOffsets {
	DWORD m_flFlexDelayTime;
	DWORD m_flFlexDelayedWeight;
	DWORD m_bAttributesInitialized;
	DWORD m_AttributeManager;
	DWORD m_OriginalOwnerXuidLow;
	DWORD m_OriginalOwnerXuidHigh;
	DWORD m_nFallbackPaintKit;
	DWORD m_nFallbackSeed;
	DWORD m_flFallbackWear;
	DWORD m_nFallbackStatTrak;
	DWORD m_bClientside;
	DWORD m_bParticleSystemsCreated;
	DWORD m_vecAttachedParticles;
	DWORD m_hViewmodelAttachment;
	DWORD m_iOldTeam;
	DWORD m_bAttachmentDirty;
	DWORD m_nUnloadedModelIndex;
	DWORD m_iNumOwnerValidationRetries;
	DWORD m_hOldProvidee;
	DWORD m_vecAttachedModels;
} C_EconEntity;

inline struct C_PointValueRemapperOffsets {
	DWORD m_bDisabled;
	DWORD m_bDisabledOld;
	DWORD m_bUpdateOnClient;
	DWORD m_nInputType;
	DWORD m_hRemapLineStart;
	DWORD m_hRemapLineEnd;
	DWORD m_flMaximumChangePerSecond;
	DWORD m_flDisengageDistance;
	DWORD m_flEngageDistance;
	DWORD m_bRequiresUseKey;
	DWORD m_nOutputType;
	DWORD m_hOutputEntities;
	DWORD m_nHapticsType;
	DWORD m_nMomentumType;
	DWORD m_flMomentumModifier;
	DWORD m_flSnapValue;
	DWORD m_flCurrentMomentum;
	DWORD m_nRatchetType;
	DWORD m_flRatchetOffset;
	DWORD m_flInputOffset;
	DWORD m_bEngaged;
	DWORD m_bFirstUpdate;
	DWORD m_flPreviousValue;
	DWORD m_flPreviousUpdateTickTime;
	DWORD m_vecPreviousTestPoint;
} C_PointValueRemapper;

inline struct CGameSceneNodeHandleOffsets {
	DWORD m_hOwner;
	DWORD m_name;
} CGameSceneNodeHandle;

inline struct CSPerRoundStats_tOffsets {
	DWORD m_iKills;
	DWORD m_iDeaths;
	DWORD m_iAssists;
	DWORD m_iDamage;
	DWORD m_iEquipmentValue;
	DWORD m_iMoneySaved;
	DWORD m_iKillReward;
	DWORD m_iLiveTime;
	DWORD m_iHeadShotKills;
	DWORD m_iObjective;
	DWORD m_iCashEarned;
	DWORD m_iUtilityDamage;
	DWORD m_iEnemiesFlashed;
} CSPerRoundStats_t;

inline struct C_CSGameRulesOffsets {
	DWORD m_bFreezePeriod;
	DWORD m_bWarmupPeriod;
	DWORD m_fWarmupPeriodEnd;
	DWORD m_fWarmupPeriodStart;
	DWORD m_bTerroristTimeOutActive;
	DWORD m_bCTTimeOutActive;
	DWORD m_flTerroristTimeOutRemaining;
	DWORD m_flCTTimeOutRemaining;
	DWORD m_nTerroristTimeOuts;
	DWORD m_nCTTimeOuts;
	DWORD m_bTechnicalTimeOut;
	DWORD m_bMatchWaitingForResume;
	DWORD m_iFreezeTime;
	DWORD m_iRoundTime;
	DWORD m_fMatchStartTime;
	DWORD m_fRoundStartTime;
	DWORD m_flRestartRoundTime;
	DWORD m_bGameRestart;
	DWORD m_flGameStartTime;
	DWORD m_timeUntilNextPhaseStarts;
	DWORD m_gamePhase;
	DWORD m_totalRoundsPlayed;
	DWORD m_nRoundsPlayedThisPhase;
	DWORD m_nOvertimePlaying;
	DWORD m_iHostagesRemaining;
	DWORD m_bAnyHostageReached;
	DWORD m_bMapHasBombTarget;
	DWORD m_bMapHasRescueZone;
	DWORD m_bMapHasBuyZone;
	DWORD m_bIsQueuedMatchmaking;
	DWORD m_nQueuedMatchmakingMode;
	DWORD m_bIsValveDS;
	DWORD m_bLogoMap;
	DWORD m_bPlayAllStepSoundsOnServer;
	DWORD m_iSpectatorSlotCount;
	DWORD m_MatchDevice;
	DWORD m_bHasMatchStarted;
	DWORD m_nNextMapInMapgroup;
	DWORD m_szTournamentEventName;
	DWORD m_szTournamentEventStage;
	DWORD m_szMatchStatTxt;
	DWORD m_szTournamentPredictionsTxt;
	DWORD m_nTournamentPredictionsPct;
	DWORD m_flCMMItemDropRevealStartTime;
	DWORD m_flCMMItemDropRevealEndTime;
	DWORD m_bIsDroppingItems;
	DWORD m_bIsQuestEligible;
	DWORD m_bIsHltvActive;
	DWORD m_bBombPlanted;
	DWORD m_arrProhibitedItemIndices;
	DWORD m_arrTournamentActiveCasterAccounts;
	DWORD m_numBestOfMaps;
	DWORD m_nHalloweenMaskListSeed;
	DWORD m_bBombDropped;
	DWORD m_iRoundWinStatus;
	DWORD m_eRoundWinReason;
	DWORD m_bTCantBuy;
	DWORD m_bCTCantBuy;
	DWORD m_iMatchStats_RoundResults;
	DWORD m_iMatchStats_PlayersAlive_CT;
	DWORD m_iMatchStats_PlayersAlive_T;
	DWORD m_TeamRespawnWaveTimes;
	DWORD m_flNextRespawnWave;
	DWORD m_vMinimapMins;
	DWORD m_vMinimapMaxs;
	DWORD m_MinimapVerticalSectionHeights;
	DWORD m_ullLocalMatchID;
	DWORD m_nEndMatchMapGroupVoteTypes;
	DWORD m_nEndMatchMapGroupVoteOptions;
	DWORD m_nEndMatchMapVoteWinner;
	DWORD m_iNumConsecutiveCTLoses;
	DWORD m_iNumConsecutiveTerroristLoses;
	DWORD m_nMatchAbortedEarlyReason;
	DWORD m_bHasTriggeredRoundStartMusic;
	DWORD m_bSwitchingTeamsAtRoundReset;
	DWORD m_pGameModeRules;
	DWORD m_RetakeRules;
	DWORD m_nMatchEndCount;
	DWORD m_nTTeamIntroVariant;
	DWORD m_nCTTeamIntroVariant;
	DWORD m_bTeamIntroPeriod;
	DWORD m_iRoundEndWinnerTeam;
	DWORD m_eRoundEndReason;
	DWORD m_bRoundEndShowTimerDefend;
	DWORD m_iRoundEndTimerTime;
	DWORD m_sRoundEndFunFactToken;
	DWORD m_iRoundEndFunFactPlayerSlot;
	DWORD m_iRoundEndFunFactData1;
	DWORD m_iRoundEndFunFactData2;
	DWORD m_iRoundEndFunFactData3;
	DWORD m_sRoundEndMessage;
	DWORD m_iRoundEndPlayerCount;
	DWORD m_bRoundEndNoMusic;
	DWORD m_iRoundEndLegacy;
	DWORD m_nRoundEndCount;
	DWORD m_iRoundStartRoundNumber;
	DWORD m_nRoundStartCount;
	DWORD m_flLastPerfSampleTime;
} C_CSGameRules;

inline struct CGrenadeTracerOffsets {
	DWORD m_flTracerDuration;
	DWORD m_nType;
} CGrenadeTracer;

inline struct C_BaseCSGrenadeProjectileOffsets {
	DWORD m_vInitialPosition;
	DWORD m_vInitialVelocity;
	DWORD m_nBounces;
	DWORD m_nExplodeEffectIndex;
	DWORD m_nExplodeEffectTickBegin;
	DWORD m_vecExplodeEffectOrigin;
	DWORD m_flSpawnTime;
	DWORD vecLastTrailLinePos;
	DWORD flNextTrailLineTime;
	DWORD m_bExplodeEffectBegan;
	DWORD m_bCanCreateGrenadeTrail;
	DWORD m_nSnapshotTrajectoryEffectIndex;
	DWORD m_hSnapshotTrajectoryParticleSnapshot;
	DWORD m_arrTrajectoryTrailPoints;
	DWORD m_arrTrajectoryTrailPointCreationTimes;
	DWORD m_flTrajectoryTrailEffectCreationTime;
} C_BaseCSGrenadeProjectile;

inline struct C_GradientFogOffsets {
	DWORD m_hGradientFogTexture;
	DWORD m_flFogStartDistance;
	DWORD m_flFogEndDistance;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogStartHeight;
	DWORD m_flFogEndHeight;
	DWORD m_flFarZ;
	DWORD m_flFogMaxOpacity;
	DWORD m_flFogFalloffExponent;
	DWORD m_flFogVerticalExponent;
	DWORD m_fogColor;
	DWORD m_flFogStrength;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
	DWORD m_bGradientFogNeedsTextures;
} C_GradientFog;

inline struct CCSPlayerController_InGameMoneyServicesOffsets {
	DWORD m_iAccount;
	DWORD m_iStartAccount;
	DWORD m_iTotalCashSpent;
	DWORD m_iCashSpentThisRound;
	DWORD m_bReceivesMoneyNextRound;
	DWORD m_iMoneyEarnedForNextRound;
} CCSPlayerController_InGameMoneyServices;

inline struct CAnimGraphNetworkedVariablesOffsets {
	DWORD m_PredNetBoolVariables;
	DWORD m_PredNetByteVariables;
	DWORD m_PredNetUInt16Variables;
	DWORD m_PredNetIntVariables;
	DWORD m_PredNetUInt32Variables;
	DWORD m_PredNetUInt64Variables;
	DWORD m_PredNetFloatVariables;
	DWORD m_PredNetVectorVariables;
	DWORD m_PredNetQuaternionVariables;
	DWORD m_PredNetGlobalSymbolVariables;
	DWORD m_OwnerOnlyPredNetBoolVariables;
	DWORD m_OwnerOnlyPredNetByteVariables;
	DWORD m_OwnerOnlyPredNetUInt16Variables;
	DWORD m_OwnerOnlyPredNetIntVariables;
	DWORD m_OwnerOnlyPredNetUInt32Variables;
	DWORD m_OwnerOnlyPredNetUInt64Variables;
	DWORD m_OwnerOnlyPredNetFloatVariables;
	DWORD m_OwnerOnlyPredNetVectorVariables;
	DWORD m_OwnerOnlyPredNetQuaternionVariables;
	DWORD m_OwnerOnlyPredNetGlobalSymbolVariables;
	DWORD m_nBoolVariablesCount;
	DWORD m_nOwnerOnlyBoolVariablesCount;
	DWORD m_nRandomSeedOffset;
	DWORD m_flLastTeleportTime;
} CAnimGraphNetworkedVariables;

inline struct CFilterModelOffsets {
	DWORD m_iFilterModel;
} CFilterModel;

inline struct C_SoundAreaEntityOrientedBoxOffsets {
	DWORD m_vMin;
	DWORD m_vMax;
} C_SoundAreaEntityOrientedBox;

inline struct CPulseGameBlackboardOffsets {
	DWORD m_strGraphName;
	DWORD m_strStateBlob;
} CPulseGameBlackboard;

inline struct C_RagdollPropAttachedOffsets {
	DWORD m_boneIndexAttached;
	DWORD m_ragdollAttachedObjectIndex;
	DWORD m_attachmentPointBoneSpace;
	DWORD m_attachmentPointRagdollSpace;
	DWORD m_vecOffset;
	DWORD m_parentTime;
	DWORD m_bHasParent;
} C_RagdollPropAttached;

inline struct C_CSGO_PreviewPlayerOffsets {
	DWORD m_animgraphCharacterModeString;
	DWORD m_flInitialModelScale;
} C_CSGO_PreviewPlayer;

inline struct C_RectLightOffsets {
	DWORD m_bShowLight;
} C_RectLight;

inline struct CPathSimpleOffsets {
	DWORD m_CPathQueryComponent;
	DWORD m_pathString;
	DWORD m_bClosedLoop;
} CPathSimple;

inline struct C_FuncTrackTrainOffsets {
	DWORD m_nLongAxis;
	DWORD m_flRadius;
	DWORD m_flLineLength;
} C_FuncTrackTrain;

inline struct C_EconWearableOffsets {
	DWORD m_nForceSkin;
	DWORD m_bAlwaysAllow;
} C_EconWearable;

inline struct C_EnvDecalOffsets {
	DWORD m_hDecalMaterial;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDepth;
	DWORD m_nRenderOrder;
	DWORD m_bProjectOnWorld;
	DWORD m_bProjectOnCharacters;
	DWORD m_bProjectOnWater;
	DWORD m_flDepthSortBias;
} C_EnvDecal;

inline struct EntitySpottedState_tOffsets {
	DWORD m_bSpotted;
	DWORD m_bSpottedByMask;
} EntitySpottedState_t;

inline struct fogparams_tOffsets {
	DWORD dirPrimary;
	DWORD colorPrimary;
	DWORD colorSecondary;
	DWORD colorPrimaryLerpTo;
	DWORD colorSecondaryLerpTo;
	DWORD start;
	DWORD end;
	DWORD farz;
	DWORD maxdensity;
	DWORD exponent;
	DWORD HDRColorScale;
	DWORD skyboxFogFactor;
	DWORD skyboxFogFactorLerpTo;
	DWORD startLerpTo;
	DWORD endLerpTo;
	DWORD maxdensityLerpTo;
	DWORD lerptime;
	DWORD duration;
	DWORD blendtobackground;
	DWORD scattering;
	DWORD locallightscale;
	DWORD enable;
	DWORD blend;
	DWORD m_bPadding2;
	DWORD m_bPadding;
} fogparams_t;

inline struct C_ItemOffsets {
	DWORD m_pReticleHintTextName;
} C_Item;

inline struct C_BeamOffsets {
	DWORD m_flFrameRate;
	DWORD m_flHDRColorScale;
	DWORD m_flFireTime;
	DWORD m_flDamage;
	DWORD m_nNumBeamEnts;
	DWORD m_queryHandleHalo;
	DWORD m_hBaseMaterial;
	DWORD m_nHaloIndex;
	DWORD m_nBeamType;
	DWORD m_nBeamFlags;
	DWORD m_hAttachEntity;
	DWORD m_nAttachIndex;
	DWORD m_fWidth;
	DWORD m_fEndWidth;
	DWORD m_fFadeLength;
	DWORD m_fHaloScale;
	DWORD m_fAmplitude;
	DWORD m_fStartFrame;
	DWORD m_fSpeed;
	DWORD m_flFrame;
	DWORD m_nClipStyle;
	DWORD m_bTurnedOff;
	DWORD m_vecEndPos;
	DWORD m_hEndEntity;
} C_Beam;

inline struct C_EnvLightProbeVolumeOffsets {
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} C_EnvLightProbeVolume;

inline struct C_FuncConveyorOffsets {
	DWORD m_vecMoveDirEntitySpace;
	DWORD m_flTargetSpeed;
	DWORD m_nTransitionStartTick;
	DWORD m_nTransitionDurationTicks;
	DWORD m_flTransitionStartSpeed;
	DWORD m_hConveyorModels;
	DWORD m_flCurrentConveyorOffset;
	DWORD m_flCurrentConveyorSpeed;
} C_FuncConveyor;

inline struct CCSPlayer_WeaponServicesOffsets {
	DWORD m_flNextAttack;
	DWORD m_bIsLookingAtWeapon;
	DWORD m_bIsHoldingLookAtWeapon;
	DWORD m_nOldTotalShootPositionHistoryCount;
	DWORD m_nOldTotalInputHistoryCount;
	DWORD m_networkAnimTiming;
	DWORD m_bBlockInspectUntilNextGraphUpdate;
	DWORD m_hSavedWeapon;
	DWORD m_nTimeToMelee;
	DWORD m_nTimeToSecondary;
	DWORD m_nTimeToPrimary;
	DWORD m_nTimeToSniperRifle;
	DWORD m_bIsBeingGivenItem;
	DWORD m_bIsPickingUpItemWithUse;
	DWORD m_bPickedUpWeapon;
	DWORD m_bDisableAutoDeploy;
	DWORD m_bIsPickingUpGroundWeapon;
} CCSPlayer_WeaponServices;

inline struct C_PhysMagnetOffsets {
	DWORD m_aAttachedObjectsFromServer;
	DWORD m_aAttachedObjects;
} C_PhysMagnet;

inline struct C_PlantedC4Offsets {
	DWORD m_bBombTicking;
	DWORD m_nBombSite;
	DWORD m_nSourceSoundscapeHash;
	DWORD m_entitySpottedState;
	DWORD m_flNextGlow;
	DWORD m_flNextBeep;
	DWORD m_flC4Blow;
	DWORD m_bCannotBeDefused;
	DWORD m_bHasExploded;
	DWORD m_flTimerLength;
	DWORD m_bBeingDefused;
	DWORD m_bTriggerWarning;
	DWORD m_bExplodeWarning;
	DWORD m_bC4Activated;
	DWORD m_bTenSecWarning;
	DWORD m_flDefuseLength;
	DWORD m_flDefuseCountDown;
	DWORD m_bBombDefused;
	DWORD m_hBombDefuser;
	DWORD m_AttributeManager;
	DWORD m_hDefuserMultimeter;
	DWORD m_flNextRadarFlashTime;
	DWORD m_bRadarFlash;
	DWORD m_pBombDefuser;
	DWORD m_fLastDefuseTime;
	DWORD m_pPredictionOwner;
	DWORD m_vecC4ExplodeSpectatePos;
	DWORD m_vecC4ExplodeSpectateAng;
	DWORD m_flC4ExplodeSpectateDuration;
} C_PlantedC4;

inline struct CFilterNameOffsets {
	DWORD m_iFilterName;
} CFilterName;

inline struct C_RagdollPropOffsets {
	DWORD m_ragEnabled;
	DWORD m_ragPos;
	DWORD m_ragAngles;
	DWORD m_flBlendWeight;
	DWORD m_hRagdollSource;
	DWORD m_iEyeAttachment;
	DWORD m_flBlendWeightCurrent;
	DWORD m_parentPhysicsBoneIndices;
	DWORD m_worldSpaceBoneComputationOrder;
} C_RagdollProp;

inline struct CBaseAnimGraphOffsets {
	DWORD m_graphControllerManager;
	DWORD m_pMainGraphController;
	DWORD m_bInitiallyPopulateInterpHistory;
	DWORD m_bSuppressAnimEventSounds;
	DWORD m_bAnimGraphUpdateEnabled;
	DWORD m_flMaxSlopeDistance;
	DWORD m_vLastSlopeCheckPos;
	DWORD m_nAnimGraphUpdateId;
	DWORD m_bAnimationUpdateScheduled;
	DWORD m_vecForce;
	DWORD m_nForceBone;
	DWORD m_pClientsideRagdoll;
	DWORD m_bBuiltRagdoll;
	DWORD m_RagdollPose;
	DWORD m_bRagdollEnabled;
	DWORD m_bRagdollClientSide;
	DWORD m_bHasAnimatedMaterialAttributes;
	DWORD m_pChoreoServices;
	DWORD m_xParentedRagdollRootInEntitySpace;
} CBaseAnimGraph;

inline struct C_LightEntityOffsets {
	DWORD m_CLightComponent;
} C_LightEntity;

inline struct C_LocalTempEntityOffsets {
	DWORD flags;
	DWORD die;
	DWORD m_flFrameMax;
	DWORD x;
	DWORD y;
	DWORD fadeSpeed;
	DWORD bounceFactor;
	DWORD hitSound;
	DWORD priority;
	DWORD tentOffset;
	DWORD m_vecTempEntAngVelocity;
	DWORD tempent_renderamt;
	DWORD m_vecNormal;
	DWORD m_flSpriteScale;
	DWORD m_nFlickerFrame;
	DWORD m_flFrameRate;
	DWORD m_flFrame;
	DWORD m_pszImpactEffect;
	DWORD m_pszParticleEffect;
	DWORD m_bParticleCollision;
	DWORD m_iLastCollisionFrame;
	DWORD m_vLastCollisionOrigin;
	DWORD m_vecTempEntVelocity;
	DWORD m_vecPrevAbsOrigin;
	DWORD m_vecTempEntAcceleration;
} C_LocalTempEntity;

inline struct C_WeaponTaserOffsets {
	DWORD m_fFireTime;
	DWORD m_nLastAttackTick;
} C_WeaponTaser;

inline struct CPlayer_WeaponServicesOffsets {
	DWORD m_hMyWeapons;
	DWORD m_hActiveWeapon;
	DWORD m_hLastWeapon;
	DWORD m_iAmmo;
	DWORD m_bPreventWeaponPickup;
} CPlayer_WeaponServices;

inline struct C_PlayerPingOffsets {
	DWORD m_hPlayer;
	DWORD m_hPingedEntity;
	DWORD m_iType;
	DWORD m_bUrgent;
	DWORD m_szPlaceName;
} C_PlayerPing;

inline struct C_CSGO_MapPreviewCameraPathNodeOffsets {
	DWORD m_szParentPathUniqueID;
	DWORD m_nPathIndex;
	DWORD m_vInTangentLocal;
	DWORD m_vOutTangentLocal;
	DWORD m_flFOV;
	DWORD m_flCameraSpeed;
	DWORD m_flEaseIn;
	DWORD m_flEaseOut;
	DWORD m_vInTangentWorld;
	DWORD m_vOutTangentWorld;
} C_CSGO_MapPreviewCameraPathNode;

inline struct C_CSPlayerResourceOffsets {
	DWORD m_bHostageAlive;
	DWORD m_isHostageFollowingSomeone;
	DWORD m_iHostageEntityIDs;
	DWORD m_bombsiteCenterA;
	DWORD m_bombsiteCenterB;
	DWORD m_hostageRescueX;
	DWORD m_hostageRescueY;
	DWORD m_hostageRescueZ;
	DWORD m_bEndMatchNextMapAllVoted;
	DWORD m_foundGoalPositions;
} C_CSPlayerResource;

inline struct CSkyboxReferenceOffsets {
	DWORD m_worldGroupId;
	DWORD m_hSkyCamera;
} CSkyboxReference;

inline struct CFilterClassOffsets {
	DWORD m_iFilterClass;
} CFilterClass;

inline struct C_PointCameraVFOVOffsets {
	DWORD m_flVerticalFOV;
} C_PointCameraVFOV;

inline struct C_PointCameraOffsets {
	DWORD m_FOV;
	DWORD m_Resolution;
	DWORD m_bFogEnable;
	DWORD m_FogColor;
	DWORD m_flFogStart;
	DWORD m_flFogEnd;
	DWORD m_flFogMaxDensity;
	DWORD m_bActive;
	DWORD m_bUseScreenAspectRatio;
	DWORD m_flAspectRatio;
	DWORD m_bNoSky;
	DWORD m_fBrightness;
	DWORD m_flZFar;
	DWORD m_flZNear;
	DWORD m_bCanHLTVUse;
	DWORD m_bAlignWithParent;
	DWORD m_bDofEnabled;
	DWORD m_flDofNearBlurry;
	DWORD m_flDofNearCrisp;
	DWORD m_flDofFarCrisp;
	DWORD m_flDofFarBlurry;
	DWORD m_flDofTiltToGround;
	DWORD m_TargetFOV;
	DWORD m_DegreesPerSecond;
	DWORD m_bIsOn;
	DWORD m_pNext;
} C_PointCamera;

inline struct CPathWithDynamicNodesOffsets {
	DWORD m_vecPathNodes;
	DWORD m_xInitialPathWorldToLocal;
} CPathWithDynamicNodes;

inline struct CBaseFilterOffsets {
	DWORD m_bNegated;
	DWORD m_OnPass;
	DWORD m_OnFail;
} CBaseFilter;

inline struct WeaponPurchaseTracker_tOffsets {
	DWORD m_weaponPurchases;
} WeaponPurchaseTracker_t;

inline struct CMapInfoOffsets {
	DWORD m_iBuyingStatus;
	DWORD m_flBombRadius;
	DWORD m_iPetPopulation;
	DWORD m_bUseNormalSpawnsForDM;
	DWORD m_bDisableAutoGeneratedDMSpawns;
	DWORD m_flBotMaxVisionDistance;
	DWORD m_iHostageCount;
	DWORD m_bFadePlayerVisibilityFarZ;
	DWORD m_bRainTraceToSkyEnabled;
	DWORD m_flEnvRainStrength;
	DWORD m_flEnvPuddleRippleStrength;
	DWORD m_flEnvPuddleRippleDirection;
	DWORD m_flEnvWetnessCoverage;
	DWORD m_flEnvWetnessDryingAmount;
} CMapInfo;

inline struct C_BaseGrenadeOffsets {
	DWORD m_bHasWarnedAI;
	DWORD m_bIsSmokeGrenade;
	DWORD m_bIsLive;
	DWORD m_DmgRadius;
	DWORD m_flDetonateTime;
	DWORD m_flWarnAITime;
	DWORD m_flDamage;
	DWORD m_iszBounceSound;
	DWORD m_ExplosionSound;
	DWORD m_hThrower;
	DWORD m_flNextAttack;
	DWORD m_hOriginalThrower;
} C_BaseGrenade;

inline struct C_PlayerSprayDecalOffsets {
	DWORD m_nUniqueID;
	DWORD m_unAccountID;
	DWORD m_unTraceID;
	DWORD m_rtGcTime;
	DWORD m_vecEndPos;
	DWORD m_vecStart;
	DWORD m_vecLeft;
	DWORD m_vecNormal;
	DWORD m_nPlayer;
	DWORD m_nEntity;
	DWORD m_nHitbox;
	DWORD m_flCreationTime;
	DWORD m_nTintID;
	DWORD m_nVersion;
	DWORD m_ubSignature;
	DWORD m_SprayRenderHelper;
} C_PlayerSprayDecal;

inline struct CEntityIdentityOffsets {
	DWORD m_nameStringableIndex;
	DWORD m_name;
	DWORD m_designerName;
	DWORD m_flags;
	DWORD m_worldGroupId;
	DWORD m_fDataObjectTypes;
	DWORD m_PathIndex;
	DWORD m_pAttributes;
	DWORD m_pPrev;
	DWORD m_pNext;
	DWORD m_pPrevByClass;
	DWORD m_pNextByClass;
} CEntityIdentity;

inline struct CBasePlayerVDataOffsets {
	DWORD m_sModelName;
	DWORD m_flHeadDamageMultiplier;
	DWORD m_flChestDamageMultiplier;
	DWORD m_flStomachDamageMultiplier;
	DWORD m_flArmDamageMultiplier;
	DWORD m_flLegDamageMultiplier;
	DWORD m_flHoldBreathTime;
	DWORD m_flDrowningDamageInterval;
	DWORD m_nDrowningDamageInitial;
	DWORD m_nDrowningDamageMax;
	DWORD m_nWaterSpeed;
	DWORD m_flUseRange;
	DWORD m_flUseAngleTolerance;
	DWORD m_flCrouchTime;
} CBasePlayerVData;

inline struct CCSGameModeRules_DeathmatchOffsets {
	DWORD m_flDMBonusStartTime;
	DWORD m_flDMBonusTimeLength;
	DWORD m_sDMBonusWeapon;
} CCSGameModeRules_Deathmatch;

inline struct C_SpriteOffsets {
	DWORD m_hSpriteMaterial;
	DWORD m_hAttachedToEntity;
	DWORD m_nAttachment;
	DWORD m_flSpriteFramerate;
	DWORD m_flFrame;
	DWORD m_flDieTime;
	DWORD m_nBrightness;
	DWORD m_flBrightnessDuration;
	DWORD m_flSpriteScale;
	DWORD m_flScaleDuration;
	DWORD m_bWorldSpaceScale;
	DWORD m_flGlowProxySize;
	DWORD m_flHDRColorScale;
	DWORD m_flLastTime;
	DWORD m_flMaxFrame;
	DWORD m_flStartScale;
	DWORD m_flDestScale;
	DWORD m_flScaleTimeStart;
	DWORD m_nStartBrightness;
	DWORD m_nDestBrightness;
	DWORD m_flBrightnessTimeStart;
	DWORD m_nSpriteWidth;
	DWORD m_nSpriteHeight;
} C_Sprite;

inline struct C_CsmFovOverrideOffsets {
	DWORD m_cameraName;
	DWORD m_flCsmFovOverrideValue;
} C_CsmFovOverride;

inline struct C_PhysicsPropOffsets {
	DWORD m_bAwake;
} C_PhysicsProp;

inline struct CFilterTeamOffsets {
	DWORD m_iFilterTeam;
} CFilterTeam;

inline struct CInfoInteractionOffsets {
	DWORD m_strSlotEntityName;
	DWORD m_strInteractVData;
	DWORD m_flInteractRadius;
} CInfoInteraction;

inline struct CBasePlayerWeaponVDataOffsets {
	DWORD m_szWorldModel;
	DWORD m_sToolsOnlyOwnerModelName;
	DWORD m_bBuiltRightHanded;
	DWORD m_bAllowFlipping;
	DWORD m_sMuzzleAttachment;
	DWORD m_szMuzzleFlashParticle;
	DWORD m_szMuzzleFlashParticleConfig;
	DWORD m_szBarrelSmokeParticle;
	DWORD m_nMuzzleSmokeShotThreshold;
	DWORD m_flMuzzleSmokeTimeout;
	DWORD m_flMuzzleSmokeDecrementRate;
	DWORD m_bGenerateMuzzleLight;
	DWORD m_bLinkedCooldowns;
	DWORD m_iFlags;
	DWORD m_iWeight;
	DWORD m_bAutoSwitchTo;
	DWORD m_bAutoSwitchFrom;
	DWORD m_nPrimaryAmmoType;
	DWORD m_nSecondaryAmmoType;
	DWORD m_iMaxClip1;
	DWORD m_iMaxClip2;
	DWORD m_iDefaultClip1;
	DWORD m_iDefaultClip2;
	DWORD m_bReserveAmmoAsClips;
	DWORD m_bTreatAsSingleClip;
	DWORD m_bKeepLoadedAmmo;
	DWORD m_iRumbleEffect;
	DWORD m_flDropSpeed;
	DWORD m_iSlot;
	DWORD m_iPosition;
	DWORD m_aShootSounds;
} CBasePlayerWeaponVData;

inline struct C_PointClientUIWorldPanelOffsets {
	DWORD m_bForceRecreateNextUpdate;
	DWORD m_bMoveViewToPlayerNextThink;
	DWORD m_bCheckCSSClasses;
	DWORD m_anchorDeltaTransform;
	DWORD m_pOffScreenIndicator;
	DWORD m_bIgnoreInput;
	DWORD m_bLit;
	DWORD m_bFollowPlayerAcrossTeleport;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDPI;
	DWORD m_flInteractDistance;
	DWORD m_flDepthOffset;
	DWORD m_unOwnerContext;
	DWORD m_unHorizontalAlign;
	DWORD m_unVerticalAlign;
	DWORD m_unOrientation;
	DWORD m_bAllowInteractionFromAllSceneWorlds;
	DWORD m_vecCSSClasses;
	DWORD m_bOpaque;
	DWORD m_bNoDepth;
	DWORD m_bVisibleWhenParentNoDraw;
	DWORD m_bRenderBackface;
	DWORD m_bUseOffScreenIndicator;
	DWORD m_bExcludeFromSaveGames;
	DWORD m_bGrabbable;
	DWORD m_bOnlyRenderToTexture;
	DWORD m_bDisableMipGen;
	DWORD m_nExplicitImageLayout;
} C_PointClientUIWorldPanel;

inline struct C_EntityFlameOffsets {
	DWORD m_hEntAttached;
	DWORD m_hOldAttached;
	DWORD m_bCheapEffect;
} C_EntityFlame;

inline struct CBasePlayerControllerOffsets {
	DWORD m_CommandContext;
	DWORD m_nInButtonsWhichAreToggles;
	DWORD m_nTickBase;
	DWORD m_hPawn;
	DWORD m_bKnownTeamMismatch;
	DWORD m_hPredictedPawn;
	DWORD m_nSplitScreenSlot;
	DWORD m_hSplitOwner;
	DWORD m_hSplitScreenPlayers;
	DWORD m_bIsHLTV;
	DWORD m_iConnected;
	DWORD m_iszPlayerName;
	DWORD m_steamID;
	DWORD m_bIsLocalPlayerController;
	DWORD m_bNoClipEnabled;
	DWORD m_iDesiredFOV;
	DWORD m_szNetworkIDString;
	DWORD m_fLerpTime;
	DWORD m_bLagCompensation;
	DWORD m_bPredict;
	DWORD m_bIsLowViolence;
	DWORD m_bGamePaused;
	DWORD m_iIgnoreGlobalChat;
	DWORD m_flLastPlayerTalkTime;
	DWORD m_flLastEntitySteadyState;
	DWORD m_nAvailableEntitySteadyState;
	DWORD m_bHasAnySteadyStateEnts;
} CBasePlayerController;

inline struct EmptyTestScriptOffsets {
	DWORD m_hTest;
} EmptyTestScript;

inline struct CAnimScriptBaseOffsets {
	DWORD m_bIsValid;
} CAnimScriptBase;

inline struct animationsystem_dllOffsets {
	DWORD AnimationSystemUtils_001;
	DWORD AnimationSystem_001;
} animationsystem_dll;

inline struct client_dllOffsets {
	DWORD ClientToolsInfo_001;
	DWORD EmptyWorldService001_Client;
	DWORD GameClientExports001;
	DWORD LegacyGameUI001;
	DWORD Source2Client002;
	DWORD Source2ClientConfig001;
	DWORD Source2ClientPrediction001;
	DWORD Source2ClientUI001;
	DWORD dwCSGOInput;
	DWORD dwEntityList;
	DWORD dwGameEntitySystem;
	DWORD dwGameEntitySystem_highestEntityIndex;
	DWORD dwGameRules;
	DWORD dwGlobalVars;
	DWORD dwGlowManager;
	DWORD dwLocalPlayerController;
	DWORD dwLocalPlayerPawn;
	DWORD dwPlantedC4;
	DWORD dwPrediction;
	DWORD dwSensitivity;
	DWORD dwSensitivity_sensitivity;
	DWORD dwViewAngles;
	DWORD dwViewMatrix;
	DWORD dwViewRender;
	DWORD dwWeaponC4;
} client_dll;

inline struct engine2_dllOffsets {
	DWORD BenchmarkService001;
	DWORD BugService001;
	DWORD ClientServerEngineLoopService_001;
	DWORD EngineGameUI001;
	DWORD EngineServiceMgr001;
	DWORD GameEventSystemClientV001;
	DWORD GameEventSystemServerV001;
	DWORD GameResourceServiceClientV001;
	DWORD GameResourceServiceServerV001;
	DWORD GameUIService_001;
	DWORD HostStateMgr001;
	DWORD INETSUPPORT_001;
	DWORD InputService_001;
	DWORD KeyValueCache001;
	DWORD MapListService_001;
	DWORD NetworkClientService_001;
	DWORD NetworkP2PService_001;
	DWORD NetworkServerService_001;
	DWORD NetworkService_001;
	DWORD RenderService_001;
	DWORD ScreenshotService001;
	DWORD SimpleEngineLoopService_001;
	DWORD SoundService_001;
	DWORD Source2EngineToClient001;
	DWORD Source2EngineToClientStringTable001;
	DWORD Source2EngineToServer001;
	DWORD Source2EngineToServerStringTable001;
	DWORD SplitScreenService_001;
	DWORD StatsService_001;
	DWORD ToolService_001;
	DWORD VENGINE_GAMEUIFUNCS_VERSION005;
	DWORD VProfService_001;
	DWORD dwBuildNumber;
	DWORD dwNetworkGameClient;
	DWORD dwNetworkGameClient_clientTickCount;
	DWORD dwNetworkGameClient_deltaTick;
	DWORD dwNetworkGameClient_isBackgroundMap;
	DWORD dwNetworkGameClient_localPlayer;
	DWORD dwNetworkGameClient_maxClients;
	DWORD dwNetworkGameClient_serverTickCount;
	DWORD dwNetworkGameClient_signOnState;
	DWORD dwWindowHeight;
	DWORD dwWindowWidth;
} engine2_dll;

inline struct filesystem_stdio_dllOffsets {
	DWORD VAsyncFileSystem2_001;
	DWORD VFileSystem017;
} filesystem_stdio_dll;

inline struct host_dllOffsets {
	DWORD DebugDrawQueueManager001;
	DWORD GameModelInfo001;
	DWORD GameSystem2HostHook;
	DWORD HostUtils001;
	DWORD PredictionDiffManager001;
	DWORD SaveRestoreDataVersion001;
	DWORD SinglePlayerSharedMemory001;
	DWORD Source2Host001;
} host_dll;

inline struct imemanager_dllOffsets {
	DWORD IMEManager001;
} imemanager_dll;

inline struct inputsystem_dllOffsets {
	DWORD InputStackSystemVersion001;
	DWORD InputSystemVersion001;
	DWORD dwInputSystem;
} inputsystem_dll;

inline struct localize_dllOffsets {
	DWORD Localize_001;
} localize_dll;

inline struct matchmaking_dllOffsets {
	DWORD GameTypes001;
	DWORD MATCHFRAMEWORK_001;
	DWORD dwGameTypes;
} matchmaking_dll;

inline struct materialsystem2_dllOffsets {
	DWORD FontManager_001;
	DWORD MaterialUtils_001;
	DWORD PostProcessingSystem_001;
	DWORD TextLayout_001;
	DWORD VMaterialSystem2_001;
} materialsystem2_dll;

inline struct meshsystem_dllOffsets {
	DWORD MeshSystem001;
} meshsystem_dll;

inline struct navsystem_dllOffsets {
	DWORD NavSystem001;
} navsystem_dll;

inline struct networksystem_dllOffsets {
	DWORD FlattenedSerializersVersion001;
	DWORD NetworkMessagesVersion001;
	DWORD NetworkSystemVersion001;
	DWORD SerializedEntitiesVersion001;
} networksystem_dll;

inline struct panorama_dllOffsets {
	DWORD PanoramaUIEngine001;
} panorama_dll;

inline struct panorama_text_pango_dllOffsets {
	DWORD PanoramaTextServices001;
} panorama_text_pango_dll;

inline struct panoramauiclient_dllOffsets {
	DWORD PanoramaUIClient001;
} panoramauiclient_dll;

inline struct particles_dllOffsets {
	DWORD ParticleSystemMgr003;
} particles_dll;

inline struct pulse_system_dllOffsets {
	DWORD IPulseSystem_001;
} pulse_system_dll;

inline struct rendersystemdx11_dllOffsets {
	DWORD RenderDeviceMgr001;
	DWORD RenderUtils_001;
	DWORD VRenderDeviceMgrBackdoor001;
} rendersystemdx11_dll;

inline struct resourcesystem_dllOffsets {
	DWORD ResourceSystem013;
} resourcesystem_dll;

inline struct scenefilecache_dllOffsets {
	DWORD ResponseRulesCache001;
	DWORD SceneFileCache002;
} scenefilecache_dll;

inline struct scenesystem_dllOffsets {
	DWORD RenderingPipelines_001;
	DWORD SceneSystem_002;
	DWORD SceneUtils_001;
} scenesystem_dll;

inline struct schemasystem_dllOffsets {
	DWORD SchemaSystem_001;
} schemasystem_dll;

inline struct server_dllOffsets {
	DWORD EmptyWorldService001_Server;
	DWORD EntitySubclassUtilsV001;
	DWORD NavGameTest001;
	DWORD ServerToolsInfo_001;
	DWORD Source2GameClients001;
	DWORD Source2GameDirector001;
	DWORD Source2GameEntities001;
	DWORD Source2Server001;
	DWORD Source2ServerConfig001;
	DWORD customnavsystem001;
} server_dll;

inline struct soundsystem_dllOffsets {
	DWORD SoundOpSystem001;
	DWORD SoundOpSystemEdit001;
	DWORD SoundSystem001;
	DWORD VMixEditTool001;
	DWORD dwSoundSystem;
	DWORD dwSoundSystem_engineViewData;
} soundsystem_dll;

inline struct steamaudio_dllOffsets {
	DWORD SteamAudio001;
} steamaudio_dll;

inline struct steamclient64_dllOffsets {
	DWORD CLIENTENGINE_INTERFACE_VERSION005;
	DWORD IVALIDATE001;
	DWORD SteamClient006;
	DWORD SteamClient007;
	DWORD SteamClient008;
	DWORD SteamClient009;
	DWORD SteamClient010;
	DWORD SteamClient011;
	DWORD SteamClient012;
	DWORD SteamClient013;
	DWORD SteamClient014;
	DWORD SteamClient015;
	DWORD SteamClient016;
	DWORD SteamClient017;
	DWORD SteamClient018;
	DWORD SteamClient019;
	DWORD SteamClient020;
	DWORD SteamClient021;
	DWORD SteamClient022;
	DWORD SteamClient023;
	DWORD p2pvoice002;
	DWORD p2pvoicesingleton002;
} steamclient64_dll;

inline struct tier0_dllOffsets {
	DWORD TestScriptMgr001;
	DWORD VEngineCvar007;
	DWORD VProcessUtils002;
	DWORD VStringTokenSystem001;
} tier0_dll;

inline struct v8system_dllOffsets {
	DWORD Source2V8System001;
} v8system_dll;

inline struct vconcomm_dllOffsets {
	DWORD VConComm001;
} vconcomm_dll;

inline struct vphysics2_dllOffsets {
	DWORD VPhysics2_Handle_Interface_001;
	DWORD VPhysics2_Interface_001;
} vphysics2_dll;

inline struct vscript_dllOffsets {
	DWORD VScriptManager010;
} vscript_dll;

inline struct vstdlib_s64_dllOffsets {
	DWORD IVALIDATE001;
	DWORD VEngineCvar002;
} vstdlib_s64_dll;

inline struct worldrenderer_dllOffsets {
	DWORD WorldRendererMgr001;
} worldrenderer_dll;

inline struct CTestDomainDerived_CursorOffsets {
	DWORD m_nCursorValueA;
	DWORD m_nCursorValueB;
} CTestDomainDerived_Cursor;

inline struct CPulseCell_Test_MultiOutflow_WithParamsOffsets {
	DWORD m_Out1;
	DWORD m_Out2;
} CPulseCell_Test_MultiOutflow_WithParams;

inline struct CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_tOffsets {
	DWORD nTestStep;
} CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t;

inline struct CPulseTurtleGraphicsCursorOffsets {
	DWORD m_Color;
	DWORD m_vPos;
	DWORD m_flHeadingDeg;
	DWORD m_bPenUp;
} CPulseTurtleGraphicsCursor;

inline struct CPulseCell_TestWaitWithCursorState__CursorState_tOffsets {
	DWORD flWaitValue;
	DWORD bFailOnCancel;
} CPulseCell_TestWaitWithCursorState__CursorState_t;

inline struct CPulseCell_Test_MultiOutflow_WithParams_YieldingOffsets {
	DWORD m_Out1;
	DWORD m_AsyncChild1;
	DWORD m_AsyncChild2;
	DWORD m_YieldResume1;
	DWORD m_YieldResume2;
} CPulseCell_Test_MultiOutflow_WithParams_Yielding;

inline struct CPulseGraphInstance_TestDomain_DerivedOffsets {
	DWORD m_nInstanceValueX;
} CPulseGraphInstance_TestDomain_Derived;

inline struct CPulseGraphInstance_TestDomainOffsets {
	DWORD m_bIsRunningUnitTests;
	DWORD m_bExplicitTimeStepping;
	DWORD m_bExpectingToDestroyWithYieldedCursors;
	DWORD m_bQuietTracepoints;
	DWORD m_bExpectingCursorTerminatedDueToMaxInstructions;
	DWORD m_nCursorsTerminatedDueToMaxInstructions;
	DWORD m_nNextValidateIndex;
	DWORD m_Tracepoints;
	DWORD m_bTestYesOrNoPath;
} CPulseGraphInstance_TestDomain;

inline struct CPulseCell_Outflow_TestExplicitYesNoOffsets {
	DWORD m_Yes;
	DWORD m_No;
} CPulseCell_Outflow_TestExplicitYesNo;

inline struct CPulseCell_Outflow_TestRandomYesNoOffsets {
	DWORD m_Yes;
	DWORD m_No;
} CPulseCell_Outflow_TestRandomYesNo;

inline struct CPulseCell_TestWaitWithCursorStateOffsets {
	DWORD m_WakeResume;
	DWORD m_WakeCancel;
	DWORD m_WakeFail;
} CPulseCell_TestWaitWithCursorState;

inline struct CPulseCell_Step_TestDomainEntFireOffsets {
	DWORD m_Input;
} CPulseCell_Step_TestDomainEntFire;

inline struct CPulseCell_ExampleSelectorOffsets {
	DWORD m_OutflowList;
} CPulseCell_ExampleSelector;

inline struct CPulseCell_ExampleCriteria__Criteria_tOffsets {
	DWORD m_flFloatValue1;
	DWORD m_flFloatValue2;
	DWORD m_bMyBool;
} CPulseCell_ExampleCriteria__Criteria_t;

inline struct CPointWorldTextOffsets {
	DWORD m_messageText;
	DWORD m_FontName;
	DWORD m_BackgroundMaterialName;
	DWORD m_bEnabled;
	DWORD m_bFullbright;
	DWORD m_flWorldUnitsPerPx;
	DWORD m_flFontSize;
	DWORD m_flDepthOffset;
	DWORD m_bDrawBackground;
	DWORD m_flBackgroundBorderWidth;
	DWORD m_flBackgroundBorderHeight;
	DWORD m_flBackgroundWorldToUV;
	DWORD m_Color;
	DWORD m_nJustifyHorizontal;
	DWORD m_nJustifyVertical;
	DWORD m_nReorientMode;
} CPointWorldText;

inline struct CAmbientGenericOffsets {
	DWORD m_radius;
	DWORD m_flMaxRadius;
	DWORD m_iSoundLevel;
	DWORD m_dpv;
	DWORD m_fActive;
	DWORD m_fLooping;
	DWORD m_iszSound;
	DWORD m_sSourceEntName;
	DWORD m_hSoundSource;
	DWORD m_nSoundSourceEntIndex;
} CAmbientGeneric;

inline struct CEnvEntityMakerOffsets {
	DWORD m_vecEntityMins;
	DWORD m_vecEntityMaxs;
	DWORD m_hCurrentInstance;
	DWORD m_hCurrentBlocker;
	DWORD m_vecBlockerOrigin;
	DWORD m_angPostSpawnDirection;
	DWORD m_flPostSpawnDirectionVariance;
	DWORD m_flPostSpawnSpeed;
	DWORD m_bPostSpawnUseAngles;
	DWORD m_iszTemplate;
	DWORD m_pOutputOnSpawned;
	DWORD m_pOutputOnFailedSpawn;
} CEnvEntityMaker;

inline struct CFilterEnemyOffsets {
	DWORD m_iszEnemyName;
	DWORD m_flRadius;
	DWORD m_flOuterRadius;
	DWORD m_nMaxSquadmatesPerEnemy;
	DWORD m_iszPlayerName;
} CFilterEnemy;

inline struct CScriptedSequenceOffsets {
	DWORD m_iszEntry;
	DWORD m_iszPreIdle;
	DWORD m_iszPlay;
	DWORD m_iszPostIdle;
	DWORD m_iszModifierToAddOnPlay;
	DWORD m_iszNextScript;
	DWORD m_iszEntity;
	DWORD m_iszSyncGroup;
	DWORD m_nMoveTo;
	DWORD m_nMoveToGait;
	DWORD m_nHeldWeaponBehavior;
	DWORD m_nForcedCrouchState;
	DWORD m_bIsPlayingPreIdle;
	DWORD m_bIsPlayingEntry;
	DWORD m_bIsPlayingAction;
	DWORD m_bIsPlayingPostIdle;
	DWORD m_bDontRotateOther;
	DWORD m_bIsRepeatable;
	DWORD m_bShouldLeaveCorpse;
	DWORD m_bStartOnSpawn;
	DWORD m_bDisallowInterrupts;
	DWORD m_bCanOverrideNPCState;
	DWORD m_bDontTeleportAtEnd;
	DWORD m_bHighPriority;
	DWORD m_bHideDebugComplaints;
	DWORD m_bContinueOnDeath;
	DWORD m_bLoopPreIdleSequence;
	DWORD m_bLoopActionSequence;
	DWORD m_bLoopPostIdleSequence;
	DWORD m_bSynchPostIdles;
	DWORD m_bIgnoreLookAt;
	DWORD m_bIgnoreGravity;
	DWORD m_bDisableNPCCollisions;
	DWORD m_bKeepAnimgraphLockedPost;
	DWORD m_bDontAddModifiers;
	DWORD m_bDisableAimingWhileMoving;
	DWORD m_bIgnoreRotation;
	DWORD m_flRadius;
	DWORD m_flRepeat;
	DWORD m_flPlayAnimFadeInTime;
	DWORD m_flMoveInterpTime;
	DWORD m_flAngRate;
	DWORD m_flMoveSpeed;
	DWORD m_bWaitUntilMoveCompletesToStartAnimation;
	DWORD m_nNotReadySequenceCount;
	DWORD m_startTime;
	DWORD m_bWaitForBeginSequence;
	DWORD m_saved_effects;
	DWORD m_savedFlags;
	DWORD m_savedCollisionGroup;
	DWORD m_bInterruptable;
	DWORD m_sequenceStarted;
	DWORD m_bPositionRelativeToOtherEntity;
	DWORD m_hTargetEnt;
	DWORD m_hNextCine;
	DWORD m_bThinking;
	DWORD m_bInitiatedSelfDelete;
	DWORD m_bIsTeleportingDueToMoveTo;
	DWORD m_bAllowCustomInterruptConditions;
	DWORD m_hForcedTarget;
	DWORD m_bDontCancelOtherSequences;
	DWORD m_bForceSynch;
	DWORD m_bPreventUpdateYawOnFinish;
	DWORD m_bEnsureOnNavmeshOnFinish;
	DWORD m_onDeathBehavior;
	DWORD m_ConflictResponse;
	DWORD m_OnBeginSequence;
	DWORD m_OnActionStartOrLoop;
	DWORD m_OnEndSequence;
	DWORD m_OnPostIdleEndSequence;
	DWORD m_OnCancelSequence;
	DWORD m_OnCancelFailedSequence;
	DWORD m_OnScriptEvent;
	DWORD m_matOtherToMain;
	DWORD m_hInteractionMainEntity;
	DWORD m_iPlayerDeathBehavior;
	DWORD m_bSkipFadeIn;
} CScriptedSequence;

inline struct CFogTriggerOffsets {
	DWORD m_fog;
} CFogTrigger;

inline struct CPhysicsSpringOffsets {
	DWORD m_flFrequency;
	DWORD m_flDampingRatio;
	DWORD m_flRestLength;
	DWORD m_nameAttachStart;
	DWORD m_nameAttachEnd;
	DWORD m_start;
	DWORD m_end;
	DWORD m_teleportTick;
} CPhysicsSpring;

inline struct CEnvMuzzleFlashOffsets {
	DWORD m_flScale;
	DWORD m_iszParentAttachment;
} CEnvMuzzleFlash;

inline struct CBtActionCombatPositioningOffsets {
	DWORD m_szSensorInputKey;
	DWORD m_szIsAttackingKey;
	DWORD m_ActionTimer;
	DWORD m_bCrouching;
} CBtActionCombatPositioning;

inline struct CTriggerBuoyancyOffsets {
	DWORD m_BuoyancyHelper;
	DWORD m_flFluidDensity;
} CTriggerBuoyancy;

inline struct CPathTrackOffsets {
	DWORD m_pnext;
	DWORD m_pprevious;
	DWORD m_paltpath;
	DWORD m_flRadius;
	DWORD m_length;
	DWORD m_altName;
	DWORD m_nIterVal;
	DWORD m_eOrientationType;
	DWORD m_OnPass;
} CPathTrack;

inline struct CTriggerProximityOffsets {
	DWORD m_hMeasureTarget;
	DWORD m_iszMeasureTarget;
	DWORD m_fRadius;
	DWORD m_nTouchers;
	DWORD m_NearestEntityDistance;
} CTriggerProximity;

inline struct CTankTrainAIOffsets {
	DWORD m_hTrain;
	DWORD m_hTargetEntity;
	DWORD m_soundPlaying;
	DWORD m_startSoundName;
	DWORD m_engineSoundName;
	DWORD m_movementSoundName;
	DWORD m_targetEntityName;
} CTankTrainAI;

inline struct CGameTextOffsets {
	DWORD m_iszMessage;
	DWORD m_textParms;
} CGameText;

inline struct CBaseFlexOffsets {
	DWORD m_flexWeight;
	DWORD m_vLookTargetPosition;
	DWORD m_flAllowResponsesEndTime;
	DWORD m_flLastFlexAnimationTime;
	DWORD m_nNextSceneEventId;
	DWORD m_bUpdateLayerPriorities;
} CBaseFlex;

inline struct CLogicCaseOffsets {
	DWORD m_nCase;
	DWORD m_nShuffleCases;
	DWORD m_nLastShuffleCase;
	DWORD m_uchShuffleCaseMap;
	DWORD m_OnCase;
	DWORD m_OnDefault;
} CLogicCase;

inline struct CInfoGameEventProxyOffsets {
	DWORD m_iszEventName;
	DWORD m_flRange;
} CInfoGameEventProxy;

inline struct CGamePlayerZoneOffsets {
	DWORD m_OnPlayerInZone;
	DWORD m_OnPlayerOutZone;
	DWORD m_PlayersInCount;
	DWORD m_PlayersOutCount;
} CGamePlayerZone;

inline struct CBaseToggleOffsets {
	DWORD m_toggle_state;
	DWORD m_flMoveDistance;
	DWORD m_flWait;
	DWORD m_flLip;
	DWORD m_bAlwaysFireBlockedOutputs;
	DWORD m_vecPosition1;
	DWORD m_vecPosition2;
	DWORD m_vecMoveAng;
	DWORD m_vecAngle1;
	DWORD m_vecAngle2;
	DWORD m_flHeight;
	DWORD m_hActivator;
	DWORD m_vecFinalDest;
	DWORD m_vecFinalAngle;
	DWORD m_movementType;
	DWORD m_sMaster;
} CBaseToggle;

inline struct CPulseServerCursorOffsets {
	DWORD m_hActivator;
	DWORD m_hCaller;
} CPulseServerCursor;

inline struct CInfernoOffsets {
	DWORD m_firePositions;
	DWORD m_fireParentPositions;
	DWORD m_bFireIsBurning;
	DWORD m_BurnNormal;
	DWORD m_fireCount;
	DWORD m_nInfernoType;
	DWORD m_nFireEffectTickBegin;
	DWORD m_nFireLifetime;
	DWORD m_bInPostEffectTime;
	DWORD m_bWasCreatedInSmoke;
	DWORD m_extent;
	DWORD m_damageTimer;
	DWORD m_damageRampTimer;
	DWORD m_splashVelocity;
	DWORD m_InitialSplashVelocity;
	DWORD m_startPos;
	DWORD m_vecOriginalSpawnLocation;
	DWORD m_activeTimer;
	DWORD m_fireSpawnOffset;
	DWORD m_nMaxFlames;
	DWORD m_nSpreadCount;
	DWORD m_BookkeepingTimer;
	DWORD m_NextSpreadTimer;
	DWORD m_nSourceItemDefIndex;
} CInferno;

inline struct CPulseCell_Outflow_PlaySceneBaseOffsets {
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
	DWORD m_Triggers;
} CPulseCell_Outflow_PlaySceneBase;

inline struct CFuncInteractionLayerClipOffsets {
	DWORD m_bDisabled;
	DWORD m_iszInteractsAs;
	DWORD m_iszInteractsWith;
} CFuncInteractionLayerClip;

inline struct CTriggerDetectBulletFireOffsets {
	DWORD m_bPlayerFireOnly;
	DWORD m_OnDetectedBulletFire;
} CTriggerDetectBulletFire;

inline struct CCSPlayer_UseServicesOffsets {
	DWORD m_hLastKnownUseEntity;
	DWORD m_flLastUseTimeStamp;
	DWORD m_flTimeLastUsedWindow;
} CCSPlayer_UseServices;

inline struct CGameRulesOffsets {
	DWORD __m_pChainEntity;
	DWORD m_szQuestName;
	DWORD m_nQuestPhase;
	DWORD m_nTotalPausedTicks;
	DWORD m_nPauseStartTick;
	DWORD m_bGamePaused;
} CGameRules;

inline struct CFishOffsets {
	DWORD m_pool;
	DWORD m_id;
	DWORD m_x;
	DWORD m_y;
	DWORD m_z;
	DWORD m_angle;
	DWORD m_angleChange;
	DWORD m_forward;
	DWORD m_perp;
	DWORD m_poolOrigin;
	DWORD m_waterLevel;
	DWORD m_speed;
	DWORD m_desiredSpeed;
	DWORD m_calmSpeed;
	DWORD m_panicSpeed;
	DWORD m_avoidRange;
	DWORD m_turnTimer;
	DWORD m_turnClockwise;
	DWORD m_goTimer;
	DWORD m_moveTimer;
	DWORD m_panicTimer;
	DWORD m_disperseTimer;
	DWORD m_proximityTimer;
	DWORD m_visible;
} CFish;

inline struct CCSBotOffsets {
	DWORD m_eyePosition;
	DWORD m_name;
	DWORD m_combatRange;
	DWORD m_isRogue;
	DWORD m_rogueTimer;
	DWORD m_diedLastRound;
	DWORD m_safeTime;
	DWORD m_wasSafe;
	DWORD m_blindFire;
	DWORD m_surpriseTimer;
	DWORD m_bAllowActive;
	DWORD m_isFollowing;
	DWORD m_leader;
	DWORD m_followTimestamp;
	DWORD m_allowAutoFollowTime;
	DWORD m_hurryTimer;
	DWORD m_alertTimer;
	DWORD m_sneakTimer;
	DWORD m_panicTimer;
	DWORD m_stateTimestamp;
	DWORD m_isAttacking;
	DWORD m_isOpeningDoor;
	DWORD m_taskEntity;
	DWORD m_goalPosition;
	DWORD m_goalEntity;
	DWORD m_avoid;
	DWORD m_avoidTimestamp;
	DWORD m_isStopping;
	DWORD m_hasVisitedEnemySpawn;
	DWORD m_stillTimer;
	DWORD m_bEyeAnglesUnderPathFinderControl;
	DWORD m_pathIndex;
	DWORD m_areaEnteredTimestamp;
	DWORD m_repathTimer;
	DWORD m_avoidFriendTimer;
	DWORD m_isFriendInTheWay;
	DWORD m_politeTimer;
	DWORD m_isWaitingBehindFriend;
	DWORD m_pathLadderEnd;
	DWORD m_mustRunTimer;
	DWORD m_waitTimer;
	DWORD m_updateTravelDistanceTimer;
	DWORD m_playerTravelDistance;
	DWORD m_travelDistancePhase;
	DWORD m_hostageEscortCount;
	DWORD m_hostageEscortCountTimestamp;
	DWORD m_desiredTeam;
	DWORD m_hasJoined;
	DWORD m_isWaitingForHostage;
	DWORD m_inhibitWaitingForHostageTimer;
	DWORD m_waitForHostageTimer;
	DWORD m_noisePosition;
	DWORD m_noiseTravelDistance;
	DWORD m_noiseTimestamp;
	DWORD m_noiseSource;
	DWORD m_noiseBendTimer;
	DWORD m_bentNoisePosition;
	DWORD m_bendNoisePositionValid;
	DWORD m_lookAroundStateTimestamp;
	DWORD m_lookAheadAngle;
	DWORD m_forwardAngle;
	DWORD m_inhibitLookAroundTimestamp;
	DWORD m_lookAtSpot;
	DWORD m_lookAtSpotDuration;
	DWORD m_lookAtSpotTimestamp;
	DWORD m_lookAtSpotAngleTolerance;
	DWORD m_lookAtSpotClearIfClose;
	DWORD m_lookAtSpotAttack;
	DWORD m_lookAtDesc;
	DWORD m_peripheralTimestamp;
	DWORD m_approachPointCount;
	DWORD m_approachPointViewPosition;
	DWORD m_viewSteadyTimer;
	DWORD m_tossGrenadeTimer;
	DWORD m_isAvoidingGrenade;
	DWORD m_spotCheckTimestamp;
	DWORD m_checkedHidingSpotCount;
	DWORD m_lookPitch;
	DWORD m_lookPitchVel;
	DWORD m_lookYaw;
	DWORD m_lookYawVel;
	DWORD m_targetSpot;
	DWORD m_targetSpotVelocity;
	DWORD m_targetSpotPredicted;
	DWORD m_aimError;
	DWORD m_aimGoal;
	DWORD m_targetSpotTime;
	DWORD m_aimFocus;
	DWORD m_aimFocusInterval;
	DWORD m_aimFocusNextUpdate;
	DWORD m_ignoreEnemiesTimer;
	DWORD m_enemy;
	DWORD m_isEnemyVisible;
	DWORD m_visibleEnemyParts;
	DWORD m_lastEnemyPosition;
	DWORD m_lastSawEnemyTimestamp;
	DWORD m_firstSawEnemyTimestamp;
	DWORD m_currentEnemyAcquireTimestamp;
	DWORD m_enemyDeathTimestamp;
	DWORD m_friendDeathTimestamp;
	DWORD m_isLastEnemyDead;
	DWORD m_nearbyEnemyCount;
	DWORD m_bomber;
	DWORD m_nearbyFriendCount;
	DWORD m_closestVisibleFriend;
	DWORD m_closestVisibleHumanFriend;
	DWORD m_attentionInterval;
	DWORD m_attacker;
	DWORD m_attackedTimestamp;
	DWORD m_burnedByFlamesTimer;
	DWORD m_lastVictimID;
	DWORD m_isAimingAtEnemy;
	DWORD m_isRapidFiring;
	DWORD m_equipTimer;
	DWORD m_zoomTimer;
	DWORD m_fireWeaponTimestamp;
	DWORD m_lookForWeaponsOnGroundTimer;
	DWORD m_bIsSleeping;
	DWORD m_isEnemySniperVisible;
	DWORD m_sawEnemySniperTimer;
	DWORD m_enemyQueueIndex;
	DWORD m_enemyQueueCount;
	DWORD m_enemyQueueAttendIndex;
	DWORD m_isStuck;
	DWORD m_stuckTimestamp;
	DWORD m_stuckSpot;
	DWORD m_wiggleTimer;
	DWORD m_stuckJumpTimer;
	DWORD m_nextCleanupCheckTimestamp;
	DWORD m_avgVel;
	DWORD m_avgVelIndex;
	DWORD m_avgVelCount;
	DWORD m_lastOrigin;
	DWORD m_lastRadioRecievedTimestamp;
	DWORD m_lastRadioSentTimestamp;
	DWORD m_radioSubject;
	DWORD m_radioPosition;
	DWORD m_voiceEndTimestamp;
	DWORD m_lastValidReactionQueueFrame;
} CCSBot;

inline struct CHandleTestOffsets {
	DWORD m_Handle;
	DWORD m_bSendHandle;
} CHandleTest;

inline struct CLogicNPCCounterOffsets {
	DWORD m_OnMinCountAll;
	DWORD m_OnMaxCountAll;
	DWORD m_OnFactorAll;
	DWORD m_OnMinPlayerDistAll;
	DWORD m_OnMinCount_1;
	DWORD m_OnMaxCount_1;
	DWORD m_OnFactor_1;
	DWORD m_OnMinPlayerDist_1;
	DWORD m_OnMinCount_2;
	DWORD m_OnMaxCount_2;
	DWORD m_OnFactor_2;
	DWORD m_OnMinPlayerDist_2;
	DWORD m_OnMinCount_3;
	DWORD m_OnMaxCount_3;
	DWORD m_OnFactor_3;
	DWORD m_OnMinPlayerDist_3;
	DWORD m_hSource;
	DWORD m_iszSourceEntityName;
	DWORD m_flDistanceMax;
	DWORD m_bDisabled;
	DWORD m_nMinCountAll;
	DWORD m_nMaxCountAll;
	DWORD m_nMinFactorAll;
	DWORD m_nMaxFactorAll;
	DWORD m_iszNPCClassname_1;
	DWORD m_nNPCState_1;
	DWORD m_bInvertState_1;
	DWORD m_nMinCount_1;
	DWORD m_nMaxCount_1;
	DWORD m_nMinFactor_1;
	DWORD m_nMaxFactor_1;
	DWORD m_flDefaultDist_1;
	DWORD m_iszNPCClassname_2;
	DWORD m_nNPCState_2;
	DWORD m_bInvertState_2;
	DWORD m_nMinCount_2;
	DWORD m_nMaxCount_2;
	DWORD m_nMinFactor_2;
	DWORD m_nMaxFactor_2;
	DWORD m_flDefaultDist_2;
	DWORD m_iszNPCClassname_3;
	DWORD m_nNPCState_3;
	DWORD m_bInvertState_3;
	DWORD m_nMinCount_3;
	DWORD m_nMaxCount_3;
	DWORD m_nMinFactor_3;
	DWORD m_nMaxFactor_3;
	DWORD m_flDefaultDist_3;
} CLogicNPCCounter;

inline struct CCSPlayer_RadioServicesOffsets {
	DWORD m_flGotHostageTalkTimer;
	DWORD m_flDefusingTalkTimer;
	DWORD m_flC4PlantTalkTimer;
	DWORD m_flRadioTokenSlots;
	DWORD m_bIgnoreRadio;
} CCSPlayer_RadioServices;

inline struct CRagdollConstraintOffsets {
	DWORD m_xmin;
	DWORD m_xmax;
	DWORD m_ymin;
	DWORD m_ymax;
	DWORD m_zmin;
	DWORD m_zmax;
	DWORD m_xfriction;
	DWORD m_yfriction;
	DWORD m_zfriction;
} CRagdollConstraint;

inline struct CEnvSplashOffsets {
	DWORD m_flScale;
} CEnvSplash;

inline struct CPointCameraVFOVOffsets {
	DWORD m_flVerticalFOV;
} CPointCameraVFOV;

inline struct CFuncMoveLinearOffsets {
	DWORD m_authoredPosition;
	DWORD m_angMoveEntitySpace;
	DWORD m_vecMoveDirParentSpace;
	DWORD m_soundStart;
	DWORD m_soundStop;
	DWORD m_currentSound;
	DWORD m_flBlockDamage;
	DWORD m_flStartPosition;
	DWORD m_OnFullyOpen;
	DWORD m_OnFullyClosed;
	DWORD m_bCreateMovableNavMesh;
	DWORD m_bAllowMovableNavMeshDockingOnEntireEntity;
	DWORD m_bCreateNavObstacle;
} CFuncMoveLinear;

inline struct CScriptItemOffsets {
	DWORD m_MoveTypeOverride;
} CScriptItem;

inline struct CBaseTriggerOffsets {
	DWORD m_OnStartTouch;
	DWORD m_OnStartTouchAll;
	DWORD m_OnEndTouch;
	DWORD m_OnEndTouchAll;
	DWORD m_OnTouching;
	DWORD m_OnTouchingEachEntity;
	DWORD m_OnNotTouching;
	DWORD m_hTouchingEntities;
	DWORD m_iFilterName;
	DWORD m_hFilter;
	DWORD m_bDisabled;
	DWORD m_bUseAsyncQueries;
} CBaseTrigger;

inline struct CPointPushOffsets {
	DWORD m_bEnabled;
	DWORD m_flMagnitude;
	DWORD m_flRadius;
	DWORD m_flInnerRadius;
	DWORD m_flConeOfInfluence;
	DWORD m_iszFilterName;
	DWORD m_hFilter;
} CPointPush;

inline struct CPlayerPingOffsets {
	DWORD m_hPlayer;
	DWORD m_hPingedEntity;
	DWORD m_iType;
	DWORD m_bUrgent;
	DWORD m_szPlaceName;
} CPlayerPing;

inline struct CRopeKeyframeOffsets {
	DWORD m_RopeFlags;
	DWORD m_iNextLinkName;
	DWORD m_Slack;
	DWORD m_Width;
	DWORD m_TextureScale;
	DWORD m_nSegments;
	DWORD m_bConstrainBetweenEndpoints;
	DWORD m_strRopeMaterialModel;
	DWORD m_iRopeMaterialModelIndex;
	DWORD m_Subdiv;
	DWORD m_nChangeCount;
	DWORD m_RopeLength;
	DWORD m_fLockedPoints;
	DWORD m_bCreatedFromMapFile;
	DWORD m_flScrollSpeed;
	DWORD m_bStartPointValid;
	DWORD m_bEndPointValid;
	DWORD m_hStartPoint;
	DWORD m_hEndPoint;
	DWORD m_iStartAttachment;
	DWORD m_iEndAttachment;
} CRopeKeyframe;

inline struct CBaseCombatCharacterOffsets {
	DWORD m_bForceServerRagdoll;
	DWORD m_hMyWearables;
	DWORD m_impactEnergyScale;
	DWORD m_bApplyStressDamage;
	DWORD m_bDeathEventsDispatched;
	DWORD m_pVecRelationships;
	DWORD m_strRelationships;
	DWORD m_eHull;
	DWORD m_nNavHullIdx;
	DWORD m_movementStats;
} CBaseCombatCharacter;

inline struct CTestPulseIOOffsets {
	DWORD m_OnVariantVoid;
	DWORD m_OnVariantBool;
	DWORD m_OnVariantInt;
	DWORD m_OnVariantFloat;
	DWORD m_OnVariantString;
	DWORD m_OnVariantColor;
	DWORD m_OnVariantVector;
	DWORD m_bAllowEmptyInputs;
} CTestPulseIO;

inline struct CPointEntityFinderOffsets {
	DWORD m_hEntity;
	DWORD m_iFilterName;
	DWORD m_hFilter;
	DWORD m_iRefName;
	DWORD m_hReference;
	DWORD m_FindMethod;
	DWORD m_OnFoundEntity;
} CPointEntityFinder;

inline struct CKnifeOffsets {
	DWORD m_bFirstAttack;
} CKnife;

inline struct CLogicPlayerProxyOffsets {
	DWORD m_PlayerHasAmmo;
	DWORD m_PlayerHasNoAmmo;
	DWORD m_PlayerDied;
	DWORD m_RequestedPlayerHealth;
	DWORD m_hPlayer;
} CLogicPlayerProxy;

inline struct CTriggerSoundscapeOffsets {
	DWORD m_hSoundscape;
	DWORD m_SoundscapeName;
	DWORD m_spectators;
} CTriggerSoundscape;

inline struct CHostageExpresserShimOffsets {
	DWORD m_pExpresser;
} CHostageExpresserShim;

inline struct CShatterGlassShardPhysicsOffsets {
	DWORD m_bDebris;
	DWORD m_hParentShard;
	DWORD m_ShardDesc;
} CShatterGlassShardPhysics;

inline struct CPathParticleRopeOffsets {
	DWORD m_bStartActive;
	DWORD m_flMaxSimulationTime;
	DWORD m_iszEffectName;
	DWORD m_PathNodes_Name;
	DWORD m_flParticleSpacing;
	DWORD m_flSlack;
	DWORD m_flRadius;
	DWORD m_ColorTint;
	DWORD m_nEffectState;
	DWORD m_iEffectIndex;
	DWORD m_PathNodes_Position;
	DWORD m_PathNodes_TangentIn;
	DWORD m_PathNodes_TangentOut;
	DWORD m_PathNodes_Color;
	DWORD m_PathNodes_PinEnabled;
	DWORD m_PathNodes_RadiusScale;
} CPathParticleRope;

inline struct CCreditsOffsets {
	DWORD m_OnCreditsDone;
	DWORD m_bRolledOutroCredits;
	DWORD m_flLogoLength;
} CCredits;

inline struct CFishPoolOffsets {
	DWORD m_fishCount;
	DWORD m_maxRange;
	DWORD m_swimDepth;
	DWORD m_waterLevel;
	DWORD m_isDormant;
	DWORD m_fishes;
	DWORD m_visTimer;
} CFishPool;

inline struct CBreakablePropOffsets {
	DWORD m_CPropDataComponent;
	DWORD m_OnStartDeath;
	DWORD m_OnBreak;
	DWORD m_OnHealthChanged;
	DWORD m_OnTakeDamage;
	DWORD m_impactEnergyScale;
	DWORD m_iMinHealthDmg;
	DWORD m_preferredCarryAngles;
	DWORD m_flPressureDelay;
	DWORD m_flDefBurstScale;
	DWORD m_vDefBurstOffset;
	DWORD m_hBreaker;
	DWORD m_PerformanceMode;
	DWORD m_flPreventDamageBeforeTime;
	DWORD m_BreakableContentsType;
	DWORD m_strBreakableContentsPropGroupOverride;
	DWORD m_strBreakableContentsParticleOverride;
	DWORD m_bHasBreakPiecesOrCommands;
	DWORD m_explodeDamage;
	DWORD m_explodeRadius;
	DWORD m_nExplosionType;
	DWORD m_explosionDelay;
	DWORD m_explosionBuildupSound;
	DWORD m_explosionCustomEffect;
	DWORD m_explosionCustomSound;
	DWORD m_explosionModifier;
	DWORD m_hPhysicsAttacker;
	DWORD m_flLastPhysicsInfluenceTime;
	DWORD m_flDefaultFadeScale;
	DWORD m_hLastAttacker;
	DWORD m_iszPuntSound;
	DWORD m_bUsePuntSound;
	DWORD m_bOriginalBlockLOS;
} CBreakableProp;

inline struct CLightEntityOffsets {
	DWORD m_CLightComponent;
} CLightEntity;

inline struct COrnamentPropOffsets {
	DWORD m_initialOwner;
} COrnamentProp;

inline struct CRectLightOffsets {
	DWORD m_bShowLight;
} CRectLight;

inline struct CCSPlayerResourceOffsets {
	DWORD m_bHostageAlive;
	DWORD m_isHostageFollowingSomeone;
	DWORD m_iHostageEntityIDs;
	DWORD m_bombsiteCenterA;
	DWORD m_bombsiteCenterB;
	DWORD m_hostageRescueX;
	DWORD m_hostageRescueY;
	DWORD m_hostageRescueZ;
	DWORD m_bEndMatchNextMapAllVoted;
	DWORD m_foundGoalPositions;
} CCSPlayerResource;

inline struct CFuncNavBlockerOffsets {
	DWORD m_bDisabled;
	DWORD m_nBlockedTeamNumber;
} CFuncNavBlocker;

inline struct CMoverPathNodeOffsets {
	DWORD m_OnStartFromOrInSegment;
	DWORD m_OnStoppedAtOrInSegment;
	DWORD m_OnPassThrough;
	DWORD m_OnPassThroughForward;
	DWORD m_OnPassThroughReverse;
} CMoverPathNode;

inline struct CFuncBrushOffsets {
	DWORD m_iSolidity;
	DWORD m_iDisabled;
	DWORD m_bSolidBsp;
	DWORD m_iszExcludedClass;
	DWORD m_bInvertExclusion;
	DWORD m_bScriptedMovement;
} CFuncBrush;

inline struct CPhysBoxOffsets {
	DWORD m_damageType;
	DWORD m_damageToEnableMotion;
	DWORD m_flForceToEnableMotion;
	DWORD m_vHoverPosePosition;
	DWORD m_angHoverPoseAngles;
	DWORD m_bNotSolidToWorld;
	DWORD m_bEnableUseOutput;
	DWORD m_nHoverPoseFlags;
	DWORD m_flTouchOutputPerEntityDelay;
	DWORD m_OnDamaged;
	DWORD m_OnAwakened;
	DWORD m_OnMotionEnabled;
	DWORD m_OnPlayerUse;
	DWORD m_OnStartTouch;
	DWORD m_hCarryingPlayer;
} CPhysBox;

inline struct CSoundEventAABBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} CSoundEventAABBEntity;

inline struct COmniLightOffsets {
	DWORD m_flInnerAngle;
	DWORD m_flOuterAngle;
	DWORD m_bShowLight;
} COmniLight;

inline struct CTriggerVolumeOffsets {
	DWORD m_iFilterName;
	DWORD m_hFilter;
} CTriggerVolume;

inline struct CBtNodeConditionOffsets {
	DWORD m_bNegated;
} CBtNodeCondition;

inline struct CEnvExplosionOffsets {
	DWORD m_iMagnitude;
	DWORD m_flPlayerDamage;
	DWORD m_iRadiusOverride;
	DWORD m_flInnerRadius;
	DWORD m_flDamageForce;
	DWORD m_hInflictor;
	DWORD m_iCustomDamageType;
	DWORD m_bCreateDebris;
	DWORD m_iszCustomEffectName;
	DWORD m_iszCustomSoundName;
	DWORD m_bSuppressParticleImpulse;
	DWORD m_iClassIgnore;
	DWORD m_iClassIgnore2;
	DWORD m_iszEntityIgnoreName;
	DWORD m_hEntityIgnore;
} CEnvExplosion;

inline struct CFootstepControlOffsets {
	DWORD m_source;
	DWORD m_destination;
} CFootstepControl;

inline struct CParticleSystemOffsets {
	DWORD m_szSnapshotFileName;
	DWORD m_bActive;
	DWORD m_bFrozen;
	DWORD m_flFreezeTransitionDuration;
	DWORD m_nStopType;
	DWORD m_bAnimateDuringGameplayPause;
	DWORD m_iEffectIndex;
	DWORD m_flStartTime;
	DWORD m_flPreSimTime;
	DWORD m_vServerControlPoints;
	DWORD m_iServerControlPointAssignments;
	DWORD m_hControlPointEnts;
	DWORD m_bNoSave;
	DWORD m_bNoFreeze;
	DWORD m_bNoRamp;
	DWORD m_bStartActive;
	DWORD m_iszEffectName;
	DWORD m_iszControlPointNames;
	DWORD m_nDataCP;
	DWORD m_vecDataCPValue;
	DWORD m_nTintCP;
	DWORD m_clrTint;
} CParticleSystem;

inline struct CTriggerBrushOffsets {
	DWORD m_OnStartTouch;
	DWORD m_OnEndTouch;
	DWORD m_OnUse;
	DWORD m_iInputFilter;
	DWORD m_iDontMessageParent;
} CTriggerBrush;

inline struct CSoundAreaEntityBaseOffsets {
	DWORD m_bDisabled;
	DWORD m_iszSoundAreaType;
	DWORD m_vPos;
} CSoundAreaEntityBase;

inline struct CBeamOffsets {
	DWORD m_flFrameRate;
	DWORD m_flHDRColorScale;
	DWORD m_flFireTime;
	DWORD m_flDamage;
	DWORD m_nNumBeamEnts;
	DWORD m_hBaseMaterial;
	DWORD m_nHaloIndex;
	DWORD m_nBeamType;
	DWORD m_nBeamFlags;
	DWORD m_hAttachEntity;
	DWORD m_nAttachIndex;
	DWORD m_fWidth;
	DWORD m_fEndWidth;
	DWORD m_fFadeLength;
	DWORD m_fHaloScale;
	DWORD m_fAmplitude;
	DWORD m_fStartFrame;
	DWORD m_fSpeed;
	DWORD m_flFrame;
	DWORD m_nClipStyle;
	DWORD m_bTurnedOff;
	DWORD m_vecEndPos;
	DWORD m_hEndEntity;
	DWORD m_nDissolveType;
} CBeam;

inline struct CLogicEventListenerOffsets {
	DWORD m_strEventName;
	DWORD m_bIsEnabled;
	DWORD m_nTeam;
	DWORD m_OnEventFired;
} CLogicEventListener;

inline struct CBasePlayerPawnOffsets {
	DWORD m_pWeaponServices;
	DWORD m_pItemServices;
	DWORD m_pAutoaimServices;
	DWORD m_pObserverServices;
	DWORD m_pWaterServices;
	DWORD m_pUseServices;
	DWORD m_pFlashlightServices;
	DWORD m_pCameraServices;
	DWORD m_pMovementServices;
	DWORD m_ServerViewAngleChanges;
	DWORD v_angle;
	DWORD v_anglePrevious;
	DWORD m_iHideHUD;
	DWORD m_skybox3d;
	DWORD m_fTimeLastHurt;
	DWORD m_flDeathTime;
	DWORD m_fNextSuicideTime;
	DWORD m_fInitHUD;
	DWORD m_pExpresser;
	DWORD m_hController;
	DWORD m_hDefaultController;
	DWORD m_fHltvReplayDelay;
	DWORD m_fHltvReplayEnd;
	DWORD m_iHltvReplayEntity;
	DWORD m_sndOpvarLatchData;
} CBasePlayerPawn;

inline struct CMathColorBlendOffsets {
	DWORD m_flInMin;
	DWORD m_flInMax;
	DWORD m_OutColor1;
	DWORD m_OutColor2;
	DWORD m_OutValue;
} CMathColorBlend;

inline struct CScriptNavBlockerOffsets {
	DWORD m_vExtent;
} CScriptNavBlocker;

inline struct CTriggerActiveWeaponDetectOffsets {
	DWORD m_OnTouchedActiveWeapon;
	DWORD m_iszWeaponClassName;
} CTriggerActiveWeaponDetect;

inline struct CPlayerSprayDecalOffsets {
	DWORD m_nUniqueID;
	DWORD m_unAccountID;
	DWORD m_unTraceID;
	DWORD m_rtGcTime;
	DWORD m_vecEndPos;
	DWORD m_vecStart;
	DWORD m_vecLeft;
	DWORD m_vecNormal;
	DWORD m_nPlayer;
	DWORD m_nEntity;
	DWORD m_nHitbox;
	DWORD m_flCreationTime;
	DWORD m_nTintID;
	DWORD m_nVersion;
	DWORD m_ubSignature;
} CPlayerSprayDecal;

inline struct CEconEntityOffsets {
	DWORD m_AttributeManager;
	DWORD m_OriginalOwnerXuidLow;
	DWORD m_OriginalOwnerXuidHigh;
	DWORD m_nFallbackPaintKit;
	DWORD m_nFallbackSeed;
	DWORD m_flFallbackWear;
	DWORD m_nFallbackStatTrak;
	DWORD m_hOldProvidee;
	DWORD m_iOldOwnerClass;
} CEconEntity;

inline struct CTankTargetChangeOffsets {
	DWORD m_newTarget;
	DWORD m_newTargetName;
} CTankTargetChange;

inline struct CLogicDistanceCheckOffsets {
	DWORD m_iszEntityA;
	DWORD m_iszEntityB;
	DWORD m_flZone1Distance;
	DWORD m_flZone2Distance;
	DWORD m_InZone1;
	DWORD m_InZone2;
	DWORD m_InZone3;
} CLogicDistanceCheck;

inline struct CEnvCombinedLightProbeVolumeOffsets {
	DWORD m_Entity_Color;
	DWORD m_Entity_flBrightness;
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} CEnvCombinedLightProbeVolume;

inline struct CLogicDistanceAutosaveOffsets {
	DWORD m_iszTargetEntity;
	DWORD m_flDistanceToPlayer;
	DWORD m_bForceNewLevelUnit;
	DWORD m_bCheckCough;
	DWORD m_bThinkDangerous;
	DWORD m_flDangerousTime;
} CLogicDistanceAutosave;

inline struct CLogicBranchOffsets {
	DWORD m_bInValue;
	DWORD m_Listeners;
	DWORD m_OnTrue;
	DWORD m_OnFalse;
} CLogicBranch;

inline struct CPulseCell_Outflow_ScriptedSequenceOffsets {
	DWORD m_szSyncGroup;
	DWORD m_nExpectedNumSequencesInSyncGroup;
	DWORD m_bEnsureOnNavmeshOnFinish;
	DWORD m_bDontTeleportAtEnd;
	DWORD m_bDisallowInterrupts;
	DWORD m_scriptedSequenceDataMain;
	DWORD m_vecAdditionalActors;
	DWORD m_OnFinished;
	DWORD m_OnCanceled;
	DWORD m_Triggers;
} CPulseCell_Outflow_ScriptedSequence;

inline struct CFuncTrackChangeOffsets {
	DWORD m_trackTop;
	DWORD m_trackBottom;
	DWORD m_train;
	DWORD m_trackTopName;
	DWORD m_trackBottomName;
	DWORD m_trainName;
	DWORD m_code;
	DWORD m_targetState;
	DWORD m_use;
} CFuncTrackChange;

inline struct CFuncTrackTrainOffsets {
	DWORD m_ppath;
	DWORD m_length;
	DWORD m_vPosPrev;
	DWORD m_angPrev;
	DWORD m_controlMins;
	DWORD m_controlMaxs;
	DWORD m_lastBlockPos;
	DWORD m_lastBlockTick;
	DWORD m_flVolume;
	DWORD m_flBank;
	DWORD m_oldSpeed;
	DWORD m_flBlockDamage;
	DWORD m_height;
	DWORD m_maxSpeed;
	DWORD m_dir;
	DWORD m_iszSoundMove;
	DWORD m_iszSoundMovePing;
	DWORD m_iszSoundStart;
	DWORD m_iszSoundStop;
	DWORD m_strPathTarget;
	DWORD m_flMoveSoundMinDuration;
	DWORD m_flMoveSoundMaxDuration;
	DWORD m_flNextMoveSoundTime;
	DWORD m_flMoveSoundMinPitch;
	DWORD m_flMoveSoundMaxPitch;
	DWORD m_eOrientationType;
	DWORD m_eVelocityType;
	DWORD m_OnStart;
	DWORD m_OnNext;
	DWORD m_OnArrivedAtDestinationNode;
	DWORD m_bManualSpeedChanges;
	DWORD m_flDesiredSpeed;
	DWORD m_flSpeedChangeTime;
	DWORD m_flAccelSpeed;
	DWORD m_flDecelSpeed;
	DWORD m_bAccelToSpeed;
	DWORD m_flNextMPSoundTime;
} CFuncTrackTrain;

inline struct CEnvInstructorHintOffsets {
	DWORD m_iszName;
	DWORD m_iszReplace_Key;
	DWORD m_iszHintTargetEntity;
	DWORD m_iTimeout;
	DWORD m_iDisplayLimit;
	DWORD m_iszIcon_Onscreen;
	DWORD m_iszIcon_Offscreen;
	DWORD m_iszCaption;
	DWORD m_iszActivatorCaption;
	DWORD m_Color;
	DWORD m_fIconOffset;
	DWORD m_fRange;
	DWORD m_iPulseOption;
	DWORD m_iAlphaOption;
	DWORD m_iShakeOption;
	DWORD m_bStatic;
	DWORD m_bNoOffscreen;
	DWORD m_bForceCaption;
	DWORD m_iInstanceType;
	DWORD m_bSuppressRest;
	DWORD m_iszBinding;
	DWORD m_bAllowNoDrawTarget;
	DWORD m_bAutoStart;
	DWORD m_bLocalPlayerOnly;
} CEnvInstructorHint;

inline struct CEnvWindOffsets {
	DWORD m_EnvWindShared;
} CEnvWind;

inline struct CSoundEventPathCornerEntityOffsets {
	DWORD m_iszPathCorner;
	DWORD m_iCountMax;
	DWORD m_flDistanceMax;
	DWORD m_flDistMaxSqr;
	DWORD m_flDotProductMax;
	DWORD m_bPlaying;
	DWORD m_vecCornerPairsNetworked;
} CSoundEventPathCornerEntity;

inline struct CDynamicNavConnectionsVolumeOffsets {
	DWORD m_iszConnectionTarget;
	DWORD m_vecConnections;
	DWORD m_sTransitionType;
	DWORD m_bConnectionsEnabled;
	DWORD m_flTargetAreaSearchRadius;
	DWORD m_flUpdateDistance;
	DWORD m_flMaxConnectionDistance;
} CDynamicNavConnectionsVolume;

inline struct CConstraintAnchorOffsets {
	DWORD m_massScale;
} CConstraintAnchor;

inline struct CCSPlayerPawnOffsets {
	DWORD m_pBulletServices;
	DWORD m_pHostageServices;
	DWORD m_pBuyServices;
	DWORD m_pActionTrackingServices;
	DWORD m_pRadioServices;
	DWORD m_pDamageReactServices;
	DWORD m_nCharacterDefIndex;
	DWORD m_bHasFemaleVoice;
	DWORD m_strVOPrefix;
	DWORD m_szLastPlaceName;
	DWORD m_bInHostageResetZone;
	DWORD m_bInBuyZone;
	DWORD m_TouchingBuyZones;
	DWORD m_bWasInBuyZone;
	DWORD m_bInHostageRescueZone;
	DWORD m_bInBombZone;
	DWORD m_bWasInHostageRescueZone;
	DWORD m_iRetakesOffering;
	DWORD m_iRetakesOfferingCard;
	DWORD m_bRetakesHasDefuseKit;
	DWORD m_bRetakesMVPLastRound;
	DWORD m_iRetakesMVPBoostItem;
	DWORD m_RetakesMVPBoostExtraUtility;
	DWORD m_flHealthShotBoostExpirationTime;
	DWORD m_flLandingTimeSeconds;
	DWORD m_aimPunchAngle;
	DWORD m_aimPunchAngleVel;
	DWORD m_aimPunchTickBase;
	DWORD m_aimPunchTickFraction;
	DWORD m_aimPunchCache;
	DWORD m_bIsBuyMenuOpen;
	DWORD m_lastLandTime;
	DWORD m_bOnGroundLastTick;
	DWORD m_iPlayerLocked;
	DWORD m_flTimeOfLastInjury;
	DWORD m_flNextSprayDecalTime;
	DWORD m_bNextSprayDecalTimeExpedited;
	DWORD m_nRagdollDamageBone;
	DWORD m_vRagdollDamageForce;
	DWORD m_vRagdollDamagePosition;
	DWORD m_szRagdollDamageWeaponName;
	DWORD m_bRagdollDamageHeadshot;
	DWORD m_vRagdollServerOrigin;
	DWORD m_EconGloves;
	DWORD m_nEconGlovesChanged;
	DWORD m_qDeathEyeAngles;
	DWORD m_bSkipOneHeadConstraintUpdate;
	DWORD m_bLeftHanded;
	DWORD m_fSwitchedHandednessTime;
	DWORD m_flViewmodelOffsetX;
	DWORD m_flViewmodelOffsetY;
	DWORD m_flViewmodelOffsetZ;
	DWORD m_flViewmodelFOV;
	DWORD m_bIsWalking;
	DWORD m_fLastGivenDefuserTime;
	DWORD m_fLastGivenBombTime;
	DWORD m_flDealtDamageToEnemyMostRecentTimestamp;
	DWORD m_iDisplayHistoryBits;
	DWORD m_flLastAttackedTeammate;
	DWORD m_allowAutoFollowTime;
	DWORD m_bResetArmorNextSpawn;
	DWORD m_nLastKillerIndex;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bIsScoped;
	DWORD m_bResumeZoom;
	DWORD m_bIsDefusing;
	DWORD m_bIsGrabbingHostage;
	DWORD m_iBlockingUseActionInProgress;
	DWORD m_flEmitSoundTime;
	DWORD m_bInNoDefuseArea;
	DWORD m_iBombSiteIndex;
	DWORD m_nWhichBombZone;
	DWORD m_bInBombZoneTrigger;
	DWORD m_bWasInBombZoneTrigger;
	DWORD m_iShotsFired;
	DWORD m_flFlinchStack;
	DWORD m_flVelocityModifier;
	DWORD m_flHitHeading;
	DWORD m_nHitBodyPart;
	DWORD m_vecTotalBulletForce;
	DWORD m_bWaitForNoAttack;
	DWORD m_ignoreLadderJumpTime;
	DWORD m_bKilledByHeadshot;
	DWORD m_LastHitBox;
	DWORD m_pBot;
	DWORD m_bBotAllowActive;
	DWORD m_thirdPersonHeading;
	DWORD m_flSlopeDropOffset;
	DWORD m_flSlopeDropHeight;
	DWORD m_vHeadConstraintOffset;
	DWORD m_nLastPickupPriority;
	DWORD m_flLastPickupPriorityTime;
	DWORD m_ArmorValue;
	DWORD m_unCurrentEquipmentValue;
	DWORD m_unRoundStartEquipmentValue;
	DWORD m_unFreezetimeEndEquipmentValue;
	DWORD m_iLastWeaponFireUsercmd;
	DWORD m_bIsSpawning;
	DWORD m_iDeathFlags;
	DWORD m_bHasDeathInfo;
	DWORD m_flDeathInfoTime;
	DWORD m_vecDeathInfoOrigin;
	DWORD m_vecPlayerPatchEconIndices;
	DWORD m_GunGameImmunityColor;
	DWORD m_grenadeParameterStashTime;
	DWORD m_bGrenadeParametersStashed;
	DWORD m_angStashedShootAngles;
	DWORD m_vecStashedGrenadeThrowPosition;
	DWORD m_vecStashedVelocity;
	DWORD m_angShootAngleHistory;
	DWORD m_vecThrowPositionHistory;
	DWORD m_vecVelocityHistory;
	DWORD m_PredictedDamageTags;
	DWORD m_nHighestAppliedDamageTagTick;
	DWORD m_bCommittingSuicideOnTeamChange;
	DWORD m_wasNotKilledNaturally;
	DWORD m_fImmuneToGunGameDamageTime;
	DWORD m_bGunGameImmunity;
	DWORD m_fMolotovDamageTime;
	DWORD m_angEyeAngles;
} CCSPlayerPawn;

inline struct CEnvLightProbeVolumeOffsets {
	DWORD m_Entity_hLightProbeTexture_AmbientCube;
	DWORD m_Entity_hLightProbeTexture_SDF;
	DWORD m_Entity_hLightProbeTexture_SH2_DC;
	DWORD m_Entity_hLightProbeTexture_SH2_R;
	DWORD m_Entity_hLightProbeTexture_SH2_G;
	DWORD m_Entity_hLightProbeTexture_SH2_B;
	DWORD m_Entity_hLightProbeDirectLightIndicesTexture;
	DWORD m_Entity_hLightProbeDirectLightScalarsTexture;
	DWORD m_Entity_hLightProbeDirectLightShadowsTexture;
	DWORD m_Entity_vBoxMins;
	DWORD m_Entity_vBoxMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_nLightProbeSizeX;
	DWORD m_Entity_nLightProbeSizeY;
	DWORD m_Entity_nLightProbeSizeZ;
	DWORD m_Entity_nLightProbeAtlasX;
	DWORD m_Entity_nLightProbeAtlasY;
	DWORD m_Entity_nLightProbeAtlasZ;
	DWORD m_Entity_bEnabled;
} CEnvLightProbeVolume;

inline struct SpawnPointOffsets {
	DWORD m_iPriority;
	DWORD m_bEnabled;
	DWORD m_nType;
} SpawnPoint;

inline struct CPulseGraphInstance_ServerEntityOffsets {
	DWORD m_hOwner;
	DWORD m_bActivated;
	DWORD m_sNameFixupStaticPrefix;
	DWORD m_sNameFixupParent;
	DWORD m_sNameFixupLocal;
	DWORD m_sProceduralWorldNameForRelays;
} CPulseGraphInstance_ServerEntity;

inline struct CPostProcessingVolumeOffsets {
	DWORD m_hPostSettings;
	DWORD m_flFadeDuration;
	DWORD m_flMinLogExposure;
	DWORD m_flMaxLogExposure;
	DWORD m_flMinExposure;
	DWORD m_flMaxExposure;
	DWORD m_flExposureCompensation;
	DWORD m_flExposureFadeSpeedUp;
	DWORD m_flExposureFadeSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
	DWORD m_bMaster;
	DWORD m_bExposureControl;
} CPostProcessingVolume;

inline struct CPointProximitySensorOffsets {
	DWORD m_bDisabled;
	DWORD m_hTargetEntity;
	DWORD m_Distance;
} CPointProximitySensor;

inline struct CTriggerLookOffsets {
	DWORD m_hLookTarget;
	DWORD m_flFieldOfView;
	DWORD m_flLookTime;
	DWORD m_flLookTimeTotal;
	DWORD m_flLookTimeLast;
	DWORD m_flTimeoutDuration;
	DWORD m_bTimeoutFired;
	DWORD m_bIsLooking;
	DWORD m_b2DFOV;
	DWORD m_bUseVelocity;
	DWORD m_bTestOcclusion;
	DWORD m_bTestAllVisibleOcclusion;
	DWORD m_OnTimeout;
	DWORD m_OnStartLook;
	DWORD m_OnEndLook;
} CTriggerLook;

inline struct CPulseCell_Outflow_PlayVCDOffsets {
	DWORD m_hChoreoScene;
	DWORD m_OnPaused;
	DWORD m_OnResumed;
} CPulseCell_Outflow_PlayVCD;

inline struct CPhysTorqueOffsets {
	DWORD m_axis;
} CPhysTorque;

inline struct CMultiSourceOffsets {
	DWORD m_rgEntities;
	DWORD m_rgTriggered;
	DWORD m_OnTrigger;
	DWORD m_iTotal;
	DWORD m_globalstate;
} CMultiSource;

inline struct CBaseCSGrenadeOffsets {
	DWORD m_bRedraw;
	DWORD m_bIsHeldByPlayer;
	DWORD m_bPinPulled;
	DWORD m_bJumpThrow;
	DWORD m_bThrowAnimating;
	DWORD m_fThrowTime;
	DWORD m_flThrowStrength;
	DWORD m_fDropTime;
	DWORD m_fPinPullTime;
	DWORD m_bJustPulledPin;
	DWORD m_nNextHoldTick;
	DWORD m_flNextHoldFrac;
	DWORD m_hSwitchToWeaponAfterThrow;
} CBaseCSGrenade;

inline struct CLogicAutoOffsets {
	DWORD m_OnMapSpawn;
	DWORD m_OnDemoMapSpawn;
	DWORD m_OnNewGame;
	DWORD m_OnLoadGame;
	DWORD m_OnMapTransition;
	DWORD m_OnBackgroundMap;
	DWORD m_OnMultiNewMap;
	DWORD m_OnMultiNewRound;
	DWORD m_OnVREnabled;
	DWORD m_OnVRNotEnabled;
	DWORD m_globalstate;
} CLogicAuto;

inline struct CPhysicsWireOffsets {
	DWORD m_nDensity;
} CPhysicsWire;

inline struct CMarkupVolumeOffsets {
	DWORD m_bDisabled;
} CMarkupVolume;

inline struct CTriggerRemoveOffsets {
	DWORD m_OnRemove;
} CTriggerRemove;

inline struct CLogicGameEventListenerOffsets {
	DWORD m_OnEventFired;
	DWORD m_iszGameEventName;
	DWORD m_iszGameEventItem;
	DWORD m_bEnabled;
	DWORD m_bStartDisabled;
} CLogicGameEventListener;

inline struct CMarkupVolumeTagged_NavOffsets {
	DWORD m_nScopes;
} CMarkupVolumeTagged_Nav;

inline struct CLogicAutosaveOffsets {
	DWORD m_bForceNewLevelUnit;
	DWORD m_minHitPoints;
	DWORD m_minHitPointsToCommit;
} CLogicAutosave;

inline struct CSingleplayRulesOffsets {
	DWORD m_bSinglePlayerGameEnding;
} CSingleplayRules;

inline struct CEnvWindSharedOffsets {
	DWORD m_flStartTime;
	DWORD m_iWindSeed;
	DWORD m_iMinWind;
	DWORD m_iMaxWind;
	DWORD m_windRadius;
	DWORD m_iMinGust;
	DWORD m_iMaxGust;
	DWORD m_flMinGustDelay;
	DWORD m_flMaxGustDelay;
	DWORD m_flGustDuration;
	DWORD m_iGustDirChange;
	DWORD m_iInitialWindDir;
	DWORD m_flInitialWindSpeed;
	DWORD m_location;
	DWORD m_OnGustStart;
	DWORD m_OnGustEnd;
	DWORD m_hEntOwner;
} CEnvWindShared;

inline struct CPointPrefabOffsets {
	DWORD m_targetMapName;
	DWORD m_forceWorldGroupID;
	DWORD m_associatedRelayTargetName;
	DWORD m_fixupNames;
	DWORD m_bLoadDynamic;
	DWORD m_associatedRelayEntity;
} CPointPrefab;

inline struct CEnvInstructorVRHintOffsets {
	DWORD m_iszName;
	DWORD m_iszHintTargetEntity;
	DWORD m_iTimeout;
	DWORD m_iszCaption;
	DWORD m_iszStartSound;
	DWORD m_iLayoutFileType;
	DWORD m_iszCustomLayoutFile;
	DWORD m_iAttachType;
	DWORD m_flHeightOffset;
} CEnvInstructorVRHint;

inline struct CCSGameRulesProxyOffsets {
	DWORD m_pGameRules;
} CCSGameRulesProxy;

inline struct CEnvGlobalOffsets {
	DWORD m_outCounter;
	DWORD m_globalstate;
	DWORD m_triggermode;
	DWORD m_initialstate;
	DWORD m_counter;
} CEnvGlobal;

inline struct CPlatTriggerOffsets {
	DWORD m_pPlatform;
} CPlatTrigger;

inline struct CSceneEntityOffsets {
	DWORD m_iszSceneFile;
	DWORD m_iszTarget1;
	DWORD m_iszTarget2;
	DWORD m_iszTarget3;
	DWORD m_iszTarget4;
	DWORD m_iszTarget5;
	DWORD m_iszTarget6;
	DWORD m_iszTarget7;
	DWORD m_iszTarget8;
	DWORD m_hTarget1;
	DWORD m_hTarget2;
	DWORD m_hTarget3;
	DWORD m_hTarget4;
	DWORD m_hTarget5;
	DWORD m_hTarget6;
	DWORD m_hTarget7;
	DWORD m_hTarget8;
	DWORD m_sTargetAttachment;
	DWORD m_bIsPlayingBack;
	DWORD m_bPaused;
	DWORD m_bMultiplayer;
	DWORD m_bAutogenerated;
	DWORD m_flForceClientTime;
	DWORD m_flCurrentTime;
	DWORD m_flFrameTime;
	DWORD m_bCancelAtNextInterrupt;
	DWORD m_fPitch;
	DWORD m_bAutomated;
	DWORD m_nAutomatedAction;
	DWORD m_flAutomationDelay;
	DWORD m_flAutomationTime;
	DWORD m_nSpeechPriority;
	DWORD m_bPausedViaInput;
	DWORD m_bPauseAtNextInterrupt;
	DWORD m_bWaitingForActor;
	DWORD m_bWaitingForInterrupt;
	DWORD m_bInterruptedActorsScenes;
	DWORD m_bBreakOnNonIdle;
	DWORD m_bSceneFinished;
	DWORD m_hActorList;
	DWORD m_hRemoveActorList;
	DWORD m_nSceneStringIndex;
	DWORD m_OnStart;
	DWORD m_OnCompletion;
	DWORD m_OnCanceled;
	DWORD m_OnPaused;
	DWORD m_OnResumed;
	DWORD m_hInterruptScene;
	DWORD m_nInterruptCount;
	DWORD m_bSceneMissing;
	DWORD m_bInterrupted;
	DWORD m_bCompletedEarly;
	DWORD m_bInterruptSceneFinished;
	DWORD m_bRestoring;
	DWORD m_hNotifySceneCompletion;
	DWORD m_hListManagers;
	DWORD m_iszSoundName;
	DWORD m_iszSequenceName;
	DWORD m_hActor;
	DWORD m_hActivator;
	DWORD m_BusyActor;
	DWORD m_iPlayerDeathBehavior;
} CSceneEntity;

inline struct CTonemapController2Offsets {
	DWORD m_flAutoExposureMin;
	DWORD m_flAutoExposureMax;
	DWORD m_flExposureAdaptationSpeedUp;
	DWORD m_flExposureAdaptationSpeedDown;
	DWORD m_flTonemapEVSmoothingRange;
} CTonemapController2;

inline struct CMapSharedEnvironmentOffsets {
	DWORD m_targetMapName;
} CMapSharedEnvironment;

inline struct CPhysMagnetOffsets {
	DWORD m_OnMagnetAttach;
	DWORD m_OnMagnetDetach;
	DWORD m_massScale;
	DWORD m_forceLimit;
	DWORD m_torqueLimit;
	DWORD m_MagnettedEntities;
	DWORD m_bActive;
	DWORD m_bHasHitSomething;
	DWORD m_flTotalMass;
	DWORD m_flRadius;
	DWORD m_flNextSuckTime;
	DWORD m_iMaxObjectsAttached;
} CPhysMagnet;

inline struct CGameGibManagerOffsets {
	DWORD m_bAllowNewGibs;
	DWORD m_iCurrentMaxPieces;
	DWORD m_iMaxPieces;
	DWORD m_iLastFrame;
} CGameGibManager;

inline struct CSkyCameraOffsets {
	DWORD m_skyboxData;
	DWORD m_skyboxSlotToken;
	DWORD m_bUseAngles;
	DWORD m_pNext;
} CSkyCamera;

inline struct CPhysPulleyOffsets {
	DWORD m_position2;
	DWORD m_offset;
	DWORD m_addLength;
	DWORD m_gearRatio;
} CPhysPulley;

inline struct CWeaponBaseItemOffsets {
	DWORD m_bSequenceInProgress;
	DWORD m_bRedraw;
} CWeaponBaseItem;

inline struct CCommentaryAutoOffsets {
	DWORD m_OnCommentaryNewGame;
	DWORD m_OnCommentaryMidGame;
	DWORD m_OnCommentaryMultiplayerSpawn;
} CCommentaryAuto;

inline struct CPulseCell_Outflow_ListenForEntityOutput__CursorState_tOffsets {
	DWORD m_entity;
} CPulseCell_Outflow_ListenForEntityOutput__CursorState_t;

inline struct CSoundStackSaveOffsets {
	DWORD m_iszStackName;
} CSoundStackSave;

inline struct CLogicMeasureMovementOffsets {
	DWORD m_strMeasureTarget;
	DWORD m_strMeasureReference;
	DWORD m_strTargetReference;
	DWORD m_hMeasureTarget;
	DWORD m_hMeasureReference;
	DWORD m_hTarget;
	DWORD m_hTargetReference;
	DWORD m_flScale;
	DWORD m_nMeasureType;
} CLogicMeasureMovement;

inline struct CC4Offsets {
	DWORD m_vecLastValidPlayerHeldPosition;
	DWORD m_vecLastValidDroppedPosition;
	DWORD m_bDoValidDroppedPositionCheck;
	DWORD m_bStartedArming;
	DWORD m_fArmedTime;
	DWORD m_bBombPlacedAnimation;
	DWORD m_bIsPlantingViaUse;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bPlayedArmingBeeps;
	DWORD m_bBombPlanted;
} CC4;

inline struct CEnvDetailControllerOffsets {
	DWORD m_flFadeStartDist;
	DWORD m_flFadeEndDist;
} CEnvDetailController;

inline struct CCSPlayerPawnBaseOffsets {
	DWORD m_CTouchExpansionComponent;
	DWORD m_pPingServices;
	DWORD m_blindUntilTime;
	DWORD m_blindStartTime;
	DWORD m_iPlayerState;
	DWORD m_bRespawning;
	DWORD m_bHasMovedSinceSpawn;
	DWORD m_iNumSpawns;
	DWORD m_flIdleTimeSinceLastAction;
	DWORD m_fNextRadarUpdateTime;
	DWORD m_flFlashDuration;
	DWORD m_flFlashMaxAlpha;
	DWORD m_flProgressBarStartTime;
	DWORD m_iProgressBarDuration;
	DWORD m_hOriginalController;
} CCSPlayerPawnBase;

inline struct CRuleEntityOffsets {
	DWORD m_iszMaster;
} CRuleEntity;

inline struct CPhysThrusterOffsets {
	DWORD m_localOrigin;
} CPhysThruster;

inline struct CInfoPlayerStartOffsets {
	DWORD m_bDisabled;
	DWORD m_bIsMaster;
	DWORD m_pPawnSubclass;
} CInfoPlayerStart;

inline struct CEntityFlameOffsets {
	DWORD m_hEntAttached;
	DWORD m_bCheapEffect;
	DWORD m_flSize;
	DWORD m_bUseHitboxes;
	DWORD m_iNumHitboxFires;
	DWORD m_flHitboxFireScale;
	DWORD m_flLifetime;
	DWORD m_hAttacker;
	DWORD m_flDirectDamagePerSecond;
	DWORD m_iCustomDamageType;
} CEntityFlame;

inline struct CBasePlatTrainOffsets {
	DWORD m_NoiseMoving;
	DWORD m_NoiseArrived;
	DWORD m_volume;
	DWORD m_flTWidth;
	DWORD m_flTLength;
} CBasePlatTrain;

inline struct CPointTeleportOffsets {
	DWORD m_vSaveOrigin;
	DWORD m_vSaveAngles;
	DWORD m_bTeleportParentedEntities;
	DWORD m_bTeleportUseCurrentAngle;
} CPointTeleport;

inline struct CTriggerGameEventOffsets {
	DWORD m_strStartTouchEventName;
	DWORD m_strEndTouchEventName;
	DWORD m_strTriggerID;
} CTriggerGameEvent;

inline struct CMessageEntityOffsets {
	DWORD m_radius;
	DWORD m_messageText;
	DWORD m_drawText;
	DWORD m_bDeveloperOnly;
	DWORD m_bEnabled;
} CMessageEntity;

inline struct CEnvEntityIgniterOffsets {
	DWORD m_flLifetime;
} CEnvEntityIgniter;

inline struct CMarkupVolumeTagged_NavGameOffsets {
	DWORD m_nScopes;
	DWORD m_bFloodFillAttribute;
	DWORD m_bSplitNavSpace;
} CMarkupVolumeTagged_NavGame;

inline struct CMultiLightProxyOffsets {
	DWORD m_iszLightNameFilter;
	DWORD m_iszLightClassFilter;
	DWORD m_flLightRadiusFilter;
	DWORD m_flBrightnessDelta;
	DWORD m_bPerformScreenFade;
	DWORD m_flTargetBrightnessMultiplier;
	DWORD m_flCurrentBrightnessMultiplier;
	DWORD m_vecLights;
} CMultiLightProxy;

inline struct CEconWearableOffsets {
	DWORD m_nForceSkin;
	DWORD m_bAlwaysAllow;
} CEconWearable;

inline struct CFuncLadderOffsets {
	DWORD m_vecLadderDir;
	DWORD m_Dismounts;
	DWORD m_vecLocalTop;
	DWORD m_vecPlayerMountPositionTop;
	DWORD m_vecPlayerMountPositionBottom;
	DWORD m_flAutoRideSpeed;
	DWORD m_bDisabled;
	DWORD m_bFakeLadder;
	DWORD m_bHasSlack;
	DWORD m_surfacePropName;
	DWORD m_OnPlayerGotOnLadder;
	DWORD m_OnPlayerGotOffLadder;
} CFuncLadder;

inline struct CFogControllerOffsets {
	DWORD m_fog;
	DWORD m_bUseAngles;
	DWORD m_iChangedVariables;
} CFogController;

inline struct CItemOffsets {
	DWORD m_OnPlayerTouch;
	DWORD m_OnPlayerPickup;
	DWORD m_bActivateWhenAtRest;
	DWORD m_OnCacheInteraction;
	DWORD m_OnGlovePulled;
	DWORD m_vOriginalSpawnOrigin;
	DWORD m_vOriginalSpawnAngles;
	DWORD m_bPhysStartAsleep;
} CItem;

inline struct CTriggerPushOffsets {
	DWORD m_angPushEntitySpace;
	DWORD m_vecPushDirEntitySpace;
	DWORD m_bTriggerOnStartTouch;
	DWORD m_bUsePathSimple;
	DWORD m_iszPathSimpleName;
	DWORD m_PathSimple;
	DWORD m_splinePushType;
} CTriggerPush;

inline struct CPointAngularVelocitySensorOffsets {
	DWORD m_hTargetEntity;
	DWORD m_flThreshold;
	DWORD m_nLastCompareResult;
	DWORD m_nLastFireResult;
	DWORD m_flFireTime;
	DWORD m_flFireInterval;
	DWORD m_flLastAngVelocity;
	DWORD m_lastOrientation;
	DWORD m_vecAxis;
	DWORD m_bUseHelper;
	DWORD m_AngularVelocity;
	DWORD m_OnLessThan;
	DWORD m_OnLessThanOrEqualTo;
	DWORD m_OnGreaterThan;
	DWORD m_OnGreaterThanOrEqualTo;
	DWORD m_OnEqualTo;
} CPointAngularVelocitySensor;

inline struct CPlayerVisibilityOffsets {
	DWORD m_flVisibilityStrength;
	DWORD m_flFogDistanceMultiplier;
	DWORD m_flFogMaxDensityMultiplier;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
} CPlayerVisibility;

inline struct CPulseCell_Step_FollowEntityOffsets {
	DWORD m_ParamBoneOrAttachName;
	DWORD m_ParamBoneOrAttachNameChild;
} CPulseCell_Step_FollowEntity;

inline struct CBasePlayerWeaponOffsets {
	DWORD m_nNextPrimaryAttackTick;
	DWORD m_flNextPrimaryAttackTickRatio;
	DWORD m_nNextSecondaryAttackTick;
	DWORD m_flNextSecondaryAttackTickRatio;
	DWORD m_iClip1;
	DWORD m_iClip2;
	DWORD m_pReserveAmmo;
	DWORD m_OnPlayerUse;
} CBasePlayerWeapon;

inline struct CPhysForceOffsets {
	DWORD m_nameAttach;
	DWORD m_force;
	DWORD m_forceTime;
	DWORD m_attachedObject;
	DWORD m_wasRestored;
	DWORD m_integrator;
} CPhysForce;

inline struct CScenePayloadVDataOffsets {
	DWORD m_sSceneFile;
} CScenePayloadVData;

inline struct CKeepUprightOffsets {
	DWORD m_worldGoalAxis;
	DWORD m_localTestAxis;
	DWORD m_nameAttach;
	DWORD m_attachedObject;
	DWORD m_angularLimit;
	DWORD m_bActive;
	DWORD m_bDampAllRotation;
} CKeepUpright;

inline struct CEnvVolumetricFogControllerOffsets {
	DWORD m_flScattering;
	DWORD m_TintColor;
	DWORD m_flAnisotropy;
	DWORD m_flFadeSpeed;
	DWORD m_flDrawDistance;
	DWORD m_flFadeInStart;
	DWORD m_flFadeInEnd;
	DWORD m_flIndirectStrength;
	DWORD m_nVolumeDepth;
	DWORD m_fFirstVolumeSliceThickness;
	DWORD m_nIndirectTextureDimX;
	DWORD m_nIndirectTextureDimY;
	DWORD m_nIndirectTextureDimZ;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bActive;
	DWORD m_flStartAnisoTime;
	DWORD m_flStartScatterTime;
	DWORD m_flStartDrawDistanceTime;
	DWORD m_flStartAnisotropy;
	DWORD m_flStartScattering;
	DWORD m_flStartDrawDistance;
	DWORD m_flDefaultAnisotropy;
	DWORD m_flDefaultScattering;
	DWORD m_flDefaultDrawDistance;
	DWORD m_bStartDisabled;
	DWORD m_bEnableIndirect;
	DWORD m_bIsMaster;
	DWORD m_hFogIndirectTexture;
	DWORD m_nForceRefreshCount;
	DWORD m_fNoiseSpeed;
	DWORD m_fNoiseStrength;
	DWORD m_vNoiseScale;
	DWORD m_fWindSpeed;
	DWORD m_vWindDirection;
	DWORD m_bFirstTime;
} CEnvVolumetricFogController;

inline struct CBotOffsets {
	DWORD m_pController;
	DWORD m_pPlayer;
	DWORD m_bHasSpawned;
	DWORD m_id;
	DWORD m_isRunning;
	DWORD m_isCrouching;
	DWORD m_forwardSpeed;
	DWORD m_leftSpeed;
	DWORD m_verticalSpeed;
	DWORD m_buttonFlags;
	DWORD m_jumpTimestamp;
	DWORD m_viewForward;
	DWORD m_postureStackIndex;
} CBot;

inline struct CPulseCell_Step_SetAnimGraphParamOffsets {
	DWORD m_ParamName;
} CPulseCell_Step_SetAnimGraphParam;

inline struct CPhysLengthOffsets {
	DWORD m_offset;
	DWORD m_vecAttach;
	DWORD m_addLength;
	DWORD m_minLength;
	DWORD m_totalLength;
} CPhysLength;

inline struct CTeamOffsets {
	DWORD m_aPlayerControllers;
	DWORD m_aPlayers;
	DWORD m_iScore;
	DWORD m_szTeamname;
} CTeam;

inline struct CLogicNPCCounterAABBOffsets {
	DWORD m_vDistanceOuterMins;
	DWORD m_vDistanceOuterMaxs;
	DWORD m_vOuterMins;
	DWORD m_vOuterMaxs;
} CLogicNPCCounterAABB;

inline struct CChickenOffsets {
	DWORD m_AttributeManager;
	DWORD m_updateTimer;
	DWORD m_stuckAnchor;
	DWORD m_stuckTimer;
	DWORD m_collisionStuckTimer;
	DWORD m_isOnGround;
	DWORD m_vFallVelocity;
	DWORD m_desiredActivity;
	DWORD m_currentActivity;
	DWORD m_activityTimer;
	DWORD m_turnRate;
	DWORD m_fleeFrom;
	DWORD m_moveRateThrottleTimer;
	DWORD m_startleTimer;
	DWORD m_vocalizeTimer;
	DWORD m_flWhenZombified;
	DWORD m_jumpedThisFrame;
	DWORD m_leader;
	DWORD m_reuseTimer;
	DWORD m_hasBeenUsed;
	DWORD m_jumpTimer;
	DWORD m_flLastJumpTime;
	DWORD m_bInJump;
	DWORD m_repathTimer;
	DWORD m_vecPathGoal;
	DWORD m_flActiveFollowStartTime;
	DWORD m_followMinuteTimer;
	DWORD m_BlockDirectionTimer;
} CChicken;

inline struct CPhysicsPropRespawnableOffsets {
	DWORD m_vOriginalSpawnOrigin;
	DWORD m_vOriginalSpawnAngles;
	DWORD m_vOriginalMins;
	DWORD m_vOriginalMaxs;
	DWORD m_flRespawnDuration;
} CPhysicsPropRespawnable;

inline struct CEnvBeamOffsets {
	DWORD m_active;
	DWORD m_spriteTexture;
	DWORD m_iszStartEntity;
	DWORD m_iszEndEntity;
	DWORD m_life;
	DWORD m_boltWidth;
	DWORD m_noiseAmplitude;
	DWORD m_speed;
	DWORD m_restrike;
	DWORD m_iszSpriteName;
	DWORD m_frameStart;
	DWORD m_vEndPointWorld;
	DWORD m_vEndPointRelative;
	DWORD m_radius;
	DWORD m_TouchType;
	DWORD m_iFilterName;
	DWORD m_hFilter;
	DWORD m_iszDecal;
	DWORD m_OnTouchedByEntity;
} CEnvBeam;

inline struct CTonemapTriggerOffsets {
	DWORD m_tonemapControllerName;
	DWORD m_hTonemapController;
} CTonemapTrigger;

inline struct CEnvShakeOffsets {
	DWORD m_limitToEntity;
	DWORD m_Amplitude;
	DWORD m_Frequency;
	DWORD m_Duration;
	DWORD m_Radius;
	DWORD m_stopTime;
	DWORD m_nextShake;
	DWORD m_currentAmp;
	DWORD m_maxForce;
	DWORD m_shakeCallback;
} CEnvShake;

inline struct CSoundOpvarSetAutoRoomEntityOffsets {
	DWORD m_traceResults;
	DWORD m_doorwayPairs;
	DWORD m_flSize;
	DWORD m_flHeightTolerance;
	DWORD m_flSizeSqr;
} CSoundOpvarSetAutoRoomEntity;

inline struct CPulseCell_Outflow_ListenForEntityOutputOffsets {
	DWORD m_OnFired;
	DWORD m_OnCanceled;
	DWORD m_strEntityOutput;
	DWORD m_strEntityOutputParam;
	DWORD m_bListenUntilCanceled;
} CPulseCell_Outflow_ListenForEntityOutput;

inline struct CRotatorTargetOffsets {
	DWORD m_OnArrivedAt;
	DWORD m_eSpace;
} CRotatorTarget;

inline struct CPhysicsEntitySolverOffsets {
	DWORD m_hMovingEntity;
	DWORD m_hPhysicsBlocker;
	DWORD m_separationDuration;
	DWORD m_cancelTime;
} CPhysicsEntitySolver;

inline struct CLogicCollisionPairOffsets {
	DWORD m_nameAttach1;
	DWORD m_nameAttach2;
	DWORD m_includeHierarchy;
	DWORD m_supportMultipleEntitiesWithSameName;
	DWORD m_disabled;
	DWORD m_succeeded;
} CLogicCollisionPair;

inline struct CTestEffectOffsets {
	DWORD m_iLoop;
	DWORD m_iBeam;
	DWORD m_pBeam;
	DWORD m_flBeamTime;
	DWORD m_flStartTime;
} CTestEffect;

inline struct CPulseCell_Outflow_ScriptedSequence__CursorState_tOffsets {
	DWORD m_scriptedSequence;
} CPulseCell_Outflow_ScriptedSequence__CursorState_t;

inline struct CPropDoorRotatingOffsets {
	DWORD m_vecAxis;
	DWORD m_flDistance;
	DWORD m_eSpawnPosition;
	DWORD m_eOpenDirection;
	DWORD m_eCurrentOpenDirection;
	DWORD m_eDefaultCheckDirection;
	DWORD m_flAjarAngle;
	DWORD m_angRotationAjarDeprecated;
	DWORD m_angRotationClosed;
	DWORD m_angRotationOpenForward;
	DWORD m_angRotationOpenBack;
	DWORD m_angGoal;
	DWORD m_vecForwardBoundsMin;
	DWORD m_vecForwardBoundsMax;
	DWORD m_vecBackBoundsMin;
	DWORD m_vecBackBoundsMax;
	DWORD m_bAjarDoorShouldntAlwaysOpen;
	DWORD m_hEntityBlocker;
} CPropDoorRotating;

inline struct CEnvParticleGlowOffsets {
	DWORD m_flAlphaScale;
	DWORD m_flRadiusScale;
	DWORD m_flSelfIllumScale;
	DWORD m_ColorTint;
	DWORD m_hTextureOverride;
} CEnvParticleGlow;

inline struct CMathRemapOffsets {
	DWORD m_flInMin;
	DWORD m_flInMax;
	DWORD m_flOut1;
	DWORD m_flOut2;
	DWORD m_flOldInValue;
	DWORD m_bEnabled;
	DWORD m_OutValue;
	DWORD m_OnRoseAboveMin;
	DWORD m_OnRoseAboveMax;
	DWORD m_OnFellBelowMin;
	DWORD m_OnFellBelowMax;
} CMathRemap;

inline struct CSoundOpvarSetOBBWindEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
	DWORD m_vDistanceMins;
	DWORD m_vDistanceMaxs;
	DWORD m_flWindMin;
	DWORD m_flWindMax;
	DWORD m_flWindMapMin;
	DWORD m_flWindMapMax;
} CSoundOpvarSetOBBWindEntity;

inline struct CScriptTriggerOnceOffsets {
	DWORD m_vExtent;
} CScriptTriggerOnce;

inline struct CTriggerTeleportOffsets {
	DWORD m_iLandmark;
	DWORD m_bUseLandmarkAngles;
	DWORD m_bMirrorPlayer;
	DWORD m_bCheckDestIfClearForPlayer;
} CTriggerTeleport;

inline struct CFuncWallOffsets {
	DWORD m_nState;
} CFuncWall;

inline struct CBtActionAimOffsets {
	DWORD m_szSensorInputKey;
	DWORD m_szAimReadyKey;
	DWORD m_flZoomCooldownTimestamp;
	DWORD m_bDoneAiming;
	DWORD m_flLerpStartTime;
	DWORD m_flNextLookTargetLerpTime;
	DWORD m_flPenaltyReductionRatio;
	DWORD m_NextLookTarget;
	DWORD m_AimTimer;
	DWORD m_SniperHoldTimer;
	DWORD m_FocusIntervalTimer;
	DWORD m_bAcquired;
} CBtActionAim;

inline struct CCSGO_TeamPreviewCharacterPositionOffsets {
	DWORD m_nVariant;
	DWORD m_nRandom;
	DWORD m_nOrdinal;
	DWORD m_sWeaponName;
	DWORD m_xuid;
	DWORD m_agentItem;
	DWORD m_glovesItem;
	DWORD m_weaponItem;
} CCSGO_TeamPreviewCharacterPosition;

inline struct CMessageOffsets {
	DWORD m_iszMessage;
	DWORD m_MessageVolume;
	DWORD m_MessageAttenuation;
	DWORD m_Radius;
	DWORD m_sNoise;
	DWORD m_OnShowMessage;
} CMessage;

inline struct CPointVelocitySensorOffsets {
	DWORD m_hTargetEntity;
	DWORD m_vecAxis;
	DWORD m_bEnabled;
	DWORD m_fPrevVelocity;
	DWORD m_flAvgInterval;
	DWORD m_Velocity;
} CPointVelocitySensor;

inline struct CHostageOffsets {
	DWORD m_OnHostageBeginGrab;
	DWORD m_OnFirstPickedUp;
	DWORD m_OnDroppedNotRescued;
	DWORD m_OnRescued;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_uiHostageSpawnExclusionGroupMask;
	DWORD m_nHostageSpawnRandomFactor;
	DWORD m_bRemove;
	DWORD m_vel;
	DWORD m_isRescued;
	DWORD m_jumpedThisFrame;
	DWORD m_nHostageState;
	DWORD m_leader;
	DWORD m_lastLeader;
	DWORD m_reuseTimer;
	DWORD m_hasBeenUsed;
	DWORD m_accel;
	DWORD m_isRunning;
	DWORD m_isCrouching;
	DWORD m_jumpTimer;
	DWORD m_isWaitingForLeader;
	DWORD m_repathTimer;
	DWORD m_inhibitDoorTimer;
	DWORD m_inhibitObstacleAvoidanceTimer;
	DWORD m_wiggleTimer;
	DWORD m_isAdjusted;
	DWORD m_bHandsHaveBeenCut;
	DWORD m_hHostageGrabber;
	DWORD m_fLastGrabTime;
	DWORD m_vecPositionWhenStartedDroppingToGround;
	DWORD m_vecGrabbedPos;
	DWORD m_flRescueStartTime;
	DWORD m_flGrabSuccessTime;
	DWORD m_flDropStartTime;
	DWORD m_nApproachRewardPayouts;
	DWORD m_nPickupEventCount;
	DWORD m_vecSpawnGroundPos;
	DWORD m_vecHostageResetPosition;
} CHostage;

inline struct CScriptTriggerMultipleOffsets {
	DWORD m_vExtent;
} CScriptTriggerMultiple;

inline struct CEnvSparkOffsets {
	DWORD m_flDelay;
	DWORD m_nMagnitude;
	DWORD m_nTrailLength;
	DWORD m_nType;
	DWORD m_OnSpark;
} CEnvSpark;

inline struct CChangeLevelOffsets {
	DWORD m_sMapName;
	DWORD m_sLandmarkName;
	DWORD m_OnChangeLevel;
	DWORD m_bTouched;
	DWORD m_bNoTouch;
	DWORD m_bNewChapter;
	DWORD m_bOnChangeLevelFired;
} CChangeLevel;

inline struct CBaseButtonOffsets {
	DWORD m_angMoveEntitySpace;
	DWORD m_fStayPushed;
	DWORD m_fRotating;
	DWORD m_ls;
	DWORD m_sUseSound;
	DWORD m_sLockedSound;
	DWORD m_sUnlockedSound;
	DWORD m_sOverrideAnticipationName;
	DWORD m_bLocked;
	DWORD m_bDisabled;
	DWORD m_flUseLockedTime;
	DWORD m_bSolidBsp;
	DWORD m_OnDamaged;
	DWORD m_OnPressed;
	DWORD m_OnUseLocked;
	DWORD m_OnIn;
	DWORD m_OnOut;
	DWORD m_nState;
	DWORD m_hConstraint;
	DWORD m_hConstraintParent;
	DWORD m_bForceNpcExclude;
	DWORD m_sGlowEntity;
	DWORD m_glowEntity;
	DWORD m_usable;
	DWORD m_szDisplayText;
} CBaseButton;

inline struct CPulseCell_SoundEventStartOffsets {
	DWORD m_Type;
} CPulseCell_SoundEventStart;

inline struct CBaseGrenadeOffsets {
	DWORD m_OnPlayerPickup;
	DWORD m_OnExplode;
	DWORD m_bHasWarnedAI;
	DWORD m_bIsSmokeGrenade;
	DWORD m_bIsLive;
	DWORD m_DmgRadius;
	DWORD m_flDetonateTime;
	DWORD m_flWarnAITime;
	DWORD m_flDamage;
	DWORD m_iszBounceSound;
	DWORD m_ExplosionSound;
	DWORD m_hThrower;
	DWORD m_flNextAttack;
	DWORD m_hOriginalThrower;
} CBaseGrenade;

inline struct CColorCorrectionVolumeOffsets {
	DWORD m_MaxWeight;
	DWORD m_FadeDuration;
	DWORD m_Weight;
	DWORD m_lookupFilename;
	DWORD m_LastEnterWeight;
	DWORD m_LastEnterTime;
	DWORD m_LastExitWeight;
	DWORD m_LastExitTime;
} CColorCorrectionVolume;

inline struct CFogVolumeOffsets {
	DWORD m_fogName;
	DWORD m_postProcessName;
	DWORD m_colorCorrectionName;
	DWORD m_bDisabled;
	DWORD m_bInFogVolumesList;
} CFogVolume;

inline struct CFuncRotatingOffsets {
	DWORD m_OnStopped;
	DWORD m_OnStarted;
	DWORD m_OnReachedStart;
	DWORD m_localRotationVector;
	DWORD m_flFanFriction;
	DWORD m_flAttenuation;
	DWORD m_flVolume;
	DWORD m_flTargetSpeed;
	DWORD m_flMaxSpeed;
	DWORD m_flBlockDamage;
	DWORD m_NoiseRunning;
	DWORD m_bReversed;
	DWORD m_bAccelDecel;
	DWORD m_prevLocalAngles;
	DWORD m_angStart;
	DWORD m_bStopAtStartPos;
	DWORD m_vecClientOrigin;
	DWORD m_vecClientAngles;
} CFuncRotating;

inline struct CTimerEntityOffsets {
	DWORD m_OnTimer;
	DWORD m_OnTimerHigh;
	DWORD m_OnTimerLow;
	DWORD m_iDisabled;
	DWORD m_flInitialDelay;
	DWORD m_flRefireTime;
	DWORD m_bUpDownState;
	DWORD m_iUseRandomTime;
	DWORD m_bPauseAfterFiring;
	DWORD m_flLowerRandomBound;
	DWORD m_flUpperRandomBound;
	DWORD m_flRemainingTime;
	DWORD m_bPaused;
} CTimerEntity;

inline struct CBtActionMoveToOffsets {
	DWORD m_szDestinationInputKey;
	DWORD m_szHidingSpotInputKey;
	DWORD m_szThreatInputKey;
	DWORD m_vecDestination;
	DWORD m_bAutoLookAdjust;
	DWORD m_bComputePath;
	DWORD m_flDamagingAreasPenaltyCost;
	DWORD m_CheckApproximateCornersTimer;
	DWORD m_CheckHighPriorityItem;
	DWORD m_RepathTimer;
	DWORD m_flArrivalEpsilon;
	DWORD m_flAdditionalArrivalEpsilon2D;
	DWORD m_flHidingSpotCheckDistanceThreshold;
	DWORD m_flNearestAreaDistanceThreshold;
} CBtActionMoveTo;

inline struct CFuncMonitorOffsets {
	DWORD m_targetCamera;
	DWORD m_nResolutionEnum;
	DWORD m_bRenderShadows;
	DWORD m_bUseUniqueColorTarget;
	DWORD m_brushModelName;
	DWORD m_hTargetCamera;
	DWORD m_bEnabled;
	DWORD m_bDraw3DSkybox;
	DWORD m_bStartEnabled;
} CFuncMonitor;

inline struct CInfoVisibilityBoxOffsets {
	DWORD m_nMode;
	DWORD m_vBoxSize;
	DWORD m_bEnabled;
} CInfoVisibilityBox;

inline struct CGunTargetOffsets {
	DWORD m_on;
	DWORD m_hTargetEnt;
	DWORD m_OnDeath;
} CGunTarget;

inline struct CSoundEventConeEntityOffsets {
	DWORD m_flEmitterAngle;
	DWORD m_flSweetSpotAngle;
	DWORD m_flAttenMin;
	DWORD m_flAttenMax;
	DWORD m_iszParameterName;
} CSoundEventConeEntity;

inline struct CDecoyProjectileOffsets {
	DWORD m_nDecoyShotTick;
	DWORD m_shotsRemaining;
	DWORD m_fExpireTime;
	DWORD m_decoyWeaponDefIndex;
} CDecoyProjectile;

inline struct CSoundOpvarSetPathCornerEntityOffsets {
	DWORD m_bUseParentedPath;
	DWORD m_flDistMinSqr;
	DWORD m_flDistMaxSqr;
	DWORD m_iszPathCornerEntityName;
} CSoundOpvarSetPathCornerEntity;

inline struct CPathMoverEntitySpawnerOffsets {
	DWORD m_szSpawnTemplates;
	DWORD m_nSpawnIndex;
	DWORD m_hPathMover;
	DWORD m_flSpawnFrequencySeconds;
	DWORD m_flSpawnFrequencyDistToNearestMover;
	DWORD m_mapSpawnedMoverTemplates;
	DWORD m_nMaxActive;
	DWORD m_flLastSpawnTime;
	DWORD m_bEnabled;
} CPathMoverEntitySpawner;

inline struct CCSWeaponBaseGunOffsets {
	DWORD m_zoomLevel;
	DWORD m_iBurstShotsRemaining;
	DWORD m_silencedModelIndex;
	DWORD m_inPrecache;
	DWORD m_bNeedsBoltAction;
	DWORD m_nRevolverCylinderIdx;
	DWORD m_bSkillReloadAvailable;
	DWORD m_bSkillReloadLiftedReloadKey;
	DWORD m_bSkillBoltInterruptAvailable;
	DWORD m_bSkillBoltLiftedFireKey;
} CCSWeaponBaseGun;

inline struct CLogicActiveAutosaveOffsets {
	DWORD m_TriggerHitPoints;
	DWORD m_flTimeToTrigger;
	DWORD m_flStartTime;
	DWORD m_flDangerousTime;
} CLogicActiveAutosave;

inline struct CMathCounterOffsets {
	DWORD m_flMin;
	DWORD m_flMax;
	DWORD m_bHitMin;
	DWORD m_bHitMax;
	DWORD m_bDisabled;
	DWORD m_OutValue;
	DWORD m_OnGetValue;
	DWORD m_OnHitMin;
	DWORD m_OnHitMax;
	DWORD m_OnChangedFromMin;
	DWORD m_OnChangedFromMax;
} CMathCounter;

inline struct CAttributeContainerOffsets {
	DWORD m_Item;
} CAttributeContainer;

inline struct CCSPlaceOffsets {
	DWORD m_name;
} CCSPlace;

inline struct CFilterContextOffsets {
	DWORD m_iFilterContext;
} CFilterContext;

inline struct CEnvDecalOffsets {
	DWORD m_hDecalMaterial;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDepth;
	DWORD m_nRenderOrder;
	DWORD m_bProjectOnWorld;
	DWORD m_bProjectOnCharacters;
	DWORD m_bProjectOnWater;
	DWORD m_flDepthSortBias;
} CEnvDecal;

inline struct CEnvVolumetricFogVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_bIndirectUseLPVs;
	DWORD m_flStrength;
	DWORD m_nFalloffShape;
	DWORD m_flFalloffExponent;
	DWORD m_flHeightFogDepth;
	DWORD m_fHeightFogEdgeWidth;
	DWORD m_fIndirectLightStrength;
	DWORD m_fSunLightStrength;
	DWORD m_fNoiseStrength;
	DWORD m_TintColor;
	DWORD m_bOverrideTintColor;
	DWORD m_bOverrideIndirectLightStrength;
	DWORD m_bOverrideSunLightStrength;
	DWORD m_bOverrideNoiseStrength;
} CEnvVolumetricFogVolume;

inline struct CItemGenericOffsets {
	DWORD m_bHasTriggerRadius;
	DWORD m_bHasPickupRadius;
	DWORD m_flPickupRadiusSqr;
	DWORD m_flTriggerRadiusSqr;
	DWORD m_flLastPickupCheck;
	DWORD m_bPlayerCounterListenerAdded;
	DWORD m_bPlayerInTriggerRadius;
	DWORD m_hSpawnParticleEffect;
	DWORD m_pAmbientSoundEffect;
	DWORD m_bAutoStartAmbientSound;
	DWORD m_pSpawnScriptFunction;
	DWORD m_hPickupParticleEffect;
	DWORD m_pPickupSoundEffect;
	DWORD m_pPickupScriptFunction;
	DWORD m_hTimeoutParticleEffect;
	DWORD m_pTimeoutSoundEffect;
	DWORD m_pTimeoutScriptFunction;
	DWORD m_pPickupFilterName;
	DWORD m_hPickupFilter;
	DWORD m_OnPickup;
	DWORD m_OnTimeout;
	DWORD m_OnTriggerStartTouch;
	DWORD m_OnTriggerTouch;
	DWORD m_OnTriggerEndTouch;
	DWORD m_pAllowPickupScriptFunction;
	DWORD m_flPickupRadius;
	DWORD m_flTriggerRadius;
	DWORD m_pTriggerSoundEffect;
	DWORD m_bGlowWhenInTrigger;
	DWORD m_glowColor;
	DWORD m_bUseable;
	DWORD m_hTriggerHelper;
} CItemGeneric;

inline struct CPointValueRemapperOffsets {
	DWORD m_bDisabled;
	DWORD m_bUpdateOnClient;
	DWORD m_nInputType;
	DWORD m_iszRemapLineStartName;
	DWORD m_iszRemapLineEndName;
	DWORD m_hRemapLineStart;
	DWORD m_hRemapLineEnd;
	DWORD m_flMaximumChangePerSecond;
	DWORD m_flDisengageDistance;
	DWORD m_flEngageDistance;
	DWORD m_bRequiresUseKey;
	DWORD m_nOutputType;
	DWORD m_iszOutputEntityName;
	DWORD m_iszOutputEntity2Name;
	DWORD m_iszOutputEntity3Name;
	DWORD m_iszOutputEntity4Name;
	DWORD m_hOutputEntities;
	DWORD m_nHapticsType;
	DWORD m_nMomentumType;
	DWORD m_flMomentumModifier;
	DWORD m_flSnapValue;
	DWORD m_flCurrentMomentum;
	DWORD m_nRatchetType;
	DWORD m_flRatchetOffset;
	DWORD m_flInputOffset;
	DWORD m_bEngaged;
	DWORD m_bFirstUpdate;
	DWORD m_flPreviousValue;
	DWORD m_flPreviousUpdateTickTime;
	DWORD m_vecPreviousTestPoint;
	DWORD m_hUsingPlayer;
	DWORD m_flCustomOutputValue;
	DWORD m_iszSoundEngage;
	DWORD m_iszSoundDisengage;
	DWORD m_iszSoundReachedValueZero;
	DWORD m_iszSoundReachedValueOne;
	DWORD m_iszSoundMovingLoop;
	DWORD m_Position;
	DWORD m_PositionDelta;
	DWORD m_OnReachedValueZero;
	DWORD m_OnReachedValueOne;
	DWORD m_OnReachedValueCustom;
	DWORD m_OnEngage;
	DWORD m_OnDisengage;
} CPointValueRemapper;

inline struct CBtNodeConditionInactiveOffsets {
	DWORD m_flRoundStartThresholdSeconds;
	DWORD m_flSensorInactivityThresholdSeconds;
	DWORD m_SensorInactivityTimer;
} CBtNodeConditionInactive;

inline struct CRagdollPropOffsets {
	DWORD m_ragdoll;
	DWORD m_bStartDisabled;
	DWORD m_ragEnabled;
	DWORD m_ragPos;
	DWORD m_ragAngles;
	DWORD m_lastUpdateTickCount;
	DWORD m_allAsleep;
	DWORD m_bFirstCollisionAfterLaunch;
	DWORD m_hDamageEntity;
	DWORD m_hKiller;
	DWORD m_hPhysicsAttacker;
	DWORD m_flLastPhysicsInfluenceTime;
	DWORD m_flFadeOutStartTime;
	DWORD m_flFadeTime;
	DWORD m_vecLastOrigin;
	DWORD m_flAwakeTime;
	DWORD m_flLastOriginChangeTime;
	DWORD m_strOriginClassName;
	DWORD m_strSourceClassName;
	DWORD m_bHasBeenPhysgunned;
	DWORD m_bAllowStretch;
	DWORD m_flBlendWeight;
	DWORD m_flDefaultFadeScale;
	DWORD m_ragdollMins;
	DWORD m_ragdollMaxs;
	DWORD m_bShouldDeleteActivationRecord;
} CRagdollProp;

inline struct CFuncTrainOffsets {
	DWORD m_hCurrentTarget;
	DWORD m_activated;
	DWORD m_hEnemy;
	DWORD m_flBlockDamage;
	DWORD m_flNextBlockTime;
	DWORD m_iszLastTarget;
} CFuncTrain;

inline struct CAI_ChangeHintGroupOffsets {
	DWORD m_iSearchType;
	DWORD m_strSearchName;
	DWORD m_strNewHintGroup;
	DWORD m_flRadius;
} CAI_ChangeHintGroup;

inline struct CPhysHingeOffsets {
	DWORD m_soundInfo;
	DWORD m_NotifyMinLimitReached;
	DWORD m_NotifyMaxLimitReached;
	DWORD m_bAtMinLimit;
	DWORD m_bAtMaxLimit;
	DWORD m_hinge;
	DWORD m_hingeFriction;
	DWORD m_systemLoadScale;
	DWORD m_bIsAxisLocal;
	DWORD m_flMinRotation;
	DWORD m_flMaxRotation;
	DWORD m_flInitialRotation;
	DWORD m_flMotorFrequency;
	DWORD m_flMotorDampingRatio;
	DWORD m_flAngleSpeed;
	DWORD m_flAngleSpeedThreshold;
	DWORD m_flLimitsDebugVisRotation;
	DWORD m_OnStartMoving;
	DWORD m_OnStopMoving;
} CPhysHinge;

inline struct CBuyZoneOffsets {
	DWORD m_LegacyTeamNum;
} CBuyZone;

inline struct CPointGiveAmmoOffsets {
	DWORD m_pActivator;
} CPointGiveAmmo;

inline struct CPointCameraOffsets {
	DWORD m_FOV;
	DWORD m_Resolution;
	DWORD m_bFogEnable;
	DWORD m_FogColor;
	DWORD m_flFogStart;
	DWORD m_flFogEnd;
	DWORD m_flFogMaxDensity;
	DWORD m_bActive;
	DWORD m_bUseScreenAspectRatio;
	DWORD m_flAspectRatio;
	DWORD m_bNoSky;
	DWORD m_fBrightness;
	DWORD m_flZFar;
	DWORD m_flZNear;
	DWORD m_bCanHLTVUse;
	DWORD m_bAlignWithParent;
	DWORD m_bDofEnabled;
	DWORD m_flDofNearBlurry;
	DWORD m_flDofNearCrisp;
	DWORD m_flDofFarCrisp;
	DWORD m_flDofFarBlurry;
	DWORD m_flDofTiltToGround;
	DWORD m_TargetFOV;
	DWORD m_DegreesPerSecond;
	DWORD m_bIsOn;
	DWORD m_pNext;
} CPointCamera;

inline struct CEntityDissolveOffsets {
	DWORD m_flFadeInStart;
	DWORD m_flFadeInLength;
	DWORD m_flFadeOutModelStart;
	DWORD m_flFadeOutModelLength;
	DWORD m_flFadeOutStart;
	DWORD m_flFadeOutLength;
	DWORD m_flStartTime;
	DWORD m_nDissolveType;
	DWORD m_vDissolverOrigin;
	DWORD m_nMagnitude;
} CEntityDissolve;

inline struct CCSGameRulesOffsets {
	DWORD m_bFreezePeriod;
	DWORD m_bWarmupPeriod;
	DWORD m_fWarmupPeriodEnd;
	DWORD m_fWarmupPeriodStart;
	DWORD m_bTerroristTimeOutActive;
	DWORD m_bCTTimeOutActive;
	DWORD m_flTerroristTimeOutRemaining;
	DWORD m_flCTTimeOutRemaining;
	DWORD m_nTerroristTimeOuts;
	DWORD m_nCTTimeOuts;
	DWORD m_bTechnicalTimeOut;
	DWORD m_bMatchWaitingForResume;
	DWORD m_iFreezeTime;
	DWORD m_iRoundTime;
	DWORD m_fMatchStartTime;
	DWORD m_fRoundStartTime;
	DWORD m_flRestartRoundTime;
	DWORD m_bGameRestart;
	DWORD m_flGameStartTime;
	DWORD m_timeUntilNextPhaseStarts;
	DWORD m_gamePhase;
	DWORD m_totalRoundsPlayed;
	DWORD m_nRoundsPlayedThisPhase;
	DWORD m_nOvertimePlaying;
	DWORD m_iHostagesRemaining;
	DWORD m_bAnyHostageReached;
	DWORD m_bMapHasBombTarget;
	DWORD m_bMapHasRescueZone;
	DWORD m_bMapHasBuyZone;
	DWORD m_bIsQueuedMatchmaking;
	DWORD m_nQueuedMatchmakingMode;
	DWORD m_bIsValveDS;
	DWORD m_bLogoMap;
	DWORD m_bPlayAllStepSoundsOnServer;
	DWORD m_iSpectatorSlotCount;
	DWORD m_MatchDevice;
	DWORD m_bHasMatchStarted;
	DWORD m_nNextMapInMapgroup;
	DWORD m_szTournamentEventName;
	DWORD m_szTournamentEventStage;
	DWORD m_szMatchStatTxt;
	DWORD m_szTournamentPredictionsTxt;
	DWORD m_nTournamentPredictionsPct;
	DWORD m_flCMMItemDropRevealStartTime;
	DWORD m_flCMMItemDropRevealEndTime;
	DWORD m_bIsDroppingItems;
	DWORD m_bIsQuestEligible;
	DWORD m_bIsHltvActive;
	DWORD m_bBombPlanted;
	DWORD m_arrProhibitedItemIndices;
	DWORD m_arrTournamentActiveCasterAccounts;
	DWORD m_numBestOfMaps;
	DWORD m_nHalloweenMaskListSeed;
	DWORD m_bBombDropped;
	DWORD m_iRoundWinStatus;
	DWORD m_eRoundWinReason;
	DWORD m_bTCantBuy;
	DWORD m_bCTCantBuy;
	DWORD m_iMatchStats_RoundResults;
	DWORD m_iMatchStats_PlayersAlive_CT;
	DWORD m_iMatchStats_PlayersAlive_T;
	DWORD m_TeamRespawnWaveTimes;
	DWORD m_flNextRespawnWave;
	DWORD m_vMinimapMins;
	DWORD m_vMinimapMaxs;
	DWORD m_MinimapVerticalSectionHeights;
	DWORD m_ullLocalMatchID;
	DWORD m_nEndMatchMapGroupVoteTypes;
	DWORD m_nEndMatchMapGroupVoteOptions;
	DWORD m_nEndMatchMapVoteWinner;
	DWORD m_iNumConsecutiveCTLoses;
	DWORD m_iNumConsecutiveTerroristLoses;
	DWORD m_bHasHostageBeenTouched;
	DWORD m_flIntermissionStartTime;
	DWORD m_flIntermissionEndTime;
	DWORD m_bLevelInitialized;
	DWORD m_iTotalRoundsPlayed;
	DWORD m_iUnBalancedRounds;
	DWORD m_endMatchOnRoundReset;
	DWORD m_endMatchOnThink;
	DWORD m_iNumTerrorist;
	DWORD m_iNumCT;
	DWORD m_iNumSpawnableTerrorist;
	DWORD m_iNumSpawnableCT;
	DWORD m_arrSelectedHostageSpawnIndices;
	DWORD m_nSpawnPointsRandomSeed;
	DWORD m_bFirstConnected;
	DWORD m_bCompleteReset;
	DWORD m_bPickNewTeamsOnReset;
	DWORD m_bScrambleTeamsOnRestart;
	DWORD m_bSwapTeamsOnRestart;
	DWORD m_nEndMatchTiedVotes;
	DWORD m_bNeedToAskPlayersForContinueVote;
	DWORD m_numQueuedMatchmakingAccounts;
	DWORD m_fAvgPlayerRank;
	DWORD m_pQueuedMatchmakingReservationString;
	DWORD m_numTotalTournamentDrops;
	DWORD m_numSpectatorsCountMax;
	DWORD m_numSpectatorsCountMaxTV;
	DWORD m_numSpectatorsCountMaxLnk;
	DWORD m_nCTsAliveAtFreezetimeEnd;
	DWORD m_nTerroristsAliveAtFreezetimeEnd;
	DWORD m_bForceTeamChangeSilent;
	DWORD m_bLoadingRoundBackupData;
	DWORD m_nMatchInfoShowType;
	DWORD m_flMatchInfoDecidedTime;
	DWORD mTeamDMLastWinningTeamNumber;
	DWORD mTeamDMLastThinkTime;
	DWORD m_flTeamDMLastAnnouncementTime;
	DWORD m_iAccountTerrorist;
	DWORD m_iAccountCT;
	DWORD m_iSpawnPointCount_Terrorist;
	DWORD m_iSpawnPointCount_CT;
	DWORD m_iMaxNumTerrorists;
	DWORD m_iMaxNumCTs;
	DWORD m_iLoserBonusMostRecentTeam;
	DWORD m_tmNextPeriodicThink;
	DWORD m_bVoiceWonMatchBragFired;
	DWORD m_fWarmupNextChatNoticeTime;
	DWORD m_iHostagesRescued;
	DWORD m_iHostagesTouched;
	DWORD m_flNextHostageAnnouncement;
	DWORD m_bNoTerroristsKilled;
	DWORD m_bNoCTsKilled;
	DWORD m_bNoEnemiesKilled;
	DWORD m_bCanDonateWeapons;
	DWORD m_firstKillTime;
	DWORD m_firstBloodTime;
	DWORD m_hostageWasInjured;
	DWORD m_hostageWasKilled;
	DWORD m_bVoteCalled;
	DWORD m_bServerVoteOnReset;
	DWORD m_flVoteCheckThrottle;
	DWORD m_bBuyTimeEnded;
	DWORD m_nLastFreezeEndBeep;
	DWORD m_bTargetBombed;
	DWORD m_bBombDefused;
	DWORD m_bMapHasBombZone;
	DWORD m_vecMainCTSpawnPos;
	DWORD m_CTSpawnPointsMasterList;
	DWORD m_TerroristSpawnPointsMasterList;
	DWORD m_bRespawningAllRespawnablePlayers;
	DWORD m_iNextCTSpawnPoint;
	DWORD m_flCTSpawnPointUsedTime;
	DWORD m_iNextTerroristSpawnPoint;
	DWORD m_flTerroristSpawnPointUsedTime;
	DWORD m_CTSpawnPoints;
	DWORD m_TerroristSpawnPoints;
	DWORD m_bIsUnreservedGameServer;
	DWORD m_fAutobalanceDisplayTime;
	DWORD m_bAllowWeaponSwitch;
	DWORD m_bRoundTimeWarningTriggered;
	DWORD m_phaseChangeAnnouncementTime;
	DWORD m_fNextUpdateTeamClanNamesTime;
	DWORD m_flLastThinkTime;
	DWORD m_fAccumulatedRoundOffDamage;
	DWORD m_nShorthandedBonusLastEvalRound;
	DWORD m_nMatchAbortedEarlyReason;
	DWORD m_bHasTriggeredRoundStartMusic;
	DWORD m_bSwitchingTeamsAtRoundReset;
	DWORD m_pGameModeRules;
	DWORD m_BtGlobalBlackboard;
	DWORD m_hPlayerResource;
	DWORD m_RetakeRules;
	DWORD m_arrTeamUniqueKillWeaponsMatch;
	DWORD m_bTeamLastKillUsedUniqueWeaponMatch;
	DWORD m_nMatchEndCount;
	DWORD m_nTTeamIntroVariant;
	DWORD m_nCTTeamIntroVariant;
	DWORD m_bTeamIntroPeriod;
	DWORD m_fTeamIntroPeriodEnd;
	DWORD m_bPlayedTeamIntroVO;
	DWORD m_iRoundEndWinnerTeam;
	DWORD m_eRoundEndReason;
	DWORD m_bRoundEndShowTimerDefend;
	DWORD m_iRoundEndTimerTime;
	DWORD m_sRoundEndFunFactToken;
	DWORD m_iRoundEndFunFactPlayerSlot;
	DWORD m_iRoundEndFunFactData1;
	DWORD m_iRoundEndFunFactData2;
	DWORD m_iRoundEndFunFactData3;
	DWORD m_sRoundEndMessage;
	DWORD m_iRoundEndPlayerCount;
	DWORD m_bRoundEndNoMusic;
	DWORD m_iRoundEndLegacy;
	DWORD m_nRoundEndCount;
	DWORD m_iRoundStartRoundNumber;
	DWORD m_nRoundStartCount;
	DWORD m_flLastPerfSampleTime;
} CCSGameRules;

inline struct CBaseCSGrenadeProjectileOffsets {
	DWORD m_vInitialPosition;
	DWORD m_vInitialVelocity;
	DWORD m_nBounces;
	DWORD m_nExplodeEffectIndex;
	DWORD m_nExplodeEffectTickBegin;
	DWORD m_vecExplodeEffectOrigin;
	DWORD m_flSpawnTime;
	DWORD m_unOGSExtraFlags;
	DWORD m_bDetonationRecorded;
	DWORD m_nItemIndex;
	DWORD m_vecOriginalSpawnLocation;
	DWORD m_flLastBounceSoundTime;
	DWORD m_vecGrenadeSpin;
	DWORD m_vecLastHitSurfaceNormal;
	DWORD m_nTicksAtZeroVelocity;
	DWORD m_bHasEverHitEnemy;
} CBaseCSGrenadeProjectile;

inline struct CPhysConstraintOffsets {
	DWORD m_nameAttach1;
	DWORD m_nameAttach2;
	DWORD m_hAttach1;
	DWORD m_hAttach2;
	DWORD m_nameAttachment1;
	DWORD m_nameAttachment2;
	DWORD m_breakSound;
	DWORD m_forceLimit;
	DWORD m_torqueLimit;
	DWORD m_minTeleportDistance;
	DWORD m_bSnapObjectPositions;
	DWORD m_bTreatEntity1AsInfiniteMass;
	DWORD m_OnBreak;
} CPhysConstraint;

inline struct CLogicAchievementOffsets {
	DWORD m_bDisabled;
	DWORD m_iszAchievementEventID;
	DWORD m_OnFired;
} CLogicAchievement;

inline struct CCSWeaponBaseOffsets {
	DWORD m_bRemoveable;
	DWORD m_bPlayerAmmoStockOnPickup;
	DWORD m_bRequireUseToTouch;
	DWORD m_iWeaponGameplayAnimState;
	DWORD m_flWeaponGameplayAnimStateTimestamp;
	DWORD m_flInspectCancelCompleteTime;
	DWORD m_bInspectPending;
	DWORD m_bInspectShouldLoop;
	DWORD m_nLastEmptySoundCmdNum;
	DWORD m_bFireOnEmpty;
	DWORD m_OnPlayerPickup;
	DWORD m_weaponMode;
	DWORD m_flTurningInaccuracyDelta;
	DWORD m_vecTurningInaccuracyEyeDirLast;
	DWORD m_flTurningInaccuracy;
	DWORD m_fAccuracyPenalty;
	DWORD m_flLastAccuracyUpdateTime;
	DWORD m_fAccuracySmoothedForZoom;
	DWORD m_iRecoilIndex;
	DWORD m_flRecoilIndex;
	DWORD m_bBurstMode;
	DWORD m_nPostponeFireReadyTicks;
	DWORD m_flPostponeFireReadyFrac;
	DWORD m_bInReload;
	DWORD m_flDroppedAtTime;
	DWORD m_bIsHauledBack;
	DWORD m_bSilencerOn;
	DWORD m_flTimeSilencerSwitchComplete;
	DWORD m_flWeaponActionPlaybackRate;
	DWORD m_iOriginalTeamNumber;
	DWORD m_iMostRecentTeamNumber;
	DWORD m_bDroppedNearBuyZone;
	DWORD m_flNextAttackRenderTimeOffset;
	DWORD m_bCanBePickedUp;
	DWORD m_bUseCanOverrideNextOwnerTouchTime;
	DWORD m_nextOwnerTouchTime;
	DWORD m_nextPrevOwnerTouchTime;
	DWORD m_nextPrevOwnerUseTime;
	DWORD m_hPrevOwner;
	DWORD m_nDropTick;
	DWORD m_bWasActiveWeaponWhenDropped;
	DWORD m_donated;
	DWORD m_fLastShotTime;
	DWORD m_bWasOwnedByCT;
	DWORD m_bWasOwnedByTerrorist;
	DWORD m_numRemoveUnownedWeaponThink;
	DWORD m_IronSightController;
	DWORD m_iIronSightMode;
	DWORD m_flLastLOSTraceFailureTime;
	DWORD m_flWatTickOffset;
	DWORD m_flLastShakeTime;
} CCSWeaponBase;

inline struct CPointClientUIDialogOffsets {
	DWORD m_hActivator;
	DWORD m_bStartEnabled;
} CPointClientUIDialog;

inline struct CLogicLineToEntityOffsets {
	DWORD m_Line;
	DWORD m_SourceName;
	DWORD m_StartEntity;
	DWORD m_EndEntity;
} CLogicLineToEntity;

inline struct CSoundAreaEntitySphereOffsets {
	DWORD m_flRadius;
} CSoundAreaEntitySphere;

inline struct CInfoSpawnGroupLoadUnloadOffsets {
	DWORD m_OnSpawnGroupLoadStarted;
	DWORD m_OnSpawnGroupLoadFinished;
	DWORD m_OnSpawnGroupUnloadStarted;
	DWORD m_OnSpawnGroupUnloadFinished;
	DWORD m_iszSpawnGroupName;
	DWORD m_iszSpawnGroupFilterName;
	DWORD m_iszLandmarkName;
	DWORD m_sFixedSpawnGroupName;
	DWORD m_flTimeoutInterval;
	DWORD m_bAutoActivate;
	DWORD m_bUnloadingStarted;
	DWORD m_bQueueActiveSpawnGroupChange;
	DWORD m_bQueueFinishLoading;
} CInfoSpawnGroupLoadUnload;

inline struct CSoundAreaEntityOrientedBoxOffsets {
	DWORD m_vMin;
	DWORD m_vMax;
} CSoundAreaEntityOrientedBox;

inline struct CPulseCell_Outflow_ListenForAnimgraphTagOffsets {
	DWORD m_OnStart;
	DWORD m_OnEnd;
	DWORD m_OnCanceled;
	DWORD m_TagName;
} CPulseCell_Outflow_ListenForAnimgraphTag;

inline struct CEconItemViewOffsets {
	DWORD m_iItemDefinitionIndex;
	DWORD m_iEntityQuality;
	DWORD m_iEntityLevel;
	DWORD m_iItemID;
	DWORD m_iItemIDHigh;
	DWORD m_iItemIDLow;
	DWORD m_iAccountID;
	DWORD m_iInventoryPosition;
	DWORD m_bInitialized;
	DWORD m_AttributeList;
	DWORD m_NetworkedDynamicAttributes;
	DWORD m_szCustomName;
	DWORD m_szCustomNameOverride;
} CEconItemView;

inline struct CBaseDMStartOffsets {
	DWORD m_Master;
} CBaseDMStart;

inline struct CBaseModelEntityOffsets {
	DWORD m_CRenderComponent;
	DWORD m_CHitboxComponent;
	DWORD m_nDestructiblePartInitialStateDestructed0;
	DWORD m_nDestructiblePartInitialStateDestructed1;
	DWORD m_nDestructiblePartInitialStateDestructed2;
	DWORD m_nDestructiblePartInitialStateDestructed3;
	DWORD m_nDestructiblePartInitialStateDestructed4;
	DWORD m_nDestructiblePartInitialStateDestructed0_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed1_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed2_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed3_PartIndex;
	DWORD m_nDestructiblePartInitialStateDestructed4_PartIndex;
	DWORD m_pDestructiblePartsSystemComponent;
	DWORD m_flDissolveStartTime;
	DWORD m_OnIgnite;
	DWORD m_nRenderMode;
	DWORD m_nRenderFX;
	DWORD m_bAllowFadeInView;
	DWORD m_clrRender;
	DWORD m_vecRenderAttributes;
	DWORD m_bRenderToCubemaps;
	DWORD m_bNoInterpolate;
	DWORD m_Collision;
	DWORD m_Glow;
	DWORD m_flGlowBackfaceMult;
	DWORD m_fadeMinDist;
	DWORD m_fadeMaxDist;
	DWORD m_flFadeScale;
	DWORD m_flShadowStrength;
	DWORD m_nObjectCulling;
	DWORD m_vecViewOffset;
	DWORD m_bvDisabledHitGroups;
} CBaseModelEntity;

inline struct fogplayerparams_tOffsets {
	DWORD m_hCtrl;
	DWORD m_flTransitionTime;
	DWORD m_OldColor;
	DWORD m_flOldStart;
	DWORD m_flOldEnd;
	DWORD m_flOldMaxDensity;
	DWORD m_flOldHDRColorScale;
	DWORD m_flOldFarZ;
	DWORD m_NewColor;
	DWORD m_flNewStart;
	DWORD m_flNewEnd;
	DWORD m_flNewMaxDensity;
	DWORD m_flNewHDRColorScale;
	DWORD m_flNewFarZ;
} fogplayerparams_t;

inline struct CInstancedSceneEntityOffsets {
	DWORD m_hOwner;
	DWORD m_bHadOwner;
	DWORD m_flPostSpeakDelay;
	DWORD m_flPreDelay;
	DWORD m_bIsBackground;
	DWORD m_bRemoveOnCompletion;
	DWORD m_hTarget;
} CInstancedSceneEntity;

inline struct CSoundEventParameterOffsets {
	DWORD m_iszParamName;
	DWORD m_flFloatValue;
} CSoundEventParameter;

inline struct CEnvViewPunchOffsets {
	DWORD m_flRadius;
	DWORD m_angViewPunch;
} CEnvViewPunch;

inline struct CFuncShatterglassOffsets {
	DWORD m_matPanelTransform;
	DWORD m_matPanelTransformWsTemp;
	DWORD m_vecShatterGlassShards;
	DWORD m_PanelSize;
	DWORD m_flLastShatterSoundEmitTime;
	DWORD m_flLastCleanupTime;
	DWORD m_flInitAtTime;
	DWORD m_flGlassThickness;
	DWORD m_flSpawnInvulnerability;
	DWORD m_bBreakSilent;
	DWORD m_bBreakShardless;
	DWORD m_bBroken;
	DWORD m_bGlassNavIgnore;
	DWORD m_bGlassInFrame;
	DWORD m_bStartBroken;
	DWORD m_iInitialDamageType;
	DWORD m_szDamagePositioningEntityName01;
	DWORD m_szDamagePositioningEntityName02;
	DWORD m_szDamagePositioningEntityName03;
	DWORD m_szDamagePositioningEntityName04;
	DWORD m_vInitialDamagePositions;
	DWORD m_vExtraDamagePositions;
	DWORD m_vInitialPanelVertices;
	DWORD m_OnBroken;
	DWORD m_iSurfaceType;
	DWORD m_hMaterialDamageBase;
} CFuncShatterglass;

inline struct CPlantedC4Offsets {
	DWORD m_bBombTicking;
	DWORD m_flC4Blow;
	DWORD m_nBombSite;
	DWORD m_nSourceSoundscapeHash;
	DWORD m_bAbortDetonationBecauseWorldIsFrozen;
	DWORD m_AttributeManager;
	DWORD m_OnBombDefused;
	DWORD m_OnBombBeginDefuse;
	DWORD m_OnBombDefuseAborted;
	DWORD m_bCannotBeDefused;
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
	DWORD m_bHasExploded;
	DWORD m_bBombDefused;
	DWORD m_bTrainingPlacedByPlayer;
	DWORD m_flTimerLength;
	DWORD m_bBeingDefused;
	DWORD m_fLastDefuseTime;
	DWORD m_flDefuseLength;
	DWORD m_flDefuseCountDown;
	DWORD m_hBombDefuser;
	DWORD m_iProgressBarTime;
	DWORD m_bVoiceAlertFired;
	DWORD m_bVoiceAlertPlayed;
	DWORD m_flNextBotBeepTime;
	DWORD m_angCatchUpToPlayerEye;
	DWORD m_flLastSpinDetectionTime;
} CPlantedC4;

inline struct CVoteControllerOffsets {
	DWORD m_iActiveIssueIndex;
	DWORD m_iOnlyTeamToVote;
	DWORD m_nVoteOptionCount;
	DWORD m_nPotentialVotes;
	DWORD m_bIsYesNoVote;
	DWORD m_acceptingVotesTimer;
	DWORD m_executeCommandTimer;
	DWORD m_resetVoteTimer;
	DWORD m_nVotesCast;
	DWORD m_playerHoldingVote;
	DWORD m_playerOverrideForVote;
	DWORD m_nHighestCountIndex;
	DWORD m_potentialIssues;
	DWORD m_VoteOptions;
} CVoteController;

inline struct CPhysImpactOffsets {
	DWORD m_damage;
	DWORD m_distance;
	DWORD m_directionEntityName;
} CPhysImpact;

inline struct CBaseEntityOffsets {
	DWORD m_CBodyComponent;
	DWORD m_NetworkTransmitComponent;
	DWORD m_aThinkFunctions;
	DWORD m_iCurrentThinkContext;
	DWORD m_nLastThinkTick;
	DWORD m_bDisabledContextThinks;
	DWORD m_isSteadyState;
	DWORD m_lastNetworkChange;
	DWORD m_ResponseContexts;
	DWORD m_iszResponseContext;
	DWORD m_iHealth;
	DWORD m_iMaxHealth;
	DWORD m_lifeState;
	DWORD m_flDamageAccumulator;
	DWORD m_bTakesDamage;
	DWORD m_nTakeDamageFlags;
	DWORD m_nPlatformType;
	DWORD m_MoveCollide;
	DWORD m_MoveType;
	DWORD m_nActualMoveType;
	DWORD m_nWaterTouch;
	DWORD m_nSlimeTouch;
	DWORD m_bRestoreInHierarchy;
	DWORD m_target;
	DWORD m_hDamageFilter;
	DWORD m_iszDamageFilterName;
	DWORD m_flMoveDoneTime;
	DWORD m_nSubclassID;
	DWORD m_flAnimTime;
	DWORD m_flSimulationTime;
	DWORD m_flCreateTime;
	DWORD m_bClientSideRagdoll;
	DWORD m_ubInterpolationFrame;
	DWORD m_vPrevVPhysicsUpdatePos;
	DWORD m_iTeamNum;
	DWORD m_iGlobalname;
	DWORD m_iSentToClients;
	DWORD m_flSpeed;
	DWORD m_sUniqueHammerID;
	DWORD m_spawnflags;
	DWORD m_nNextThinkTick;
	DWORD m_nSimulationTick;
	DWORD m_OnKilled;
	DWORD m_fFlags;
	DWORD m_vecAbsVelocity;
	DWORD m_vecVelocity;
	DWORD m_vecBaseVelocity;
	DWORD m_nPushEnumCount;
	DWORD m_pCollision;
	DWORD m_hEffectEntity;
	DWORD m_hOwnerEntity;
	DWORD m_fEffects;
	DWORD m_hGroundEntity;
	DWORD m_nGroundBodyIndex;
	DWORD m_flFriction;
	DWORD m_flElasticity;
	DWORD m_flGravityScale;
	DWORD m_flTimeScale;
	DWORD m_flWaterLevel;
	DWORD m_bGravityDisabled;
	DWORD m_bAnimatedEveryTick;
	DWORD m_flActualGravityScale;
	DWORD m_bGravityActuallyDisabled;
	DWORD m_bDisableLowViolence;
	DWORD m_nWaterType;
	DWORD m_iEFlags;
	DWORD m_OnUser1;
	DWORD m_OnUser2;
	DWORD m_OnUser3;
	DWORD m_OnUser4;
	DWORD m_iInitialTeamNum;
	DWORD m_flNavIgnoreUntilTime;
	DWORD m_vecAngVelocity;
	DWORD m_bNetworkQuantizeOriginAndAngles;
	DWORD m_bLagCompensate;
	DWORD m_pBlocker;
	DWORD m_flLocalTime;
	DWORD m_flVPhysicsUpdateLocalTime;
	DWORD m_nBloodType;
	DWORD m_pPulseGraphInstance;
} CBaseEntity;

inline struct CMarkupVolumeWithRefOffsets {
	DWORD m_bUseRef;
	DWORD m_vRefPosEntitySpace;
	DWORD m_vRefPosWorldSpace;
	DWORD m_flRefDot;
} CMarkupVolumeWithRef;

inline struct CFuncPlatRotOffsets {
	DWORD m_end;
	DWORD m_start;
} CFuncPlatRot;

inline struct CRagdollMagnetOffsets {
	DWORD m_bDisabled;
	DWORD m_radius;
	DWORD m_force;
	DWORD m_axis;
} CRagdollMagnet;

inline struct CSpotlightEndOffsets {
	DWORD m_flLightScale;
	DWORD m_Radius;
	DWORD m_vSpotlightDir;
	DWORD m_vSpotlightOrg;
} CSpotlightEnd;

inline struct CEnvSkyOffsets {
	DWORD m_hSkyMaterial;
	DWORD m_hSkyMaterialLightingOnly;
	DWORD m_bStartDisabled;
	DWORD m_vTintColor;
	DWORD m_vTintColorLightingOnly;
	DWORD m_flBrightnessScale;
	DWORD m_nFogType;
	DWORD m_flFogMinStart;
	DWORD m_flFogMinEnd;
	DWORD m_flFogMaxStart;
	DWORD m_flFogMaxEnd;
	DWORD m_bEnabled;
} CEnvSky;

inline struct CPointAngleSensorOffsets {
	DWORD m_bDisabled;
	DWORD m_nLookAtName;
	DWORD m_hTargetEntity;
	DWORD m_hLookAtEntity;
	DWORD m_flDuration;
	DWORD m_flDotTolerance;
	DWORD m_flFacingTime;
	DWORD m_bFired;
	DWORD m_OnFacingLookat;
	DWORD m_OnNotFacingLookat;
	DWORD m_TargetDir;
	DWORD m_FacingPercentage;
} CPointAngleSensor;

inline struct CEnvWindControllerOffsets {
	DWORD m_EnvWindShared;
	DWORD m_fDirectionVariation;
	DWORD m_fSpeedVariation;
	DWORD m_fTurbulence;
	DWORD m_fVolumeHalfExtentXY;
	DWORD m_fVolumeHalfExtentZ;
	DWORD m_nVolumeResolutionXY;
	DWORD m_nVolumeResolutionZ;
	DWORD m_nClipmapLevels;
	DWORD m_bIsMaster;
	DWORD m_bFirstTime;
} CEnvWindController;

inline struct CGenericConstraintOffsets {
	DWORD m_nLinearMotionX;
	DWORD m_nLinearMotionY;
	DWORD m_nLinearMotionZ;
	DWORD m_flLinearFrequencyX;
	DWORD m_flLinearFrequencyY;
	DWORD m_flLinearFrequencyZ;
	DWORD m_flLinearDampingRatioX;
	DWORD m_flLinearDampingRatioY;
	DWORD m_flLinearDampingRatioZ;
	DWORD m_flMaxLinearImpulseX;
	DWORD m_flMaxLinearImpulseY;
	DWORD m_flMaxLinearImpulseZ;
	DWORD m_flBreakAfterTimeX;
	DWORD m_flBreakAfterTimeY;
	DWORD m_flBreakAfterTimeZ;
	DWORD m_flBreakAfterTimeStartTimeX;
	DWORD m_flBreakAfterTimeStartTimeY;
	DWORD m_flBreakAfterTimeStartTimeZ;
	DWORD m_flBreakAfterTimeThresholdX;
	DWORD m_flBreakAfterTimeThresholdY;
	DWORD m_flBreakAfterTimeThresholdZ;
	DWORD m_flNotifyForceX;
	DWORD m_flNotifyForceY;
	DWORD m_flNotifyForceZ;
	DWORD m_flNotifyForceMinTimeX;
	DWORD m_flNotifyForceMinTimeY;
	DWORD m_flNotifyForceMinTimeZ;
	DWORD m_flNotifyForceLastTimeX;
	DWORD m_flNotifyForceLastTimeY;
	DWORD m_flNotifyForceLastTimeZ;
	DWORD m_bAxisNotifiedX;
	DWORD m_bAxisNotifiedY;
	DWORD m_bAxisNotifiedZ;
	DWORD m_nAngularMotionX;
	DWORD m_nAngularMotionY;
	DWORD m_nAngularMotionZ;
	DWORD m_flAngularFrequencyX;
	DWORD m_flAngularFrequencyY;
	DWORD m_flAngularFrequencyZ;
	DWORD m_flAngularDampingRatioX;
	DWORD m_flAngularDampingRatioY;
	DWORD m_flAngularDampingRatioZ;
	DWORD m_flMaxAngularImpulseX;
	DWORD m_flMaxAngularImpulseY;
	DWORD m_flMaxAngularImpulseZ;
	DWORD m_NotifyForceReachedX;
	DWORD m_NotifyForceReachedY;
	DWORD m_NotifyForceReachedZ;
} CGenericConstraint;

inline struct CEnvLaserOffsets {
	DWORD m_iszLaserTarget;
	DWORD m_pSprite;
	DWORD m_iszSpriteName;
	DWORD m_firePosition;
	DWORD m_flStartFrame;
} CEnvLaser;

inline struct CSoundOpvarSetEntityOffsets {
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_nOpvarType;
	DWORD m_nOpvarIndex;
	DWORD m_flOpvarValue;
	DWORD m_OpvarValueString;
	DWORD m_bSetOnSpawn;
} CSoundOpvarSetEntity;

inline struct CEnvBeverageOffsets {
	DWORD m_CanInDispenser;
	DWORD m_nBeverageType;
} CEnvBeverage;

inline struct CPhysMotorOffsets {
	DWORD m_nameAttach;
	DWORD m_nameAnchor;
	DWORD m_hAttachedObject;
	DWORD m_hAnchorObject;
	DWORD m_spinUp;
	DWORD m_spinDown;
	DWORD m_flMotorFriction;
	DWORD m_additionalAcceleration;
	DWORD m_angularAcceleration;
	DWORD m_flTorqueScale;
	DWORD m_flTargetSpeed;
	DWORD m_flSpeedWhenSpinUpOrSpinDownStarted;
	DWORD m_motor;
} CPhysMotor;

inline struct CLogicGameEventOffsets {
	DWORD m_iszEventName;
} CLogicGameEvent;

inline struct CPhysExplosionOffsets {
	DWORD m_bExplodeOnSpawn;
	DWORD m_flMagnitude;
	DWORD m_flDamage;
	DWORD m_radius;
	DWORD m_targetEntityName;
	DWORD m_flInnerRadius;
	DWORD m_flPushScale;
	DWORD m_bConvertToDebrisWhenPossible;
	DWORD m_bAffectInvulnerableEnts;
	DWORD m_OnPushedPlayer;
} CPhysExplosion;

inline struct CSplineConstraintOffsets {
	DWORD m_vAnchorOffsetRestore;
	DWORD m_hSplineEntity;
	DWORD m_bEnableLateralConstraint;
	DWORD m_bEnableVerticalConstraint;
	DWORD m_bEnableAngularConstraint;
	DWORD m_bEnableLimit;
	DWORD m_bFireEventsOnPath;
	DWORD m_flLinearFrequency;
	DWORD m_flLinarDampingRatio;
	DWORD m_flJointFriction;
	DWORD m_flTransitionTime;
	DWORD m_vPreSolveAnchorPos;
	DWORD m_StartTransitionTime;
	DWORD m_vTangentSpaceAnchorAtTransitionStart;
} CSplineConstraint;

inline struct CLogicCompareOffsets {
	DWORD m_flInValue;
	DWORD m_flCompareValue;
	DWORD m_OnLessThan;
	DWORD m_OnEqualTo;
	DWORD m_OnNotEqualTo;
	DWORD m_OnGreaterThan;
} CLogicCompare;

inline struct CFuncTankTrainOffsets {
	DWORD m_OnDeath;
} CFuncTankTrain;

inline struct CPointClientUIWorldPanelOffsets {
	DWORD m_bIgnoreInput;
	DWORD m_bLit;
	DWORD m_bFollowPlayerAcrossTeleport;
	DWORD m_flWidth;
	DWORD m_flHeight;
	DWORD m_flDPI;
	DWORD m_flInteractDistance;
	DWORD m_flDepthOffset;
	DWORD m_unOwnerContext;
	DWORD m_unHorizontalAlign;
	DWORD m_unVerticalAlign;
	DWORD m_unOrientation;
	DWORD m_bAllowInteractionFromAllSceneWorlds;
	DWORD m_vecCSSClasses;
	DWORD m_bOpaque;
	DWORD m_bNoDepth;
	DWORD m_bVisibleWhenParentNoDraw;
	DWORD m_bRenderBackface;
	DWORD m_bUseOffScreenIndicator;
	DWORD m_bExcludeFromSaveGames;
	DWORD m_bGrabbable;
	DWORD m_bOnlyRenderToTexture;
	DWORD m_bDisableMipGen;
	DWORD m_nExplicitImageLayout;
} CPointClientUIWorldPanel;

inline struct CSoundEventSphereEntityOffsets {
	DWORD m_flRadius;
} CSoundEventSphereEntity;

inline struct CMapVetoPickControllerOffsets {
	DWORD m_bPlayedIntroVcd;
	DWORD m_bNeedToPlayFiveSecondsRemaining;
	DWORD m_dblPreMatchDraftSequenceTime;
	DWORD m_bPreMatchDraftStateChanged;
	DWORD m_nDraftType;
	DWORD m_nTeamWinningCoinToss;
	DWORD m_nTeamWithFirstChoice;
	DWORD m_nVoteMapIdsList;
	DWORD m_nAccountIDs;
	DWORD m_nMapId0;
	DWORD m_nMapId1;
	DWORD m_nMapId2;
	DWORD m_nMapId3;
	DWORD m_nMapId4;
	DWORD m_nMapId5;
	DWORD m_nStartingSide0;
	DWORD m_nCurrentPhase;
	DWORD m_nPhaseStartTick;
	DWORD m_nPhaseDurationTicks;
	DWORD m_OnMapVetoed;
	DWORD m_OnMapPicked;
	DWORD m_OnSidesPicked;
	DWORD m_OnNewPhaseStarted;
	DWORD m_OnLevelTransition;
} CMapVetoPickController;

inline struct CPhysSlideConstraintOffsets {
	DWORD m_axisEnd;
	DWORD m_slideFriction;
	DWORD m_systemLoadScale;
	DWORD m_initialOffset;
	DWORD m_bEnableLinearConstraint;
	DWORD m_bEnableAngularConstraint;
	DWORD m_flMotorFrequency;
	DWORD m_flMotorDampingRatio;
	DWORD m_bUseEntityPivot;
	DWORD m_soundInfo;
} CPhysSlideConstraint;

inline struct CPointGamestatsCounterOffsets {
	DWORD m_strStatisticName;
	DWORD m_bDisabled;
} CPointGamestatsCounter;

inline struct CTextureBasedAnimatableOffsets {
	DWORD m_bLoop;
	DWORD m_flFPS;
	DWORD m_hPositionKeys;
	DWORD m_hRotationKeys;
	DWORD m_vAnimationBoundsMin;
	DWORD m_vAnimationBoundsMax;
	DWORD m_flStartTime;
	DWORD m_flStartFrame;
} CTextureBasedAnimatable;

inline struct CSpriteOffsets {
	DWORD m_hSpriteMaterial;
	DWORD m_hAttachedToEntity;
	DWORD m_nAttachment;
	DWORD m_flSpriteFramerate;
	DWORD m_flFrame;
	DWORD m_flDieTime;
	DWORD m_nBrightness;
	DWORD m_flBrightnessDuration;
	DWORD m_flSpriteScale;
	DWORD m_flScaleDuration;
	DWORD m_bWorldSpaceScale;
	DWORD m_flGlowProxySize;
	DWORD m_flHDRColorScale;
	DWORD m_flLastTime;
	DWORD m_flMaxFrame;
	DWORD m_flStartScale;
	DWORD m_flDestScale;
	DWORD m_flScaleTimeStart;
	DWORD m_nStartBrightness;
	DWORD m_nDestBrightness;
	DWORD m_flBrightnessTimeStart;
	DWORD m_nSpriteWidth;
	DWORD m_nSpriteHeight;
} CSprite;

inline struct CBaseMoveBehaviorOffsets {
	DWORD m_iPositionInterpolator;
	DWORD m_iRotationInterpolator;
	DWORD m_flAnimStartTime;
	DWORD m_flAnimEndTime;
	DWORD m_flAverageSpeedAcrossFrame;
	DWORD m_pCurrentKeyFrame;
	DWORD m_pTargetKeyFrame;
	DWORD m_pPreKeyFrame;
	DWORD m_pPostKeyFrame;
	DWORD m_flTimeIntoFrame;
	DWORD m_iDirection;
} CBaseMoveBehavior;

inline struct CDynamicLightOffsets {
	DWORD m_ActualFlags;
	DWORD m_Flags;
	DWORD m_LightStyle;
	DWORD m_On;
	DWORD m_Radius;
	DWORD m_Exponent;
	DWORD m_InnerAngle;
	DWORD m_OuterAngle;
	DWORD m_SpotRadius;
} CDynamicLight;

inline struct CWeaponTaserOffsets {
	DWORD m_fFireTime;
	DWORD m_nLastAttackTick;
} CWeaponTaser;

inline struct CRotDoorOffsets {
	DWORD m_bSolidBsp;
} CRotDoor;

inline struct CPathMoverOffsets {
	DWORD m_vecMovers;
	DWORD m_hMoverSpawner;
	DWORD m_iszMoverSpawnerName;
} CPathMover;

inline struct CFuncVPhysicsClipOffsets {
	DWORD m_bDisabled;
} CFuncVPhysicsClip;

inline struct CPhysFixedOffsets {
	DWORD m_flLinearFrequency;
	DWORD m_flLinearDampingRatio;
	DWORD m_flAngularFrequency;
	DWORD m_flAngularDampingRatio;
	DWORD m_bEnableLinearConstraint;
	DWORD m_bEnableAngularConstraint;
	DWORD m_sBoneName1;
	DWORD m_sBoneName2;
} CPhysFixed;

inline struct CLogicNavigationOffsets {
	DWORD m_isOn;
	DWORD m_navProperty;
} CLogicNavigation;

inline struct CEnvWindVolumeOffsets {
	DWORD m_bActive;
	DWORD m_vBoxMins;
	DWORD m_vBoxMaxs;
	DWORD m_bStartDisabled;
	DWORD m_nShape;
	DWORD m_fWindSpeedMultiplier;
	DWORD m_fWindTurbulenceMultiplier;
	DWORD m_fWindSpeedVariationMultiplier;
	DWORD m_fWindDirectionVariationMultiplier;
} CEnvWindVolume;

inline struct CFuncElectrifiedVolumeOffsets {
	DWORD m_EffectName;
	DWORD m_EffectInterpenetrateName;
	DWORD m_EffectZapName;
	DWORD m_iszEffectSource;
} CFuncElectrifiedVolume;

inline struct CSoundEventOBBEntityOffsets {
	DWORD m_vMins;
	DWORD m_vMaxs;
} CSoundEventOBBEntity;

inline struct CFlashbangProjectileOffsets {
	DWORD m_flTimeToDetonate;
	DWORD m_numOpponentsHit;
	DWORD m_numTeammatesHit;
} CFlashbangProjectile;

inline struct CTriggerMultipleOffsets {
	DWORD m_OnTrigger;
} CTriggerMultiple;

inline struct CPhysBallSocketOffsets {
	DWORD m_flJointFriction;
	DWORD m_bEnableSwingLimit;
	DWORD m_flSwingLimit;
	DWORD m_bEnableTwistLimit;
	DWORD m_flMinTwistAngle;
	DWORD m_flMaxTwistAngle;
} CPhysBallSocket;

inline struct CDebugHistoryOffsets {
	DWORD m_nNpcEvents;
} CDebugHistory;

inline struct CSoundOpvarSetPointBaseOffsets {
	DWORD m_bDisabled;
	DWORD m_hSource;
	DWORD m_iszSourceEntityName;
	DWORD m_vLastPosition;
	DWORD m_flRefreshTime;
	DWORD m_iszStackName;
	DWORD m_iszOperatorName;
	DWORD m_iszOpvarName;
	DWORD m_iOpvarIndex;
	DWORD m_bUseAutoCompare;
	DWORD m_bFastRefresh;
} CSoundOpvarSetPointBase;

inline struct CPathKeyFrameOffsets {
	DWORD m_Origin;
	DWORD m_Angles;
	DWORD m_qAngle;
	DWORD m_iNextKey;
	DWORD m_flNextTime;
	DWORD m_pNextKey;
	DWORD m_pPrevKey;
	DWORD m_flMoveSpeed;
} CPathKeyFrame;

inline struct CWeaponCZ75aOffsets {
	DWORD m_bMagazineRemoved;
} CWeaponCZ75a;

inline struct CScriptTriggerPushOffsets {
	DWORD m_vExtent;
} CScriptTriggerPush;

inline struct CRevertSavedOffsets {
	DWORD m_loadTime;
	DWORD m_Duration;
	DWORD m_HoldTime;
} CRevertSaved;

inline struct CTriggerHurtOffsets {
	DWORD m_flOriginalDamage;
	DWORD m_flDamage;
	DWORD m_flDamageCap;
	DWORD m_flLastDmgTime;
	DWORD m_flForgivenessDelay;
	DWORD m_bitsDamageInflict;
	DWORD m_damageModel;
	DWORD m_bNoDmgForce;
	DWORD m_vDamageForce;
	DWORD m_thinkAlways;
	DWORD m_hurtThinkPeriod;
	DWORD m_OnHurt;
	DWORD m_OnHurtPlayer;
	DWORD m_hurtEntities;
} CTriggerHurt;

inline struct CRetakeGameRulesOffsets {
	DWORD m_nMatchSeed;
	DWORD m_bBlockersPresent;
	DWORD m_bRoundInProgress;
	DWORD m_iFirstSecondHalfRound;
	DWORD m_iBombSite;
	DWORD m_hBombPlanter;
} CRetakeGameRules;

inline struct CScriptTriggerHurtOffsets {
	DWORD m_vExtent;
} CScriptTriggerHurt;

inline struct CTriggerDetectExplosionOffsets {
	DWORD m_OnDetectedExplosion;
} CTriggerDetectExplosion;

inline struct CSmokeGrenadeProjectileOffsets {
	DWORD m_nSmokeEffectTickBegin;
	DWORD m_bDidSmokeEffect;
	DWORD m_nRandomSeed;
	DWORD m_vSmokeColor;
	DWORD m_vSmokeDetonationPos;
	DWORD m_VoxelFrameData;
	DWORD m_nVoxelFrameDataSize;
	DWORD m_nVoxelUpdate;
	DWORD m_flLastBounce;
	DWORD m_fllastSimulationTime;
	DWORD m_bExplodeFromInferno;
	DWORD m_bDidGroundScorch;
} CSmokeGrenadeProjectile;

inline struct CBloodOffsets {
	DWORD m_vecSprayAngles;
	DWORD m_vecSprayDir;
	DWORD m_flAmount;
	DWORD m_Color;
} CBlood;

inline struct CCSTeamOffsets {
	DWORD m_nLastRecievedShorthandedRoundBonus;
	DWORD m_nShorthandedRoundBonusStartRound;
	DWORD m_bSurrendered;
	DWORD m_szTeamMatchStat;
	DWORD m_numMapVictories;
	DWORD m_scoreFirstHalf;
	DWORD m_scoreSecondHalf;
	DWORD m_scoreOvertime;
	DWORD m_szClanTeamname;
	DWORD m_iClanID;
	DWORD m_szTeamFlagImage;
	DWORD m_szTeamLogoImage;
	DWORD m_flNextResourceTime;
	DWORD m_iLastUpdateSentAt;
} CCSTeam;

inline struct CRulePointEntityOffsets {
	DWORD m_Score;
} CRulePointEntity;

inline struct CEnvCubemapFogOffsets {
	DWORD m_flEndDistance;
	DWORD m_flStartDistance;
	DWORD m_flFogFalloffExponent;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogHeightWidth;
	DWORD m_flFogHeightEnd;
	DWORD m_flFogHeightStart;
	DWORD m_flFogHeightExponent;
	DWORD m_flLODBias;
	DWORD m_bActive;
	DWORD m_bStartDisabled;
	DWORD m_flFogMaxOpacity;
	DWORD m_nCubemapSourceType;
	DWORD m_hSkyMaterial;
	DWORD m_iszSkyEntity;
	DWORD m_hFogCubemapTexture;
	DWORD m_bHasHeightFogEnd;
	DWORD m_bFirstTime;
} CEnvCubemapFog;

inline struct CBaseDoorOffsets {
	DWORD m_angMoveEntitySpace;
	DWORD m_vecMoveDirParentSpace;
	DWORD m_ls;
	DWORD m_bForceClosed;
	DWORD m_bDoorGroup;
	DWORD m_bLocked;
	DWORD m_bIgnoreDebris;
	DWORD m_bNoNPCs;
	DWORD m_eSpawnPosition;
	DWORD m_flBlockDamage;
	DWORD m_NoiseMoving;
	DWORD m_NoiseArrived;
	DWORD m_NoiseMovingClosed;
	DWORD m_NoiseArrivedClosed;
	DWORD m_ChainTarget;
	DWORD m_OnBlockedClosing;
	DWORD m_OnBlockedOpening;
	DWORD m_OnUnblockedClosing;
	DWORD m_OnUnblockedOpening;
	DWORD m_OnFullyClosed;
	DWORD m_OnFullyOpen;
	DWORD m_OnClose;
	DWORD m_OnOpen;
	DWORD m_OnLockedUse;
	DWORD m_bLoopMoveSound;
	DWORD m_bCreateNavObstacle;
	DWORD m_isChaining;
	DWORD m_bIsUsable;
} CBaseDoor;

inline struct CGameMoneyOffsets {
	DWORD m_OnMoneySpent;
	DWORD m_OnMoneySpentFail;
	DWORD m_nMoney;
	DWORD m_strAwardText;
} CGameMoney;

inline struct CEnvHudHintOffsets {
	DWORD m_iszMessage;
} CEnvHudHint;

inline struct CItemDefuserOffsets {
	DWORD m_entitySpottedState;
	DWORD m_nSpotRules;
} CItemDefuser;

inline struct CItemGenericTriggerHelperOffsets {
	DWORD m_hParentItem;
} CItemGenericTriggerHelper;

inline struct CRagdollPropAttachedOffsets {
	DWORD m_boneIndexAttached;
	DWORD m_ragdollAttachedObjectIndex;
	DWORD m_attachmentPointBoneSpace;
	DWORD m_attachmentPointRagdollSpace;
	DWORD m_bShouldDetach;
	DWORD m_bShouldDeleteAttachedActivationRecord;
} CRagdollPropAttached;

inline struct CItemDogtagsOffsets {
	DWORD m_OwningPlayer;
	DWORD m_KillingPlayer;
} CItemDogtags;

inline struct CFuncPlatOffsets {
	DWORD m_sNoise;
} CFuncPlat;

inline struct CBarnLightOffsets {
	DWORD m_bEnabled;
	DWORD m_nColorMode;
	DWORD m_Color;
	DWORD m_flColorTemperature;
	DWORD m_flBrightness;
	DWORD m_flBrightnessScale;
	DWORD m_nDirectLight;
	DWORD m_nBakedShadowIndex;
	DWORD m_nLightPathUniqueId;
	DWORD m_nLightMapUniqueId;
	DWORD m_nLuminaireShape;
	DWORD m_flLuminaireSize;
	DWORD m_flLuminaireAnisotropy;
	DWORD m_LightStyleString;
	DWORD m_flLightStyleStartTime;
	DWORD m_QueuedLightStyleStrings;
	DWORD m_LightStyleEvents;
	DWORD m_LightStyleTargets;
	DWORD m_StyleEvent;
	DWORD m_hLightCookie;
	DWORD m_flShape;
	DWORD m_flSoftX;
	DWORD m_flSoftY;
	DWORD m_flSkirt;
	DWORD m_flSkirtNear;
	DWORD m_vSizeParams;
	DWORD m_flRange;
	DWORD m_vShear;
	DWORD m_nBakeSpecularToCubemaps;
	DWORD m_vBakeSpecularToCubemapsSize;
	DWORD m_nCastShadows;
	DWORD m_nShadowMapSize;
	DWORD m_nShadowPriority;
	DWORD m_bContactShadow;
	DWORD m_bForceShadowsEnabled;
	DWORD m_nBounceLight;
	DWORD m_flBounceScale;
	DWORD m_bDynamicBounce;
	DWORD m_flMinRoughness;
	DWORD m_vAlternateColor;
	DWORD m_fAlternateColorBrightness;
	DWORD m_nFog;
	DWORD m_flFogStrength;
	DWORD m_nFogShadows;
	DWORD m_flFogScale;
	DWORD m_bFogMixedShadows;
	DWORD m_flFadeSizeStart;
	DWORD m_flFadeSizeEnd;
	DWORD m_flShadowFadeSizeStart;
	DWORD m_flShadowFadeSizeEnd;
	DWORD m_bPrecomputedFieldsValid;
	DWORD m_vPrecomputedBoundsMins;
	DWORD m_vPrecomputedBoundsMaxs;
	DWORD m_vPrecomputedOBBOrigin;
	DWORD m_vPrecomputedOBBAngles;
	DWORD m_vPrecomputedOBBExtent;
	DWORD m_nPrecomputedSubFrusta;
	DWORD m_vPrecomputedOBBOrigin0;
	DWORD m_vPrecomputedOBBAngles0;
	DWORD m_vPrecomputedOBBExtent0;
	DWORD m_vPrecomputedOBBOrigin1;
	DWORD m_vPrecomputedOBBAngles1;
	DWORD m_vPrecomputedOBBExtent1;
	DWORD m_vPrecomputedOBBOrigin2;
	DWORD m_vPrecomputedOBBAngles2;
	DWORD m_vPrecomputedOBBExtent2;
	DWORD m_vPrecomputedOBBOrigin3;
	DWORD m_vPrecomputedOBBAngles3;
	DWORD m_vPrecomputedOBBExtent3;
	DWORD m_vPrecomputedOBBOrigin4;
	DWORD m_vPrecomputedOBBAngles4;
	DWORD m_vPrecomputedOBBExtent4;
	DWORD m_vPrecomputedOBBOrigin5;
	DWORD m_vPrecomputedOBBAngles5;
	DWORD m_vPrecomputedOBBExtent5;
	DWORD m_bPvsModifyEntity;
	DWORD m_VisClusters;
} CBarnLight;

inline struct CInstructorEventEntityOffsets {
	DWORD m_iszName;
	DWORD m_iszHintTargetEntity;
	DWORD m_hTargetPlayer;
} CInstructorEventEntity;

inline struct CPathCornerOffsets {
	DWORD m_flWait;
	DWORD m_flRadius;
	DWORD m_OnPass;
} CPathCorner;

inline struct CTriggerSndSosOpvarOffsets {
	DWORD m_hTouchingPlayers;
	DWORD m_flPosition;
	DWORD m_flCenterSize;
	DWORD m_flMinVal;
	DWORD m_flMaxVal;
	DWORD m_opvarName;
	DWORD m_stackName;
	DWORD m_operatorName;
	DWORD m_bVolIs2D;
	DWORD m_opvarNameChar;
	DWORD m_stackNameChar;
	DWORD m_operatorNameChar;
	DWORD m_VecNormPos;
	DWORD m_flNormCenterSize;
} CTriggerSndSosOpvar;

inline struct CPointCommentaryNodeOffsets {
	DWORD m_iszPreCommands;
	DWORD m_iszPostCommands;
	DWORD m_iszCommentaryFile;
	DWORD m_iszViewTarget;
	DWORD m_hViewTarget;
	DWORD m_hViewTargetAngles;
	DWORD m_iszViewPosition;
	DWORD m_hViewPosition;
	DWORD m_hViewPositionMover;
	DWORD m_bPreventMovement;
	DWORD m_bUnderCrosshair;
	DWORD m_bUnstoppable;
	DWORD m_flFinishedTime;
	DWORD m_vecFinishOrigin;
	DWORD m_vecOriginalAngles;
	DWORD m_vecFinishAngles;
	DWORD m_bPreventChangesWhileMoving;
	DWORD m_bDisabled;
	DWORD m_vecTeleportOrigin;
	DWORD m_flAbortedPlaybackAt;
	DWORD m_pOnCommentaryStarted;
	DWORD m_pOnCommentaryStopped;
	DWORD m_bActive;
	DWORD m_flStartTime;
	DWORD m_flStartTimeInCommentary;
	DWORD m_iszTitle;
	DWORD m_iszSpeakers;
	DWORD m_iNodeNumber;
	DWORD m_iNodeNumberMax;
	DWORD m_bListenedTo;
} CPointCommentaryNode;

inline struct CMomentaryRotButtonOffsets {
	DWORD m_Position;
	DWORD m_OnUnpressed;
	DWORD m_OnFullyOpen;
	DWORD m_OnFullyClosed;
	DWORD m_OnReachedPosition;
	DWORD m_lastUsed;
	DWORD m_start;
	DWORD m_end;
	DWORD m_IdealYaw;
	DWORD m_sNoise;
	DWORD m_bUpdateTarget;
	DWORD m_direction;
	DWORD m_returnSpeed;
	DWORD m_flStartPosition;
} CMomentaryRotButton;

inline struct CSceneListManagerOffsets {
	DWORD m_hListManagers;
	DWORD m_iszScenes;
	DWORD m_hScenes;
} CSceneListManager;

inline struct CEnvTiltOffsets {
	DWORD m_Duration;
	DWORD m_Radius;
	DWORD m_TiltTime;
	DWORD m_stopTime;
} CEnvTilt;

inline struct CFuncMoverOffsets {
	DWORD m_iszPathName;
	DWORD m_hPathMover;
	DWORD m_hPrevPathMover;
	DWORD m_iszPathNodeStart;
	DWORD m_iszPathNodeEnd;
	DWORD m_eMoveType;
	DWORD m_bIsReversing;
	DWORD m_flStartSpeed;
	DWORD m_flPathLocation;
	DWORD m_flT;
	DWORD m_nCurrentNodeIndex;
	DWORD m_nPreviousNodeIndex;
	DWORD m_eSolidType;
	DWORD m_bIsMoving;
	DWORD m_flTimeToReachMaxSpeed;
	DWORD m_flDistanceToReachMaxSpeed;
	DWORD m_flTimeToReachZeroSpeed;
	DWORD m_flComputedDistanceToReachMaxSpeed;
	DWORD m_flComputedDistanceToReachZeroSpeed;
	DWORD m_flStartCurveScale;
	DWORD m_flStopCurveScale;
	DWORD m_flDistanceToReachZeroSpeed;
	DWORD m_flTimeMovementStart;
	DWORD m_flTimeMovementStop;
	DWORD m_hStopAtNode;
	DWORD m_flPathLocationToBeginStop;
	DWORD m_flPathLocationStart;
	DWORD m_flBeginStopT;
	DWORD m_iszStartForwardSound;
	DWORD m_iszLoopForwardSound;
	DWORD m_iszStopForwardSound;
	DWORD m_iszStartReverseSound;
	DWORD m_iszLoopReverseSound;
	DWORD m_iszStopReverseSound;
	DWORD m_iszArriveAtDestinationSound;
	DWORD m_OnMovementEnd;
	DWORD m_bStartAtClosestPoint;
	DWORD m_bStartAtEnd;
	DWORD m_bStartFollowingClosestMover;
	DWORD m_eOrientationUpdate;
	DWORD m_flTimeStartOrientationChange;
	DWORD m_flTimeToBlendToNewOrientation;
	DWORD m_flDurationBlendToNewOrientationRan;
	DWORD m_nOriginalOrientationIndex;
	DWORD m_bCreateMovableNavMesh;
	DWORD m_bAllowMovableNavMeshDockingOnEntireEntity;
	DWORD m_OnNodePassed;
	DWORD m_iszOrientationMatchEntityName;
	DWORD m_hOrientationMatchEntity;
	DWORD m_flTimeToTraverseToNextNode;
	DWORD m_vLerpToNewPosStartInPathEntitySpace;
	DWORD m_vLerpToNewPosEndInPathEntitySpace;
	DWORD m_flLerpToPositionT;
	DWORD m_flLerpToPositionDeltaT;
	DWORD m_OnLerpToPositionComplete;
	DWORD m_bIsPaused;
	DWORD m_eTransitionedToPathNodeAction;
	DWORD m_nDelayedTeleportToNode;
	DWORD m_bIsVerboseLogging;
	DWORD m_hFollowEntity;
	DWORD m_flFollowDistance;
	DWORD m_flFollowMinimumSpeed;
	DWORD m_flCurFollowEntityT;
	DWORD m_flCurFollowSpeed;
	DWORD m_strOrientationFaceEntityName;
	DWORD m_hOrientationFaceEntity;
	DWORD m_OnStart;
	DWORD m_OnStartForward;
	DWORD m_OnStartReverse;
	DWORD m_OnStop;
	DWORD m_OnStopped;
	DWORD m_bNextNodeReturnsCurrent;
	DWORD m_bStartedMoving;
	DWORD m_eFollowEntityDirection;
	DWORD m_hFollowMover;
	DWORD m_iszFollowMoverEntityName;
	DWORD m_flFollowMoverDistance;
	DWORD m_flFollowMoverCalculatedDistance;
	DWORD m_flFollowMoverSpringStrength;
	DWORD m_bFollowConstraintsInitialized;
	DWORD m_eFollowConstraint;
	DWORD m_flFollowMoverSpeed;
	DWORD m_flFollowMoverVelocity;
	DWORD m_nTickMovementRan;
} CFuncMover;

inline struct CPhysicsPropOffsets {
	DWORD m_MotionEnabled;
	DWORD m_OnAwakened;
	DWORD m_OnAwake;
	DWORD m_OnAsleep;
	DWORD m_OnPlayerUse;
	DWORD m_OnOutOfWorld;
	DWORD m_OnPlayerPickup;
	DWORD m_bForceNavIgnore;
	DWORD m_bNoNavmeshBlocker;
	DWORD m_bForceNpcExclude;
	DWORD m_massScale;
	DWORD m_buoyancyScale;
	DWORD m_damageType;
	DWORD m_damageToEnableMotion;
	DWORD m_flForceToEnableMotion;
	DWORD m_bThrownByPlayer;
	DWORD m_bDroppedByPlayer;
	DWORD m_bTouchedByPlayer;
	DWORD m_bFirstCollisionAfterLaunch;
	DWORD m_bHasBeenAwakened;
	DWORD m_bIsOverrideProp;
	DWORD m_flLastBurn;
	DWORD m_nDynamicContinuousContactBehavior;
	DWORD m_fNextCheckDisableMotionContactsTime;
	DWORD m_iInitialGlowState;
	DWORD m_nGlowRange;
	DWORD m_nGlowRangeMin;
	DWORD m_glowColor;
	DWORD m_bShouldAutoConvertBackFromDebris;
	DWORD m_bMuteImpactEffects;
	DWORD m_bUpdateNavWhenMoving;
	DWORD m_bForceNavObstacleCut;
	DWORD m_bAllowObstacleConvexHullMerging;
	DWORD m_bAcceptDamageFromHeldObjects;
	DWORD m_bEnableUseOutput;
	DWORD m_CrateType;
	DWORD m_strItemClass;
	DWORD m_nItemCount;
	DWORD m_bRemovableForAmmoBalancing;
	DWORD m_bAwake;
	DWORD m_bAttachedToReferenceFrame;
} CPhysicsProp;

inline struct CFuncNavObstructionOffsets {
	DWORD m_bDisabled;
	DWORD m_bUseAsyncObstacleUpdate;
} CFuncNavObstruction;

inline struct CPhysWheelConstraintOffsets {
	DWORD m_flSuspensionFrequency;
	DWORD m_flSuspensionDampingRatio;
	DWORD m_flSuspensionHeightOffset;
	DWORD m_bEnableSuspensionLimit;
	DWORD m_flMinSuspensionOffset;
	DWORD m_flMaxSuspensionOffset;
	DWORD m_bEnableSteeringLimit;
	DWORD m_flMinSteeringAngle;
	DWORD m_flMaxSteeringAngle;
	DWORD m_flSteeringAxisFriction;
	DWORD m_flSpinAxisFriction;
	DWORD m_hSteeringMimicsEntity;
} CPhysWheelConstraint;

inline struct CMolotovProjectileOffsets {
	DWORD m_bIsIncGrenade;
	DWORD m_bDetonated;
	DWORD m_stillTimer;
	DWORD m_bHasBouncedOffPlayer;
} CMolotovProjectile;

inline struct CColorCorrectionOffsets {
	DWORD m_flFadeInDuration;
	DWORD m_flFadeOutDuration;
	DWORD m_flStartFadeInWeight;
	DWORD m_flStartFadeOutWeight;
	DWORD m_flTimeStartFadeIn;
	DWORD m_flTimeStartFadeOut;
	DWORD m_flMaxWeight;
	DWORD m_bStartDisabled;
	DWORD m_bEnabled;
	DWORD m_bMaster;
	DWORD m_bClientSide;
	DWORD m_bExclusive;
	DWORD m_MinFalloff;
	DWORD m_MaxFalloff;
	DWORD m_flCurWeight;
	DWORD m_netlookupFilename;
	DWORD m_lookupFilename;
} CColorCorrection;

inline struct CPropDoorRotatingBreakableOffsets {
	DWORD m_bBreakable;
	DWORD m_isAbleToCloseAreaPortals;
	DWORD m_currentDamageState;
	DWORD m_damageStates;
} CPropDoorRotatingBreakable;

inline struct CBaseClientUIEntityOffsets {
	DWORD m_bEnabled;
	DWORD m_DialogXMLName;
	DWORD m_PanelClassName;
	DWORD m_PanelID;
	DWORD m_CustomOutput0;
	DWORD m_CustomOutput1;
	DWORD m_CustomOutput2;
	DWORD m_CustomOutput3;
	DWORD m_CustomOutput4;
	DWORD m_CustomOutput5;
	DWORD m_CustomOutput6;
	DWORD m_CustomOutput7;
	DWORD m_CustomOutput8;
	DWORD m_CustomOutput9;
} CBaseClientUIEntity;

inline struct CBreakableOffsets {
	DWORD m_CPropDataComponent;
	DWORD m_Material;
	DWORD m_hBreaker;
	DWORD m_Explosion;
	DWORD m_iszSpawnObject;
	DWORD m_flPressureDelay;
	DWORD m_iMinHealthDmg;
	DWORD m_iszPropData;
	DWORD m_impactEnergyScale;
	DWORD m_nOverrideBlockLOS;
	DWORD m_OnStartDeath;
	DWORD m_OnBreak;
	DWORD m_OnHealthChanged;
	DWORD m_PerformanceMode;
	DWORD m_hPhysicsAttacker;
	DWORD m_flLastPhysicsInfluenceTime;
} CBreakable;

inline struct CPulseCell_Outflow_PlaySceneBase__CursorState_tOffsets {
	DWORD m_sceneInstance;
	DWORD m_mainActor;
} CPulseCell_Outflow_PlaySceneBase__CursorState_t;

inline struct CGradientFogOffsets {
	DWORD m_hGradientFogTexture;
	DWORD m_flFogStartDistance;
	DWORD m_flFogEndDistance;
	DWORD m_bHeightFogEnabled;
	DWORD m_flFogStartHeight;
	DWORD m_flFogEndHeight;
	DWORD m_flFarZ;
	DWORD m_flFogMaxOpacity;
	DWORD m_flFogFalloffExponent;
	DWORD m_flFogVerticalExponent;
	DWORD m_fogColor;
	DWORD m_flFogStrength;
	DWORD m_flFadeTime;
	DWORD m_bStartDisabled;
	DWORD m_bIsEnabled;
	DWORD m_bGradientFogNeedsTextures;
} CGradientFog;

inline struct CSoundOpvarSetAABBEntityOffsets {
	DWORD m_vDistanceInnerMins;
	DWORD m_vDistanceInnerMaxs;
	DWORD m_vDistanceOuterMins;
	DWORD m_vDistanceOuterMaxs;
	DWORD m_nAABBDirection;
	DWORD m_vInnerMins;
	DWORD m_vInnerMaxs;
	DWORD m_vOuterMins;
	DWORD m_vOuterMaxs;
} CSoundOpvarSetAABBEntity;

inline struct CPulseCell_Outflow_PlaySequenceOffsets {
	DWORD m_ParamSequenceName;
} CPulseCell_Outflow_PlaySequence;

inline struct CPointClientUIWorldTextPanelOffsets {
	DWORD m_messageText;
} CPointClientUIWorldTextPanel;

inline struct CFuncRotatorOffsets {
	DWORD m_hRotatorTarget;
	DWORD m_bIsRotating;
	DWORD m_bIsReversing;
	DWORD m_flTimeToReachMaxSpeed;
	DWORD m_flTimeToReachZeroSpeed;
	DWORD m_flDistanceAlongArcTraveled;
	DWORD m_flTimeToWaitOscillate;
	DWORD m_flTimeRotationStart;
	DWORD m_qLSPrevChange;
	DWORD m_qWSPrev;
	DWORD m_qWSInit;
	DWORD m_qLSInit;
	DWORD m_qLSOrientation;
	DWORD m_OnRotationStarted;
	DWORD m_OnRotationCompleted;
	DWORD m_OnOscillate;
	DWORD m_OnOscillateStartArrive;
	DWORD m_OnOscillateStartDepart;
	DWORD m_OnOscillateEndArrive;
	DWORD m_OnOscillateEndDepart;
	DWORD m_bOscillateDepart;
	DWORD m_nOscillateCount;
	DWORD m_eRotateType;
	DWORD m_ePrevRotateType;
	DWORD m_bHasTargetOverride;
	DWORD m_qOrientationOverride;
	DWORD m_eSpaceOverride;
	DWORD m_qAngularVelocity;
	DWORD m_vLookAtForcedUp;
	DWORD m_strRotatorTarget;
	DWORD m_bRecordHistory;
	DWORD m_vecRotatorHistory;
	DWORD m_bReturningToPreviousOrientation;
	DWORD m_vecRotatorQueue;
	DWORD m_vecRotatorQueueHistory;
	DWORD m_eSolidType;
	DWORD m_hSpeedFromMover;
	DWORD m_iszSpeedFromMover;
	DWORD m_flSpeedScale;
	DWORD m_flMinYawRotation;
	DWORD m_flMaxYawRotation;
} CFuncRotator;

inline struct CSoundEventEntityOffsets {
	DWORD m_bStartOnSpawn;
	DWORD m_bToLocalPlayer;
	DWORD m_bStopOnNew;
	DWORD m_bSaveRestore;
	DWORD m_bSavedIsPlaying;
	DWORD m_flSavedElapsedTime;
	DWORD m_iszSourceEntityName;
	DWORD m_iszAttachmentName;
	DWORD m_onGUIDChanged;
	DWORD m_onSoundFinished;
	DWORD m_flClientCullRadius;
	DWORD m_iszSoundName;
	DWORD m_hSource;
	DWORD m_nEntityIndexSelection;
} CSoundEventEntity;

inline struct CEnvFadeOffsets {
	DWORD m_fadeColor;
	DWORD m_Duration;
	DWORD m_HoldDuration;
	DWORD m_OnBeginFade;
} CEnvFade;

inline struct CTriggerImpactOffsets {
	DWORD m_flMagnitude;
	DWORD m_flNoise;
	DWORD m_flViewkick;
	DWORD m_pOutputForce;
} CTriggerImpact;

inline struct CBasePropDoorOffsets {
	DWORD m_flAutoReturnDelay;
	DWORD m_hDoorList;
	DWORD m_nHardwareType;
	DWORD m_bNeedsHardware;
	DWORD m_eDoorState;
	DWORD m_bLocked;
	DWORD m_bNoNPCs;
	DWORD m_closedPosition;
	DWORD m_closedAngles;
	DWORD m_hBlocker;
	DWORD m_bFirstBlocked;
	DWORD m_ls;
	DWORD m_bForceClosed;
	DWORD m_vecLatchWorldPosition;
	DWORD m_hActivator;
	DWORD m_SoundMoving;
	DWORD m_SoundOpen;
	DWORD m_SoundClose;
	DWORD m_SoundLock;
	DWORD m_SoundUnlock;
	DWORD m_SoundLatch;
	DWORD m_SoundPound;
	DWORD m_SoundJiggle;
	DWORD m_SoundLockedAnim;
	DWORD m_numCloseAttempts;
	DWORD m_nPhysicsMaterial;
	DWORD m_SlaveName;
	DWORD m_hMaster;
	DWORD m_OnBlockedClosing;
	DWORD m_OnBlockedOpening;
	DWORD m_OnUnblockedClosing;
	DWORD m_OnUnblockedOpening;
	DWORD m_OnFullyClosed;
	DWORD m_OnFullyOpen;
	DWORD m_OnClose;
	DWORD m_OnOpen;
	DWORD m_OnLockedUse;
	DWORD m_OnAjarOpen;
} CBasePropDoor;

inline struct CLogicBranchListOffsets {
	DWORD m_nLogicBranchNames;
	DWORD m_LogicBranchList;
	DWORD m_eLastState;
	DWORD m_OnAllTrue;
	DWORD m_OnAllFalse;
	DWORD m_OnMixed;
} CLogicBranchList;

inline struct CBtActionParachutePositioningOffsets {
	DWORD m_ActionTimer;
} CBtActionParachutePositioning;

inline struct CDynamicPropOffsets {
	DWORD m_bCreateNavObstacle;
	DWORD m_bNavObstacleUpdatesOverridden;
	DWORD m_bUseHitboxesForRenderBox;
	DWORD m_bUseAnimGraph;
	DWORD m_pOutputAnimBegun;
	DWORD m_pOutputAnimOver;
	DWORD m_pOutputAnimLoopCycleOver;
	DWORD m_OnAnimReachedStart;
	DWORD m_OnAnimReachedEnd;
	DWORD m_iszIdleAnim;
	DWORD m_nIdleAnimLoopMode;
	DWORD m_bRandomizeCycle;
	DWORD m_bStartDisabled;
	DWORD m_bFiredStartEndOutput;
	DWORD m_bForceNpcExclude;
	DWORD m_bCreateNonSolid;
	DWORD m_bIsOverrideProp;
	DWORD m_iInitialGlowState;
	DWORD m_nGlowRange;
	DWORD m_nGlowRangeMin;
	DWORD m_glowColor;
	DWORD m_nGlowTeam;
} CDynamicProp;

inline struct CFuncConveyorOffsets {
	DWORD m_szConveyorModels;
	DWORD m_flTransitionDurationSeconds;
	DWORD m_angMoveEntitySpace;
	DWORD m_vecMoveDirEntitySpace;
	DWORD m_flTargetSpeed;
	DWORD m_nTransitionStartTick;
	DWORD m_nTransitionDurationTicks;
	DWORD m_flTransitionStartSpeed;
	DWORD m_hConveyorModels;
} CFuncConveyor;

inline struct CTriggerPhysicsOffsets {
	DWORD m_gravityScale;
	DWORD m_linearLimit;
	DWORD m_linearDamping;
	DWORD m_angularLimit;
	DWORD m_angularDamping;
	DWORD m_linearForce;
	DWORD m_flFrequency;
	DWORD m_flDampingRatio;
	DWORD m_vecLinearForcePointAt;
	DWORD m_bCollapseToForcePoint;
	DWORD m_vecLinearForcePointAtWorld;
	DWORD m_vecLinearForceDirection;
	DWORD m_bConvertToDebrisWhenPossible;
} CTriggerPhysics;

inline struct CFuncTimescaleOffsets {
	DWORD m_flDesiredTimescale;
	DWORD m_flAcceleration;
	DWORD m_flMinBlendRate;
	DWORD m_flBlendDeltaMultiplier;
	DWORD m_isStarted;
} CFuncTimescale;

inline struct CSoundOpvarSetPointEntityOffsets {
	DWORD m_OnEnter;
	DWORD m_OnExit;
	DWORD m_bAutoDisable;
	DWORD m_flDistanceMin;
	DWORD m_flDistanceMax;
	DWORD m_flDistanceMapMin;
	DWORD m_flDistanceMapMax;
	DWORD m_flOcclusionRadius;
	DWORD m_flOcclusionMin;
	DWORD m_flOcclusionMax;
	DWORD m_flValSetOnDisable;
	DWORD m_bSetValueOnDisable;
	DWORD m_bReloading;
	DWORD m_nSimulationMode;
	DWORD m_nVisibilitySamples;
	DWORD m_vDynamicProxyPoint;
	DWORD m_flDynamicMaximumOcclusion;
	DWORD m_hDynamicEntity;
	DWORD m_iszDynamicEntityName;
	DWORD m_flPathingDistanceNormFactor;
	DWORD m_vPathingSourcePos;
	DWORD m_vPathingListenerPos;
	DWORD m_vPathingDirection;
	DWORD m_nPathingSourceIndex;
} CSoundOpvarSetPointEntity;

inline struct CMarkupVolumeTaggedOffsets {
	DWORD m_GroupNames;
	DWORD m_Tags;
	DWORD m_bIsGroup;
	DWORD m_bGroupByPrefab;
	DWORD m_bGroupByVolume;
	DWORD m_bGroupOtherGroups;
	DWORD m_bIsInGroup;
} CMarkupVolumeTagged;

inline struct CEnvCubemapOffsets {
	DWORD m_Entity_hCubemapTexture;
	DWORD m_Entity_bCustomCubemapTexture;
	DWORD m_Entity_flInfluenceRadius;
	DWORD m_Entity_vBoxProjectMins;
	DWORD m_Entity_vBoxProjectMaxs;
	DWORD m_Entity_bMoveable;
	DWORD m_Entity_nHandshake;
	DWORD m_Entity_nEnvCubeMapArrayIndex;
	DWORD m_Entity_nPriority;
	DWORD m_Entity_flEdgeFadeDist;
	DWORD m_Entity_vEdgeFadeDists;
	DWORD m_Entity_flDiffuseScale;
	DWORD m_Entity_bStartDisabled;
	DWORD m_Entity_bDefaultEnvMap;
	DWORD m_Entity_bDefaultSpecEnvMap;
	DWORD m_Entity_bIndoorCubeMap;
	DWORD m_Entity_bCopyDiffuseFromDefaultCubemap;
	DWORD m_Entity_bEnabled;
} CEnvCubemap;

inline struct CTriggerLerpObjectOffsets {
	DWORD m_iszLerpTarget;
	DWORD m_hLerpTarget;
	DWORD m_iszLerpTargetAttachment;
	DWORD m_hLerpTargetAttachment;
	DWORD m_flLerpDuration;
	DWORD m_bAttachedEntityWasParented;
	DWORD m_bLerpRestoreMoveType;
	DWORD m_bSingleLerpObject;
	DWORD m_vecLerpingObjects;
	DWORD m_iszLerpEffect;
	DWORD m_iszLerpSound;
	DWORD m_bAttachTouchingObject;
	DWORD m_hEntityToWaitForDisconnect;
	DWORD m_OnLerpStarted;
	DWORD m_OnLerpFinished;
	DWORD m_OnDetached;
} CTriggerLerpObject;

inline struct CTriggerSaveOffsets {
	DWORD m_bForceNewLevelUnit;
	DWORD m_fDangerousTimer;
	DWORD m_minHitPoints;
} CTriggerSave;

inline struct CPointHurtOffsets {
	DWORD m_nDamage;
	DWORD m_bitsDamageType;
	DWORD m_flRadius;
	DWORD m_flDelay;
	DWORD m_strTarget;
	DWORD m_pActivator;
} CPointHurt;

inline struct SteamAudioReverbClusteringSettings_tOffsets {
	DWORD m_bEnableClustering;
	DWORD m_nCubeMapResolution;
	DWORD m_flDepthThreshold;
} SteamAudioReverbClusteringSettings_t;

inline struct SteamAudioCustomDataDimensionsSettings_tOffsets {
	DWORD m_nAmbisonicsOrderOutsideField;
	DWORD m_nAmbisonicsOrderInsideSizeField;
	DWORD m_flOutsideThreshold;
	DWORD m_flSizeThreshold;
	DWORD m_flInsideThreshold;
} SteamAudioCustomDataDimensionsSettings_t;

inline struct SteamAudioPathSettings_tOffsets {
	DWORD m_nNumVisSamples;
	DWORD m_flProbeVisRadius;
	DWORD m_flProbeVisThreshold;
	DWORD m_flProbePathRange;
} SteamAudioPathSettings_t;

inline struct CSteamAudioAmbisonicsFieldOffsets {
	DWORD m_field;
} CSteamAudioAmbisonicsField;

inline struct CSteamAudioBakedPathingDataOffsets {
	DWORD m_nBands;
	DWORD m_probes;
} CSteamAudioBakedPathingData;

inline struct SteamAudioReverbSettings_tOffsets {
	DWORD m_nNumRays;
	DWORD m_nNumBounces;
	DWORD m_flIRDuration;
	DWORD m_nAmbisonicsOrder;
} SteamAudioReverbSettings_t;

inline struct CSteamAudioProbeDataOffsets {
	DWORD m_pProbeBatch;
} CSteamAudioProbeData;

inline struct SteamAudioReverbCompressionSettings_tOffsets {
	DWORD m_bEnableCompression;
} SteamAudioReverbCompressionSettings_t;

inline struct CSteamAudioBakedMaterialsDataOffsets {
	DWORD m_probes;
	DWORD m_vecMaterialTokens;
	DWORD m_vecMaterialWeights;
} CSteamAudioBakedMaterialsData;

inline struct CSteamAudioBakedOcclusionDataOffsets {
	DWORD m_settings;
	DWORD m_probes;
	DWORD m_vecPathingRatio;
	DWORD m_vecPathingDeviation;
	DWORD m_vecReflectionRatio;
} CSteamAudioBakedOcclusionData;

inline struct CSteamAudioBakedReverbDataOffsets {
	DWORD m_nBands;
	DWORD m_probes;
	DWORD m_grid;
	DWORD m_reverbSettings;
	DWORD m_reverbClusteringSettings;
	DWORD m_reverbCompressionSettings;
	DWORD m_clusteredProbes;
	DWORD m_vecClusterForProbe;
	DWORD m_compressedData;
	DWORD m_compressedClusteredData;
	DWORD m_vecMovableReverbs;
	DWORD m_vecMovableReverbInitialTransforms;
	DWORD m_vecMovableReverbAABBs;
	DWORD m_vecMovableReverbKeys;
	DWORD m_vecMovableReverbKeyTokens;
	DWORD m_vecMovableReverbTransforms;
	DWORD m_vecMovableReverbOBBs;
} CSteamAudioBakedReverbData;

inline struct CSteamAudioProbeLineSegmentOffsets {
	DWORD m_vStart;
	DWORD m_vEnd;
	DWORD m_vecIntervals;
	DWORD m_vecProbeIndices;
} CSteamAudioProbeLineSegment;

inline struct SteamAudioCustomDataOcclusionSettings_tOffsets {
	DWORD m_bEnablePathing;
	DWORD m_bEnableReflections;
	DWORD m_nReflectionRays;
	DWORD m_nReflectionBounces;
} SteamAudioCustomDataOcclusionSettings_t;

inline struct CSteamAudioBakedDimensionsDataOffsets {
	DWORD m_settings;
	DWORD m_probes;
	DWORD m_vecInOut;
	DWORD m_vecSize;
	DWORD m_vecOutsideField;
	DWORD m_vecInsideSmallSizeField;
} CSteamAudioBakedDimensionsData;

inline struct CSteamAudioProbeGridOffsets {
	DWORD m_aabb;
	DWORD m_flSpacing;
	DWORD m_nx;
	DWORD m_ny;
	DWORD m_nz;
	DWORD m_vecLineSegments;
	DWORD m_vecProbes;
} CSteamAudioProbeGrid;

inline struct CSteamAudioCompressedReverbOffsets {
	DWORD m_nChannels;
	DWORD m_nBands;
	DWORD m_nBins;
	DWORD m_nProbes;
	DWORD m_vecNumSingularValues;
	DWORD m_vecDictionary;
	DWORD m_vecCompressedData;
	DWORD m_pCompressedData;
} CSteamAudioCompressedReverb;

