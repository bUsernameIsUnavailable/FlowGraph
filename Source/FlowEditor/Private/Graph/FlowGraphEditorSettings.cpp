// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

#include "Graph/FlowGraphEditorSettings.h"

UFlowGraphEditorSettings::UFlowGraphEditorSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, NodeDoubleClickTarget(EFlowNodeDoubleClickTarget::PrimaryAssetOrNodeDefinition)
	, bShowNodeClass(false)
	, bShowNodeDescriptionWhilePlaying(true)
	, bEnforceFriendlyPinNames(false)
	, bShowSubGraphPreview(true)
	, bShowSubGraphPath(true)
	, SubGraphPreviewSize(FVector2D(640.f, 360.f))
	, bHotReloadNativeNodes(false)
	, bHighlightInputWiresOfSelectedNodes(true)
	, bHighlightOutputWiresOfSelectedNodes(false)
{
}
