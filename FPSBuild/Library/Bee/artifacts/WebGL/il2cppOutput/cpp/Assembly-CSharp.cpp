#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyCollection_t667FC3EB50A8A2E87FC86505E7CA545F9AB17B69;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ValueCollection_tAC3CEF9DF9773520998747F34DFD0311AD6C485A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>[]
struct EntryU5BU5D_t97C85AFAD292B2FC965C4E87539B02680FA16868;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// CFX_AutoDestructShuriken[]
struct CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2;
// CFX_LightIntensityFade[]
struct CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// CFX_AutoDestructShuriken
struct CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3;
// CFX_AutoStopLoopedEffect
struct CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A;
// CFX_Demo_RandomDir
struct CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2;
// CFX_Demo_RotateCamera
struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897;
// CFX_Demo_Translate
struct CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902;
// CFX_LightIntensityFade
struct CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745;
// CFX_SpawnSystem
struct CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WFX_BulletHoleDecal
struct WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368;
// WFX_Demo
struct WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA;
// WFX_Demo_DeleteAfterDelay
struct WFX_Demo_DeleteAfterDelay_tF6006AB3311A95B55059088B927CD155CD255E89;
// WFX_Demo_New
struct WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738;
// WFX_Demo_RandomDir
struct WFX_Demo_RandomDir_tCE6438F5AB2FA5383A6E7FD3EDC7C5092EB7D658;
// WFX_Demo_Wall
struct WFX_Demo_Wall_tB0AEDCE7D4D2145660D3D57C677717D078E7A36F;
// WFX_LightFlicker
struct WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// FPSGame.c_Playercontroller
struct c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123;
// FPSGame.c_uImanager
struct c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6;
// FPSGame.c_zombiecontroller
struct c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D;
// FPSGame.c_zombiesmanager
struct c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1;
// CFX_AutoDestructShuriken/<CheckIfAlive>d__2
struct U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// WFX_BulletHoleDecal/<holeUpdate>d__12
struct U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F;
// WFX_Demo/<RandomSpawnsCoroutine>d__30
struct U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132;
// WFX_Demo_New/<CheckForDeletedParticles>d__41
struct U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C;
// WFX_LightFlicker/<Flicker>d__3
struct U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496;

IL2CPP_EXTERN_C RuntimeClass* CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76;
IL2CPP_EXTERN_C String_t* _stringLiteral05EBC17976479C4FDAA22DD66F9C02FB7562757B;
IL2CPP_EXTERN_C String_t* _stringLiteral06260ABDD533F441D145238FF507B0ABB590FBBF;
IL2CPP_EXTERN_C String_t* _stringLiteral0FF58289B02E988547859BF9ECF8F23FE55E15AE;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2246D1A00225602F08D8424E9F693180E2926E44;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2B4192D07B27D0ED461E1FF9000C14799186E7CF;
IL2CPP_EXTERN_C String_t* _stringLiteral35D81944A7F59CD34810050D6EDD6DA1916E4FB2;
IL2CPP_EXTERN_C String_t* _stringLiteral3646933A39DEE105F20D239F1D5C5A4468A869FA;
IL2CPP_EXTERN_C String_t* _stringLiteral44532F19C5F385826D7358587796C923BACD2B62;
IL2CPP_EXTERN_C String_t* _stringLiteral44B34275F7E6D33122A596BF6D2CE4B3F6E7088C;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral532B57B5E2100B443B584759B5FDECAD0E009876;
IL2CPP_EXTERN_C String_t* _stringLiteral6193643A099A5247775659EBCFC18CB27A1AE608;
IL2CPP_EXTERN_C String_t* _stringLiteral6920667A4ABA57DC308D67A485A20039AE65CCBA;
IL2CPP_EXTERN_C String_t* _stringLiteral69C5CB98D19EAFE94080AB2624434700261D5675;
IL2CPP_EXTERN_C String_t* _stringLiteral6B9937AB85C565797AEF58121699839BB597802A;
IL2CPP_EXTERN_C String_t* _stringLiteral6D98FA2B162E50665ABE5D86622D48D12106CC96;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral7825A5A1FF6D32DEB0463D3062913DEE7F0191A8;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral85A9B1C6F6C7D48F0F05B6A7D23FF136E9B12059;
IL2CPP_EXTERN_C String_t* _stringLiteral8688E589BA27C89009607123379AA866C084F6EA;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral921F9A578002B90C50EE770B0FE1B9EFB17EB305;
IL2CPP_EXTERN_C String_t* _stringLiteral93AD152AECC97AD3DC12897D04CB1374C427125A;
IL2CPP_EXTERN_C String_t* _stringLiteral96E4B0A5CBA6AEF33C84C6CED365CCB25EFA9F80;
IL2CPP_EXTERN_C String_t* _stringLiteral99FA1157669A6F6AE84301B346E3FA843BDE336E;
IL2CPP_EXTERN_C String_t* _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2;
IL2CPP_EXTERN_C String_t* _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915;
IL2CPP_EXTERN_C String_t* _stringLiteralA440B7E51538852D29B70F2B78DA484EE4E3EAF1;
IL2CPP_EXTERN_C String_t* _stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B289E6DDF993786B4A55224A65C63D3F47DF95;
IL2CPP_EXTERN_C String_t* _stringLiteralB3665C8A019318729A568C30D09CD2244A67085C;
IL2CPP_EXTERN_C String_t* _stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCAFCA01E5C8C6F2CE0D7804AAB5F2D8A58EA0A1C;
IL2CPP_EXTERN_C String_t* _stringLiteralCF67DCC3916C7C4C3E0CEE598448278253798169;
IL2CPP_EXTERN_C String_t* _stringLiteralDC993F04536456BB38801F8ACA450E3E38DBCEA7;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE6A9D90058077671906244DE2777322E222E7869;
IL2CPP_EXTERN_C String_t* _stringLiteralE908D5D8A9E98938B845B453873B65300546BE86;
IL2CPP_EXTERN_C String_t* _stringLiteralEA0AB5EC26EB3E680258ED5E7BEC2D59B5B1081F;
IL2CPP_EXTERN_C String_t* _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFCC7890DE50B57030F6B69A9BDDC9712A67BDE04;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m83C4EE1DAEB920EC83102E899FAC0BA501641575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAA3BEFA6587A88060ACFBBE94743D3E6FD3165DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mB1F6703CB8458F59A6142CFD66403C6E60F97E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3FB771855E23B4182804CE8BDE6B7D7FC92C86F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisc_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123_m15EB183331C96D122402BDDC6D15E4E321D21330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisc_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D_m7F14D3CB0652B51C97EE820FF918D2164DF1E5E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m389C30D6C5A17324185EBFAA8577F7EF017EAC4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745_m1C3FA40D5C783869B056ECE8496E4B01D5D46FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckForDeletedParticlesU3Ed__41_System_Collections_IEnumerator_Reset_m60E1BC10AD8CACCBAABAE43F703C8AC38AE31741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlickerU3Ed__3_System_Collections_IEnumerator_Reset_m4D53771CEA3E6CA61DD48905AA2989B9053A1158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRandomSpawnsCoroutineU3Ed__30_System_Collections_IEnumerator_Reset_m394030DA5A2F60E8F34A3ABB5A64BFA9D86A353B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CholeUpdateU3Ed__12_System_Collections_IEnumerator_Reset_m1F3CE0ACCBAF17BD3F74D2B0ADC7B3924906F2BA_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2;
struct CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t97C85AFAD292B2FC965C4E87539B02680FA16868* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t667FC3EB50A8A2E87FC86505E7CA545F9AB17B69* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAC3CEF9DF9773520998747F34DFD0311AD6C485A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CFX_AutoDestructShuriken/<CheckIfAlive>d__2
struct U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511  : public RuntimeObject
{
	// System.Int32 CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CFX_AutoDestructShuriken CFX_AutoDestructShuriken/<CheckIfAlive>d__2::<>4__this
	CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* ___U3CU3E4__this_2;
};

// WFX_BulletHoleDecal/<holeUpdate>d__12
struct U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F  : public RuntimeObject
{
	// System.Int32 WFX_BulletHoleDecal/<holeUpdate>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WFX_BulletHoleDecal/<holeUpdate>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WFX_BulletHoleDecal WFX_BulletHoleDecal/<holeUpdate>d__12::<>4__this
	WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* ___U3CU3E4__this_2;
};

// WFX_Demo/<RandomSpawnsCoroutine>d__30
struct U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132  : public RuntimeObject
{
	// System.Int32 WFX_Demo/<RandomSpawnsCoroutine>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WFX_Demo/<RandomSpawnsCoroutine>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WFX_Demo WFX_Demo/<RandomSpawnsCoroutine>d__30::<>4__this
	WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* ___U3CU3E4__this_2;
};

// WFX_Demo_New/<CheckForDeletedParticles>d__41
struct U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C  : public RuntimeObject
{
	// System.Int32 WFX_Demo_New/<CheckForDeletedParticles>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WFX_Demo_New/<CheckForDeletedParticles>d__41::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WFX_Demo_New WFX_Demo_New/<CheckForDeletedParticles>d__41::<>4__this
	WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* ___U3CU3E4__this_2;
};

// WFX_LightFlicker/<Flicker>d__3
struct U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496  : public RuntimeObject
{
	// System.Int32 WFX_LightFlicker/<Flicker>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WFX_LightFlicker/<Flicker>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WFX_LightFlicker WFX_LightFlicker/<Flicker>d__3::<>4__this
	WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.CollisionFlags
struct CollisionFlags_t3132E5D974C485D3F3C97B7AF475965AB0C3F9C1 
{
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct CursorLockMode_tB70C7D1B9208B821C1C8A614BE904500B92C47D2 
{
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.HideFlags
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Space
struct Space_tF043E93E06B702DD05199C28C6F779049B38A969 
{
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;
};

// UnityEngine.GUILayoutOption/Type
struct Type_t94B090894A3B9A5C5AEBD91800DB10688CC00F4A 
{
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Slider/Direction
struct Direction_t4C81D17BB6C089A0EC1C4934525B86E75E693EFA 
{
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CFX_AutoDestructShuriken
struct CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CFX_AutoDestructShuriken::OnlyDeactivate
	bool ___OnlyDeactivate_4;
};

// CFX_AutoStopLoopedEffect
struct CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_AutoStopLoopedEffect::effectDuration
	float ___effectDuration_4;
	// System.Single CFX_AutoStopLoopedEffect::d
	float ___d_5;
};

// CFX_Demo_RandomDir
struct CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CFX_Demo_RandomDir::min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___min_4;
	// UnityEngine.Vector3 CFX_Demo_RandomDir::max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___max_5;
};

// CFX_Demo_RotateCamera
struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_Demo_RotateCamera::speed
	float ___speed_5;
	// UnityEngine.Transform CFX_Demo_RotateCamera::rotationCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rotationCenter_6;
};

struct CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields
{
	// System.Boolean CFX_Demo_RotateCamera::rotating
	bool ___rotating_4;
};

// CFX_Demo_Translate
struct CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_Demo_Translate::speed
	float ___speed_4;
	// UnityEngine.Vector3 CFX_Demo_Translate::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_5;
	// UnityEngine.Vector3 CFX_Demo_Translate::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_6;
	// System.Boolean CFX_Demo_Translate::gravity
	bool ___gravity_7;
	// UnityEngine.Vector3 CFX_Demo_Translate::dir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir_8;
};

// CFX_LightIntensityFade
struct CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CFX_LightIntensityFade::duration
	float ___duration_4;
	// System.Single CFX_LightIntensityFade::delay
	float ___delay_5;
	// System.Single CFX_LightIntensityFade::finalIntensity
	float ___finalIntensity_6;
	// System.Single CFX_LightIntensityFade::baseIntensity
	float ___baseIntensity_7;
	// System.Boolean CFX_LightIntensityFade::autodestruct
	bool ___autodestruct_8;
	// System.Single CFX_LightIntensityFade::p_lifetime
	float ___p_lifetime_9;
	// System.Single CFX_LightIntensityFade::p_delay
	float ___p_delay_10;
};

// CFX_SpawnSystem
struct CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] CFX_SpawnSystem::objectsToPreload
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objectsToPreload_5;
	// System.Int32[] CFX_SpawnSystem::objectsToPreloadTimes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___objectsToPreloadTimes_6;
	// System.Boolean CFX_SpawnSystem::hideObjectsInHierarchy
	bool ___hideObjectsInHierarchy_7;
	// System.Boolean CFX_SpawnSystem::spawnAsChildren
	bool ___spawnAsChildren_8;
	// System.Boolean CFX_SpawnSystem::onlyGetInactiveObjects
	bool ___onlyGetInactiveObjects_9;
	// System.Boolean CFX_SpawnSystem::instantiateIfNeeded
	bool ___instantiateIfNeeded_10;
	// System.Boolean CFX_SpawnSystem::allObjectsLoaded
	bool ___allObjectsLoaded_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>> CFX_SpawnSystem::instantiatedObjects
	Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* ___instantiatedObjects_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> CFX_SpawnSystem::poolCursors
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___poolCursors_13;
};

struct CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields
{
	// CFX_SpawnSystem CFX_SpawnSystem::instance
	CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* ___instance_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WFX_BulletHoleDecal
struct WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WFX_BulletHoleDecal::lifetime
	float ___lifetime_5;
	// System.Single WFX_BulletHoleDecal::fadeoutpercent
	float ___fadeoutpercent_6;
	// UnityEngine.Vector2 WFX_BulletHoleDecal::frames
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___frames_7;
	// System.Boolean WFX_BulletHoleDecal::randomRotation
	bool ___randomRotation_8;
	// System.Boolean WFX_BulletHoleDecal::deactivate
	bool ___deactivate_9;
	// System.Single WFX_BulletHoleDecal::life
	float ___life_10;
	// System.Single WFX_BulletHoleDecal::fadeout
	float ___fadeout_11;
	// UnityEngine.Color WFX_BulletHoleDecal::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_12;
	// System.Single WFX_BulletHoleDecal::orgAlpha
	float ___orgAlpha_13;
};

struct WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_StaticFields
{
	// UnityEngine.Vector2[] WFX_BulletHoleDecal::quadUVs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___quadUVs_4;
};

// WFX_Demo
struct WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WFX_Demo::cameraSpeed
	float ___cameraSpeed_4;
	// System.Boolean WFX_Demo::orderedSpawns
	bool ___orderedSpawns_5;
	// System.Single WFX_Demo::step
	float ___step_6;
	// System.Single WFX_Demo::range
	float ___range_7;
	// System.Single WFX_Demo::order
	float ___order_8;
	// UnityEngine.GameObject WFX_Demo::walls
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___walls_9;
	// UnityEngine.GameObject WFX_Demo::bulletholes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulletholes_10;
	// UnityEngine.GameObject[] WFX_Demo::ParticleExamples
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ParticleExamples_11;
	// System.Int32 WFX_Demo::exampleIndex
	int32_t ___exampleIndex_12;
	// System.String WFX_Demo::randomSpawnsDelay
	String_t* ___randomSpawnsDelay_13;
	// System.Boolean WFX_Demo::randomSpawns
	bool ___randomSpawns_14;
	// System.Boolean WFX_Demo::slowMo
	bool ___slowMo_15;
	// System.Boolean WFX_Demo::rotateCam
	bool ___rotateCam_16;
	// UnityEngine.Material WFX_Demo::wood
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___wood_17;
	// UnityEngine.Material WFX_Demo::concrete
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___concrete_18;
	// UnityEngine.Material WFX_Demo::metal
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___metal_19;
	// UnityEngine.Material WFX_Demo::checker
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___checker_20;
	// UnityEngine.Material WFX_Demo::woodWall
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___woodWall_21;
	// UnityEngine.Material WFX_Demo::concreteWall
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___concreteWall_22;
	// UnityEngine.Material WFX_Demo::metalWall
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___metalWall_23;
	// UnityEngine.Material WFX_Demo::checkerWall
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___checkerWall_24;
	// System.String WFX_Demo::groundTextureStr
	String_t* ___groundTextureStr_25;
	// System.Collections.Generic.List`1<System.String> WFX_Demo::groundTextures
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___groundTextures_26;
	// UnityEngine.GameObject WFX_Demo::m4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m4_27;
	// UnityEngine.GameObject WFX_Demo::m4fps
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m4fps_28;
	// System.Boolean WFX_Demo::rotate_m4
	bool ___rotate_m4_29;
};

// WFX_Demo_DeleteAfterDelay
struct WFX_Demo_DeleteAfterDelay_tF6006AB3311A95B55059088B927CD155CD255E89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WFX_Demo_DeleteAfterDelay::delay
	float ___delay_4;
};

// WFX_Demo_New
struct WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer WFX_Demo_New::groundRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___groundRenderer_4;
	// UnityEngine.Collider WFX_Demo_New::groundCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___groundCollider_5;
	// UnityEngine.UI.Image WFX_Demo_New::slowMoBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___slowMoBtn_6;
	// UnityEngine.UI.Text WFX_Demo_New::slowMoLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___slowMoLabel_7;
	// UnityEngine.UI.Image WFX_Demo_New::camRotBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___camRotBtn_8;
	// UnityEngine.UI.Text WFX_Demo_New::camRotLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___camRotLabel_9;
	// UnityEngine.UI.Image WFX_Demo_New::groundBtn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___groundBtn_10;
	// UnityEngine.UI.Text WFX_Demo_New::groundLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___groundLabel_11;
	// UnityEngine.UI.Text WFX_Demo_New::EffectLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EffectLabel_12;
	// UnityEngine.UI.Text WFX_Demo_New::EffectIndexLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___EffectIndexLabel_13;
	// UnityEngine.GameObject[] WFX_Demo_New::AdditionalEffects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___AdditionalEffects_14;
	// UnityEngine.GameObject WFX_Demo_New::ground
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ground_15;
	// UnityEngine.GameObject WFX_Demo_New::walls
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___walls_16;
	// UnityEngine.GameObject WFX_Demo_New::bulletholes
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulletholes_17;
	// UnityEngine.GameObject WFX_Demo_New::m4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m4_18;
	// UnityEngine.GameObject WFX_Demo_New::m4fps
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m4fps_19;
	// UnityEngine.Material WFX_Demo_New::wood
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___wood_20;
	// UnityEngine.Material WFX_Demo_New::concrete
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___concrete_21;
	// UnityEngine.Material WFX_Demo_New::metal
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___metal_22;
	// UnityEngine.Material WFX_Demo_New::checker
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___checker_23;
	// UnityEngine.Material WFX_Demo_New::woodWall
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___woodWall_24;
	// UnityEngine.Material WFX_Demo_New::concreteWall
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___concreteWall_25;
	// UnityEngine.Material WFX_Demo_New::metalWall
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___metalWall_26;
	// UnityEngine.Material WFX_Demo_New::checkerWall
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___checkerWall_27;
	// System.String WFX_Demo_New::groundTextureStr
	String_t* ___groundTextureStr_28;
	// System.Collections.Generic.List`1<System.String> WFX_Demo_New::groundTextures
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___groundTextures_29;
	// UnityEngine.GameObject[] WFX_Demo_New::ParticleExamples
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ParticleExamples_30;
	// System.Int32 WFX_Demo_New::exampleIndex
	int32_t ___exampleIndex_31;
	// System.Boolean WFX_Demo_New::slowMo
	bool ___slowMo_32;
	// UnityEngine.Vector3 WFX_Demo_New::defaultCamPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultCamPosition_33;
	// UnityEngine.Quaternion WFX_Demo_New::defaultCamRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___defaultCamRotation_34;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WFX_Demo_New::onScreenParticles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___onScreenParticles_35;
};

// WFX_Demo_RandomDir
struct WFX_Demo_RandomDir_tCE6438F5AB2FA5383A6E7FD3EDC7C5092EB7D658  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 WFX_Demo_RandomDir::min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___min_4;
	// UnityEngine.Vector3 WFX_Demo_RandomDir::max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___max_5;
};

// WFX_Demo_Wall
struct WFX_Demo_Wall_tB0AEDCE7D4D2145660D3D57C677717D078E7A36F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WFX_Demo_New WFX_Demo_Wall::demo
	WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* ___demo_4;
};

// WFX_LightFlicker
struct WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WFX_LightFlicker::time
	float ___time_4;
	// System.Single WFX_LightFlicker::timer
	float ___timer_5;
};

// FPSGame.c_Playercontroller
struct c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController FPSGame.c_Playercontroller::g_Playercontroller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___g_Playercontroller_4;
	// UnityEngine.Camera FPSGame.c_Playercontroller::g_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___g_camera_5;
	// UnityEngine.Vector3 FPSGame.c_Playercontroller::g_movedirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___g_movedirection_6;
	// UnityEngine.Vector3 FPSGame.c_Playercontroller::g_cameraRotationdirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___g_cameraRotationdirection_7;
	// UnityEngine.Vector3 FPSGame.c_Playercontroller::g_Playerrotationdirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___g_Playerrotationdirection_8;
	// System.Single FPSGame.c_Playercontroller::g_movespeed
	float ___g_movespeed_9;
	// System.Single FPSGame.c_Playercontroller::g_Rotatespeed
	float ___g_Rotatespeed_10;
	// UnityEngine.Vector3 FPSGame.c_Playercontroller::g_cameraeulerAngle
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___g_cameraeulerAngle_11;
	// UnityEngine.ParticleSystem FPSGame.c_Playercontroller::g_muzzleflash
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___g_muzzleflash_12;
	// UnityEngine.Ray FPSGame.c_Playercontroller::g_ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___g_ray_13;
	// UnityEngine.RaycastHit FPSGame.c_Playercontroller::g_Rayhitinfo
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___g_Rayhitinfo_14;
	// UnityEngine.GameObject FPSGame.c_Playercontroller::g_spark
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___g_spark_15;
	// UnityEngine.GameObject FPSGame.c_Playercontroller::g_sparkprefeb
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___g_sparkprefeb_16;
	// System.Single FPSGame.c_Playercontroller::g_jumpspeed
	float ___g_jumpspeed_17;
	// UnityEngine.AudioSource FPSGame.c_Playercontroller::g_Audiosource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___g_Audiosource_18;
	// FPSGame.c_zombiecontroller FPSGame.c_Playercontroller::g_zombiescript
	c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* ___g_zombiescript_19;
	// UnityEngine.UI.Image FPSGame.c_Playercontroller::g_Recticle
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___g_Recticle_20;
	// UnityEngine.GameObject FPSGame.c_Playercontroller::g_zombies
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___g_zombies_21;
	// UnityEngine.UI.Slider FPSGame.c_Playercontroller::g_Playerhealth
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___g_Playerhealth_22;
	// System.Int32 FPSGame.c_Playercontroller::g_zombieskillcounter
	int32_t ___g_zombieskillcounter_23;
	// UnityEngine.UI.Text FPSGame.c_Playercontroller::g_zombiekillstext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___g_zombiekillstext_24;
	// UnityEngine.Transform[] FPSGame.c_Playercontroller::g_zombierespawnpoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___g_zombierespawnpoints_25;
	// UnityEngine.Vector3 FPSGame.c_Playercontroller::g_JumpPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___g_JumpPos_26;
	// System.Boolean FPSGame.c_Playercontroller::g_JumpFlag
	bool ___g_JumpFlag_27;
	// System.Single FPSGame.c_Playercontroller::g_JumpHeight
	float ___g_JumpHeight_28;
	// UnityEngine.UI.Text FPSGame.c_Playercontroller::g_numbertext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___g_numbertext_29;
	// System.Single FPSGame.c_Playercontroller::g_gamestarttimecounter
	float ___g_gamestarttimecounter_30;
	// System.Int32 FPSGame.c_Playercontroller::g_numbercounter
	int32_t ___g_numbercounter_31;
	// System.Boolean FPSGame.c_Playercontroller::g_gamestartflg
	bool ___g_gamestartflg_32;
};

// FPSGame.c_uImanager
struct c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FPSGame.c_uImanager::g_minemenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___g_minemenu_4;
	// UnityEngine.GameObject FPSGame.c_uImanager::g_instructionmenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___g_instructionmenu_5;
};

// FPSGame.c_zombiecontroller
struct c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FPSGame.c_zombiecontroller::g_Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___g_Player_4;
	// UnityEngine.Animator FPSGame.c_zombiecontroller::g_zombieAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___g_zombieAnimator_5;
	// UnityEngine.AI.NavMeshAgent FPSGame.c_zombiecontroller::g_zombiemovecontroller
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___g_zombiemovecontroller_6;
	// System.Single FPSGame.c_zombiecontroller::g_resetzombiestime
	float ___g_resetzombiestime_7;
	// System.Single FPSGame.c_zombiecontroller::g_zombieAttackpower
	float ___g_zombieAttackpower_8;
	// FPSGame.c_Playercontroller FPSGame.c_zombiecontroller::g_Playerscript
	c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* ___g_Playerscript_9;
	// System.Boolean FPSGame.c_zombiecontroller::g_bullethitzombie
	bool ___g_bullethitzombie_10;
	// System.Boolean FPSGame.c_zombiecontroller::g_isAlive
	bool ___g_isAlive_11;
	// UnityEngine.AudioSource FPSGame.c_zombiecontroller::g_zombieAttackaudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___g_zombieAttackaudio_12;
	// System.Int32 FPSGame.c_zombiecontroller::g_zombierespawnrandompoint
	int32_t ___g_zombierespawnrandompoint_13;
};

// FPSGame.c_zombiesmanager
struct c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] FPSGame.c_zombiesmanager::g_zombiespawnpoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___g_zombiespawnpoints_4;
	// UnityEngine.GameObject FPSGame.c_zombiesmanager::g_zombiePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___g_zombiePrefab_5;
	// UnityEngine.GameObject[] FPSGame.c_zombiesmanager::g_zombiesarray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___g_zombiesarray_6;
	// System.Single FPSGame.c_zombiesmanager::g_zombiespawntime
	float ___g_zombiespawntime_7;
	// System.Int32 FPSGame.c_zombiesmanager::g_zombiespawnrandompoints
	int32_t ___g_zombiespawnrandompoints_8;
	// System.Int32 FPSGame.c_zombiesmanager::g_randomzombie
	int32_t ___g_randomzombie_9;
	// FPSGame.c_Playercontroller FPSGame.c_zombiesmanager::g_playerscript
	c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* ___g_playerscript_10;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// CFX_AutoDestructShuriken[]
struct CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2  : public RuntimeArray
{
	ALIGN_FIELD (8) CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* m_Items[1];

	inline CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CFX_LightIntensityFade[]
struct CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB  : public RuntimeArray
{
	ALIGN_FIELD (8) CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* m_Items[1];

	inline CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CFX_Demo_Translate>()
inline CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Scale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.GameObject WFX_Demo::spawnParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WFX_Demo_spawnParticle_m832B877853F70B7705A459813016EFA01DE7D12F (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void WFX_Demo::SetActiveCrossVersions(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_SetActiveCrossVersions_m9D5DB90DC6756717692DFF44AF3666F4AED2A2DF (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___active1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_mA941799D3368A14C4ED7AC8516806369EAF01692 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA (float ___width0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void WFX_Demo::prevParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_prevParticle_m4941DE24175A8E2EBB006A11DD398EF75E9513CA (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) ;
// System.Void WFX_Demo::nextParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_nextParticle_mDA349627751F67FF9655C13F683BAF2656DC0B9E (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_FlexibleSpace_m034CCB8A75D407325DB670958160C057FC7A5EAE (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC (const RuntimeMethod* method) ;
// System.Void WFX_Demo::prevTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_prevTexture_m0023E024EE2A8002216B6D53727BBDC6B0E6EBD9 (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) ;
// System.Void WFX_Demo::nextTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_nextTexture_m615CF3589AC7B7B62652816F7660F147A35B82BA (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_m1A496B300C5FDCEA653A1652CBA173F42E134371 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248 (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_enabled_m49481A7F8018837F8BBFAF5FD3A94D374CD203DA (bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F (float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::get_changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_changed_m691B5A1EC87949AF8474777B24221175ABE1B829 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void WFX_Demo/<RandomSpawnsCoroutine>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomSpawnsCoroutineU3Ed__30__ctor_m6937623BA2780BC4436B07EECDF9965334F21E1E (U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
inline int32_t List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void WFX_Demo::selectMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317 (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void WFX_Demo::showHideStuff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_showHideStuff_mCB62AFDA242C30EF9B1F096C01FB873E9A93A98C (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void WFX_Demo_New::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_UpdateUI_m2F66BB192E9967A45B5D846A001323F317E8FE69 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) ;
// System.Void WFX_Demo_New::prevParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_prevParticle_m103DA4318BEBF5042C42AA7EA67AD1AA1017A21A (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) ;
// System.Void WFX_Demo_New::nextParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_nextParticle_m621CFC7C1A0A5B08B9A5BB23D1B3B4AE4E46ED07 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) ;
// System.Void WFX_Demo_New::destroyParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_destroyParticles_m6221722CBE191ED207CD56B5A78B07D051F92521 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.GameObject WFX_Demo_New::spawnParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WFX_Demo_New_spawnParticle_mB16D13E226CA4267E6178E785A6A33E181CB6F53 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<CFX_AutoStopLoopedEffect>()
inline CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CFX_AutoDestructShuriken>()
inline CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void WFX_Demo_New/<CheckForDeletedParticles>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__41__ctor_m1DA482D5A6ED757DD541C2DA863D64C74E6B4473 (U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void WFX_Demo_New::showHideStuff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_showHideStuff_mA801781E5FE2DA8DAE888FFB41655C61C242E8FB (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void WFX_Demo_New::selectMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void WFX_BulletHoleDecal/<holeUpdate>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CholeUpdateU3Ed__12__ctor_m21CFDFD1D623964BA73C1A66B01872D1E4186AE1 (U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void WFX_LightFlicker/<Flicker>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlickerU3Ed__3__ctor_m81C12D98C98B7757EDA1AD282A4496E5C389C505 (U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared)(__this, ___key0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Item(TKey)
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193 (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void CFX_SpawnSystem::increasePoolCursor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_increasePoolCursor_m11C62EA58A7B726EE0C248BC4EBD79557231E7E3 (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, int32_t ___uniqueId0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m825387C0A72F1965797D56C1F8AB0D6678F3F9BE (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void CFX_SpawnSystem::PreloadObject(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_PreloadObject_m25A1F99AFB2F66DDA47504C170FE57387BCF65C1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sourceObj0, int32_t ___poolSize1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void CFX_SpawnSystem::addObjectToPool(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_addObjectToPool_m895A8533B47C47B0D9A00968C5AA972F8006C970 (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sourceObject0, int32_t ___number1, const RuntimeMethod* method) ;
// System.Void CFX_SpawnSystem::removeObjectsFromPool(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_removeObjectsFromPool_m24DE63AC33DBA7D444F1DD1F9C2EEE69BFC1BF3C (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sourceObject0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mAA3BEFA6587A88060ACFBBE94743D3E6FD3165DE (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m83C4EE1DAEB920EC83102E899FAC0BA501641575 (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* __this, int32_t ___key0, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3*, int32_t, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared)(__this, ___key0, ___value1, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<CFX_AutoDestructShuriken>(System.Boolean)
inline CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2* GameObject_GetComponentsInChildren_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m389C30D6C5A17324185EBFAA8577F7EF017EAC4F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared)(__this, ___includeInactive0, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<CFX_LightIntensityFade>(System.Boolean)
inline CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB* GameObject_GetComponentsInChildren_TisCFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745_m1C3FA40D5C783869B056ECE8496E4B01D5D46FCC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared)(__this, ___includeInactive0, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::Remove(TKey)
inline bool Dictionary_2_Remove_mB1F6703CB8458F59A6142CFD66403C6E60F97E65 (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
inline bool Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::.ctor()
inline void Dictionary_2__ctor_m3FB771855E23B4182804CE8BDE6B7D7FC92C86F0 (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_Playercontroller::m_Gamestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_Gamestart_m2281C1430EA3571B36118384F278DE1C77693F4C (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_Playercontroller::m_stopplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_stopplay_m2FCC37BB19DCF3F8ABF375A1AC84C98177826815 (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::SimpleMove(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_SimpleMove_mE32A48D439878B3241E8456F8EBFAAE264BD705C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___speed0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Cursor::get_visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cursor_get_visible_mC9926F373AB4B10F5376D37A6C278DBD85EF4871 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<FPSGame.c_zombiecontroller>()
inline c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* GameObject_GetComponent_Tisc_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D_m7F14D3CB0652B51C97EE820FF918D2164DF1E5E2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void FPSGame.c_zombiecontroller::m_killingzombies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_m_killingzombies_m6EE1117A8F11BC5D29B77775906D497E73DF0D4D (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void FPSGame.c_Playercontroller::m_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_Rotation_m9309CDDA41C51E37A2D218B9D8E11990CB3E60AD (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_Playercontroller::m_gunfire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_gunfire_m9B61D02836F4D5F1D29932A1CC827506773015D4 (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_Playercontroller::m_Playerjump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_Playerjump_m9CCBD705F946A7C816161E6E5EF808AF4627D335 (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_Playercontroller::m_playermove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_playermove_mDCB29AAD50618D05CFCF9E45BC6715A960485B6A (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_Playercontroller::m_playermanager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_playermanager_m0405DBAF098AC161E223F47DCD378C6F27E488BA (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<FPSGame.c_Playercontroller>()
inline c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* GameObject_GetComponent_Tisc_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123_m15EB183331C96D122402BDDC6D15E4E321D21330 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void FPSGame.c_zombiecontroller::m_zombiemanager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_m_zombiemanager_mDE456503D6142BE7D10FD08A30E7ACB6BFE77FA6 (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_zombiecontroller::m_Gameover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_m_Gameover_m47115BB50AEF84C4242CDDA9C15590296876264C (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_zombiecontroller::m_resetzombieposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_m_resetzombieposition_m062E41296BED6E10A35BBFD00FA5A6D8129A81CA (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void FPSGame.c_zombiesmanager::m_spawnzombies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager_m_spawnzombies_m6D9B62A9E5EFAEF523985002C43F17543A754AC3 (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_zombiesmanager::m_startzombiesspawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager_m_startzombiesspawn_mE50DBB002FDB959D8FD2C51779E3A6449A7318E1 (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void FPSGame.c_zombiesmanager::m_zombiesetposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager_m_zombiesetposition_mB49B230015A43EDB5722734FD6D109FDBE2083C2 (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_AutoStopLoopedEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect_OnEnable_mFAE624B7728A2F5F7865E685F4594BD0C9629FA5 (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	{
		// d = effectDuration;
		float L_0 = __this->___effectDuration_4;
		__this->___d_5 = L_0;
		// }
		return;
	}
}
// System.Void CFX_AutoStopLoopedEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect_Update_m8416521A39549298F203B44EF089B09EBD8793FD (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* V_0 = NULL;
	{
		// if(d > 0)
		float L_0 = __this->___d_5;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// d -= Time.deltaTime;
		float L_1 = __this->___d_5;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___d_5 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if(d <= 0)
		float L_3 = __this->___d_5;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// this.GetComponent<ParticleSystem>().Stop(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4;
		L_4 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF(L_4, (bool)1, NULL);
		// CFX_Demo_Translate translation = this.gameObject.GetComponent<CFX_Demo_Translate>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_6;
		L_6 = GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E(L_5, GameObject_GetComponent_TisCFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902_mB8168AF53999E053141A357369F4768DB5E0050E_RuntimeMethod_var);
		V_0 = L_6;
		// if(translation != null)
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// translation.enabled = false;
		CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* L_9 = V_0;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void CFX_AutoStopLoopedEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoStopLoopedEffect__ctor_m66E2F5DD06231BC3D8D01C11A34D7D55BE5F7AAE (CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* __this, const RuntimeMethod* method) 
{
	{
		// public float effectDuration = 2.5f;
		__this->___effectDuration_4 = (2.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_RandomDir::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDir_Awake_m1465D2BD17BDEFF2E87F7CC13E7A1124A4BC862B (CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.eulerAngles = new Vector3(Random.Range(min.x,max.x),Random.Range(min.y,max.y),Random.Range(min.z,max.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___min_4);
		float L_2 = L_1->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___max_5);
		float L_4 = L_3->___x_2;
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_2, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___min_4);
		float L_7 = L_6->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___max_5);
		float L_9 = L_8->___y_3;
		float L_10;
		L_10 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___min_4);
		float L_12 = L_11->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___max_5);
		float L_14 = L_13->___z_4;
		float L_15;
		L_15 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_5, L_10, L_15, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_16, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_RandomDir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RandomDir__ctor_m0D93F82C71A0EAE6FF074A8F3EDBBB81ED3D0B48 (CFX_Demo_RandomDir_t1ABEE68B0005EA8768B850153F696578B50C5BE2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 min = new Vector3(0,0,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___min_4 = L_0;
		// public Vector3 max = new Vector3(0,360,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (360.0f), (0.0f), /*hidden argument*/NULL);
		__this->___max_5 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_RotateCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera_Update_mF984EC78638612B1C89597528E3FD5ACBD2539A4 (CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(rotating)
		il2cpp_codegen_runtime_class_init_inline(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		bool L_0 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// transform.RotateAround(rotationCenter.position, Vector3.up, speed*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___rotationCenter_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_5 = __this->___speed_5;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_1, L_3, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void CFX_Demo_RotateCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera__ctor_m0ADA46D335888F3F43AC518ED19FFB1F1AABC7C8 (CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30.0f;
		__this->___speed_5 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void CFX_Demo_RotateCamera::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_RotateCamera__cctor_m91A2B9B7C22015C8CFD56A1E701AC8ACE5CFE5B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public bool rotating = true;
		((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_Demo_Translate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate_Start_m2408E76C85181E0D900CEFEA8E3CE9214763AC76 (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// dir = new Vector3(Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f),Random.Range(0.0f,360.0f));
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (360.0f), NULL);
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (360.0f), NULL);
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (360.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___dir_8 = L_3;
		// dir.Scale(rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___dir_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___rotation_5;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline(L_4, L_5, NULL);
		// this.transform.localEulerAngles = dir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___dir_8;
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_Translate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate_Update_mD71C66B91F9EC43DD9ABBA2D8A45CBD57DE8EBF7 (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Translate(axis * speed * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___axis_6;
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_0, L_5, 1, NULL);
		// }
		return;
	}
}
// System.Void CFX_Demo_Translate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_Demo_Translate__ctor_m44AD33D5825BE599180B3ED3E3668893F46E29DB (CFX_Demo_Translate_tC3CF45B1D799EBAE0813ABC5A88EBE77570EF902* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30.0f;
		__this->___speed_4 = (30.0f);
		// public Vector3 rotation = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		__this->___rotation_5 = L_0;
		// public Vector3 axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		__this->___axis_6 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_Demo::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_OnMouseDown_m62C5DE15D3114E0C81C9F741B2DB2DCDEA2B14A0 (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2246D1A00225602F08D8424E9F693180E2926E44);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if(this.GetComponent<Collider>().Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 9999f))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		bool L_4;
		L_4 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_0, L_3, (&V_0), (9999.0f), NULL);
		if (!L_4)
		{
			goto IL_0066;
		}
	}
	{
		// GameObject particle = spawnParticle();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = WFX_Demo_spawnParticle_m832B877853F70B7705A459813016EFA01DE7D12F(__this, NULL);
		V_1 = L_5;
		// if(!particle.name.StartsWith("WFX_MF"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		bool L_8;
		L_8 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_7, _stringLiteral2246D1A00225602F08D8424E9F693180E2926E44, NULL);
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		// particle.transform.position = hit.point + particle.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_11, L_14, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_15, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject WFX_Demo::spawnParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WFX_Demo_spawnParticle_m832B877853F70B7705A459813016EFA01DE7D12F (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2246D1A00225602F08D8424E9F693180E2926E44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral532B57B5E2100B443B584759B5FDECAD0E009876);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject particles = (GameObject)Instantiate(ParticleExamples[exampleIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___ParticleExamples_11;
		int32_t L_1 = __this->___exampleIndex_12;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_0 = L_4;
		// if(particles.name.StartsWith("WFX_MF"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_6, _stringLiteral2246D1A00225602F08D8424E9F693180E2926E44, NULL);
		if (!L_7)
		{
			goto IL_008d;
		}
	}
	{
		// particles.transform.parent = ParticleExamples[exampleIndex].transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___ParticleExamples_11;
		int32_t L_11 = __this->___exampleIndex_12;
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_9, L_15, NULL);
		// particles.transform.localPosition = ParticleExamples[exampleIndex].transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___ParticleExamples_11;
		int32_t L_19 = __this->___exampleIndex_12;
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_22, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_23, NULL);
		// particles.transform.localRotation = ParticleExamples[exampleIndex].transform.localRotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___ParticleExamples_11;
		int32_t L_27 = __this->___exampleIndex_12;
		int32_t L_28 = L_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_30, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_25, L_31, NULL);
		goto IL_00b5;
	}

IL_008d:
	{
		// else if(particles.name.Contains("Hole"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_0;
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		bool L_34;
		L_34 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_33, _stringLiteral532B57B5E2100B443B584759B5FDECAD0E009876, NULL);
		if (!L_34)
		{
			goto IL_00b5;
		}
	}
	{
		// particles.transform.parent = bulletholes.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___bulletholes_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_36, L_38, NULL);
	}

IL_00b5:
	{
		// SetActiveCrossVersions(particles, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_0;
		WFX_Demo_SetActiveCrossVersions_m9D5DB90DC6756717692DFF44AF3666F4AED2A2DF(__this, L_39, (bool)1, NULL);
		// return particles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_0;
		return L_40;
	}
}
// System.Void WFX_Demo::SetActiveCrossVersions(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_SetActiveCrossVersions_m9D5DB90DC6756717692DFF44AF3666F4AED2A2DF (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___active1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// obj.SetActive(active);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		bool L_1 = ___active1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// for(int i = 0; i < obj.transform.childCount; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_000b:
	{
		// obj.transform.GetChild(i).gameObject.SetActive(active);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___obj0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		int32_t L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		bool L_7 = ___active1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, L_7, NULL);
		// for(int i = 0; i < obj.transform.childCount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		// for(int i = 0; i < obj.transform.childCount; i++)
		int32_t L_9 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___obj0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		int32_t L_12;
		L_12 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_11, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WFX_Demo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_OnGUI_mC41BC490477FB8B60C44390E58D26C6B6B9C87AE (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06260ABDD533F441D145238FF507B0ABB590FBBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B34275F7E6D33122A596BF6D2CE4B3F6E7088C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6193643A099A5247775659EBCFC18CB27A1AE608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69C5CB98D19EAFE94080AB2624434700261D5675);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93AD152AECC97AD3DC12897D04CB1374C427125A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7B289E6DDF993786B4A55224A65C63D3F47DF95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAFCA01E5C8C6F2CE0D7804AAB5F2D8A58EA0A1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF67DCC3916C7C4C3E0CEE598448278253798169);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE908D5D8A9E98938B845B453873B65300546BE86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCC7890DE50B57030F6B69A9BDDC9712A67BDE04);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	String_t* G_B7_0 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B17_0 = NULL;
	float G_B29_0 = 0.0f;
	{
		// GUILayout.BeginArea(new Rect(5,20,Screen.width-10,60));
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_1), (5.0f), (20.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)10)))), (60.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_mA941799D3368A14C4ED7AC8516806369EAF01692(L_1, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2;
		L_2 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_2, NULL);
		// GUILayout.Label("Effect: " + ParticleExamples[exampleIndex].name, GUILayout.Width(280));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___ParticleExamples_11;
		int32_t L_4 = __this->___exampleIndex_12;
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCF67DCC3916C7C4C3E0CEE598448278253798169, L_7, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_10 = L_9;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_11;
		L_11 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((280.0f), NULL);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_11);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_8, L_10, NULL);
		// if(GUILayout.Button("<", GUILayout.Width(30)))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_12 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_13 = L_12;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_14;
		L_14 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((30.0f), NULL);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_14);
		bool L_15;
		L_15 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_13, NULL);
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		// prevParticle();
		WFX_Demo_prevParticle_m4941DE24175A8E2EBB006A11DD398EF75E9513CA(__this, NULL);
	}

IL_0085:
	{
		// if(GUILayout.Button(">", GUILayout.Width(30)))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_16 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_17 = L_16;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_18;
		L_18 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((30.0f), NULL);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_18);
		bool L_19;
		L_19 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, L_17, NULL);
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		// nextParticle();
		WFX_Demo_nextParticle_mDA349627751F67FF9655C13F683BAF2656DC0B9E(__this, NULL);
	}

IL_00aa:
	{
		// GUILayout.FlexibleSpace();
		GUILayout_FlexibleSpace_m034CCB8A75D407325DB670958160C057FC7A5EAE(NULL);
		// GUILayout.Label("Click on the ground to spawn the selected effect");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_20;
		L_20 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(_stringLiteralE908D5D8A9E98938B845B453873B65300546BE86, L_20, NULL);
		// GUILayout.FlexibleSpace();
		GUILayout_FlexibleSpace_m034CCB8A75D407325DB670958160C057FC7A5EAE(NULL);
		// if(GUILayout.Button(rotateCam ? "Pause Camera" : "Rotate Camera", GUILayout.Width(110)))
		bool L_21 = __this->___rotateCam_16;
		if (L_21)
		{
			goto IL_00d2;
		}
	}
	{
		G_B7_0 = _stringLiteral44B34275F7E6D33122A596BF6D2CE4B3F6E7088C;
		goto IL_00d7;
	}

IL_00d2:
	{
		G_B7_0 = _stringLiteral6193643A099A5247775659EBCFC18CB27A1AE608;
	}

IL_00d7:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_22 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_23 = L_22;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_24;
		L_24 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((110.0f), NULL);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_24);
		bool L_25;
		L_25 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(G_B7_0, L_23, NULL);
		if (!L_25)
		{
			goto IL_0100;
		}
	}
	{
		// rotateCam = !rotateCam;
		bool L_26 = __this->___rotateCam_16;
		__this->___rotateCam_16 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
	}

IL_0100:
	{
		// if(GUILayout.Button(this.GetComponent<Renderer>().enabled ? "Hide Ground" : "Show Ground", GUILayout.Width(90)))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_27;
		L_27 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		bool L_28;
		L_28 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_27, NULL);
		if (L_28)
		{
			goto IL_0114;
		}
	}
	{
		G_B12_0 = _stringLiteralFCC7890DE50B57030F6B69A9BDDC9712A67BDE04;
		goto IL_0119;
	}

IL_0114:
	{
		G_B12_0 = _stringLiteralA7B289E6DDF993786B4A55224A65C63D3F47DF95;
	}

IL_0119:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_29 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_30 = L_29;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_31;
		L_31 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((90.0f), NULL);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_31);
		bool L_32;
		L_32 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(G_B12_0, L_30, NULL);
		if (!L_32)
		{
			goto IL_014c;
		}
	}
	{
		// this.GetComponent<Renderer>().enabled = !this.GetComponent<Renderer>().enabled;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33;
		L_33 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_34;
		L_34 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		bool L_35;
		L_35 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_34, NULL);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_33, (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_014c:
	{
		// if(GUILayout.Button(slowMo ? "Normal Speed" : "Slow Motion", GUILayout.Width(100)))
		bool L_36 = __this->___slowMo_15;
		if (L_36)
		{
			goto IL_015b;
		}
	}
	{
		G_B17_0 = _stringLiteral93AD152AECC97AD3DC12897D04CB1374C427125A;
		goto IL_0160;
	}

IL_015b:
	{
		G_B17_0 = _stringLiteral69C5CB98D19EAFE94080AB2624434700261D5675;
	}

IL_0160:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_37 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_38 = L_37;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_39;
		L_39 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((100.0f), NULL);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_39);
		bool L_40;
		L_40 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(G_B17_0, L_38, NULL);
		if (!L_40)
		{
			goto IL_01a7;
		}
	}
	{
		// slowMo = !slowMo;
		bool L_41 = __this->___slowMo_15;
		__this->___slowMo_15 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		// if(slowMo)    Time.timeScale = 0.33f;
		bool L_42 = __this->___slowMo_15;
		if (!L_42)
		{
			goto IL_019d;
		}
	}
	{
		// if(slowMo)    Time.timeScale = 0.33f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.330000013f), NULL);
		goto IL_01a7;
	}

IL_019d:
	{
		// else          Time.timeScale = 1.0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
	}

IL_01a7:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_43;
		L_43 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_m6FDA82C3DA1AB43D1DABFC8B9C8E827950925220_RuntimeMethod_var);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_43, NULL);
		// GUILayout.Label("Ground texture: " + groundTextureStr, GUILayout.Width(160));
		String_t* L_44 = __this->___groundTextureStr_25;
		String_t* L_45;
		L_45 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCAFCA01E5C8C6F2CE0D7804AAB5F2D8A58EA0A1C, L_44, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_46 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_47 = L_46;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_48;
		L_48 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((160.0f), NULL);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_48);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_45, L_47, NULL);
		// if(GUILayout.Button("<", GUILayout.Width(30)))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_49 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_50 = L_49;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_51;
		L_51 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((30.0f), NULL);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_51);
		bool L_52;
		L_52 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_50, NULL);
		if (!L_52)
		{
			goto IL_0203;
		}
	}
	{
		// prevTexture();
		WFX_Demo_prevTexture_m0023E024EE2A8002216B6D53727BBDC6B0E6EBD9(__this, NULL);
	}

IL_0203:
	{
		// if(GUILayout.Button(">", GUILayout.Width(30)))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_53 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_54 = L_53;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_55;
		L_55 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((30.0f), NULL);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_55);
		bool L_56;
		L_56 = GUILayout_Button_m6D4E3D32A001EF42DB5C2052B4C19AB3B518566C(_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, L_54, NULL);
		if (!L_56)
		{
			goto IL_0228;
		}
	}
	{
		// nextTexture();
		WFX_Demo_nextTexture_m615CF3589AC7B7B62652816F7660F147A35B82BA(__this, NULL);
	}

IL_0228:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		// GUILayout.EndArea();
		GUILayout_EndArea_m1A496B300C5FDCEA653A1652CBA173F42E134371(NULL);
		// if(m4.GetComponent<Renderer>().enabled)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___m4_27;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_58;
		L_58 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_57, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		bool L_59;
		L_59 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_58, NULL);
		if (!L_59)
		{
			goto IL_03a4;
		}
	}
	{
		// GUILayout.BeginArea(new Rect(5, Screen.height - 100, Screen.width - 10, 90));
		int32_t L_60;
		L_60 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_61;
		L_61 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_62;
		memset((&L_62), 0, sizeof(L_62));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_62), (5.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_60, ((int32_t)100)))), ((float)((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)10)))), (90.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_mA941799D3368A14C4ED7AC8516806369EAF01692(L_62, NULL);
		// rotate_m4 = GUILayout.Toggle(rotate_m4, "AutoRotate Weapon", GUILayout.Width(250));
		bool L_63 = __this->___rotate_m4_29;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_64 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_65 = L_64;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_66;
		L_66 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((250.0f), NULL);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_66);
		bool L_67;
		L_67 = GUILayout_Toggle_m522126CFB7E08F398B66A5AE156C91E53AFC8248(L_63, _stringLiteral06260ABDD533F441D145238FF507B0ABB590FBBF, L_65, NULL);
		__this->___rotate_m4_29 = L_67;
		// GUI.enabled = !rotate_m4;
		bool L_68 = __this->___rotate_m4_29;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_enabled_m49481A7F8018837F8BBFAF5FD3A94D374CD203DA((bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0), NULL);
		// float rx = m4.transform.localEulerAngles.x;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___m4_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_70, NULL);
		float L_72 = L_71.___x_2;
		V_0 = L_72;
		// rx = rx > 90 ? rx-180 : rx;
		float L_73 = V_0;
		if ((((float)L_73) > ((float)(90.0f))))
		{
			goto IL_02c5;
		}
	}
	{
		float L_74 = V_0;
		G_B29_0 = L_74;
		goto IL_02cc;
	}

IL_02c5:
	{
		float L_75 = V_0;
		G_B29_0 = ((float)il2cpp_codegen_subtract(L_75, (180.0f)));
	}

IL_02cc:
	{
		V_0 = G_B29_0;
		// float ry = m4.transform.localEulerAngles.y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___m4_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_77, NULL);
		float L_79 = L_78.___y_3;
		V_1 = L_79;
		// float rz = m4.transform.localEulerAngles.z;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___m4_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_81, NULL);
		float L_83 = L_82.___z_4;
		V_2 = L_83;
		// rx = GUILayout.HorizontalSlider(rx, 0, 179, GUILayout.Width(256));
		float L_84 = V_0;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_85 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_86 = L_85;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_87;
		L_87 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((256.0f), NULL);
		ArrayElementTypeCheck (L_86, L_87);
		(L_86)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_87);
		float L_88;
		L_88 = GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F(L_84, (0.0f), (179.0f), L_86, NULL);
		V_0 = L_88;
		// ry = GUILayout.HorizontalSlider(ry, 0, 359, GUILayout.Width(256));
		float L_89 = V_1;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_90 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_91 = L_90;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_92;
		L_92 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((256.0f), NULL);
		ArrayElementTypeCheck (L_91, L_92);
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_92);
		float L_93;
		L_93 = GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F(L_89, (0.0f), (359.0f), L_91, NULL);
		V_1 = L_93;
		// rz = GUILayout.HorizontalSlider(rz, 0, 359, GUILayout.Width(256));
		float L_94 = V_2;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_95 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_96 = L_95;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_97;
		L_97 = GUILayout_Width_m3CD0F9B520A1B7BF065D30844E2F9965277E1DAA((256.0f), NULL);
		ArrayElementTypeCheck (L_96, L_97);
		(L_96)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_97);
		float L_98;
		L_98 = GUILayout_HorizontalSlider_m175798062A1AB644AC3C73CAB14AB648A26D804F(L_94, (0.0f), (359.0f), L_96, NULL);
		V_2 = L_98;
		// if(GUI.changed)
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_99;
		L_99 = GUI_get_changed_m691B5A1EC87949AF8474777B24221175ABE1B829(NULL);
		if (!L_99)
		{
			goto IL_039f;
		}
	}
	{
		// if(rx > 90)
		float L_100 = V_0;
		if ((!(((float)L_100) > ((float)(90.0f)))))
		{
			goto IL_037c;
		}
	}
	{
		// rx += 180;
		float L_101 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_101, (180.0f)));
	}

IL_037c:
	{
		// m4.transform.localEulerAngles = new Vector3(rx,ry,rz);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___m4_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_102, NULL);
		float L_104 = V_0;
		float L_105 = V_1;
		float L_106 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_107), L_104, L_105, L_106, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_103, L_107, NULL);
		// Debug.Log(rx);
		float L_108 = V_0;
		float L_109 = L_108;
		RuntimeObject* L_110 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_109);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_110, NULL);
	}

IL_039f:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_m1A496B300C5FDCEA653A1652CBA173F42E134371(NULL);
	}

IL_03a4:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator WFX_Demo::RandomSpawnsCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WFX_Demo_RandomSpawnsCoroutine_m509DFC3D70AC03AA9F4EE9B76A768DE8AC4F9E98 (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* L_0 = (U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132*)il2cpp_codegen_object_new(U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132_il2cpp_TypeInfo_var);
		U3CRandomSpawnsCoroutineU3Ed__30__ctor_m6937623BA2780BC4436B07EECDF9965334F21E1E(L_0, 0, NULL);
		U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WFX_Demo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_Update_mFC341A050035158BA214348C93BF2A7EFEF5BEB9 (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)276), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// prevParticle();
		WFX_Demo_prevParticle_m4941DE24175A8E2EBB006A11DD398EF75E9513CA(__this, NULL);
		goto IL_0026;
	}

IL_0014:
	{
		// else if(Input.GetKeyDown(KeyCode.RightArrow))
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)275), NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// nextParticle();
		WFX_Demo_nextParticle_mDA349627751F67FF9655C13F683BAF2656DC0B9E(__this, NULL);
	}

IL_0026:
	{
		// if(rotateCam)
		bool L_2 = __this->___rotateCam_16;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// Camera.main.transform.RotateAround(Vector3.zero, Vector3.up, cameraSpeed*Time.deltaTime);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_7 = __this->___cameraSpeed_4;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_4, L_5, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
	}

IL_0053:
	{
		// if(rotate_m4)
		bool L_9 = __this->___rotate_m4_29;
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// m4.transform.Rotate(new Vector3(0,40f,0) * Time.deltaTime, Space.World);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m4_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), (40.0f), (0.0f), /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_11, L_14, 0, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void WFX_Demo::prevTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_prevTexture_m0023E024EE2A8002216B6D53727BBDC6B0E6EBD9 (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = groundTextures.IndexOf(groundTextureStr);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___groundTextures_26;
		String_t* L_1 = __this->___groundTextureStr_25;
		int32_t L_2;
		L_2 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_0, L_1, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_2;
		// index--;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// if(index < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// index = groundTextures.Count-1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___groundTextures_26;
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0028:
	{
		// groundTextureStr = groundTextures[index];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___groundTextures_26;
		int32_t L_8 = V_0;
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, L_8, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___groundTextureStr_25 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_25), (void*)L_9);
		// selectMaterial();
		WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo::nextTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_nextTexture_m615CF3589AC7B7B62652816F7660F147A35B82BA (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = groundTextures.IndexOf(groundTextureStr);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___groundTextures_26;
		String_t* L_1 = __this->___groundTextureStr_25;
		int32_t L_2;
		L_2 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_0, L_1, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_2;
		// index++;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// if(index >= groundTextures.Count)
		int32_t L_4 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___groundTextures_26;
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0026;
		}
	}
	{
		// index = 0;
		V_0 = 0;
	}

IL_0026:
	{
		// groundTextureStr = groundTextures[index];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___groundTextures_26;
		int32_t L_8 = V_0;
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, L_8, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___groundTextureStr_25 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_25), (void*)L_9);
		// selectMaterial();
		WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo::selectMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317 (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch(groundTextureStr)
		String_t* L_0 = __this->___groundTextureStr_25;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralE6A9D90058077671906244DE2777322E222E7869, NULL);
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5, NULL);
		if (L_4)
		{
			goto IL_0096;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42, NULL);
		if (L_6)
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915, NULL);
		if (L_8)
		{
			goto IL_013e;
		}
	}
	{
		return;
	}

IL_0042:
	{
		// this.GetComponent<Renderer>().material = concrete;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___concrete_18;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_9, L_10, NULL);
		// walls.transform.GetChild(0).GetComponent<Renderer>().material = concreteWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___walls_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, 0, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14;
		L_14 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_13, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___concreteWall_22;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_14, L_15, NULL);
		// walls.transform.GetChild(1).GetComponent<Renderer>().material = concreteWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___walls_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_17, 1, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19;
		L_19 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_18, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___concreteWall_22;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_19, L_20, NULL);
		// break;
		return;
	}

IL_0096:
	{
		// this.GetComponent<Renderer>().material = wood;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21;
		L_21 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___wood_17;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_21, L_22, NULL);
		// walls.transform.GetChild(0).GetComponent<Renderer>().material = woodWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___walls_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_24, 0, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26;
		L_26 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_25, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___woodWall_21;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_26, L_27, NULL);
		// walls.transform.GetChild(1).GetComponent<Renderer>().material = woodWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___walls_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_29, 1, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_31;
		L_31 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_30, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___woodWall_21;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_31, L_32, NULL);
		// break;
		return;
	}

IL_00ea:
	{
		// this.GetComponent<Renderer>().material = metal;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33;
		L_33 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___metal_19;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_33, L_34, NULL);
		// walls.transform.GetChild(0).GetComponent<Renderer>().material = metalWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___walls_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_36, 0, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_38;
		L_38 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_37, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___metalWall_23;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_38, L_39, NULL);
		// walls.transform.GetChild(1).GetComponent<Renderer>().material = metalWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___walls_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_41, 1, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_43;
		L_43 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_42, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = __this->___metalWall_23;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_43, L_44, NULL);
		// break;
		return;
	}

IL_013e:
	{
		// this.GetComponent<Renderer>().material = checker;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_45;
		L_45 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = __this->___checker_20;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_45, L_46, NULL);
		// walls.transform.GetChild(0).GetComponent<Renderer>().material = checkerWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___walls_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_48, 0, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_50;
		L_50 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_49, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = __this->___checkerWall_24;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_50, L_51, NULL);
		// walls.transform.GetChild(1).GetComponent<Renderer>().material = checkerWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___walls_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_52, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_53, 1, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_55;
		L_55 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_54, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = __this->___checkerWall_24;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_55, L_56, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo::prevParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_prevParticle_m4941DE24175A8E2EBB006A11DD398EF75E9513CA (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	{
		// exampleIndex--;
		int32_t L_0 = __this->___exampleIndex_12;
		__this->___exampleIndex_12 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(exampleIndex < 0) exampleIndex = ParticleExamples.Length - 1;
		int32_t L_1 = __this->___exampleIndex_12;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// if(exampleIndex < 0) exampleIndex = ParticleExamples.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleExamples_11;
		__this->___exampleIndex_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// showHideStuff();
		WFX_Demo_showHideStuff_mCB62AFDA242C30EF9B1F096C01FB873E9A93A98C(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo::nextParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_nextParticle_mDA349627751F67FF9655C13F683BAF2656DC0B9E (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	{
		// exampleIndex++;
		int32_t L_0 = __this->___exampleIndex_12;
		__this->___exampleIndex_12 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(exampleIndex >= ParticleExamples.Length) exampleIndex = 0;
		int32_t L_1 = __this->___exampleIndex_12;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleExamples_11;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// if(exampleIndex >= ParticleExamples.Length) exampleIndex = 0;
		__this->___exampleIndex_12 = 0;
	}

IL_0025:
	{
		// showHideStuff();
		WFX_Demo_showHideStuff_mCB62AFDA242C30EF9B1F096C01FB873E9A93A98C(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo::showHideStuff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_showHideStuff_mCB62AFDA242C30EF9B1F096C01FB873E9A93A98C (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05EBC17976479C4FDAA22DD66F9C02FB7562757B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6920667A4ABA57DC308D67A485A20039AE65CCBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D98FA2B162E50665ABE5D86622D48D12106CC96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85A9B1C6F6C7D48F0F05B6A7D23FF136E9B12059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral921F9A578002B90C50EE770B0FE1B9EFB17EB305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96E4B0A5CBA6AEF33C84C6CED365CCB25EFA9F80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(ParticleExamples[exampleIndex].name.StartsWith("WFX_MF Spr"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___ParticleExamples_11;
		int32_t L_1 = __this->___exampleIndex_12;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		bool L_5;
		L_5 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_4, _stringLiteral85A9B1C6F6C7D48F0F05B6A7D23FF136E9B12059, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// m4.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m4_27;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_6, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)1, NULL);
		goto IL_0042;
	}

IL_0031:
	{
		// m4.GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___m4_27;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_8, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)0, NULL);
	}

IL_0042:
	{
		// if(ParticleExamples[exampleIndex].name.StartsWith("WFX_MF FPS"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___ParticleExamples_11;
		int32_t L_11 = __this->___exampleIndex_12;
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		bool L_15;
		L_15 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_14, _stringLiteral921F9A578002B90C50EE770B0FE1B9EFB17EB305, NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		// m4fps.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m4fps_28;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17;
		L_17 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_16, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_17, (bool)1, NULL);
		goto IL_0084;
	}

IL_0073:
	{
		// m4fps.GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___m4fps_28;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19;
		L_19 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_18, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_19, (bool)0, NULL);
	}

IL_0084:
	{
		// if(ParticleExamples[exampleIndex].name.StartsWith("WFX_BImpact"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___ParticleExamples_11;
		int32_t L_21 = __this->___exampleIndex_12;
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		String_t* L_24;
		L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
		bool L_25;
		L_25 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_24, _stringLiteral05EBC17976479C4FDAA22DD66F9C02FB7562757B, NULL);
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		// SetActiveCrossVersions(walls, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___walls_9;
		WFX_Demo_SetActiveCrossVersions_m9D5DB90DC6756717692DFF44AF3666F4AED2A2DF(__this, L_26, (bool)1, NULL);
		// Renderer[] rs = bulletholes.GetComponentsInChildren<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___bulletholes_10;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_28;
		L_28 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_27, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		// foreach(Renderer r in rs)
		V_0 = L_28;
		V_1 = 0;
		goto IL_00cc;
	}

IL_00bf:
	{
		// foreach(Renderer r in rs)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		// r.enabled = true;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_32, (bool)1, NULL);
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00cc:
	{
		// foreach(Renderer r in rs)
		int32_t L_34 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_00bf;
		}
	}
	{
		goto IL_0104;
	}

IL_00d4:
	{
		// SetActiveCrossVersions(walls, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___walls_9;
		WFX_Demo_SetActiveCrossVersions_m9D5DB90DC6756717692DFF44AF3666F4AED2A2DF(__this, L_36, (bool)0, NULL);
		// Renderer[] rs = bulletholes.GetComponentsInChildren<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___bulletholes_10;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_38;
		L_38 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_37, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		// foreach(Renderer r in rs)
		V_0 = L_38;
		V_1 = 0;
		goto IL_00fe;
	}

IL_00f1:
	{
		// foreach(Renderer r in rs)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_39 = V_0;
		int32_t L_40 = V_1;
		int32_t L_41 = L_40;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		// r.enabled = false;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_42, (bool)0, NULL);
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00fe:
	{
		// foreach(Renderer r in rs)
		int32_t L_44 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_00f1;
		}
	}

IL_0104:
	{
		// if(ParticleExamples[exampleIndex].name.Contains("Wood"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_46 = __this->___ParticleExamples_11;
		int32_t L_47 = __this->___exampleIndex_12;
		int32_t L_48 = L_47;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		String_t* L_50;
		L_50 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_49, NULL);
		bool L_51;
		L_51 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_50, _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5, NULL);
		if (!L_51)
		{
			goto IL_0134;
		}
	}
	{
		// groundTextureStr = "Wood";
		__this->___groundTextureStr_25 = _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_25), (void*)_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		// selectMaterial();
		WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317(__this, NULL);
		return;
	}

IL_0134:
	{
		// else if(ParticleExamples[exampleIndex].name.Contains("Concrete"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_52 = __this->___ParticleExamples_11;
		int32_t L_53 = __this->___exampleIndex_12;
		int32_t L_54 = L_53;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		String_t* L_56;
		L_56 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_55, NULL);
		bool L_57;
		L_57 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_56, _stringLiteralE6A9D90058077671906244DE2777322E222E7869, NULL);
		if (!L_57)
		{
			goto IL_0164;
		}
	}
	{
		// groundTextureStr = "Concrete";
		__this->___groundTextureStr_25 = _stringLiteralE6A9D90058077671906244DE2777322E222E7869;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_25), (void*)_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		// selectMaterial();
		WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317(__this, NULL);
		return;
	}

IL_0164:
	{
		// else if(ParticleExamples[exampleIndex].name.Contains("Metal"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_58 = __this->___ParticleExamples_11;
		int32_t L_59 = __this->___exampleIndex_12;
		int32_t L_60 = L_59;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		String_t* L_62;
		L_62 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_61, NULL);
		bool L_63;
		L_63 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_62, _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42, NULL);
		if (!L_63)
		{
			goto IL_0194;
		}
	}
	{
		// groundTextureStr = "Metal";
		__this->___groundTextureStr_25 = _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_25), (void*)_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		// selectMaterial();
		WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317(__this, NULL);
		return;
	}

IL_0194:
	{
		// else if(ParticleExamples[exampleIndex].name.Contains("Dirt")
		//     || ParticleExamples[exampleIndex].name.Contains("Sand")
		//     || ParticleExamples[exampleIndex].name.Contains("SoftBody"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_64 = __this->___ParticleExamples_11;
		int32_t L_65 = __this->___exampleIndex_12;
		int32_t L_66 = L_65;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		String_t* L_68;
		L_68 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_67, NULL);
		bool L_69;
		L_69 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_68, _stringLiteral96E4B0A5CBA6AEF33C84C6CED365CCB25EFA9F80, NULL);
		if (L_69)
		{
			goto IL_01ee;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_70 = __this->___ParticleExamples_11;
		int32_t L_71 = __this->___exampleIndex_12;
		int32_t L_72 = L_71;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		String_t* L_74;
		L_74 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_73, NULL);
		bool L_75;
		L_75 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_74, _stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7, NULL);
		if (L_75)
		{
			goto IL_01ee;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_76 = __this->___ParticleExamples_11;
		int32_t L_77 = __this->___exampleIndex_12;
		int32_t L_78 = L_77;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		String_t* L_80;
		L_80 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_79, NULL);
		bool L_81;
		L_81 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_80, _stringLiteral6920667A4ABA57DC308D67A485A20039AE65CCBA, NULL);
		if (!L_81)
		{
			goto IL_0200;
		}
	}

IL_01ee:
	{
		// groundTextureStr = "Checker";
		__this->___groundTextureStr_25 = _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_25), (void*)_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		// selectMaterial();
		WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317(__this, NULL);
		return;
	}

IL_0200:
	{
		// else if(ParticleExamples[exampleIndex].name == "WFX_Explosion")
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_82 = __this->___ParticleExamples_11;
		int32_t L_83 = __this->___exampleIndex_12;
		int32_t L_84 = L_83;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_84));
		String_t* L_86;
		L_86 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_85, NULL);
		bool L_87;
		L_87 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_86, _stringLiteral6D98FA2B162E50665ABE5D86622D48D12106CC96, NULL);
		if (!L_87)
		{
			goto IL_022f;
		}
	}
	{
		// groundTextureStr = "Checker";
		__this->___groundTextureStr_25 = _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_25), (void*)_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		// selectMaterial();
		WFX_Demo_selectMaterial_m7164EE805C17436B584D7584DF77564950085317(__this, NULL);
	}

IL_022f:
	{
		// }
		return;
	}
}
// System.Void WFX_Demo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo__ctor_m1C28A425C9E8507BB1E83DBB76454F1E3A0616A9 (WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44532F19C5F385826D7358587796C923BACD2B62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float cameraSpeed = 10f;
		__this->___cameraSpeed_4 = (10.0f);
		// public bool orderedSpawns = true;
		__this->___orderedSpawns_5 = (bool)1;
		// public float step = 1.0f;
		__this->___step_6 = (1.0f);
		// public float range = 5.0f;
		__this->___range_7 = (5.0f);
		// private float order = -5.0f;
		__this->___order_8 = (-5.0f);
		// private string randomSpawnsDelay = "0.5";
		__this->___randomSpawnsDelay_13 = _stringLiteral44532F19C5F385826D7358587796C923BACD2B62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomSpawnsDelay_13), (void*)_stringLiteral44532F19C5F385826D7358587796C923BACD2B62);
		// private bool rotateCam = true;
		__this->___rotateCam_16 = (bool)1;
		// private string groundTextureStr = "Checker";
		__this->___groundTextureStr_25 = _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_25), (void*)_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		// private List<string> groundTextures = new List<string>(new string[]{"Concrete","Wood","Metal","Checker"});
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_5, (RuntimeObject*)L_4, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		__this->___groundTextures_26 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextures_26), (void*)L_5);
		// private bool rotate_m4 = true;
		__this->___rotate_m4_29 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_Demo/<RandomSpawnsCoroutine>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomSpawnsCoroutineU3Ed__30__ctor_m6937623BA2780BC4436B07EECDF9965334F21E1E (U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WFX_Demo/<RandomSpawnsCoroutine>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomSpawnsCoroutineU3Ed__30_System_IDisposable_Dispose_mE3BE226B828598673C70F71CABC18442C07851D4 (U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WFX_Demo/<RandomSpawnsCoroutine>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRandomSpawnsCoroutineU3Ed__30_MoveNext_m4B5F4620CC18B699B578558A5897A9DB30807800 (U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0127;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0021:
	{
		// GameObject particles = spawnParticle();
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = WFX_Demo_spawnParticle_m832B877853F70B7705A459813016EFA01DE7D12F(L_4, NULL);
		V_2 = L_5;
		// if(orderedSpawns)
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_6 = V_1;
		bool L_7 = L_6->___orderedSpawns_5;
		if (!L_7)
		{
			goto IL_009b;
		}
	}
	{
		// particles.transform.position = this.transform.position + new Vector3(order,particles.transform.position.y,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_10 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_13 = V_1;
		float L_14 = L_13->___order_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_14, L_18, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_19, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_20, NULL);
		// order -= step;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_21 = V_1;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_22 = V_1;
		float L_23 = L_22->___order_8;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_24 = V_1;
		float L_25 = L_24->___step_6;
		L_21->___order_8 = ((float)il2cpp_codegen_subtract(L_23, L_25));
		// if(order < -range) order = range;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_26 = V_1;
		float L_27 = L_26->___order_8;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_28 = V_1;
		float L_29 = L_28->___range_7;
		if ((!(((float)L_27) < ((float)((-L_29))))))
		{
			goto IL_0108;
		}
	}
	{
		// if(order < -range) order = range;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_30 = V_1;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_31 = V_1;
		float L_32 = L_31->___range_7;
		L_30->___order_8 = L_32;
		goto IL_0108;
	}

IL_009b:
	{
		// else                 particles.transform.position = this.transform.position + new Vector3(Random.Range(-range,range),0,Random.Range(-range,range)) + new Vector3(0,particles.transform.position.y,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_35 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_38 = V_1;
		float L_39 = L_38->___range_7;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_40 = V_1;
		float L_41 = L_40->___range_7;
		float L_42;
		L_42 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_39)), L_41, NULL);
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_43 = V_1;
		float L_44 = L_43->___range_7;
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_45 = V_1;
		float L_46 = L_45->___range_7;
		float L_47;
		L_47 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_44)), L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_42, (0.0f), L_47, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_37, L_48, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_54), (0.0f), L_53, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_49, L_54, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_55, NULL);
	}

IL_0108:
	{
		// yield return new WaitForSeconds(float.Parse(randomSpawnsDelay));
		WFX_Demo_tC07D55F4145C1C0794B1AF200DBC53B87A88F8AA* L_56 = V_1;
		String_t* L_57 = L_56->___randomSpawnsDelay_13;
		float L_58;
		L_58 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_57, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_59 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_59, L_58, NULL);
		__this->___U3CU3E2__current_1 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_59);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0127:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// goto LOOP;
		goto IL_0021;
	}
}
// System.Object WFX_Demo/<RandomSpawnsCoroutine>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRandomSpawnsCoroutineU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6858B43516D7E014C7BAC4306C3F8C9F70BF24F0 (U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WFX_Demo/<RandomSpawnsCoroutine>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRandomSpawnsCoroutineU3Ed__30_System_Collections_IEnumerator_Reset_m394030DA5A2F60E8F34A3ABB5A64BFA9D86A353B (U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRandomSpawnsCoroutineU3Ed__30_System_Collections_IEnumerator_Reset_m394030DA5A2F60E8F34A3ABB5A64BFA9D86A353B_RuntimeMethod_var)));
	}
}
// System.Object WFX_Demo/<RandomSpawnsCoroutine>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRandomSpawnsCoroutineU3Ed__30_System_Collections_IEnumerator_get_Current_m63A71333BE3F3F7C4A6FB636B947F69B3240993F (U3CRandomSpawnsCoroutineU3Ed__30_t4FDC3472AEB7F63995A41451FBA4BEAF0860F132* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_Demo_DeleteAfterDelay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_DeleteAfterDelay_Update_mF88F5F2088BF227333FC0298CD1C992DCC79846E (WFX_Demo_DeleteAfterDelay_tF6006AB3311A95B55059088B927CD155CD255E89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delay -= Time.deltaTime;
		float L_0 = __this->___delay_4;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___delay_4 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if(delay < 0f)
		float L_2 = __this->___delay_4;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		// GameObject.Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void WFX_Demo_DeleteAfterDelay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_DeleteAfterDelay__ctor_mEEDD108EADE9B129C5198908837BD62A1302DAC0 (WFX_Demo_DeleteAfterDelay_tF6006AB3311A95B55059088B927CD155CD255E89* __this, const RuntimeMethod* method) 
{
	{
		// public float delay = 1.0f;
		__this->___delay_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_Demo_New::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_Awake_m0DC6093958DA48E9A437109FC88D8C94938638B0 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// List<GameObject> particleExampleList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_0 = L_0;
		// int nbChild = this.transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_1 = L_2;
		// for(int i = 0; i < nbChild; i++)
		V_2 = 0;
		goto IL_0033;
	}

IL_0016:
	{
		// GameObject child = this.transform.GetChild(i).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_4 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		V_3 = L_6;
		// particleExampleList.Add(child);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_3;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_7, L_8, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for(int i = 0; i < nbChild; i++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		// for(int i = 0; i < nbChild; i++)
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0016;
		}
	}
	{
		// particleExampleList.AddRange(AdditionalEffects);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___AdditionalEffects_14;
		List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C(L_12, (RuntimeObject*)L_13, List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
		// ParticleExamples = particleExampleList.ToArray();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15;
		L_15 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_14, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		__this->___ParticleExamples_30 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ParticleExamples_30), (void*)L_15);
		// defaultCamPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		__this->___defaultCamPosition_33 = L_18;
		// defaultCamRotation = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		__this->___defaultCamRotation_34 = L_21;
		// StartCoroutine("CheckForDeletedParticles");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralBEBC54B2B3D2A59541375C139C15B52B4B751D64, NULL);
		// UpdateUI();
		WFX_Demo_New_UpdateUI_m2F66BB192E9967A45B5D846A001323F317E8FE69(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_Update_mDAAA4FFDE3FA7433136CDBCC5E7BA90C6A3204D0 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2246D1A00225602F08D8424E9F693180E2926E44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_1 = NULL;
	float G_B14_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B14_1;
	memset((&G_B14_1), 0, sizeof(G_B14_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B14_2 = NULL;
	{
		// if(Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)276), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// prevParticle();
		WFX_Demo_New_prevParticle_m103DA4318BEBF5042C42AA7EA67AD1AA1017A21A(__this, NULL);
		goto IL_0037;
	}

IL_0014:
	{
		// else if(Input.GetKeyDown(KeyCode.RightArrow))
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)275), NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// nextParticle();
		WFX_Demo_New_nextParticle_m621CFC7C1A0A5B08B9A5BB23D1B3B4AE4E46ED07(__this, NULL);
		goto IL_0037;
	}

IL_0028:
	{
		// else if(Input.GetKeyDown(KeyCode.Delete))
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)127), NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// destroyParticles();
		WFX_Demo_New_destroyParticles_m6221722CBE191ED207CD56B5A78B07D051F92521(__this, NULL);
	}

IL_0037:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_3)
		{
			goto IL_00a5;
		}
	}
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if(groundCollider.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 9999f))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->___groundCollider_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_6, NULL);
		bool L_8;
		L_8 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_4, L_7, (&V_1), (9999.0f), NULL);
		if (!L_8)
		{
			goto IL_00a5;
		}
	}
	{
		// GameObject particle = spawnParticle();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = WFX_Demo_New_spawnParticle_mB16D13E226CA4267E6178E785A6A33E181CB6F53(__this, NULL);
		V_2 = L_9;
		// if(!particle.name.StartsWith("WFX_MF"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		bool L_12;
		L_12 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_11, _stringLiteral2246D1A00225602F08D8424E9F693180E2926E44, NULL);
		if (L_12)
		{
			goto IL_00a5;
		}
	}
	{
		// particle.transform.position = hit.point + particle.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_18, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_19, NULL);
	}

IL_00a5:
	{
		// float scroll = Input.GetAxis("Mouse ScrollWheel");
		float L_20;
		L_20 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_0 = L_20;
		// if(scroll != 0f)
		float L_21 = V_0;
		if ((((float)L_21) == ((float)(0.0f))))
		{
			goto IL_00e6;
		}
	}
	{
		// Camera.main.transform.Translate(Vector3.forward * (scroll < 0f ? -1f : 1f), Space.Self);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_25 = V_0;
		G_B12_0 = L_24;
		G_B12_1 = L_23;
		if ((((float)L_25) < ((float)(0.0f))))
		{
			G_B13_0 = L_24;
			G_B13_1 = L_23;
			goto IL_00d6;
		}
	}
	{
		G_B14_0 = (1.0f);
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00db;
	}

IL_00d6:
	{
		G_B14_0 = (-1.0f);
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00db:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(G_B14_1, G_B14_0, NULL);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(G_B14_2, L_26, 1, NULL);
	}

IL_00e6:
	{
		// if(Input.GetMouseButtonDown(2))
		bool L_27;
		L_27 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(2, NULL);
		if (!L_27)
		{
			goto IL_0118;
		}
	}
	{
		// Camera.main.transform.position = defaultCamPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28;
		L_28 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___defaultCamPosition_33;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_30, NULL);
		// Camera.main.transform.rotation = defaultCamRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31;
		L_31 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = __this->___defaultCamRotation_34;
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_33, NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void WFX_Demo_New::OnToggleGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_OnToggleGround_m997798D6CE1AF28353B33A4F673614AE323A9C12 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_0;
		// groundRenderer.enabled = !groundRenderer.enabled;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___groundRenderer_4;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->___groundRenderer_4;
		bool L_3;
		L_3 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_2, NULL);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// c.a = groundRenderer.enabled ? 1f : 0.33f;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___groundRenderer_4;
		bool L_5;
		L_5 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_4, NULL);
		G_B1_0 = (&V_0);
		if (L_5)
		{
			G_B2_0 = (&V_0);
			goto IL_0035;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0035:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->___a_3 = G_B3_0;
		// groundBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___groundBtn_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// groundLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___groundLabel_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::OnToggleCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_OnToggleCamera_m94F306D1ABE5C7729216EF116569C2929AE0F7B6 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_0;
		// CFX_Demo_RotateCamera.rotating = !CFX_Demo_RotateCamera.rotating;
		il2cpp_codegen_runtime_class_init_inline(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var);
		bool L_1 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// c.a = CFX_Demo_RotateCamera.rotating ? 1f : 0.33f;
		bool L_2 = ((CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_StaticFields*)il2cpp_codegen_static_fields_for(CFX_Demo_RotateCamera_t359D90E0A13C95EB07BF1C16684DE2C8F023B897_il2cpp_TypeInfo_var))->___rotating_4;
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_0023;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0023:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		G_B3_1->___a_3 = G_B3_0;
		// camRotBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___camRotBtn_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// camRotLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___camRotLabel_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::OnToggleSlowMo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_OnToggleSlowMo_m5094E7AE9D9C8B4F5F55C166B5AACE9B39B0FA75 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var c = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_0;
		// slowMo = !slowMo;
		bool L_1 = __this->___slowMo_32;
		__this->___slowMo_32 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// if(slowMo)
		bool L_2 = __this->___slowMo_32;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// Time.timeScale = 0.33f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.330000013f), NULL);
		// c.a = 1f;
		(&V_0)->___a_3 = (1.0f);
		goto IL_004b;
	}

IL_0035:
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// c.a = 0.33f;
		(&V_0)->___a_3 = (0.330000013f);
	}

IL_004b:
	{
		// slowMoBtn.color = c;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___slowMoBtn_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// slowMoLabel.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___slowMoLabel_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::OnPreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_OnPreviousEffect_mC27CCF420E07659F42835A02754581C904DAD618 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	{
		// prevParticle();
		WFX_Demo_New_prevParticle_m103DA4318BEBF5042C42AA7EA67AD1AA1017A21A(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::OnNextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_OnNextEffect_m1AF3F584EAFECA2E1E123D3C0AADD2771B729BD6 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	{
		// nextParticle();
		WFX_Demo_New_nextParticle_m621CFC7C1A0A5B08B9A5BB23D1B3B4AE4E46ED07(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_UpdateUI_m2F66BB192E9967A45B5D846A001323F317E8FE69 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// EffectLabel.text = ParticleExamples[exampleIndex].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___EffectLabel_12;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___ParticleExamples_30;
		int32_t L_2 = __this->___exampleIndex_31;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// EffectIndexLabel.text = string.Format("{0}/{1}", (exampleIndex+1).ToString("00"), ParticleExamples.Length.ToString("00"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___EffectIndexLabel_13;
		int32_t L_7 = __this->___exampleIndex_31;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		String_t* L_8;
		L_8 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___ParticleExamples_30;
		V_0 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		String_t* L_10;
		L_10 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, NULL);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_8, L_10, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// }
		return;
	}
}
// UnityEngine.GameObject WFX_Demo_New::spawnParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WFX_Demo_New_spawnParticle_mB16D13E226CA4267E6178E785A6A33E181CB6F53 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2246D1A00225602F08D8424E9F693180E2926E44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral532B57B5E2100B443B584759B5FDECAD0E009876);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GameObject particles = (GameObject)Instantiate(ParticleExamples[exampleIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___ParticleExamples_30;
		int32_t L_1 = __this->___exampleIndex_31;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_0 = L_4;
		// particles.transform.position = new Vector3(0,particles.transform.position.y,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_11, NULL);
		// particles.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if(particles.name.StartsWith("WFX_MF"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		bool L_15;
		L_15 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_14, _stringLiteral2246D1A00225602F08D8424E9F693180E2926E44, NULL);
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		// particles.transform.parent = ParticleExamples[exampleIndex].transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___ParticleExamples_30;
		int32_t L_19 = __this->___exampleIndex_31;
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_22, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_17, L_23, NULL);
		// particles.transform.localPosition = ParticleExamples[exampleIndex].transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___ParticleExamples_30;
		int32_t L_27 = __this->___exampleIndex_31;
		int32_t L_28 = L_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_30, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_25, L_31, NULL);
		// particles.transform.localRotation = ParticleExamples[exampleIndex].transform.localRotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = __this->___ParticleExamples_30;
		int32_t L_35 = __this->___exampleIndex_31;
		int32_t L_36 = L_35;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_38, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_33, L_39, NULL);
		goto IL_00e6;
	}

IL_00be:
	{
		// else if(particles.name.Contains("Hole"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_0;
		String_t* L_41;
		L_41 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_40, NULL);
		bool L_42;
		L_42 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_41, _stringLiteral532B57B5E2100B443B584759B5FDECAD0E009876, NULL);
		if (!L_42)
		{
			goto IL_00e6;
		}
	}
	{
		// particles.transform.parent = bulletholes.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___bulletholes_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_44, L_46, NULL);
	}

IL_00e6:
	{
		// ParticleSystem ps = particles.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_48;
		L_48 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_47, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_1 = L_48;
		// if (ps != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_49 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_011e;
		}
	}
	{
		// var main = ps.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_51 = V_1;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_52;
		L_52 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_51, NULL);
		V_2 = L_52;
		// if (main.loop)
		bool L_53;
		L_53 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_2), NULL);
		if (!L_53)
		{
			goto IL_011e;
		}
	}
	{
		// ps.gameObject.AddComponent<CFX_AutoStopLoopedEffect>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_54 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_54, NULL);
		CFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A* L_56;
		L_56 = GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA(L_55, GameObject_AddComponent_TisCFX_AutoStopLoopedEffect_t96B089426A22135A69F9AD4D40B72157FAAE5A3A_mEF892AE5EA6E23A4B49F932B61910B9519A940EA_RuntimeMethod_var);
		// ps.gameObject.AddComponent<CFX_AutoDestructShuriken>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_57 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_57, NULL);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_59;
		L_59 = GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8(L_58, GameObject_AddComponent_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m57AD7BC2C74B5B0DB79D1A50B788F8BBB2EA81A8_RuntimeMethod_var);
	}

IL_011e:
	{
		// onScreenParticles.Add(particles);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_60 = __this->___onScreenParticles_35;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_0;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_60, L_61, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return particles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_0;
		return L_62;
	}
}
// System.Collections.IEnumerator WFX_Demo_New::CheckForDeletedParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WFX_Demo_New_CheckForDeletedParticles_mDFEE9ECA5FB821BDE650F968E954846F2E98975B (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* L_0 = (U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C*)il2cpp_codegen_object_new(U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C_il2cpp_TypeInfo_var);
		U3CCheckForDeletedParticlesU3Ed__41__ctor_m1DA482D5A6ED757DD541C2DA863D64C74E6B4473(L_0, 0, NULL);
		U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WFX_Demo_New::prevParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_prevParticle_m103DA4318BEBF5042C42AA7EA67AD1AA1017A21A (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	{
		// exampleIndex--;
		int32_t L_0 = __this->___exampleIndex_31;
		__this->___exampleIndex_31 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if(exampleIndex < 0) exampleIndex = ParticleExamples.Length - 1;
		int32_t L_1 = __this->___exampleIndex_31;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// if(exampleIndex < 0) exampleIndex = ParticleExamples.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleExamples_30;
		__this->___exampleIndex_31 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// UpdateUI();
		WFX_Demo_New_UpdateUI_m2F66BB192E9967A45B5D846A001323F317E8FE69(__this, NULL);
		// showHideStuff();
		WFX_Demo_New_showHideStuff_mA801781E5FE2DA8DAE888FFB41655C61C242E8FB(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::nextParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_nextParticle_m621CFC7C1A0A5B08B9A5BB23D1B3B4AE4E46ED07 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	{
		// exampleIndex++;
		int32_t L_0 = __this->___exampleIndex_31;
		__this->___exampleIndex_31 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(exampleIndex >= ParticleExamples.Length) exampleIndex = 0;
		int32_t L_1 = __this->___exampleIndex_31;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleExamples_30;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// if(exampleIndex >= ParticleExamples.Length) exampleIndex = 0;
		__this->___exampleIndex_31 = 0;
	}

IL_0025:
	{
		// UpdateUI();
		WFX_Demo_New_UpdateUI_m2F66BB192E9967A45B5D846A001323F317E8FE69(__this, NULL);
		// showHideStuff();
		WFX_Demo_New_showHideStuff_mA801781E5FE2DA8DAE888FFB41655C61C242E8FB(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::destroyParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_destroyParticles_m6221722CBE191ED207CD56B5A78B07D051F92521 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___onScreenParticles_35;
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0045;
	}

IL_0010:
	{
		// if(onScreenParticles[i] != null)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___onScreenParticles_35;
		int32_t L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// GameObject.Destroy(onScreenParticles[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___onScreenParticles_35;
		int32_t L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
	}

IL_0035:
	{
		// onScreenParticles.RemoveAt(i);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___onScreenParticles_35;
		int32_t L_10 = V_0;
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_9, L_10, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0045:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WFX_Demo_New::prevTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_prevTexture_m0C5F66C5E9E0DC0EFE026E3B2FA1F86BDABBFD4E (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = groundTextures.IndexOf(groundTextureStr);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___groundTextures_29;
		String_t* L_1 = __this->___groundTextureStr_28;
		int32_t L_2;
		L_2 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_0, L_1, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_2;
		// index--;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// if(index < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// index = groundTextures.Count-1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___groundTextures_29;
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0028:
	{
		// groundTextureStr = groundTextures[index];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___groundTextures_29;
		int32_t L_8 = V_0;
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, L_8, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___groundTextureStr_28 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_28), (void*)L_9);
		// selectMaterial();
		WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::nextTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_nextTexture_m34EFD096E7DAD6547D7481D6B9B0A754D8868539 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = groundTextures.IndexOf(groundTextureStr);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___groundTextures_29;
		String_t* L_1 = __this->___groundTextureStr_28;
		int32_t L_2;
		L_2 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_0, L_1, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_2;
		// index++;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// if(index >= groundTextures.Count)
		int32_t L_4 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___groundTextures_29;
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0026;
		}
	}
	{
		// index = 0;
		V_0 = 0;
	}

IL_0026:
	{
		// groundTextureStr = groundTextures[index];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___groundTextures_29;
		int32_t L_8 = V_0;
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, L_8, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___groundTextureStr_28 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_28), (void*)L_9);
		// selectMaterial();
		WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7(__this, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::selectMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch(groundTextureStr)
		String_t* L_0 = __this->___groundTextureStr_28;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralE6A9D90058077671906244DE2777322E222E7869, NULL);
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5, NULL);
		if (L_4)
		{
			goto IL_009b;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42, NULL);
		if (L_6)
		{
			goto IL_00f4;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915, NULL);
		if (L_8)
		{
			goto IL_014d;
		}
	}
	{
		return;
	}

IL_0042:
	{
		// ground.GetComponent<Renderer>().material = concrete;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___ground_15;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10;
		L_10 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_9, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___concrete_21;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_10, L_11, NULL);
		// walls.transform.GetChild(0).GetComponent<Renderer>().material = concreteWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___walls_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, 0, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15;
		L_15 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_14, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___concreteWall_25;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_15, L_16, NULL);
		// walls.transform.GetChild(1).GetComponent<Renderer>().material = concreteWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___walls_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_18, 1, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_20;
		L_20 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_19, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___concreteWall_25;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_20, L_21, NULL);
		// break;
		return;
	}

IL_009b:
	{
		// ground.GetComponent<Renderer>().material = wood;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___ground_15;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23;
		L_23 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_22, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___wood_20;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_23, L_24, NULL);
		// walls.transform.GetChild(0).GetComponent<Renderer>().material = woodWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___walls_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_26, 0, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_28;
		L_28 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_27, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___woodWall_24;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_28, L_29, NULL);
		// walls.transform.GetChild(1).GetComponent<Renderer>().material = woodWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___walls_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_31, 1, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33;
		L_33 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_32, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___woodWall_24;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_33, L_34, NULL);
		// break;
		return;
	}

IL_00f4:
	{
		// ground.GetComponent<Renderer>().material = metal;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___ground_15;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_36;
		L_36 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_35, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___metal_22;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_36, L_37, NULL);
		// walls.transform.GetChild(0).GetComponent<Renderer>().material = metalWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___walls_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_39, 0, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_41;
		L_41 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_40, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = __this->___metalWall_26;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_41, L_42, NULL);
		// walls.transform.GetChild(1).GetComponent<Renderer>().material = metalWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___walls_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_44, 1, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_46;
		L_46 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_45, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___metalWall_26;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_46, L_47, NULL);
		// break;
		return;
	}

IL_014d:
	{
		// ground.GetComponent<Renderer>().material = checker;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___ground_15;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_49;
		L_49 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_48, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->___checker_23;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_49, L_50, NULL);
		// walls.transform.GetChild(0).GetComponent<Renderer>().material = checkerWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___walls_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_51, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_52, 0, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_54;
		L_54 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_53, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = __this->___checkerWall_27;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_54, L_55, NULL);
		// walls.transform.GetChild(1).GetComponent<Renderer>().material = checkerWall;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___walls_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_57, 1, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_59;
		L_59 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_58, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->___checkerWall_27;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_59, L_60, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_New::showHideStuff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New_showHideStuff_mA801781E5FE2DA8DAE888FFB41655C61C242E8FB (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05EBC17976479C4FDAA22DD66F9C02FB7562757B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6920667A4ABA57DC308D67A485A20039AE65CCBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D98FA2B162E50665ABE5D86622D48D12106CC96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85A9B1C6F6C7D48F0F05B6A7D23FF136E9B12059);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral921F9A578002B90C50EE770B0FE1B9EFB17EB305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96E4B0A5CBA6AEF33C84C6CED365CCB25EFA9F80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(ParticleExamples[exampleIndex].name.StartsWith("WFX_MF Spr"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___ParticleExamples_30;
		int32_t L_1 = __this->___exampleIndex_31;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		bool L_5;
		L_5 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_4, _stringLiteral85A9B1C6F6C7D48F0F05B6A7D23FF136E9B12059, NULL);
		if (!L_5)
		{
			goto IL_0077;
		}
	}
	{
		// m4.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m4_18;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_6, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)1, NULL);
		// Camera.main.transform.position = new Vector3(-2.482457f, 3.263842f, -0.004924395f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (-2.48245692f), (3.26384211f), (-0.00492439512f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		// Camera.main.transform.eulerAngles = new Vector3(20f, 90f, 0f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (20.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_12, L_13, NULL);
		goto IL_0088;
	}

IL_0077:
	{
		// m4.GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m4_18;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15;
		L_15 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_14, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_15, (bool)0, NULL);
	}

IL_0088:
	{
		// if(ParticleExamples[exampleIndex].name.StartsWith("WFX_MF FPS"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___ParticleExamples_30;
		int32_t L_17 = __this->___exampleIndex_31;
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		bool L_21;
		L_21 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_20, _stringLiteral921F9A578002B90C50EE770B0FE1B9EFB17EB305, NULL);
		if (!L_21)
		{
			goto IL_00b9;
		}
	}
	{
		// m4fps.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___m4fps_19;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23;
		L_23 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_22, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_23, (bool)1, NULL);
		goto IL_00ca;
	}

IL_00b9:
	{
		// m4fps.GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___m4fps_19;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25;
		L_25 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_24, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_25, (bool)0, NULL);
	}

IL_00ca:
	{
		// if(ParticleExamples[exampleIndex].name.StartsWith("WFX_BImpact"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___ParticleExamples_30;
		int32_t L_27 = __this->___exampleIndex_31;
		int32_t L_28 = L_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		bool L_31;
		L_31 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_30, _stringLiteral05EBC17976479C4FDAA22DD66F9C02FB7562757B, NULL);
		if (!L_31)
		{
			goto IL_0119;
		}
	}
	{
		// walls.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___walls_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
		// Renderer[] rs = bulletholes.GetComponentsInChildren<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___bulletholes_17;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_34;
		L_34 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_33, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		// foreach(Renderer r in rs)
		V_0 = L_34;
		V_1 = 0;
		goto IL_0111;
	}

IL_0104:
	{
		// foreach(Renderer r in rs)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_35 = V_0;
		int32_t L_36 = V_1;
		int32_t L_37 = L_36;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		// r.enabled = true;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_38, (bool)1, NULL);
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0111:
	{
		// foreach(Renderer r in rs)
		int32_t L_40 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0148;
	}

IL_0119:
	{
		// walls.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___walls_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// Renderer[] rs = bulletholes.GetComponentsInChildren<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___bulletholes_17;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_44;
		L_44 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_43, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		// foreach(Renderer r in rs)
		V_0 = L_44;
		V_1 = 0;
		goto IL_0142;
	}

IL_0135:
	{
		// foreach(Renderer r in rs)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_45 = V_0;
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		// r.enabled = false;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_48, (bool)0, NULL);
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0142:
	{
		// foreach(Renderer r in rs)
		int32_t L_50 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_0135;
		}
	}

IL_0148:
	{
		// if(ParticleExamples[exampleIndex].name.Contains("Wood"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_52 = __this->___ParticleExamples_30;
		int32_t L_53 = __this->___exampleIndex_31;
		int32_t L_54 = L_53;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		String_t* L_56;
		L_56 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_55, NULL);
		bool L_57;
		L_57 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_56, _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5, NULL);
		if (!L_57)
		{
			goto IL_0178;
		}
	}
	{
		// groundTextureStr = "Wood";
		__this->___groundTextureStr_28 = _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_28), (void*)_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		// selectMaterial();
		WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7(__this, NULL);
		return;
	}

IL_0178:
	{
		// else if(ParticleExamples[exampleIndex].name.Contains("Concrete"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_58 = __this->___ParticleExamples_30;
		int32_t L_59 = __this->___exampleIndex_31;
		int32_t L_60 = L_59;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		String_t* L_62;
		L_62 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_61, NULL);
		bool L_63;
		L_63 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_62, _stringLiteralE6A9D90058077671906244DE2777322E222E7869, NULL);
		if (!L_63)
		{
			goto IL_01a8;
		}
	}
	{
		// groundTextureStr = "Concrete";
		__this->___groundTextureStr_28 = _stringLiteralE6A9D90058077671906244DE2777322E222E7869;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_28), (void*)_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		// selectMaterial();
		WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7(__this, NULL);
		return;
	}

IL_01a8:
	{
		// else if(ParticleExamples[exampleIndex].name.Contains("Metal"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_64 = __this->___ParticleExamples_30;
		int32_t L_65 = __this->___exampleIndex_31;
		int32_t L_66 = L_65;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		String_t* L_68;
		L_68 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_67, NULL);
		bool L_69;
		L_69 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_68, _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42, NULL);
		if (!L_69)
		{
			goto IL_01d8;
		}
	}
	{
		// groundTextureStr = "Metal";
		__this->___groundTextureStr_28 = _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_28), (void*)_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		// selectMaterial();
		WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7(__this, NULL);
		return;
	}

IL_01d8:
	{
		// else if(ParticleExamples[exampleIndex].name.Contains("Dirt")
		//     || ParticleExamples[exampleIndex].name.Contains("Sand")
		//     || ParticleExamples[exampleIndex].name.Contains("SoftBody"))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_70 = __this->___ParticleExamples_30;
		int32_t L_71 = __this->___exampleIndex_31;
		int32_t L_72 = L_71;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		String_t* L_74;
		L_74 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_73, NULL);
		bool L_75;
		L_75 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_74, _stringLiteral96E4B0A5CBA6AEF33C84C6CED365CCB25EFA9F80, NULL);
		if (L_75)
		{
			goto IL_0232;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_76 = __this->___ParticleExamples_30;
		int32_t L_77 = __this->___exampleIndex_31;
		int32_t L_78 = L_77;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		String_t* L_80;
		L_80 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_79, NULL);
		bool L_81;
		L_81 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_80, _stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7, NULL);
		if (L_81)
		{
			goto IL_0232;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_82 = __this->___ParticleExamples_30;
		int32_t L_83 = __this->___exampleIndex_31;
		int32_t L_84 = L_83;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_84));
		String_t* L_86;
		L_86 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_85, NULL);
		bool L_87;
		L_87 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_86, _stringLiteral6920667A4ABA57DC308D67A485A20039AE65CCBA, NULL);
		if (!L_87)
		{
			goto IL_0244;
		}
	}

IL_0232:
	{
		// groundTextureStr = "Checker";
		__this->___groundTextureStr_28 = _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_28), (void*)_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		// selectMaterial();
		WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7(__this, NULL);
		return;
	}

IL_0244:
	{
		// else if(ParticleExamples[exampleIndex].name == "WFX_Explosion")
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_88 = __this->___ParticleExamples_30;
		int32_t L_89 = __this->___exampleIndex_31;
		int32_t L_90 = L_89;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		String_t* L_92;
		L_92 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_91, NULL);
		bool L_93;
		L_93 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_92, _stringLiteral6D98FA2B162E50665ABE5D86622D48D12106CC96, NULL);
		if (!L_93)
		{
			goto IL_0273;
		}
	}
	{
		// groundTextureStr = "Checker";
		__this->___groundTextureStr_28 = _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_28), (void*)_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		// selectMaterial();
		WFX_Demo_New_selectMaterial_mBE44A88A11B411E18FDBB88B7C8D17CCC0F971F7(__this, NULL);
	}

IL_0273:
	{
		// }
		return;
	}
}
// System.Void WFX_Demo_New::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_New__ctor_mBFE41764D6B14910F631F27CB96460C4E3A0B782 (WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string groundTextureStr = "Checker";
		__this->___groundTextureStr_28 = _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextureStr_28), (void*)_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		// private List<string> groundTextures = new List<string>(new string[]{"Concrete","Wood","Metal","Checker"});
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE6A9D90058077671906244DE2777322E222E7869);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA33DD090A43B1AA2762ADF62BDBFCF2C79FD7915);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_5, (RuntimeObject*)L_4, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		__this->___groundTextures_29 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundTextures_29), (void*)L_5);
		// private List<GameObject> onScreenParticles = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_6, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___onScreenParticles_35 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onScreenParticles_35), (void*)L_6);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_Demo_New/<CheckForDeletedParticles>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__41__ctor_m1DA482D5A6ED757DD541C2DA863D64C74E6B4473 (U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WFX_Demo_New/<CheckForDeletedParticles>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__41_System_IDisposable_Dispose_m19DE06DEA9EB8585B809FED323AD1FC9D87BEF7A (U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WFX_Demo_New/<CheckForDeletedParticles>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckForDeletedParticlesU3Ed__41_MoveNext_m177633E3172032569A33883BEF159DE2CFA674D6 (U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* L_5 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = L_5->___onScreenParticles_35;
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0072;
	}

IL_004e:
	{
		// if(onScreenParticles[i] == null)
		WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* L_8 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = L_8->___onScreenParticles_35;
		int32_t L_10 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		// onScreenParticles.RemoveAt(i);
		WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* L_13 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = L_13->___onScreenParticles_35;
		int32_t L_15 = V_2;
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_14, L_15, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
	}

IL_006e:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0072:
	{
		// for(int i = onScreenParticles.Count - 1; i >= 0; i--)
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		// while(true)
		goto IL_001e;
	}
}
// System.Object WFX_Demo_New/<CheckForDeletedParticles>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckForDeletedParticlesU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC666D4DD7096777022723984ECEEAE9E2096A8EB (U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WFX_Demo_New/<CheckForDeletedParticles>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForDeletedParticlesU3Ed__41_System_Collections_IEnumerator_Reset_m60E1BC10AD8CACCBAABAE43F703C8AC38AE31741 (U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckForDeletedParticlesU3Ed__41_System_Collections_IEnumerator_Reset_m60E1BC10AD8CACCBAABAE43F703C8AC38AE31741_RuntimeMethod_var)));
	}
}
// System.Object WFX_Demo_New/<CheckForDeletedParticles>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckForDeletedParticlesU3Ed__41_System_Collections_IEnumerator_get_Current_m8E48608E236C0D02B881E8CFE012C818CE9D2672 (U3CCheckForDeletedParticlesU3Ed__41_tD503C8C257CFBD1EC17763EF5DD2717CF9CEBB6C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_Demo_RandomDir::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_RandomDir_Awake_mDBC1D3FF22FBF8E6E1A0DBA9DE652170E53FE40E (WFX_Demo_RandomDir_tCE6438F5AB2FA5383A6E7FD3EDC7C5092EB7D658* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.eulerAngles = new Vector3(Random.Range(min.x,max.x),Random.Range(min.y,max.y),Random.Range(min.z,max.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___min_4);
		float L_2 = L_1->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___max_5);
		float L_4 = L_3->___x_2;
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_2, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___min_4);
		float L_7 = L_6->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___max_5);
		float L_9 = L_8->___y_3;
		float L_10;
		L_10 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___min_4);
		float L_12 = L_11->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___max_5);
		float L_14 = L_13->___z_4;
		float L_15;
		L_15 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_5, L_10, L_15, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_16, NULL);
		// }
		return;
	}
}
// System.Void WFX_Demo_RandomDir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_RandomDir__ctor_m6F66CFA10F961C534ADB59A76BE09B45E04A023D (WFX_Demo_RandomDir_tCE6438F5AB2FA5383A6E7FD3EDC7C5092EB7D658* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 min = new Vector3(0,0,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___min_4 = L_0;
		// public Vector3 max = new Vector3(0,360,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (360.0f), (0.0f), /*hidden argument*/NULL);
		__this->___max_5 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_Demo_Wall::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_Wall_OnMouseDown_m3697A0BEFB630307B7DFF228E6507D6CE810E753 (WFX_Demo_Wall_tB0AEDCE7D4D2145660D3D57C677717D078E7A36F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RaycastHit hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// if(this.GetComponent<Collider>().Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 9999f))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		bool L_4;
		L_4 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_0, L_3, (&V_0), (9999.0f), NULL);
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		// GameObject particle = demo.spawnParticle();
		WFX_Demo_New_t2879FEFB50EDC418BA4AE9B20C5B092CE2EF4738* L_5 = __this->___demo_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = WFX_Demo_New_spawnParticle_mB16D13E226CA4267E6178E785A6A33E181CB6F53(L_5, NULL);
		// particle.transform.position = hit.point;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// particle.transform.rotation = Quaternion.FromToRotation(Vector3.forward, hit.normal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_11, L_12, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_13, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void WFX_Demo_Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_Demo_Wall__ctor_m39AA26FC8DC0BB0071E131BD265E6CB1A7C77484 (WFX_Demo_Wall_tB0AEDCE7D4D2145660D3D57C677717D078E7A36F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_AutoDestructShuriken::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoDestructShuriken_OnEnable_m95AB27DC91BCCF60D378AE0665B095D44331D78A (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("CheckIfAlive");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral05B8DD997BF9F7D0806A038EC22F9D13BEB77E76, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CFX_AutoDestructShuriken::CheckIfAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CFX_AutoDestructShuriken_CheckIfAlive_mCFAEBF84CD35FBF9C742C9A170183136AAB53535 (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* L_0 = (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511*)il2cpp_codegen_object_new(U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511_il2cpp_TypeInfo_var);
		U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B(L_0, 0, NULL);
		U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CFX_AutoDestructShuriken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_AutoDestructShuriken__ctor_m22A7ABD6E38836099374390249F88639BB36CC33 (CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2__ctor_m107B0D89D95623B02336384ED1123B289D20231B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2_System_IDisposable_Dispose_m38FD34408CDD7ED7A963CD1156B55F7F313610A1 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CFX_AutoDestructShuriken/<CheckIfAlive>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckIfAliveU3Ed__2_MoveNext_m18608B4F0601A8AEFEF69DDE44DBD191B198E3AB (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(!GetComponent<ParticleSystem>().IsAlive(true))
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_5 = V_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6;
		L_6 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(L_5, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		bool L_7;
		L_7 = ParticleSystem_IsAlive_m4C919DCFF8EC256F68415875DF421DC53065AC7B(L_6, (bool)1, NULL);
		if (L_7)
		{
			goto IL_001e;
		}
	}
	{
		// if(OnlyDeactivate)
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_8 = V_1;
		bool L_9 = L_8->___OnlyDeactivate_4;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// this.gameObject.SetActive(false);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_10 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		goto IL_006d;
	}

IL_0062:
	{
		// GameObject.Destroy(this.gameObject);
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_12 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
	}

IL_006d:
	{
		// }
		return (bool)0;
	}
}
// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckIfAliveU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m655B604E1C89420955196F4D9523D3B6CBACFF9B (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_Reset_m8659443A2B072F0CFA4D0D77AFD3821588EE1068_RuntimeMethod_var)));
	}
}
// System.Object CFX_AutoDestructShuriken/<CheckIfAlive>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckIfAliveU3Ed__2_System_Collections_IEnumerator_get_Current_mC14FB0B50310D1A3AD07A78314A0F5690B823799 (U3CCheckIfAliveU3Ed__2_t80D6733F2C8C2AB5A29AB0073CC245C84EAC3511* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CFX_LightIntensityFade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_Start_mA64A524D6D15ADAE266FF2F3F8F81F38ACBD3EB6 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseIntensity = GetComponent<Light>().intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		float L_1;
		L_1 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_0, NULL);
		__this->___baseIntensity_7 = L_1;
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_OnEnable_m56FA183840193584063C3B0AF49B0FA8DB8D7014 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// p_lifetime = 0.0f;
		__this->___p_lifetime_9 = (0.0f);
		// p_delay = delay;
		float L_0 = __this->___delay_5;
		__this->___p_delay_10 = L_0;
		// if(delay > 0) GetComponent<Light>().enabled = false;
		float L_1 = __this->___delay_5;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// if(delay > 0) GetComponent<Light>().enabled = false;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade_Update_mCE17E56AE5A9CE5993315D8F00B6AD2C9BEC08B4 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(p_delay > 0)
		float L_0 = __this->___p_delay_10;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		// p_delay -= Time.deltaTime;
		float L_1 = __this->___p_delay_10;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___p_delay_10 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if(p_delay <= 0)
		float L_3 = __this->___p_delay_10;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// GetComponent<Light>().enabled = true;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4;
		L_4 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
	}

IL_0038:
	{
		// return;
		return;
	}

IL_0039:
	{
		// if(p_lifetime/duration < 1.0f)
		float L_5 = __this->___p_lifetime_9;
		float L_6 = __this->___duration_4;
		if ((!(((float)((float)(L_5/L_6))) < ((float)(1.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		// GetComponent<Light>().intensity = Mathf.Lerp(baseIntensity, finalIntensity, p_lifetime/duration);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7;
		L_7 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		float L_8 = __this->___baseIntensity_7;
		float L_9 = __this->___finalIntensity_6;
		float L_10 = __this->___p_lifetime_9;
		float L_11 = __this->___duration_4;
		float L_12;
		L_12 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_8, L_9, ((float)(L_10/L_11)), NULL);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_7, L_12, NULL);
		// p_lifetime += Time.deltaTime;
		float L_13 = __this->___p_lifetime_9;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___p_lifetime_9 = ((float)il2cpp_codegen_add(L_13, L_14));
		return;
	}

IL_0089:
	{
		// if(autodestruct)
		bool L_15 = __this->___autodestruct_8;
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		// GameObject.Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_16, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void CFX_LightIntensityFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_LightIntensityFade__ctor_m0CFBDFFAFF4B1B51471D1B4AE3A3DE92BB8EE722 (CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 1.0f;
		__this->___duration_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_BulletHoleDecal::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_BulletHoleDecal_Awake_m23ACD757975424CF65D44D580BEEF82B866045AE (WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// color = this.GetComponent<Renderer>().material.GetColor("_TintColor");
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_1, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, NULL);
		__this->___color_12 = L_2;
		// orgAlpha = color.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = (&__this->___color_12);
		float L_4 = L_3->___a_3;
		__this->___orgAlpha_13 = L_4;
		// }
		return;
	}
}
// System.Void WFX_BulletHoleDecal::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_BulletHoleDecal_OnEnable_mED6C64BA7ECFE29BDBA14C5CDB6C39B297E9498C (WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99FA1157669A6F6AE84301B346E3FA843BDE336E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int random = Random.Range(0, (int)(frames.x*frames.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___frames_7);
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___frames_7);
		float L_3 = L_2->___y_1;
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, L_3))), NULL);
		// int fx = (int)(random%frames.x);
		int32_t L_5 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___frames_7);
		float L_7 = L_6->___x_0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>((fmodf(((float)L_5), L_7)));
		// int fy = (int)(random/frames.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___frames_7);
		float L_9 = L_8->___y_1;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_5)/L_9)));
		// Vector2[] meshUvs = new Vector2[4];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_10;
		// for(int i = 0; i < 4; i++)
		V_3 = 0;
		goto IL_00ae;
	}

IL_0048:
	{
		// meshUvs[i].x = (quadUVs[i].x + fx) * (1.0f/frames.x);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_11 = V_2;
		int32_t L_12 = V_3;
		il2cpp_codegen_runtime_class_init_inline(WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = ((WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_StaticFields*)il2cpp_codegen_static_fields_for(WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_il2cpp_TypeInfo_var))->___quadUVs_4;
		int32_t L_14 = V_3;
		float L_15 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___x_0;
		int32_t L_16 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___frames_7);
		float L_18 = L_17->___x_0;
		((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_15, ((float)L_16))), ((float)((1.0f)/L_18))));
		// meshUvs[i].y = (quadUVs[i].y + fy) * (1.0f/frames.y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19 = V_2;
		int32_t L_20 = V_3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21 = ((WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_StaticFields*)il2cpp_codegen_static_fields_for(WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_il2cpp_TypeInfo_var))->___quadUVs_4;
		int32_t L_22 = V_3;
		float L_23 = ((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->___y_1;
		int32_t L_24 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___frames_7);
		float L_26 = L_25->___y_1;
		((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_23, ((float)L_24))), ((float)((1.0f)/L_26))));
		// for(int i = 0; i < 4; i++)
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00ae:
	{
		// for(int i = 0; i < 4; i++)
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) < ((int32_t)4)))
		{
			goto IL_0048;
		}
	}
	{
		// this.GetComponent<MeshFilter>().mesh.uv = meshUvs;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_29;
		L_29 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30;
		L_30 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_29, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_31 = V_2;
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_30, L_31, NULL);
		// if(randomRotation)
		bool L_32 = __this->___randomRotation_8;
		if (!L_32)
		{
			goto IL_00f0;
		}
	}
	{
		// this.transform.Rotate(0f,0f,Random.Range(0f,360f), Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_34;
		L_34 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (360.0f), NULL);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_33, (0.0f), (0.0f), L_34, 1, NULL);
	}

IL_00f0:
	{
		// life = lifetime;
		float L_35 = __this->___lifetime_5;
		__this->___life_10 = L_35;
		// fadeout = life * (fadeoutpercent/100f);
		float L_36 = __this->___life_10;
		float L_37 = __this->___fadeoutpercent_6;
		__this->___fadeout_11 = ((float)il2cpp_codegen_multiply(L_36, ((float)(L_37/(100.0f)))));
		// color.a = orgAlpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_38 = (&__this->___color_12);
		float L_39 = __this->___orgAlpha_13;
		L_38->___a_3 = L_39;
		// this.GetComponent<Renderer>().material.SetColor("_TintColor", color);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_40;
		L_40 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41;
		L_41 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_40, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = __this->___color_12;
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_41, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, L_42, NULL);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine("holeUpdate");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_43;
		L_43 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral99FA1157669A6F6AE84301B346E3FA843BDE336E, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WFX_BulletHoleDecal::holeUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WFX_BulletHoleDecal_holeUpdate_m58525A61D1674DF47D6A335BE85E621A5EE0A6B5 (WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* L_0 = (U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F*)il2cpp_codegen_object_new(U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F_il2cpp_TypeInfo_var);
		U3CholeUpdateU3Ed__12__ctor_m21CFDFD1D623964BA73C1A66B01872D1E4186AE1(L_0, 0, NULL);
		U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WFX_BulletHoleDecal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_BulletHoleDecal__ctor_m6BD39A24ABD439E22235C2067E77145A6C33B65E (WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* __this, const RuntimeMethod* method) 
{
	{
		// public float lifetime = 10f;
		__this->___lifetime_5 = (10.0f);
		// public float fadeoutpercent = 80;
		__this->___fadeoutpercent_6 = (80.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void WFX_BulletHoleDecal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_BulletHoleDecal__cctor_m6413C94178B14F4AA2576D652121111947F2CD7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static private Vector2[] quadUVs = new Vector2[]{new Vector2(0,0), new Vector2(0,1), new Vector2(1,0), new Vector2(1,1)};
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.0f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_6);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), (1.0f), (1.0f), /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		((WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_StaticFields*)il2cpp_codegen_static_fields_for(WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_il2cpp_TypeInfo_var))->___quadUVs_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_StaticFields*)il2cpp_codegen_static_fields_for(WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368_il2cpp_TypeInfo_var))->___quadUVs_4), (void*)L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_BulletHoleDecal/<holeUpdate>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CholeUpdateU3Ed__12__ctor_m21CFDFD1D623964BA73C1A66B01872D1E4186AE1 (U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WFX_BulletHoleDecal/<holeUpdate>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CholeUpdateU3Ed__12_System_IDisposable_Dispose_mFDE87330755BF0085A1FB274B92D6E10947A034D (U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WFX_BulletHoleDecal/<holeUpdate>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CholeUpdateU3Ed__12_MoveNext_m03D1ABDA7D04162A6EEC5BFC2F82DC39E0239C20 (U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_009a;
	}

IL_0020:
	{
		// life -= Time.deltaTime;
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_4 = V_1;
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_5 = V_1;
		float L_6 = L_5->___life_10;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		L_4->___life_10 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// if(life <= fadeout)
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_8 = V_1;
		float L_9 = L_8->___life_10;
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_10 = V_1;
		float L_11 = L_10->___fadeout_11;
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_0083;
		}
	}
	{
		// color.a = Mathf.Lerp(0f, orgAlpha, life/fadeout);
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_12 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&L_12->___color_12);
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_14 = V_1;
		float L_15 = L_14->___orgAlpha_13;
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_16 = V_1;
		float L_17 = L_16->___life_10;
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_18 = V_1;
		float L_19 = L_18->___fadeout_11;
		float L_20;
		L_20 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_15, ((float)(L_17/L_19)), NULL);
		L_13->___a_3 = L_20;
		// this.GetComponent<Renderer>().material.SetColor("_TintColor", color);
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_21 = V_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22;
		L_22 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_21, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23;
		L_23 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_22, NULL);
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_24 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = L_24->___color_12;
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_23, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, L_25, NULL);
	}

IL_0083:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0093:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_009a:
	{
		// while(life > 0f)
		WFX_BulletHoleDecal_t33012BA620C9AD7F60EC75E2B4022C6EA50ED368* L_26 = V_1;
		float L_27 = L_26->___life_10;
		if ((((float)L_27) > ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object WFX_BulletHoleDecal/<holeUpdate>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CholeUpdateU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEF76E7867374552FBA6741A59A4BED348A5784C7 (U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WFX_BulletHoleDecal/<holeUpdate>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CholeUpdateU3Ed__12_System_Collections_IEnumerator_Reset_m1F3CE0ACCBAF17BD3F74D2B0ADC7B3924906F2BA (U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CholeUpdateU3Ed__12_System_Collections_IEnumerator_Reset_m1F3CE0ACCBAF17BD3F74D2B0ADC7B3924906F2BA_RuntimeMethod_var)));
	}
}
// System.Object WFX_BulletHoleDecal/<holeUpdate>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CholeUpdateU3Ed__12_System_Collections_IEnumerator_get_Current_mE1D6DF357EBA1641B1D7C888639DC50BB4BD6B7F (U3CholeUpdateU3Ed__12_t63C4222EC44104471ED4F9EE2E6F6854FDADEF3F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_LightFlicker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_LightFlicker_Start_m5B1C5656DAC745280E553BEC8A35C56FE423D397 (WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3646933A39DEE105F20D239F1D5C5A4468A869FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer = time;
		float L_0 = __this->___time_4;
		__this->___timer_5 = L_0;
		// StartCoroutine("Flicker");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral3646933A39DEE105F20D239F1D5C5A4468A869FA, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WFX_LightFlicker::Flicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WFX_LightFlicker_Flicker_m835C5C916C8CBCC97D23D7981471B5198EC105B6 (WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* L_0 = (U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496*)il2cpp_codegen_object_new(U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496_il2cpp_TypeInfo_var);
		U3CFlickerU3Ed__3__ctor_m81C12D98C98B7757EDA1AD282A4496E5C389C505(L_0, 0, NULL);
		U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WFX_LightFlicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WFX_LightFlicker__ctor_mFA9E0B9BC11A4AC6940D452812DBCB88A81D1F16 (WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* __this, const RuntimeMethod* method) 
{
	{
		// public float time = 0.05f;
		__this->___time_4 = (0.0500000007f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WFX_LightFlicker/<Flicker>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlickerU3Ed__3__ctor_m81C12D98C98B7757EDA1AD282A4496E5C389C505 (U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WFX_LightFlicker/<Flicker>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlickerU3Ed__3_System_IDisposable_Dispose_m3004D91A6A6DD3CE74381FDAC2C29620290BD9E1 (U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WFX_LightFlicker/<Flicker>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFlickerU3Ed__3_MoveNext_mF5D4360BD21DE8E352B3869FA950399D8B200AEC (U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// GetComponent<Light>().enabled = !GetComponent<Light>().enabled;
		WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* L_4 = V_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_5;
		L_5 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(L_4, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* L_6 = V_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7;
		L_7 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(L_6, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		bool L_8;
		L_8 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_7, NULL);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0037:
	{
		// timer -= Time.deltaTime;
		WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* L_9 = V_1;
		WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* L_10 = V_1;
		float L_11 = L_10->___timer_5;
		float L_12;
		L_12 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		L_9->___timer_5 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0059:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(timer > 0);
		WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* L_13 = V_1;
		float L_14 = L_13->___timer_5;
		if ((((float)L_14) > ((float)(0.0f))))
		{
			goto IL_0037;
		}
	}
	{
		// timer = time;
		WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* L_15 = V_1;
		WFX_LightFlicker_tD8C2EE86C5F12AFD6776FA09A1D6DB5565D5AA25* L_16 = V_1;
		float L_17 = L_16->___time_4;
		L_15->___timer_5 = L_17;
		// while(true)
		goto IL_001e;
	}
}
// System.Object WFX_LightFlicker/<Flicker>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlickerU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m90E00CBF5A29200B76CEC222B689B9DE14C55490 (U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WFX_LightFlicker/<Flicker>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlickerU3Ed__3_System_Collections_IEnumerator_Reset_m4D53771CEA3E6CA61DD48905AA2989B9053A1158 (U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlickerU3Ed__3_System_Collections_IEnumerator_Reset_m4D53771CEA3E6CA61DD48905AA2989B9053A1158_RuntimeMethod_var)));
	}
}
// System.Object WFX_LightFlicker/<Flicker>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlickerU3Ed__3_System_Collections_IEnumerator_get_Current_m405398C3B042730E30C0C42326E66FDC3E6557DB (U3CFlickerU3Ed__3_tE17276BBE11EAC311559A0D3F64F931399235496* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject CFX_SpawnSystem::GetNextObject(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CFX_SpawnSystem_GetNextObject_mFE4D8EABE81CF6580BC0D2E9B306F4E9C7A4E896 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sourceObj0, bool ___activateObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B4192D07B27D0ED461E1FF9000C14799186E7CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D81944A7F59CD34810050D6EDD6DA1916E4FB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B9937AB85C565797AEF58121699839BB597802A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7825A5A1FF6D32DEB0463D3062913DEE7F0191A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8688E589BA27C89009607123379AA866C084F6EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA440B7E51538852D29B70F2B78DA484EE4E3EAF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA0AB5EC26EB3E680258ED5E7BEC2D59B5B1081F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int uniqueId = sourceObj.GetInstanceID();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___sourceObj0;
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		V_0 = L_1;
		// if(!instance.poolCursors.ContainsKey(uniqueId))
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_2 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_3 = L_2->___poolCursors_13;
		int32_t L_4 = V_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9(L_3, L_4, Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		// Debug.LogError("[CFX_SpawnSystem.GetNextObject()] Object hasn't been preloaded: " + sourceObj.name + " (ID:" + uniqueId + ")\n", instance);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral8688E589BA27C89009607123379AA866C084F6EA);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8688E589BA27C89009607123379AA866C084F6EA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___sourceObj0;
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		ArrayElementTypeCheck (L_11, _stringLiteral2B4192D07B27D0ED461E1FF9000C14799186E7CF);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2B4192D07B27D0ED461E1FF9000C14799186E7CF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		ArrayElementTypeCheck (L_14, _stringLiteral6B9937AB85C565797AEF58121699839BB597802A);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6B9937AB85C565797AEF58121699839BB597802A);
		String_t* L_15;
		L_15 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_14, NULL);
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_16 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(L_15, L_16, NULL);
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_005b:
	{
		// int cursor = instance.poolCursors[uniqueId];
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_17 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_18 = L_17->___poolCursors_13;
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_18, L_19, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		V_1 = L_20;
		// GameObject returnObj = null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// if(instance.onlyGetInactiveObjects)
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_21 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		bool L_22 = L_21->___onlyGetInactiveObjects_9;
		if (!L_22)
		{
			goto IL_013d;
		}
	}
	{
		// int loop = cursor;
		int32_t L_23 = V_1;
		V_3 = L_23;
	}

IL_007f:
	{
		// returnObj = instance.instantiatedObjects[uniqueId][cursor];
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_24 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_25 = L_24->___instantiatedObjects_12;
		int32_t L_26 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_27;
		L_27 = Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193(L_25, L_26, Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		int32_t L_28 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_27, L_28, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_2 = L_29;
		// instance.increasePoolCursor(uniqueId);
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_30 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_31 = V_0;
		CFX_SpawnSystem_increasePoolCursor_m11C62EA58A7B726EE0C248BC4EBD79557231E7E3(L_30, L_31, NULL);
		// cursor = instance.poolCursors[uniqueId];
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_32 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_33 = L_32->___poolCursors_13;
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_33, L_34, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		V_1 = L_35;
		// if(returnObj != null && !returnObj.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_00c6;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_2;
		bool L_39;
		L_39 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_38, NULL);
		if (!L_39)
		{
			goto IL_015f;
		}
	}

IL_00c6:
	{
		// if(cursor == loop)
		int32_t L_40 = V_1;
		int32_t L_41 = V_3;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_007f;
		}
	}
	{
		// if(instance.instantiateIfNeeded)
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_42 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		bool L_43 = L_42->___instantiateIfNeeded_10;
		if (!L_43)
		{
			goto IL_011c;
		}
	}
	{
		// Debug.Log("[CFX_SpawnSystem.GetNextObject()] A new instance has been created for \"" + sourceObj.name + "\" because no active instance were found in the pool.\n", instance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = ___sourceObj0;
		String_t* L_45;
		L_45 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_44, NULL);
		String_t* L_46;
		L_46 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral35D81944A7F59CD34810050D6EDD6DA1916E4FB2, L_45, _stringLiteral7825A5A1FF6D32DEB0463D3062913DEE7F0191A8, NULL);
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_47 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m825387C0A72F1965797D56C1F8AB0D6678F3F9BE(L_46, L_47, NULL);
		// PreloadObject(sourceObj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = ___sourceObj0;
		CFX_SpawnSystem_PreloadObject_m25A1F99AFB2F66DDA47504C170FE57387BCF65C1(L_48, 1, NULL);
		// var list = instance.instantiatedObjects[uniqueId];
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_49 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_50 = L_49->___instantiatedObjects_12;
		int32_t L_51 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_52;
		L_52 = Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193(L_50, L_51, Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		// returnObj = list[list.Count-1];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_53 = L_52;
		int32_t L_54;
		L_54 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_53, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_53, ((int32_t)il2cpp_codegen_subtract(L_54, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_2 = L_55;
		// break;
		goto IL_015f;
	}

IL_011c:
	{
		// Debug.LogWarning("[CFX_SpawnSystem.GetNextObject()] There are no active instances available in the pool for \"" + sourceObj.name +"\"\nYou may need to increase the preloaded object count for this prefab?", instance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = ___sourceObj0;
		String_t* L_57;
		L_57 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_56, NULL);
		String_t* L_58;
		L_58 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA440B7E51538852D29B70F2B78DA484EE4E3EAF1, L_57, _stringLiteralEA0AB5EC26EB3E680258ED5E7BEC2D59B5B1081F, NULL);
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_59 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_58, L_59, NULL);
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_013d:
	{
		// returnObj = instance.instantiatedObjects[uniqueId][cursor];
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_60 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_61 = L_60->___instantiatedObjects_12;
		int32_t L_62 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_63;
		L_63 = Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193(L_61, L_62, Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		int32_t L_64 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65;
		L_65 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_63, L_64, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_2 = L_65;
		// instance.increasePoolCursor(uniqueId);
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_66 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_67 = V_0;
		CFX_SpawnSystem_increasePoolCursor_m11C62EA58A7B726EE0C248BC4EBD79557231E7E3(L_66, L_67, NULL);
	}

IL_015f:
	{
		// if(activateObject && returnObj != null)
		bool L_68 = ___activateObject1;
		if (!L_68)
		{
			goto IL_0172;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_69, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_70)
		{
			goto IL_0172;
		}
	}
	{
		// returnObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_2;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)1, NULL);
	}

IL_0172:
	{
		// return returnObj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_2;
		return L_72;
	}
}
// System.Void CFX_SpawnSystem::PreloadObject(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_PreloadObject_m25A1F99AFB2F66DDA47504C170FE57387BCF65C1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sourceObj0, int32_t ___poolSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance.addObjectToPool(sourceObj, poolSize);
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_0 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___sourceObj0;
		int32_t L_2 = ___poolSize1;
		CFX_SpawnSystem_addObjectToPool_m895A8533B47C47B0D9A00968C5AA972F8006C970(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void CFX_SpawnSystem::UnloadObjects(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_UnloadObjects_m91C0241AC3B14EB919700FFA49503ADD59E2F191 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sourceObj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance.removeObjectsFromPool(sourceObj);
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_0 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___sourceObj0;
		CFX_SpawnSystem_removeObjectsFromPool_m24DE63AC33DBA7D444F1DD1F9C2EEE69BFC1BF3C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean CFX_SpawnSystem::get_AllObjectsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CFX_SpawnSystem_get_AllObjectsLoaded_m0630F2B1DE39964FCAB04607CB0AF8251B57C2CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance.allObjectsLoaded;
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_0 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___allObjectsLoaded_11;
		return L_1;
	}
}
// System.Void CFX_SpawnSystem::addObjectToPool(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_addObjectToPool_m895A8533B47C47B0D9A00968C5AA972F8006C970 (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sourceObject0, int32_t ___number1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m83C4EE1DAEB920EC83102E899FAC0BA501641575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAA3BEFA6587A88060ACFBBE94743D3E6FD3165DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m389C30D6C5A17324185EBFAA8577F7EF017EAC4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745_m1C3FA40D5C783869B056ECE8496E4B01D5D46FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2* V_3 = NULL;
	int32_t V_4 = 0;
	CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB* V_5 = NULL;
	{
		// int uniqueId = sourceObject.GetInstanceID();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___sourceObject0;
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		V_0 = L_1;
		// if(!instantiatedObjects.ContainsKey(uniqueId))
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_2 = __this->___instantiatedObjects_12;
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mAA3BEFA6587A88060ACFBBE94743D3E6FD3165DE(L_2, L_3, Dictionary_2_ContainsKey_mAA3BEFA6587A88060ACFBBE94743D3E6FD3165DE_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		// instantiatedObjects.Add(uniqueId, new List<GameObject>());
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_5 = __this->___instantiatedObjects_12;
		int32_t L_6 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_7, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		Dictionary_2_Add_m83C4EE1DAEB920EC83102E899FAC0BA501641575(L_5, L_6, L_7, Dictionary_2_Add_m83C4EE1DAEB920EC83102E899FAC0BA501641575_RuntimeMethod_var);
		// poolCursors.Add(uniqueId, 0);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_8 = __this->___poolCursors_13;
		int32_t L_9 = V_0;
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(L_8, L_9, 0, Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_RuntimeMethod_var);
	}

IL_0033:
	{
		// for(int i = 0; i < number; i++)
		V_2 = 0;
		goto IL_00d1;
	}

IL_003a:
	{
		// newObj = (GameObject)Instantiate(sourceObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___sourceObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_1 = L_11;
		// newObj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// CFX_AutoDestructShuriken[] autoDestruct = newObj.GetComponentsInChildren<CFX_AutoDestructShuriken>(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2* L_14;
		L_14 = GameObject_GetComponentsInChildren_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m389C30D6C5A17324185EBFAA8577F7EF017EAC4F(L_13, (bool)1, GameObject_GetComponentsInChildren_TisCFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3_m389C30D6C5A17324185EBFAA8577F7EF017EAC4F_RuntimeMethod_var);
		// foreach(CFX_AutoDestructShuriken ad in autoDestruct)
		V_3 = L_14;
		V_4 = 0;
		goto IL_0065;
	}

IL_0055:
	{
		// foreach(CFX_AutoDestructShuriken ad in autoDestruct)
		CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2* L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		CFX_AutoDestructShuriken_t5C562E6774502B9314C1978EE951E65EDF4EDEF3* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		// ad.OnlyDeactivate = true;
		L_18->___OnlyDeactivate_4 = (bool)1;
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0065:
	{
		// foreach(CFX_AutoDestructShuriken ad in autoDestruct)
		int32_t L_20 = V_4;
		CFX_AutoDestructShurikenU5BU5D_t10098D443B6B0235F63F1A1634F66F967F4540E2* L_21 = V_3;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0055;
		}
	}
	{
		// CFX_LightIntensityFade[] lightIntensity = newObj.GetComponentsInChildren<CFX_LightIntensityFade>(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_1;
		CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB* L_23;
		L_23 = GameObject_GetComponentsInChildren_TisCFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745_m1C3FA40D5C783869B056ECE8496E4B01D5D46FCC(L_22, (bool)1, GameObject_GetComponentsInChildren_TisCFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745_m1C3FA40D5C783869B056ECE8496E4B01D5D46FCC_RuntimeMethod_var);
		// foreach(CFX_LightIntensityFade li in lightIntensity)
		V_5 = L_23;
		V_4 = 0;
		goto IL_008b;
	}

IL_007a:
	{
		// foreach(CFX_LightIntensityFade li in lightIntensity)
		CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB* L_24 = V_5;
		int32_t L_25 = V_4;
		int32_t L_26 = L_25;
		CFX_LightIntensityFade_t5F771A047005EF5511B43C907B0DAA564F3E9745* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		// li.autodestruct = false;
		L_27->___autodestruct_8 = (bool)0;
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_008b:
	{
		// foreach(CFX_LightIntensityFade li in lightIntensity)
		int32_t L_29 = V_4;
		CFX_LightIntensityFadeU5BU5D_tBB38659CCC15CE912C2D45757BA871BB5E241ECB* L_30 = V_5;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007a;
		}
	}
	{
		// instantiatedObjects[uniqueId].Add(newObj);
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_31 = __this->___instantiatedObjects_12;
		int32_t L_32 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_33;
		L_33 = Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193(L_31, L_32, Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_1;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_33, L_34, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// if(hideObjectsInHierarchy)
		bool L_35 = __this->___hideObjectsInHierarchy_7;
		if (!L_35)
		{
			goto IL_00b4;
		}
	}
	{
		// newObj.hideFlags = HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_1;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_36, 1, NULL);
	}

IL_00b4:
	{
		// if(spawnAsChildren)
		bool L_37 = __this->___spawnAsChildren_8;
		if (!L_37)
		{
			goto IL_00cd;
		}
	}
	{
		// newObj.transform.parent = this.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_39, L_40, NULL);
	}

IL_00cd:
	{
		// for(int i = 0; i < number; i++)
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d1:
	{
		// for(int i = 0; i < number; i++)
		int32_t L_42 = V_2;
		int32_t L_43 = ___number1;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CFX_SpawnSystem::removeObjectsFromPool(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_removeObjectsFromPool_m24DE63AC33DBA7D444F1DD1F9C2EEE69BFC1BF3C (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sourceObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAA3BEFA6587A88060ACFBBE94743D3E6FD3165DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mB1F6703CB8458F59A6142CFD66403C6E60F97E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FF58289B02E988547859BF9ECF8F23FE55E15AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B4192D07B27D0ED461E1FF9000C14799186E7CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B9937AB85C565797AEF58121699839BB597802A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int uniqueId = sourceObject.GetInstanceID();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___sourceObject0;
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		V_0 = L_1;
		// if(!instantiatedObjects.ContainsKey(uniqueId))
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_2 = __this->___instantiatedObjects_12;
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mAA3BEFA6587A88060ACFBBE94743D3E6FD3165DE(L_2, L_3, Dictionary_2_ContainsKey_mAA3BEFA6587A88060ACFBBE94743D3E6FD3165DE_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.LogWarning("[CFX_SpawnSystem.removeObjectsFromPool()] There aren't any preloaded object for: " + sourceObject.name + " (ID:" + uniqueId + ")\n", this.gameObject);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral0FF58289B02E988547859BF9ECF8F23FE55E15AE);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0FF58289B02E988547859BF9ECF8F23FE55E15AE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___sourceObject0;
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_7;
		ArrayElementTypeCheck (L_10, _stringLiteral2B4192D07B27D0ED461E1FF9000C14799186E7CF);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2B4192D07B27D0ED461E1FF9000C14799186E7CF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		ArrayElementTypeCheck (L_13, _stringLiteral6B9937AB85C565797AEF58121699839BB597802A);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6B9937AB85C565797AEF58121699839BB597802A);
		String_t* L_14;
		L_14 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_14, L_15, NULL);
		// return;
		return;
	}

IL_0057:
	{
		// for(int i = instantiatedObjects[uniqueId].Count - 1; i >= 0; i--)
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_16 = __this->___instantiatedObjects_12;
		int32_t L_17 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18;
		L_18 = Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193(L_16, L_17, Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		int32_t L_19;
		L_19 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_18, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		goto IL_009a;
	}

IL_006d:
	{
		// GameObject obj = instantiatedObjects[uniqueId][i];
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_20 = __this->___instantiatedObjects_12;
		int32_t L_21 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22;
		L_22 = Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193(L_20, L_21, Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		int32_t L_23 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, L_23, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		// instantiatedObjects[uniqueId].RemoveAt(i);
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_25 = __this->___instantiatedObjects_12;
		int32_t L_26 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_27;
		L_27 = Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193(L_25, L_26, Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		int32_t L_28 = V_1;
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_27, L_28, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// GameObject.Destroy(obj);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_24, NULL);
		// for(int i = instantiatedObjects[uniqueId].Count - 1; i >= 0; i--)
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_009a:
	{
		// for(int i = instantiatedObjects[uniqueId].Count - 1; i >= 0; i--)
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// instantiatedObjects.Remove(uniqueId);
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_31 = __this->___instantiatedObjects_12;
		int32_t L_32 = V_0;
		bool L_33;
		L_33 = Dictionary_2_Remove_mB1F6703CB8458F59A6142CFD66403C6E60F97E65(L_31, L_32, Dictionary_2_Remove_mB1F6703CB8458F59A6142CFD66403C6E60F97E65_RuntimeMethod_var);
		// poolCursors.Remove(uniqueId);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_34 = __this->___poolCursors_13;
		int32_t L_35 = V_0;
		bool L_36;
		L_36 = Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5(L_34, L_35, Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CFX_SpawnSystem::increasePoolCursor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_increasePoolCursor_m11C62EA58A7B726EE0C248BC4EBD79557231E7E3 (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// instance.poolCursors[uniqueId]++;
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_0 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = L_0->___poolCursors_13;
		int32_t L_2 = ___uniqueId0;
		V_0 = L_2;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_3 = L_1;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_3, L_4, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		V_1 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF(L_3, L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
		// if(instance.poolCursors[uniqueId] >= instance.instantiatedObjects[uniqueId].Count)
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_8 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_9 = L_8->___poolCursors_13;
		int32_t L_10 = ___uniqueId0;
		int32_t L_11;
		L_11 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_9, L_10, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_12 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_13 = L_12->___instantiatedObjects_12;
		int32_t L_14 = ___uniqueId0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15;
		L_15 = Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193(L_13, L_14, Dictionary_2_get_Item_m0925485CB3974EDB432A0687330C6D7D842DD193_RuntimeMethod_var);
		int32_t L_16;
		L_16 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_15, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_16)))
		{
			goto IL_0055;
		}
	}
	{
		// instance.poolCursors[uniqueId] = 0;
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_17 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_18 = L_17->___poolCursors_13;
		int32_t L_19 = ___uniqueId0;
		Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF(L_18, L_19, 0, Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void CFX_SpawnSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_Awake_m7C1B26FBE2BC7B4C4F0AA6805C61201BEC70C4F4 (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC993F04536456BB38801F8ACA450E3E38DBCEA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance != null)
		CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* L_0 = ((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.LogWarning("CFX_SpawnSystem: There should only be one instance of CFX_SpawnSystem per Scene!\n", this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(_stringLiteralDC993F04536456BB38801F8ACA450E3E38DBCEA7, L_2, NULL);
	}

IL_001d:
	{
		// instance = this;
		((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_StaticFields*)il2cpp_codegen_static_fields_for(CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void CFX_SpawnSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem_Start_m8011B4DA2670B06F4AD3AFF414B0FFFBADE3B3B2 (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// allObjectsLoaded = false;
		__this->___allObjectsLoaded_11 = (bool)0;
		// for(int i = 0; i < objectsToPreload.Length; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_000b:
	{
		// PreloadObject(objectsToPreload[i], objectsToPreloadTimes[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objectsToPreload_5;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___objectsToPreloadTimes_6;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		CFX_SpawnSystem_PreloadObject_m25A1F99AFB2F66DDA47504C170FE57387BCF65C1(L_3, L_7, NULL);
		// for(int i = 0; i < objectsToPreload.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0024:
	{
		// for(int i = 0; i < objectsToPreload.Length; i++)
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___objectsToPreload_5;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// allObjectsLoaded = true;
		__this->___allObjectsLoaded_11 = (bool)1;
		// }
		return;
	}
}
// System.Void CFX_SpawnSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFX_SpawnSystem__ctor_mD338755A1730D647569C56E368BD28236FE250ED (CFX_SpawnSystem_tDE58ABC88BD5892C3994FC04B09D18887059C20E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3FB771855E23B4182804CE8BDE6B7D7FC92C86F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObject[] objectsToPreload = new GameObject[0];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___objectsToPreload_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectsToPreload_5), (void*)L_0);
		// public int[] objectsToPreloadTimes = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___objectsToPreloadTimes_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectsToPreloadTimes_6), (void*)L_1);
		// public bool spawnAsChildren = true;
		__this->___spawnAsChildren_8 = (bool)1;
		// private Dictionary<int,List<GameObject>> instantiatedObjects = new Dictionary<int, List<GameObject>>();
		Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3* L_2 = (Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3*)il2cpp_codegen_object_new(Dictionary_2_tF1DBCA015E64EBB17FB6BF15FC0E5FC1D6EAC9D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3FB771855E23B4182804CE8BDE6B7D7FC92C86F0(L_2, Dictionary_2__ctor_m3FB771855E23B4182804CE8BDE6B7D7FC92C86F0_RuntimeMethod_var);
		__this->___instantiatedObjects_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instantiatedObjects_12), (void*)L_2);
		// private Dictionary<int,int> poolCursors = new Dictionary<int, int>();
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_3 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_3, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		__this->___poolCursors_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poolCursors_13), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FPSGame.c_Playercontroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_Start_m9C364341E7CF2F0BAE9118E85AAAB945D388E898 (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g_Playercontroller = this.GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___g_Playercontroller_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___g_Playercontroller_4), (void*)L_0);
		// g_movespeed = 5;
		__this->___g_movespeed_9 = (5.0f);
		// g_Rotatespeed = 80;
		__this->___g_Rotatespeed_10 = (80.0f);
		// g_muzzleflash.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->___g_muzzleflash_12;
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_1, NULL);
		// g_jumpspeed = 7;
		__this->___g_jumpspeed_17 = (7.0f);
		// Cursor.visible = false;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)0, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(1, NULL);
		// g_Audiosource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___g_Audiosource_18;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_2, NULL);
		// g_zombieskillcounter = 0;
		__this->___g_zombieskillcounter_23 = 0;
		// g_JumpFlag = false;
		__this->___g_JumpFlag_27 = (bool)0;
		// g_JumpHeight = 0;
		__this->___g_JumpHeight_28 = (0.0f);
		// g_gamestarttimecounter = 0;
		__this->___g_gamestarttimecounter_30 = (0.0f);
		// g_numbercounter=3;
		__this->___g_numbercounter_31 = 3;
		// g_gamestartflg = false;
		__this->___g_gamestartflg_32 = (bool)0;
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_Update_m68B18A2D776015C9AA8A2B4DD42973538D8E8420 (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	{
		// m_Gamestart();
		c_Playercontroller_m_Gamestart_m2281C1430EA3571B36118384F278DE1C77693F4C(__this, NULL);
		// m_stopplay();
		c_Playercontroller_m_stopplay_m2FCC37BB19DCF3F8ABF375A1AC84C98177826815(__this, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::m_playermove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_playermove_mDCB29AAD50618D05CFCF9E45BC6715A960485B6A (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g_movedirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___g_movedirection_6 = L_0;
		// g_movedirection = this.transform.forward * Input.GetAxis("Vertical") * g_movespeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		float L_3;
		L_3 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		float L_5 = __this->___g_movespeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		__this->___g_movedirection_6 = L_6;
		// g_movedirection += -this.transform.right * Input.GetAxis("Horizontal") * g_movespeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___g_movedirection_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_9, NULL);
		float L_11;
		L_11 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		float L_13 = __this->___g_movespeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_14, NULL);
		__this->___g_movedirection_6 = L_15;
		// g_Playercontroller.SimpleMove(g_movedirection);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_16 = __this->___g_Playercontroller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___g_movedirection_6;
		bool L_18;
		L_18 = CharacterController_SimpleMove_mE32A48D439878B3241E8456F8EBFAAE264BD705C(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::m_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_Rotation_m9309CDDA41C51E37A2D218B9D8E11990CB3E60AD (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Cursor.visible)
		bool L_0;
		L_0 = Cursor_get_visible_mC9926F373AB4B10F5376D37A6C278DBD85EF4871(NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// g_cameraRotationdirection.x = -Input.GetAxis("Mouse Y") * g_Rotatespeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___g_cameraRotationdirection_7);
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_3 = __this->___g_Rotatespeed_10;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		L_1->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_2)), L_3)), L_4));
	}

IL_002a:
	{
		// g_Playerrotationdirection.y = Input.GetAxis("Mouse X") * g_Rotatespeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___g_Playerrotationdirection_8);
		float L_6;
		L_6 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_7 = __this->___g_Rotatespeed_10;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		L_5->___y_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, L_7)), L_8));
		// this.transform.Rotate(g_Playerrotationdirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___g_Playerrotationdirection_8;
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_9, L_10, NULL);
		// g_camera.transform.Rotate(g_cameraRotationdirection, Space.Self);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___g_camera_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___g_cameraRotationdirection_7;
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_12, L_13, 1, NULL);
		// g_cameraeulerAngle = g_camera.transform.eulerAngles;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___g_camera_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_15, NULL);
		__this->___g_cameraeulerAngle_11 = L_16;
		// if (g_cameraeulerAngle.x > 270 && g_cameraeulerAngle.x < 300)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___g_cameraeulerAngle_11);
		float L_18 = L_17->___x_2;
		if ((!(((float)L_18) > ((float)(270.0f)))))
		{
			goto IL_00d4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___g_cameraeulerAngle_11);
		float L_20 = L_19->___x_2;
		if ((!(((float)L_20) < ((float)(300.0f)))))
		{
			goto IL_00d4;
		}
	}
	{
		// g_cameraeulerAngle.x = 300;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___g_cameraeulerAngle_11);
		L_21->___x_2 = (300.0f);
		// g_camera.transform.eulerAngles = g_cameraeulerAngle;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___g_camera_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___g_cameraeulerAngle_11;
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_23, L_24, NULL);
	}

IL_00d4:
	{
		// if (g_cameraeulerAngle.x > 60 && g_cameraeulerAngle.x < 100)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___g_cameraeulerAngle_11);
		float L_26 = L_25->___x_2;
		if ((!(((float)L_26) > ((float)(60.0f)))))
		{
			goto IL_011e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___g_cameraeulerAngle_11);
		float L_28 = L_27->___x_2;
		if ((!(((float)L_28) < ((float)(100.0f)))))
		{
			goto IL_011e;
		}
	}
	{
		// g_cameraeulerAngle.x = 60;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___g_cameraeulerAngle_11);
		L_29->___x_2 = (60.0f);
		// g_camera.transform.eulerAngles = g_cameraeulerAngle;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = __this->___g_camera_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___g_cameraeulerAngle_11;
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_31, L_32, NULL);
	}

IL_011e:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::m_gunfire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_gunfire_m9B61D02836F4D5F1D29932A1CC827506773015D4 (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisc_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D_m7F14D3CB0652B51C97EE820FF918D2164DF1E5E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3665C8A019318729A568C30D09CD2244A67085C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_0162;
		}
	}
	{
		// g_muzzleflash.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->___g_muzzleflash_12;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_1, NULL);
		// g_Audiosource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___g_Audiosource_18;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// g_ray = g_camera.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___g_camera_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4(L_3, L_4, NULL);
		__this->___g_ray_13 = L_5;
		// if (Physics.Raycast(g_ray, out g_Rayhitinfo))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6 = __this->___g_ray_13;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_7 = (&__this->___g_Rayhitinfo_14);
		bool L_8;
		L_8 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0162;
		}
	}
	{
		// g_sparkprefeb = Instantiate(g_spark, g_Rayhitinfo.point, Quaternion.LookRotation(g_Rayhitinfo.normal));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___g_spark_15;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_10 = (&__this->___g_Rayhitinfo_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_10, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_12 = (&__this->___g_Rayhitinfo_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_11, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___g_sparkprefeb_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___g_sparkprefeb_16), (void*)L_15);
		// Destroy(g_sparkprefeb, 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___g_sparkprefeb_16;
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_16, (0.5f), NULL);
		// if(g_Rayhitinfo.transform.gameObject.tag== "zombie")
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_17 = (&__this->___g_Rayhitinfo_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_17, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		String_t* L_20;
		L_20 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_19, NULL);
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteralB3665C8A019318729A568C30D09CD2244A67085C, NULL);
		if (!L_21)
		{
			goto IL_0162;
		}
	}
	{
		// g_zombiescript = g_Rayhitinfo.transform.gameObject.GetComponent<c_zombiecontroller>();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_22 = (&__this->___g_Rayhitinfo_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_22, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* L_25;
		L_25 = GameObject_GetComponent_Tisc_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D_m7F14D3CB0652B51C97EE820FF918D2164DF1E5E2(L_24, GameObject_GetComponent_Tisc_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D_m7F14D3CB0652B51C97EE820FF918D2164DF1E5E2_RuntimeMethod_var);
		__this->___g_zombiescript_19 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___g_zombiescript_19), (void*)L_25);
		// g_zombies = g_Rayhitinfo.transform.gameObject;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_26 = (&__this->___g_Rayhitinfo_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		__this->___g_zombies_21 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___g_zombies_21), (void*)L_28);
		// if (g_zombiescript.g_isAlive == true)
		c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* L_29 = __this->___g_zombiescript_19;
		bool L_30 = L_29->___g_isAlive_11;
		if (!L_30)
		{
			goto IL_0162;
		}
	}
	{
		// g_Recticle.color = Color.red;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = __this->___g_Recticle_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		L_32 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_32);
		// g_zombiescript.m_killingzombies();
		c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* L_33 = __this->___g_zombiescript_19;
		c_zombiecontroller_m_killingzombies_m6EE1117A8F11BC5D29B77775906D497E73DF0D4D(L_33, NULL);
		// g_zombiescript.g_bullethitzombie = true;
		c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* L_34 = __this->___g_zombiescript_19;
		L_34->___g_bullethitzombie_10 = (bool)1;
		// g_zombiescript.g_zombiemovecontroller.isStopped = true;
		c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* L_35 = __this->___g_zombiescript_19;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_36 = L_35->___g_zombiemovecontroller_6;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_36, (bool)1, NULL);
		// g_zombiescript.g_isAlive = false;
		c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* L_37 = __this->___g_zombiescript_19;
		L_37->___g_isAlive_11 = (bool)0;
		// g_zombieskillcounter++;
		int32_t L_38 = __this->___g_zombieskillcounter_23;
		__this->___g_zombieskillcounter_23 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		// g_zombiekillstext.text = g_zombieskillcounter.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___g_zombiekillstext_24;
		int32_t* L_40 = (&__this->___g_zombieskillcounter_23);
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_40, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_41);
	}

IL_0162:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_42;
		L_42 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_42)
		{
			goto IL_0190;
		}
	}
	{
		// g_muzzleflash.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_43 = __this->___g_muzzleflash_12;
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_43, NULL);
		// g_Audiosource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_44 = __this->___g_Audiosource_18;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_44, NULL);
		// g_Recticle.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = __this->___g_Recticle_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		L_46 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_45, L_46);
	}

IL_0190:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::m_Playerjump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_Playerjump_m9CCBD705F946A7C816161E6E5EF808AF4627D335 (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	{
		// if (g_Playercontroller.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___g_Playercontroller_4;
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space) && g_JumpFlag == false)
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		bool L_3 = __this->___g_JumpFlag_27;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// g_JumpFlag = true;
		__this->___g_JumpFlag_27 = (bool)1;
	}

IL_0025:
	{
		// if(g_JumpFlag)
		bool L_4 = __this->___g_JumpFlag_27;
		if (!L_4)
		{
			goto IL_0098;
		}
	}
	{
		// g_JumpHeight += g_jumpspeed * Time.deltaTime;
		float L_5 = __this->___g_JumpHeight_28;
		float L_6 = __this->___g_jumpspeed_17;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___g_JumpHeight_28 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, L_7))));
		// g_JumpPos = Vector3.up * g_jumpspeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_9 = __this->___g_jumpspeed_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		__this->___g_JumpPos_26 = L_12;
		// g_Playercontroller.Move(g_JumpPos);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_13 = __this->___g_Playercontroller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___g_JumpPos_26;
		int32_t L_15;
		L_15 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_13, L_14, NULL);
		// if(g_JumpHeight >= g_jumpspeed)
		float L_16 = __this->___g_JumpHeight_28;
		float L_17 = __this->___g_jumpspeed_17;
		if ((!(((float)L_16) >= ((float)L_17))))
		{
			goto IL_0098;
		}
	}
	{
		// g_JumpFlag = false;
		__this->___g_JumpFlag_27 = (bool)0;
		// g_JumpHeight = 0;
		__this->___g_JumpHeight_28 = (0.0f);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::m_playermanager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_playermanager_m0405DBAF098AC161E223F47DCD378C6F27E488BA (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.transform.position.y < 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::m_stopplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_stopplay_m2FCC37BB19DCF3F8ABF375A1AC84C98177826815 (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::m_Gamestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller_m_Gamestart_m2281C1430EA3571B36118384F278DE1C77693F4C (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	{
		// if (!g_gamestartflg)
		bool L_0 = __this->___g_gamestartflg_32;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// g_gamestarttimecounter++;
		float L_1 = __this->___g_gamestarttimecounter_30;
		__this->___g_gamestarttimecounter_30 = ((float)il2cpp_codegen_add(L_1, (1.0f)));
	}

IL_001a:
	{
		// if (g_gamestarttimecounter == 100)
		float L_2 = __this->___g_gamestarttimecounter_30;
		if ((!(((float)L_2) == ((float)(100.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// g_numbercounter--;
		int32_t L_3 = __this->___g_numbercounter_31;
		__this->___g_numbercounter_31 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// g_numbertext.text = g_numbercounter.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___g_numbertext_29;
		int32_t* L_5 = (&__this->___g_numbercounter_31);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
	}

IL_004b:
	{
		// if (g_gamestarttimecounter == 200)
		float L_7 = __this->___g_gamestarttimecounter_30;
		if ((!(((float)L_7) == ((float)(200.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// g_numbercounter--;
		int32_t L_8 = __this->___g_numbercounter_31;
		__this->___g_numbercounter_31 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// g_numbertext.text = g_numbercounter.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___g_numbertext_29;
		int32_t* L_10 = (&__this->___g_numbercounter_31);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
	}

IL_007c:
	{
		// if (g_gamestarttimecounter == 300)
		float L_12 = __this->___g_gamestarttimecounter_30;
		if ((!(((float)L_12) == ((float)(300.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		// g_numbercounter--;
		int32_t L_13 = __this->___g_numbercounter_31;
		__this->___g_numbercounter_31 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		// g_numbertext.text = g_numbercounter.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___g_numbertext_29;
		int32_t* L_15 = (&__this->___g_numbercounter_31);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
	}

IL_00ad:
	{
		// if (g_gamestarttimecounter == 400)
		float L_17 = __this->___g_gamestarttimecounter_30;
		if ((!(((float)L_17) == ((float)(400.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		// g_numbercounter--;
		int32_t L_18 = __this->___g_numbercounter_31;
		__this->___g_numbercounter_31 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		// g_numbertext.text = g_numbercounter.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___g_numbertext_29;
		int32_t* L_20 = (&__this->___g_numbercounter_31);
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_20, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_21);
		// g_gamestartflg = true;
		__this->___g_gamestartflg_32 = (bool)1;
		// g_numbertext.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___g_numbertext_29;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)0, NULL);
	}

IL_00f1:
	{
		// if (g_gamestartflg)
		bool L_23 = __this->___g_gamestartflg_32;
		if (!L_23)
		{
			goto IL_0122;
		}
	}
	{
		// g_gamestarttimecounter = 0;
		__this->___g_gamestarttimecounter_30 = (0.0f);
		// m_Rotation();
		c_Playercontroller_m_Rotation_m9309CDDA41C51E37A2D218B9D8E11990CB3E60AD(__this, NULL);
		// m_gunfire();
		c_Playercontroller_m_gunfire_m9B61D02836F4D5F1D29932A1CC827506773015D4(__this, NULL);
		// m_Playerjump();
		c_Playercontroller_m_Playerjump_m9CCBD705F946A7C816161E6E5EF808AF4627D335(__this, NULL);
		// m_playermove();
		c_Playercontroller_m_playermove_mDCB29AAD50618D05CFCF9E45BC6715A960485B6A(__this, NULL);
		// m_playermanager();
		c_Playercontroller_m_playermanager_m0405DBAF098AC161E223F47DCD378C6F27E488BA(__this, NULL);
	}

IL_0122:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_Playercontroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_Playercontroller__ctor_mD2B3D65F65541B7F535A02CD055C8945612E848F (c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* __this, const RuntimeMethod* method) 
{
	{
		// Vector3 g_movedirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___g_movedirection_6 = L_0;
		// Vector3 g_cameraRotationdirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___g_cameraRotationdirection_7 = L_1;
		// Vector3 g_Playerrotationdirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___g_Playerrotationdirection_8 = L_2;
		// Vector3 g_cameraeulerAngle = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___g_cameraeulerAngle_11 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FPSGame.c_uImanager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_uImanager_Start_m8D5231D8497DB6AFD31A1CE65A65D49BF77714CF (c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_uImanager::m_Gamereset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_uImanager_m_Gamereset_m09EC7EB99AC86EF809C53076AFBA0C572CF4E6E8 (c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_uImanager::m_PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_uImanager_m_PlayGame_mC687C8827722DD425D6B41188616FE4CF768BACD (c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_uImanager::m_QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_uImanager_m_QuitGame_m8BBB2B3D5F1AF3C2EC1D580280047012D34506A4 (c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_uImanager::m_Instructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_uImanager_m_Instructions_m01624D51A8622AAA0CBABDACC245A83074849B82 (c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6* __this, const RuntimeMethod* method) 
{
	{
		// g_instructionmenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___g_instructionmenu_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// g_minemenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___g_minemenu_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_uImanager::m_pressokbutton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_uImanager_m_pressokbutton_m2FC635CB389530AC4CEC13E984EF2C177EE13F8C (c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6* __this, const RuntimeMethod* method) 
{
	{
		// g_instructionmenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___g_instructionmenu_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// g_minemenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___g_minemenu_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_uImanager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_uImanager__ctor_mDDF4FD0FF38552054D41A010F255C220F3DDE066 (c_uImanager_tAEE67C35ACD65806BE460193B8409A180F8A08F6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FPSGame.c_zombiecontroller::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_Awake_mF523957EB8660F95E9168902542A4D7A44043CB9 (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisc_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123_m15EB183331C96D122402BDDC6D15E4E321D21330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g_Player = GameObject.Find("Player").GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_0, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		__this->___g_Player_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___g_Player_4), (void*)L_1);
		// g_Playerscript = GameObject.Find("Player").GetComponent<c_Playercontroller>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* L_3;
		L_3 = GameObject_GetComponent_Tisc_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123_m15EB183331C96D122402BDDC6D15E4E321D21330(L_2, GameObject_GetComponent_Tisc_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123_m15EB183331C96D122402BDDC6D15E4E321D21330_RuntimeMethod_var);
		__this->___g_Playerscript_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___g_Playerscript_9), (void*)L_3);
		// g_resetzombiestime = 0;
		__this->___g_resetzombiestime_7 = (0.0f);
		// g_zombieAttackpower = 0.001f;
		__this->___g_zombieAttackpower_8 = (0.00100000005f);
		// g_isAlive = true;
		__this->___g_isAlive_11 = (bool)1;
		// g_zombierespawnrandompoint = 0;
		__this->___g_zombierespawnrandompoint_13 = 0;
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiecontroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_Update_m407E882FD7DC6B01B23D07A73D314DF6AE50A099 (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) 
{
	{
		// m_zombiemanager();
		c_zombiecontroller_m_zombiemanager_mDE456503D6142BE7D10FD08A30E7ACB6BFE77FA6(__this, NULL);
		// m_Gameover();
		c_zombiecontroller_m_Gameover_m47115BB50AEF84C4242CDDA9C15590296876264C(__this, NULL);
		// m_resetzombieposition();
		c_zombiecontroller_m_resetzombieposition_m062E41296BED6E10A35BBFD00FA5A6D8129A81CA(__this, NULL);
		// g_zombieAttackaudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___g_zombieAttackaudio_12;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiecontroller::m_zombiemanager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_m_zombiemanager_mDE456503D6142BE7D10FD08A30E7ACB6BFE77FA6 (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g_zombiemovecontroller.destination = g_Player.position;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___g_zombiemovecontroller_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___g_Player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NavMeshAgent_set_destination_m5F0A8E4C8ED93798D6B9CE496B10FCE5B7461B95(L_0, L_2, NULL);
		// if (Vector3.Distance(this.transform.position, g_Player.position) < g_zombiemovecontroller.stoppingDistance)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___g_Player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_4, L_6, NULL);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_8 = __this->___g_zombiemovecontroller_6;
		float L_9;
		L_9 = NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4(L_8, NULL);
		if ((!(((float)L_7) < ((float)L_9))))
		{
			goto IL_0082;
		}
	}
	{
		// this.g_zombieAnimator.SetTrigger("Attack");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___g_zombieAnimator_5;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_10, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
		// this.g_Playerscript.g_Playerhealth.value += g_zombieAttackpower;
		c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* L_11 = __this->___g_Playerscript_9;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = L_11->___g_Playerhealth_22;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = L_12;
		float L_14;
		L_14 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_13);
		float L_15 = __this->___g_zombieAttackpower_8;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_13, ((float)il2cpp_codegen_add(L_14, L_15)));
		// g_zombiemovecontroller.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_16 = __this->___g_zombiemovecontroller_6;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_16, (bool)1, NULL);
		// g_zombieAttackaudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___g_zombieAttackaudio_12;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_17, NULL);
	}

IL_0082:
	{
		// if (Vector3.Distance(this.transform.position, g_Player.position) >g_zombiemovecontroller.stoppingDistance)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___g_Player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		float L_22;
		L_22 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_19, L_21, NULL);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_23 = __this->___g_zombiemovecontroller_6;
		float L_24;
		L_24 = NavMeshAgent_get_stoppingDistance_mA866A409C59878849D63BEC61517DE4F906BEEC4(L_23, NULL);
		if ((!(((float)L_22) > ((float)L_24))))
		{
			goto IL_00d9;
		}
	}
	{
		// if (this.g_isAlive==true)
		bool L_25 = __this->___g_isAlive_11;
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		// this.g_zombieAnimator.SetTrigger("Run");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___g_zombieAnimator_5;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_26, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, NULL);
		// g_zombiemovecontroller.isStopped = false;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_27 = __this->___g_zombiemovecontroller_6;
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_27, (bool)0, NULL);
		// g_zombieAttackaudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28 = __this->___g_zombieAttackaudio_12;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_28, NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiecontroller::m_killingzombies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_m_killingzombies_m6EE1117A8F11BC5D29B77775906D497E73DF0D4D (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// g_zombieAnimator.SetTrigger("die");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___g_zombieAnimator_5;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiecontroller::m_resetzombieposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_m_resetzombieposition_m062E41296BED6E10A35BBFD00FA5A6D8129A81CA (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) 
{
	{
		// if (g_isAlive) { return; }
		bool L_0 = __this->___g_isAlive_11;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (g_isAlive) { return; }
		return;
	}

IL_0009:
	{
		// if (this.g_bullethitzombie == true)
		bool L_1 = __this->___g_bullethitzombie_10;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// this.g_resetzombiestime += 1 * Time.deltaTime;
		float L_2 = __this->___g_resetzombiestime_7;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___g_resetzombiestime_7 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply((1.0f), L_3))));
	}

IL_0029:
	{
		// if (this.g_resetzombiestime > 5)
		float L_4 = __this->___g_resetzombiestime_7;
		if ((!(((float)L_4) > ((float)(5.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// this.g_resetzombiestime = 0;
		__this->___g_resetzombiestime_7 = (0.0f);
		// g_zombierespawnrandompoint = Random.Range(0, g_Playerscript.g_zombierespawnpoints.Length);
		c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* L_6 = __this->___g_Playerscript_9;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = L_6->___g_zombierespawnpoints_25;
		int32_t L_8;
		L_8 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		__this->___g_zombierespawnrandompoint_13 = L_8;
		// this.gameObject.transform.position = g_Playerscript.g_zombierespawnpoints[g_zombierespawnrandompoint].position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* L_11 = __this->___g_Playerscript_9;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = L_11->___g_zombierespawnpoints_25;
		int32_t L_13 = __this->___g_zombierespawnrandompoint_13;
		int32_t L_14 = L_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_16, NULL);
		// this.g_bullethitzombie = false;
		__this->___g_bullethitzombie_10 = (bool)0;
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiecontroller::m_Gameover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller_m_Gameover_m47115BB50AEF84C4242CDDA9C15590296876264C (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (g_Playerscript.g_Playerhealth.value == 1)
		c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* L_0 = __this->___g_Playerscript_9;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = L_0->___g_Playerhealth_22;
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		if ((!(((float)L_2) == ((float)(1.0f)))))
		{
			goto IL_0023;
		}
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiecontroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiecontroller__ctor_mE8F6A32BB95C39B1965CD72C71DEAEDF567DB80D (c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FPSGame.c_zombiesmanager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager_Start_m523A280D1C6DEC17F3DA93841492AFCCB01BF0BB (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) 
{
	{
		// g_zombiespawntime = 0;
		__this->___g_zombiespawntime_7 = (0.0f);
		// m_spawnzombies();
		c_zombiesmanager_m_spawnzombies_m6D9B62A9E5EFAEF523985002C43F17543A754AC3(__this, NULL);
		// g_randomzombie = 0;
		__this->___g_randomzombie_9 = 0;
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiesmanager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager_Update_mF56E583A4AC9E457AC556A277F2D7E66CD3A46C4 (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) 
{
	{
		// m_startzombiesspawn();
		c_zombiesmanager_m_startzombiesspawn_mE50DBB002FDB959D8FD2C51779E3A6449A7318E1(__this, NULL);
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiesmanager::m_spawnzombies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager_m_spawnzombies_m6D9B62A9E5EFAEF523985002C43F17543A754AC3 (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// g_zombiesarray = new GameObject[30];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->___g_zombiesarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___g_zombiesarray_6), (void*)L_0);
		// for (var i=0; i< g_zombiesarray.Length; i++)
		V_0 = 0;
		goto IL_004d;
	}

IL_0011:
	{
		// g_zombiesarray[i] = Instantiate(g_zombiePrefab, g_zombiespawnpoints[0].transform.position, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___g_zombiesarray_6;
		int32_t L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___g_zombiePrefab_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___g_zombiespawnpoints_4;
		int32_t L_5 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		ArrayElementTypeCheck (L_1, L_10);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_10);
		// g_zombiesarray[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___g_zombiesarray_6;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// for (var i=0; i< g_zombiesarray.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004d:
	{
		// for (var i=0; i< g_zombiesarray.Length; i++)
		int32_t L_16 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___g_zombiesarray_6;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiesmanager::m_zombiesetposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager_m_zombiesetposition_mB49B230015A43EDB5722734FD6D109FDBE2083C2 (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisc_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D_m7F14D3CB0652B51C97EE820FF918D2164DF1E5E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// g_zombiespawntime += 1 * Time.deltaTime;
		float L_0 = __this->___g_zombiespawntime_7;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___g_zombiespawntime_7 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply((1.0f), L_1))));
		// if (g_zombiespawntime > 2)
		float L_2 = __this->___g_zombiespawntime_7;
		if ((!(((float)L_2) > ((float)(2.0f)))))
		{
			goto IL_00c9;
		}
	}
	{
		// g_randomzombie = Random.Range(0, g_zombiesarray.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___g_zombiesarray_6;
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->___g_randomzombie_9 = L_4;
		// for(var i=0; i<g_zombiesarray.Length; i++)
		V_0 = 0;
		goto IL_00b3;
	}

IL_0040:
	{
		// if (g_zombiesarray[i].activeInHierarchy == false)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___g_zombiesarray_6;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_8, NULL);
		if (L_9)
		{
			goto IL_00af;
		}
	}
	{
		// g_zombiespawnrandompoints = Random.Range(0, g_zombiespawnpoints.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___g_zombiespawnpoints_4;
		int32_t L_11;
		L_11 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		__this->___g_zombiespawnrandompoints_8 = L_11;
		// g_zombiesarray[i].transform.position = g_zombiespawnpoints[g_zombiespawnrandompoints].transform.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___g_zombiesarray_6;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___g_zombiespawnpoints_4;
		int32_t L_18 = __this->___g_zombiespawnrandompoints_8;
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_22, NULL);
		// g_zombiesarray[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = __this->___g_zombiesarray_6;
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		// g_zombiesarray[i].GetComponent<c_zombiecontroller>().g_isAlive = true;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = __this->___g_zombiesarray_6;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		c_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D* L_31;
		L_31 = GameObject_GetComponent_Tisc_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D_m7F14D3CB0652B51C97EE820FF918D2164DF1E5E2(L_30, GameObject_GetComponent_Tisc_zombiecontroller_t9493443FC5204CF58C2CF377F25DCF0615B8870D_m7F14D3CB0652B51C97EE820FF918D2164DF1E5E2_RuntimeMethod_var);
		L_31->___g_isAlive_11 = (bool)1;
		// break;
		goto IL_00be;
	}

IL_00af:
	{
		// for(var i=0; i<g_zombiesarray.Length; i++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b3:
	{
		// for(var i=0; i<g_zombiesarray.Length; i++)
		int32_t L_33 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = __this->___g_zombiesarray_6;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0040;
		}
	}

IL_00be:
	{
		// g_zombiespawntime = 0;
		__this->___g_zombiespawntime_7 = (0.0f);
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiesmanager::m_startzombiesspawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager_m_startzombiesspawn_mE50DBB002FDB959D8FD2C51779E3A6449A7318E1 (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) 
{
	{
		// if (g_playerscript.g_gamestartflg)
		c_Playercontroller_tC99227559C67551BF4A9B9C975EFC0307AFCA123* L_0 = __this->___g_playerscript_10;
		bool L_1 = L_0->___g_gamestartflg_32;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// m_zombiesetposition();
		c_zombiesmanager_m_zombiesetposition_mB49B230015A43EDB5722734FD6D109FDBE2083C2(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FPSGame.c_zombiesmanager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void c_zombiesmanager__ctor_m566F6AD24BCD2B56D05FA1F8CCDF0FECBBE7A1D1 (c_zombiesmanager_t4EBB5C7996AE6E4739B4B1E2AAE8402A2F3A0EA1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___scale0;
		float L_2 = L_1.___x_2;
		__this->___x_2 = ((float)il2cpp_codegen_multiply(L_0, L_2));
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___scale0;
		float L_5 = L_4.___y_3;
		__this->___y_3 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___scale0;
		float L_8 = L_7.___z_4;
		__this->___z_4 = ((float)il2cpp_codegen_multiply(L_6, L_8));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
