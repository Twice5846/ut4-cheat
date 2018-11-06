#pragma once

// Unreal Tournament 4 (Pre Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass base_1p_AnimBP.Base_1p_AnimBP_C
// 0x6188 (0x64E0 - 0x0358)
class UBase_1p_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C7E6B22A45384C3A00BA71A988CACCC8;// 0x0360(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2F38ABF24154F8BDB488D0B14A3E83B5;// 0x0430(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5DCA867C4E50649CFF50FB8D7C4FA0C7;// 0x04D8(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D3BC81684F0AD3A4205F86B86725AA61;// 0x0580(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4C581CE14F5ED2BE1592F9A324482439;// 0x05C8(0x0048)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_5576A45B410C33695387E4A57544E907;// 0x0610(0x0078)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_72A46C734925ADE311A8EEBEEBD9A0E3; // 0x0688(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6A3ACC73457283E4738E7DA7340BF3F5;      // 0x0748(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_13CFA5C74672A16FEC982B9E0DD1B472;      // 0x07A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59177AC34D6B5A84417D85886EFE90F4;// 0x0808(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A7C82515461C607A98012ABD721E60AC;// 0x0878(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D4ADCEA34489C376291A4DAFCAA5F9A62;// 0x0948(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1199179D4587C7BE5B0C2CB7ED81FF91;// 0x0990(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B629B3A64545F988CE3659A36109C47B;// 0x0A68(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8BF1FCBE45B51F1138344889691CFD42;// 0x0B10(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7D03CCA04EA8C7F254480291C320EFD4;      // 0x0BE0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A84C1D6E40B4A0CA902A63A36E632ECA;// 0x0C40(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DD581D9C44E52D85B57FFE82A9199E96;// 0x0CE8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A23041C1430E6475BF5B65BECB25A771;// 0x0D38(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_493616444FACCD3FE3034DBC839AAEB8;      // 0x0D88(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_96B415804E38BF95BC43708B3A20AD68;// 0x0DE8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_702F3C274A06E6BC9325EA91459A4C17;// 0x0E98(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B9ECA803446B5C3A5283A58F47B7F0B0;// 0x0F40(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6ACC44784425B0C258F506ABC596240B;// 0x0F90(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0E52FE5141B1C4286DFEA0AA2803AA1C;// 0x0FE0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10F9C6FF44236D4E84DD1C944CA9D18D;// 0x1090(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ABA63F3E4BAB0C0C71A6C7B2E081921C;// 0x1138(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_49F2042C4A9E1A97116852A2859864BB;// 0x1188(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2579E07F49B6A7F937FEC09CC663D284;// 0x1258(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x12A8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D34E4DB4D8F3F64781BABADD2B298A4;// 0x12B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B37131614128C97A8DF6729AB6A59413;// 0x1330(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CECD5EF24938ADB7CAF26980321430D1;// 0x13B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0957143C4604D21AAD7D03A989AEF37E2;// 0x1430(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_239D38AE463685A277D380B3A3A9C71C2;// 0x14B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EDBE036143A0F3C0511268896B75AB88;// 0x1530(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E83D16284B21ED2458E4728C32F6AB59;// 0x15B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0957143C4604D21AAD7D03A989AEF37E;// 0x1630(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_239D38AE463685A277D380B3A3A9C71C;// 0x16B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A6A36DF4234D0F1B618509ADEF17B85;// 0x1730(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3754B155462368DB4F31889B30925D67;// 0x17B0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_452CF43A48F386F6140D409E6843E49F;// 0x1830(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F83CF365468958DC2D50B7BC1B1858E8;// 0x18B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ADBEA8C8434E015431BCBDAA462C10E2;// 0x1920(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F455746D4EE34B1A32588ABE23E34373;// 0x1968(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B952B9894B418079BBC424B1215A7810;// 0x19D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1F8279D4814597D2A819BBDF03DCF17;// 0x1A20(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C85E49A6475F0F8B5F45F6A0DB3C9C283;// 0x1A90(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7186976D40E465D4948EAC9CE19805CE;// 0x1AD8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E3E92D04A929DA8CA603894FD50728B2;// 0x1B48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0359FDEA4EFCA86FABF64EB5A7DA85C0;// 0x1B90(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA9EA5484051461BE320239C2A0225A82;// 0x1C00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75FCC0D845324F384F7F9B8F85A5A036;// 0x1C48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_38C0006644119B05B1244197A452AF392;// 0x1CB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53B6B0B649FEBDC8D687168E7828ADF0;// 0x1D00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E3E92D04A929DA8CA603894FD50728B;// 0x1D70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E1DEDE87433933CF827FE0B4634A5B0C;// 0x1DB8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA9EA5484051461BE320239C2A0225A8;// 0x1E28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E34FD0F44B50AEAC98CC9EA57EC2856A;// 0x1E70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_38C0006644119B05B1244197A452AF39;// 0x1EE0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_40F52EB845B439D232303D95BE72ABF1;// 0x1F28(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_689F8A754896B90E96720DAE3DA069B1;// 0x2000(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FFDC849E4F254D08A34D81863DD65721;// 0x20A8(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DDEB81094EA3DE0FB0B65E8E640815B3;// 0x2178(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A655BBC24B9925B67D965C9BDF026084;// 0x2220(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2AAE2CEF4C5D8B2BD215128324234CE2;// 0x2270(0x0050)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_EF07C82146D6E155814C249AD2040551;// 0x22C0(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_BEDE34414440D13A9F0214A560F7537A;// 0x2338(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72815D124750F459B2760AABE01FE155;// 0x23B0(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_35B2FB7749627A7D1A58A39049E0A2D1;// 0x2400(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E43CB5A54EC6A43DAA2A2AAC172B9305;// 0x24A8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13F3B83C44811DC26EF5208352989DB5;// 0x2578(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21B04AD1454FA05B44644DA01BE0C183;// 0x25C8(0x0050)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_7F40F87D47851B46562EB8A95048C2A0;// 0x2618(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_67733253471FB93B14950EB5B89A7E94;// 0x2690(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6249A06042F7E9A8714F0993333A5994;// 0x2738(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8E43E4F04A003710C4284F9A75C49086;// 0x2788(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x27D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9AD50C8D414977D2066487AB318FAD24;// 0x27E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F02AAAE945356BDF3EB4A99E6B7FBE3C;// 0x2860(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D343CFA14BB5A117FD92D0B3C2FDB482;// 0x28E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FCEBCFB741C60B0EF394569C550B818B;// 0x2960(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_994A03894DA55886B035C298B75FAECD;// 0x29D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A34672A040CF9053D92CB9A044B5D9A7;// 0x2A18(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5524005A46CCE8A76274D6B9FC99AA9D;// 0x2A88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59270F7A4686E2D17EA4908D3ED7409B;// 0x2AD0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ECE03C3547DDC0C590B39DBA58594E02;// 0x2B40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3BDFCCD5431C9E744085A5B37218D1E5;// 0x2B88(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D269F1C9415C1EA25D7C918133FFD9DB;// 0x2C60(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E93A10A6454DB644D82808BA4090EBE5;// 0x2CB0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4CBCC5F94A6D7BA7183566900E96E1F7;// 0x2D58(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8036573745486A7B465C2F9DDEB0F68D;// 0x2DA8(0x00D0)
	unsigned char                                      UnknownData02[0x8];                                       // 0x2E78(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1CA355B484C1D23A191E188D611755F;// 0x2E80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D2925784857D7075AFB58819A429639;// 0x2F00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_012CF940417DF10AB2885CA4F151B216;// 0x2F80(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_649FD48444FD47DEA98A2BA75672986D;// 0x3000(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0858852F4B90C1AC3E60CF8CD084E503;// 0x3080(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C798FA146CA8AE09777E59C7C2ADEF4;// 0x3100(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CEB910274D394058D4B55296265D0372;// 0x3180(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B88B042B4DC572DE2A8EBCB5408E42AA;// 0x3200(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B43439744B543F639BDBE9A6A7C6C338;// 0x3280(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B4E3F414E0261817B2A0DB77A461CC7;// 0x3300(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_617E1D1F44DE9B439EB8A4AB17EA4652;// 0x3380(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5575F7F34FEBB53C98D4B98F7320C61F;// 0x3400(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E03A5ED49CB8BF0BB01A3882F11DC44;// 0x3480(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F160038742143000519B9DB4522B32C83;// 0x34F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5164E0314C782ACDB40625B686987390;// 0x3538(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F160038742143000519B9DB4522B32C82;// 0x35A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87E72773473FC723B82275ADEE01F7E6;// 0x35F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CD8EFDA4466509EF5453FCB08885BC58;// 0x3660(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4C8B65E64A875DE54A323FAA54F5B620;// 0x36A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBA56DE24DFA5512F34B52891CDA83A3;// 0x3718(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E1A4DF164D1324691024E0898F2E4590;// 0x3760(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E79D59B7492DE6CB05FEC197848B454D;// 0x37D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2231B1D421759A49436F9BFABBF96F7;// 0x3818(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F160038742143000519B9DB4522B32C8;// 0x3888(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CEF5260D4C7DE099ED42A49952EA539A;// 0x38D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C85E49A6475F0F8B5F45F6A0DB3C9C282;// 0x3940(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_225020AF4AB55BD57B57CC8D38F428A7;// 0x3988(0x00D8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D0F32014E7BED8B13F8ACB750B3D0E4;// 0x3A60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_867971C44A8278F5E3D7F0BF05A32413;// 0x3AE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E414EB540821EF000C856B1555783EF;// 0x3B60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53CCEDEA46AEF44B38332085A19BAAFB;// 0x3BE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CB067D74A81B1130EC0A1BFA5732B47;// 0x3C60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62F6EBE6491ABE6D245A1B8568E98587;// 0x3CE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6CF4E334D412AAF74B07AA65D4C8474;// 0x3D60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_610F681E4ED97CD5C4365F8F0DFF9049;// 0x3DE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A10209394FAC77F5987296BA34C0A14D;// 0x3E60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D19723DF4CC9881981F345AF7DCFBD7C;// 0x3EE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A7336D844A454BAC2B09FAE57135C41;// 0x3F60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44E8BB8F4B261FCE11F83889703201F9;// 0x3FE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_166B49DA4CC4813664A430B17B307F8E;// 0x4060(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52C029814A7206285791ABB7D34ABD9E;// 0x40E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_266C1C5942D83D02A91837A97B10F57C;// 0x4160(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F65D0DF64DD5C0A36D2551813D66A2DC;// 0x41E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F38286654245C8AD031466BEB76BE154;// 0x4260(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6340E30943D00A230786D9B0C9085FD4;// 0x42E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_009E5BBB4A408BB16715119F1C31F14B;// 0x4360(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B30ACC374DDE4D34063911899E09DCC0;// 0x43E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_05973E7847A7EB0BCE4FD5BF004E4F77;// 0x4460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9BB704454C3D8E64B5202B8A471BD800;// 0x44E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E14D8F3488E483F5F0481A290FA03B9;// 0x4560(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F242C18743C44DE080A35CB182E08CE2;// 0x45E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EAD9F153487BEA028B1E4E85438EDAEC;// 0x4660(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D0F2095A4C910055ED54028819CF4F8A;// 0x46E0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E04F301E497E8957AB8492A249D9C500;// 0x4750(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36AC1EFE423903BD0F89FCBB75114B01;// 0x4798(0x0070)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_C7BF899B4441F765B0CD6AB60AF023F8;// 0x4808(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D98957904DCE8D428F4E2599A6211E6D;// 0x4880(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AA4EF20D4A162BAD3110529972157E32;// 0x48F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CE9A25BB49A3F7801C695080B6E8D809;// 0x4938(0x0070)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_8EDFC4CD4962F3D7172897BD5E4BDBBA;// 0x49A8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4F7618A49D4F7D257A67A87B6EC6EA1;// 0x4A20(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_11242A824EE59D76BD5FD5933F1C176F;// 0x4A90(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2149A1344DCD13AA46D885B645DFEBC8;// 0x4AD8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1ED0D4D4416E807F053158A855F42E164;// 0x4B48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39CDBF2E45CD43E59EF19AA6C92D58F0;// 0x4B90(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1ED0D4D4416E807F053158A855F42E163;// 0x4C00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A61D464489C7A7953655E8A8FD06898;// 0x4C48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1ED0D4D4416E807F053158A855F42E162;// 0x4CB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33341FB44BBB5B5A32AF11B6549B4E0F;// 0x4D00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1ED0D4D4416E807F053158A855F42E16;// 0x4D70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D69C796481661F23ADCABA07D83AEA7;// 0x4DB8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B16D50C7422C7E7649041DA6E8A441D1;// 0x4E28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57BBF052493B717F217059A243FDED0B;// 0x4E70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_64A386AF43DDEAE18E91E085014FA93B;// 0x4EE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF2EB66247D71BA5611A3DB34F505889;// 0x4F28(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC2215894BA7E2D29ECD0DAC0D013EDF;// 0x4F98(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B62FC9244F079BE4F3CAAE86C522C014;// 0x5008(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D4ADCEA34489C376291A4DAFCAA5F9A6;// 0x50D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5969C8584F623B9BE7EAF0B2678212EC;// 0x5120(0x00D8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_76FB31AB43DE5323A731DAAFF827EA2F;// 0x51F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3BC24A9140247F4820C062A1C1C34298;// 0x5240(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_465DE0EB487949CE8514E188FA72130E;// 0x5318(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_92C329FF4C183619F47005BFFC2E1DFD;// 0x53C0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B8D61E5D4BC040AF0216E88BC8658908;// 0x5410(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9605DADE4C5433E69907B7BD7B5F2FB2;// 0x54E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D23A660F420A7B5559AF23ACA3E605D1;// 0x5530(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E263955645AFA03A699F91BB8AA9849F;// 0x5580(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66291A404E257A291253F8BDDA557BEF;// 0x5650(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B7EC875D412859BF54F2429D13510ED1;// 0x56A0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2D185CEC4E9095D0CD9D3B845A8AE3BC;// 0x5748(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_789ACB454FFCD68482DB6E9EF2D561DF;// 0x5798(0x0050)
	unsigned char                                      UnknownData03[0x8];                                       // 0x57E8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24A61C94486190709246AC9C5C120495;// 0x57F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_03F3F26E42BD418B9A6D0A93A6FA5FAA;// 0x5870(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75B03FF349E87B4F3C342FB94DB1D2E8;// 0x58F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D31C055641D13CDF7E4D51825404C1ED;// 0x5960(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_315CB63746995E8D0C2734B85EF8D2B2;// 0x59A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C85E49A6475F0F8B5F45F6A0DB3C9C28;// 0x5A18(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2DAC40824BC35649E7E9869CB56C2982;// 0x5A60(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18F9939B4D553B97642300B855242280;      // 0x5B38(0x0060)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_471FECE746456F84950003AA0CABD212;// 0x5B98(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CEA0ABB544973CBF4F5C7BB71D10A40C;// 0x5CD8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D58963A0490C4D025F7128905455C14A;// 0x5D48(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5DB6E06B4B5DAD44F645DF9D147A509B;// 0x5DB8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DB1889694F474285BAC27ABD1F0137AB;// 0x5ED8(0x0120)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_53AED4B247D8FF8BE6932CA0B92863C2;// 0x5FF8(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_93676DE34448BF0E1D6B65B1103760A0;// 0x6070(0x0078)
	struct FAnimNode_Root                              AnimGraphNode_Root_DC9E426842403E510A6947B592F270FB;      // 0x60E8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_551A398443F8FE0FD3273D8A468A87FA;// 0x6130(0x0078)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_621DB00D465C4843D60B49BB679611D2; // 0x61A8(0x00C0)
	struct FString                                     Current_Equipped_Weapon;                                  // 0x6268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AUTCharacter*                                UTCharacter;                                              // 0x6278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta_Time;                                               // 0x6280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DualCheck;                                                // 0x6284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x6285(0x0003) MISSED OFFSET
	struct FRotator                                    Aim_Rotation;                                             // 0x6288(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Aim_Rotation_Last_Frame;                                  // 0x6294(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Aim_Rotation_Delta;                                       // 0x62A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Aim_Pitch;                                                // 0x62AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Aim_Yaw;                                                  // 0x62B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MontagePlaying;                                           // 0x62B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x62B5(0x0003) MISSED OFFSET
	float                                              Actor_Yaw;                                                // 0x62B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponIDs>                            WeaponID;                                                 // 0x62BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IK_L_hand;                                                // 0x62BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x62BE(0x0002) MISSED OFFSET
	float                                              IK_L_hand_blend;                                          // 0x62C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x62C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Horizontal_Speed;                                         // 0x62D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Vertical_Speed;                                           // 0x62D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x62D8(0x0008) MISSED OFFSET
	struct FTransform                                  Actor_Transform;                                          // 0x62E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               landMedium;                                               // 0x6310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               landSoft;                                                 // 0x6311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               landHard;                                                 // 0x6312(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               landNormal;                                               // 0x6313(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weapon_Bob_Scale;                                         // 0x6314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoCount;                                                // 0x6318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponEmpty;                                              // 0x631C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x631D(0x0003) MISSED OFFSET
	float                                              WeaponEmptyBlend;                                         // 0x6320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Strafe;                                                   // 0x6324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardBack;                                              // 0x6328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoCountPending;                                         // 0x632C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwitchingWeapon;                                          // 0x6330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x6331(0x0007) MISSED OFFSET
	struct FString                                     WeaponPending;                                            // 0x6338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EWeaponIDs>                            WeaponPendingID;                                          // 0x6348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x6349(0x0007) MISSED OFFSET
	TArray<struct FName>                               WeaponName;                                               // 0x6350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               WeaponFiring;                                             // 0x6360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      WeaponFireMode;                                           // 0x6361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x6362(0x0002) MISSED OFFSET
	int                                                WeaponFireTick;                                           // 0x6364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponFireInterval;                                       // 0x6368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponFireOnce;                                           // 0x636C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x636D(0x0003) MISSED OFFSET
	int                                                WeaponNameIndex;                                          // 0x6370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FloorSliding;                                             // 0x6374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x6375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x6376(0x0002) MISSED OFFSET
	class UUTCharacterMovement*                        UTCharacterMovement;                                      // 0x6378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunRate;                                                  // 0x6380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallRunning;                                              // 0x6384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x6385(0x0003) MISSED OFFSET
	float                                              WallSide;                                                 // 0x6388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallBlend;                                                // 0x638C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallRunExit;                                              // 0x6390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallRunDone;                                              // 0x6391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallRunEnter;                                             // 0x6392(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallRIght;                                                // 0x6393(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallLeft;                                                 // 0x6394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               idleOffset;                                               // 0x6395(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StickyGrenadeActive;                                      // 0x6396(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SecondaryIdle;                                            // 0x6397(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponEquipped;                                           // 0x6398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x6399(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           idle_anim;                                                // 0x63A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAimOffsetBlendSpace*                        LagAO_anim;                                               // 0x63A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Idle_Pose_Zero;                                           // 0x63B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               IdleOffset_Pose;                                          // 0x63B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               IdleEmpty_Pose;                                           // 0x63C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               idleEmpty_toggle;                                         // 0x63C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x63C9(0x0007) MISSED OFFSET
	class UBlendSpace*                                 leanBS_anim;                                              // 0x63D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               runForward_L_anim;                                        // 0x63D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               runForward_R_anim;                                        // 0x63E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               jump_anim;                                                // 0x63E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               fall_anim;                                                // 0x63F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               land_anim;                                                // 0x63F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               landSoft_anim;                                            // 0x6400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               landMedium_anim;                                          // 0x6408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               landHeavy_anim;                                           // 0x6410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               slide_anim;                                               // 0x6418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Secondary_Idle_Pose;                                      // 0x6420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               secondary_idle_out_anim;                                  // 0x6428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               wallRun_L_anim;                                           // 0x6430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               wallRun_L_into_anim;                                      // 0x6438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               wallRun_L_out_anim;                                       // 0x6440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               wallRun_R_anim;                                           // 0x6448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               wallRun_R_into_anim;                                      // 0x6450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               wallRun_R_out_anim;                                       // 0x6458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dodging;                                                  // 0x6460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x6461(0x0007) MISSED OFFSET
	class UAnimSequence*                               dodgeBack_anim;                                           // 0x6468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               dodgeForward_anim;                                        // 0x6470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               dodgeLeft_anim;                                           // 0x6478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               dodgeRight_anim;                                          // 0x6480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DodgeBlendOut;                                            // 0x6488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DodgeAnim;                                                // 0x648C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x648D(0x0003) MISSED OFFSET
	class UAnimSequence*                               wallRun_L_dodge_anim;                                     // 0x6490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               wallRun_R_dodge_anim;                                     // 0x6498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallDodge;                                                // 0x64A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WallRunAnim;                                              // 0x64A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x6];                                       // 0x64A2(0x0006) MISSED OFFSET
	class UAnimSequence*                               dodgeForward_Left_anim;                                   // 0x64A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               dodgeForward_Right_anim;                                  // 0x64B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideBlendOut;                                            // 0x64B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FloorSlideStart;                                          // 0x64BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnShockComboExplode;                                      // 0x64BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x64BE(0x0002) MISSED OFFSET
	float                                              IK_R_hand_blend;                                          // 0x64C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopAnimRate;                                             // 0x64C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponBobUserValue;                                       // 0x64C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x64CC(0x0004) MISSED OFFSET
	class UAnimSequence*                               runForward_Zero_anim;                                     // 0x64D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              crouched_multiplier;                                      // 0x64D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponBobMin;                                             // 0x64DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass base_1p_AnimBP.Base_1p_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_8A7336D844A454BAC2B09FAE57135C41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_E34FD0F44B50AEAC98CC9EA57EC2856A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_A10209394FAC77F5987296BA34C0A14D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_E1DEDE87433933CF827FE0B4634A5B0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_266C1C5942D83D02A91837A97B10F57C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_F65D0DF64DD5C0A36D2551813D66A2DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_F38286654245C8AD031466BEB76BE154();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_53B6B0B649FEBDC8D687168E7828ADF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_6340E30943D00A230786D9B0C9085FD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_009E5BBB4A408BB16715119F1C31F14B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_B30ACC374DDE4D34063911899E09DCC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_75FCC0D845324F384F7F9B8F85A5A036();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_05973E7847A7EB0BCE4FD5BF004E4F77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_9BB704454C3D8E64B5202B8A471BD800();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_FFDC849E4F254D08A34D81863DD65721();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_2E14D8F3488E483F5F0481A290FA03B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_0359FDEA4EFCA86FABF64EB5A7DA85C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_F242C18743C44DE080A35CB182E08CE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_EAD9F153487BEA028B1E4E85438EDAEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_610F681E4ED97CD5C4365F8F0DFF9049();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_D0F2095A4C910055ED54028819CF4F8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_7186976D40E465D4948EAC9CE19805CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_36AC1EFE423903BD0F89FCBB75114B01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_C7BF899B4441F765B0CD6AB60AF023F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_D98957904DCE8D428F4E2599A6211E6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_E6CF4E334D412AAF74B07AA65D4C8474();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_A1F8279D4814597D2A819BBDF03DCF17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_F455746D4EE34B1A32588ABE23E34373();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_CE9A25BB49A3F7801C695080B6E8D809();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_8EDFC4CD4962F3D7172897BD5E4BDBBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_A4F7618A49D4F7D257A67A87B6EC6EA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_F83CF365468958DC2D50B7BC1B1858E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_2149A1344DCD13AA46D885B645DFEBC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_39CDBF2E45CD43E59EF19AA6C92D58F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_452CF43A48F386F6140D409E6843E49F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_E43CB5A54EC6A43DAA2A2AAC172B9305();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_9A61D464489C7A7953655E8A8FD06898();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_62F6EBE6491ABE6D245A1B8568E98587();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_33341FB44BBB5B5A32AF11B6549B4E0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_3754B155462368DB4F31889B30925D67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_0D69C796481661F23ADCABA07D83AEA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_57BBF052493B717F217059A243FDED0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_0A6A36DF4234D0F1B618509ADEF17B85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_BF2EB66247D71BA5611A3DB34F505889();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_B62FC9244F079BE4F3CAAE86C522C014();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_1CB067D74A81B1130EC0A1BFA5732B47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_B8D61E5D4BC040AF0216E88BC8658908();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_E263955645AFA03A699F91BB8AA9849F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_03F3F26E42BD418B9A6D0A93A6FA5FAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_239D38AE463685A277D380B3A3A9C71C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_75B03FF349E87B4F3C342FB94DB1D2E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_315CB63746995E8D0C2734B85EF8D2B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_471FECE746456F84950003AA0CABD212();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_CEA0ABB544973CBF4F5C7BB71D10A40C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_D58963A0490C4D025F7128905455C14A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendSpacePlayer_5DB6E06B4B5DAD44F645DF9D147A509B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendSpacePlayer_DB1889694F474285BAC27ABD1F0137AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TwoBoneIK_621DB00D465C4843D60B49BB679611D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_0957143C4604D21AAD7D03A989AEF37E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_EDBE036143A0F3C0511268896B75AB88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_9AD50C8D414977D2066487AB318FAD24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_53CCEDEA46AEF44B38332085A19BAAFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_239D38AE463685A277D380B3A3A9C71C_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_0957143C4604D21AAD7D03A989AEF37E_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_B37131614128C97A8DF6729AB6A59413();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_5D34E4DB4D8F3F64781BABADD2B298A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_6E414EB540821EF000C856B1555783EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_49F2042C4A9E1A97116852A2859864BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_867971C44A8278F5E3D7F0BF05A32413();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_8BF1FCBE45B51F1138344889691CFD42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_F02AAAE945356BDF3EB4A99E6B7FBE3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_CEF5260D4C7DE099ED42A49952EA539A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_F2231B1D421759A49436F9BFABBF96F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_D343CFA14BB5A117FD92D0B3C2FDB482();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_E1A4DF164D1324691024E0898F2E4590();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_A7C82515461C607A98012ABD721E60AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_59177AC34D6B5A84417D85886EFE90F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TwoBoneIK_72A46C734925ADE311A8EEBEEBD9A0E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_C7E6B22A45384C3A00BA71A988CACCC8();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_4C8B65E64A875DE54A323FAA54F5B620();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_FCEBCFB741C60B0EF394569C550B818B();
	void AnimNotify_landHeavy_Off();
	void AnimNotify_landMedium_Off();
	void AnimNotify_landSoft_Off();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_87E72773473FC723B82275ADEE01F7E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_A34672A040CF9053D92CB9A044B5D9A7();
	void AnimNotify_weaponSwtiching_off();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_5164E0314C782ACDB40625B686987390();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_7E03A5ED49CB8BF0BB01A3882F11DC44();
	void AnimNotify_wallRun_done();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_SequencePlayer_59270F7A4686E2D17EA4908D3ED7409B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_5575F7F34FEBB53C98D4B98F7320C61F();
	void AnimNotify_dodge_off();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_617E1D1F44DE9B439EB8A4AB17EA4652();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_0B4E3F414E0261817B2A0DB77A461CC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_BlendListByBool_8036573745486A7B465C2F9DDEB0F68D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_B43439744B543F639BDBE9A6A7C6C338();
	void AnimNotify_shockComboAnim_off();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_B88B042B4DC572DE2A8EBCB5408E42AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Base_1p_AnimBP_AnimGraphNode_TransitionResult_CEB910274D394058D4B55296265D0372();
	void ExecuteUbergraph_Base_1p_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
