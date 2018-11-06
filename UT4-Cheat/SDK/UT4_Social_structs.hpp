#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Social.ChatChromeStyle
// 0x02E8
struct FChatChromeStyle
{
	struct FSlateBrush                                 ChatBackgroundBrush;                                      // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ChatEntryBackgroundBrush;                                 // 0x0090(0x0090) (Edit)
	struct FSlateBrush                                 ChannelBackgroundBrush;                                   // 0x0120(0x0090) (Edit)
	struct FLinearColor                                ChatEntryBackgroundColor;                                 // 0x01B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 TabBackgroundBrush;                                       // 0x01C0(0x0090) (Edit)
	struct FLinearColor                                NoneActiveTabColor;                                       // 0x0250(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TabFontColor;                                             // 0x0260(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TabFontColorInverted;                                     // 0x0270(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TabWidth;                                                 // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TabPadding;                                               // 0x0284(0x0010) (Edit)
	struct FMargin                                     ChatWindowPadding;                                        // 0x0294(0x0010) (Edit)
	struct FMargin                                     ChatWindowToEntryMargin;                                  // 0x02A4(0x0010) (Edit)
	struct FMargin                                     ChatChannelPadding;                                       // 0x02B4(0x0010) (Edit)
	struct FMargin                                     ChatEntryPadding;                                         // 0x02C4(0x0010) (Edit)
	struct FLinearColor                                ChatBackgroundColor;                                      // 0x02D4(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
};

// ScriptStruct Social.ChatMarkupStyle
// 0x0670
struct FChatMarkupStyle
{
	struct FButtonStyle                                MarkupButtonStyle;                                        // 0x0000(0x02A8) (Edit)
	struct FTextBlockStyle                             MarkupTextStyle;                                          // 0x02A8(0x0208) (Edit)
	struct FSlateBrush                                 MarkupBackground;                                         // 0x04B0(0x0090) (Edit)
	struct FSlateColor                                 ButtonColor;                                              // 0x0540(0x0028) (Edit)
	struct FSlateColor                                 ButtonHoverColor;                                         // 0x0568(0x0028) (Edit)
	struct FSlateColor                                 TipColor;                                                 // 0x0590(0x0028) (Edit)
	struct FSlateBrush                                 SeperatorBrush;                                           // 0x05B8(0x0090) (Edit)
	float                                              SeperatorThickness;                                       // 0x0648(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MarkupPadding;                                            // 0x064C(0x0010) (Edit)
	struct FMargin                                     ButtonPadding;                                            // 0x065C(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
};

// ScriptStruct Social.ChatStyle
// 0x19A0
struct FChatStyle
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0000(0x0208) (Edit)
	struct FTextBlockStyle                             TimeStampTextStyle;                                       // 0x0208(0x0208) (Edit)
	struct FLinearColor                                TimeStampColor;                                           // 0x0410(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultChatColor;                                         // 0x0420(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                WhisperChatColor;                                         // 0x0430(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GlobalChatColor;                                          // 0x0440(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GameChatColor;                                            // 0x0450(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TeamChatColor;                                            // 0x0460(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PartyChatColor;                                           // 0x0470(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AdminChatColor;                                           // 0x0480(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GameAdminChatColor;                                       // 0x0490(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                WhisperHyperlinkChatColor;                                // 0x04A0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GlobalHyperlinkChatColor;                                 // 0x04B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GameHyperlinkChatColor;                                   // 0x04C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TeamHyperlinkChatColor;                                   // 0x04D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PartyHyperlinkChatColor;                                  // 0x04E0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x04F0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FriendlyColor;                                            // 0x0500(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEditableTextBoxStyle                       ChatEntryTextStyle;                                       // 0x0510(0x0870) (Edit)
	struct FEditableTextBoxStyle                       ChatDisplayTextStyle;                                     // 0x0D80(0x0870) (Edit)
	struct FScrollBoxStyle                             ScrollBorderStyle;                                        // 0x15F0(0x0248) (Edit)
	struct FSlateBrush                                 MessageNotificationBrush;                                 // 0x1838(0x0090) (Edit)
	struct FMargin                                     ChatEntryPadding;                                         // 0x18C8(0x0010) (Edit)
	float                                              ChatEntryHeight;                                          // 0x18D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x18DC(0x0004) MISSED OFFSET
	struct FSlateBrush                                 ChatMenuBackgroundBrush;                                  // 0x18E0(0x0090) (Edit)
	struct FMargin                                     FriendActionPadding;                                      // 0x1970(0x0010) (Edit)
	struct FMargin                                     FriendActionHeaderPadding;                                // 0x1980(0x0010) (Edit)
	struct FMargin                                     FriendActionStatusMargin;                                 // 0x1990(0x0010) (Edit)
};

// ScriptStruct Social.SocialFontStyle
// 0x02A0
struct FSocialFontStyle
{
	struct FSlateFontInfo                              FontSmall;                                                // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              FontSmallBold;                                            // 0x0068(0x0068) (Edit)
	struct FSlateFontInfo                              FontNormal;                                               // 0x00D0(0x0068) (Edit)
	struct FSlateFontInfo                              FontNormalBold;                                           // 0x0138(0x0068) (Edit)
	struct FSlateFontInfo                              FontLarge;                                                // 0x01A0(0x0068) (Edit)
	struct FSlateFontInfo                              FontLargeBold;                                            // 0x0208(0x0068) (Edit)
	struct FLinearColor                                DefaultFontColor;                                         // 0x0270(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InvertedFontColor;                                        // 0x0280(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultDullFontColor;                                     // 0x0290(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Social.SocialListStyle
// 0x2BB0
struct FSocialListStyle
{
	struct FButtonStyle                                GlobalChatButtonStyle;                                    // 0x0000(0x02A8) (Edit)
	struct FSlateBrush                                 GlobalChatIcon;                                           // 0x02A8(0x0090) (Edit)
	struct FButtonStyle                                FriendItemButtonStyle;                                    // 0x0338(0x02A8) (Edit)
	struct FButtonStyle                                ConfirmButtonStyle;                                       // 0x05E0(0x02A8) (Edit)
	struct FButtonStyle                                CancelButtonStyle;                                        // 0x0888(0x02A8) (Edit)
	struct FSlateColor                                 ButtonContentColor;                                       // 0x0B30(0x0028) (Edit)
	struct FSlateColor                                 ButtonHoverContentColor;                                  // 0x0B58(0x0028) (Edit)
	struct FSlateBrush                                 ActionMenuArrowBrush;                                     // 0x0B80(0x0090) (Edit)
	struct FSlateBrush                                 ActionMenuArrowRightBrush;                                // 0x0C10(0x0090) (Edit)
	struct FSlateColor                                 ActionMenuBackgroundColor;                                // 0x0CA0(0x0028) (Edit)
	struct FSlateBrush                                 ToolTipArrowBrush;                                        // 0x0CC8(0x0090) (Edit)
	struct FButtonStyle                                BackButtonStyle;                                          // 0x0D58(0x02A8) (Edit)
	struct FButtonStyle                                HeaderButtonStyle;                                        // 0x1000(0x02A8) (Edit)
	struct FButtonStyle                                FriendListActionButtonStyle;                              // 0x12A8(0x02A8) (Edit)
	struct FSlateBrush                                 AddFriendButtonContentBrush;                              // 0x1550(0x0090) (Edit)
	struct FSlateBrush                                 StatusIconBrush;                                          // 0x15E0(0x0090) (Edit)
	struct FSlateBrush                                 PCIconBrush;                                              // 0x1670(0x0090) (Edit)
	struct FSlateBrush                                 ConsoleIconBrush;                                         // 0x1700(0x0090) (Edit)
	struct FSlateBrush                                 EpicIconBrush;                                            // 0x1790(0x0090) (Edit)
	struct FSlateBrush                                 FriendImageBrush;                                         // 0x1820(0x0090) (Edit)
	struct FSlateBrush                                 OfflineBrush;                                             // 0x18B0(0x0090) (Edit)
	struct FSlateBrush                                 OnlineBrush;                                              // 0x1940(0x0090) (Edit)
	struct FSlateBrush                                 AwayBrush;                                                // 0x19D0(0x0090) (Edit)
	struct FSlateBrush                                 SpectateBrush;                                            // 0x1A60(0x0090) (Edit)
	struct FSlateBrush                                 FriendsContainerBackground;                               // 0x1AF0(0x0090) (Edit)
	struct FSlateBrush                                 FriendsListBackground;                                    // 0x1B80(0x0090) (Edit)
	struct FEditableTextBoxStyle                       AddFriendEditableTextStyle;                               // 0x1C10(0x0870) (Edit)
	struct FVector2D                                   UserPresenceImageSize;                                    // 0x2480(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 BackBrush;                                                // 0x2488(0x0090) (Edit)
	struct FSlateBrush                                 SelectedOptionBrush;                                      // 0x2518(0x0090) (Edit)
	struct FSlateBrush                                 SettingsBrush;                                            // 0x25A8(0x0090) (Edit)
	struct FSlateBrush                                 SeperatorBrush;                                           // 0x2638(0x0090) (Edit)
	struct FSlateBrush                                 PresenceSeperatorBrush;                                   // 0x26C8(0x0090) (Edit)
	struct FSlateBrush                                 FontSizeBrush;                                            // 0x2758(0x0090) (Edit)
	struct FSlateBrush                                 SearchBrush;                                              // 0x27E8(0x0090) (Edit)
	struct FMargin                                     BackButtonMargin;                                         // 0x2878(0x0010) (Edit)
	struct FMargin                                     HeaderButtonMargin;                                       // 0x2888(0x0010) (Edit)
	struct FMargin                                     FriendsListMargin;                                        // 0x2898(0x0010) (Edit)
	struct FMargin                                     BackButtonContentMargin;                                  // 0x28A8(0x0010) (Edit)
	struct FMargin                                     FriendsListNoFriendsMargin;                               // 0x28B8(0x0010) (Edit)
	struct FMargin                                     FriendsListHeaderMargin;                                  // 0x28C8(0x0010) (Edit)
	struct FMargin                                     FriendsListHeaderCountMargin;                             // 0x28D8(0x0010) (Edit)
	struct FMargin                                     HeaderButtonContentMargin;                                // 0x28E8(0x0010) (Edit)
	struct FMargin                                     FriendItemMargin;                                         // 0x28F8(0x0010) (Edit)
	struct FMargin                                     FriendItemStatusMargin;                                   // 0x2908(0x0010) (Edit)
	struct FMargin                                     FriendTipStatusMargin;                                    // 0x2918(0x0010) (Edit)
	struct FMargin                                     FriendItemPresenceMargin;                                 // 0x2928(0x0010) (Edit)
	struct FMargin                                     FriendItemPlatformMargin;                                 // 0x2938(0x0010) (Edit)
	struct FMargin                                     FriendItemTextScrollerMargin;                             // 0x2948(0x0010) (Edit)
	struct FMargin                                     ConfirmationBorderMargin;                                 // 0x2958(0x0010) (Edit)
	struct FMargin                                     ConfirmationButtonMargin;                                 // 0x2968(0x0010) (Edit)
	struct FMargin                                     ConfirmationButtonContentMargin;                          // 0x2978(0x0010) (Edit)
	struct FMargin                                     NoneFriendContentMargin;                                  // 0x2988(0x0010) (Edit)
	float                                              NoneFriendContentHeight;                                  // 0x2998(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoneFriendIconWidth;                                      // 0x299C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SubMenuBackIconMargin;                                    // 0x29A0(0x0010) (Edit)
	struct FMargin                                     SubMenuPageIconMargin;                                    // 0x29B0(0x0010) (Edit)
	struct FMargin                                     RadioSettingTitleMargin;                                  // 0x29C0(0x0010) (Edit)
	struct FMargin                                     SubMenuSearchIconMargin;                                  // 0x29D0(0x0010) (Edit)
	struct FMargin                                     SubMenuSearchTextMargin;                                  // 0x29E0(0x0010) (Edit)
	struct FMargin                                     SubMenuBackButtonMargin;                                  // 0x29F0(0x0010) (Edit)
	struct FMargin                                     SubMenuSettingButtonMargin;                               // 0x2A00(0x0010) (Edit)
	struct FMargin                                     SubMenuListMargin;                                        // 0x2A10(0x0010) (Edit)
	float                                              SubMenuSeperatorThickness;                                // 0x2A20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PresenceSeperatorThickness;                               // 0x2A24(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     FriendTipMargin;                                          // 0x2A28(0x0010) (Edit)
	struct FMargin                                     FriendTipPresenceMargin;                                  // 0x2A38(0x0010) (Edit)
	struct FMargin                                     FriendTipSeperatorMargin;                                 // 0x2A48(0x0010) (Edit)
	struct FMargin                                     ToolTipMargin;                                            // 0x2A58(0x0010) (Edit)
	struct FMargin                                     TipStatusMargin;                                          // 0x2A68(0x0010) (Edit)
	struct FMargin                                     AddButtonMargin;                                          // 0x2A78(0x0010) (Edit)
	struct FVector2D                                   AddButtonSpacing;                                         // 0x2A88(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ClanDetailsBrush;                                         // 0x2A90(0x0090) (Edit)
	struct FSlateBrush                                 ClanMembersBrush;                                         // 0x2B20(0x0090) (Edit)
};

// ScriptStruct Social.SocialStyle
// 0x6CA8
struct FSocialStyle
{
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x0518) (Edit)
	struct FButtonStyle                                ActionButtonStyle;                                        // 0x0518(0x02A8) (Edit)
	struct FSocialFontStyle                            SmallFontStyle;                                           // 0x07C0(0x02A0) (Edit)
	struct FSocialFontStyle                            NormalFontStyle;                                          // 0x0A60(0x02A0) (Edit)
	struct FSocialFontStyle                            LargeFontStyle;                                           // 0x0D00(0x02A0) (Edit)
	struct FSocialFontStyle                            ChatFontStyle;                                            // 0x0FA0(0x02A0) (Edit)
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x1240(0x05E0) (Edit)
	struct FCheckBoxStyle                              RadioBoxStyle;                                            // 0x1820(0x05E0) (Edit)
	struct FSocialListStyle                            SocialListStyle;                                          // 0x1E00(0x2BB0) (Edit)
	struct FChatStyle                                  ChatStyle;                                                // 0x49B0(0x19A0) (Edit)
	struct FChatChromeStyle                            ChatChromeStyle;                                          // 0x6350(0x02E8) (Edit)
	struct FChatMarkupStyle                            ChatMarkupStyle;                                          // 0x6638(0x0670) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
