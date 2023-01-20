#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WebGLSendContractExample
struct WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB;
// WebGLSendTransactionExample
struct WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E;
// WebGLSha3Example
struct WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78;
// WebGLSignMessageExample
struct WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2;
// WebGLSignVerifyExample
struct WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932;
// WebGLTransfer1155
struct WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80;
// WebGLTransfer20
struct WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A;
// WebGLTransfer721
struct WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C;
// WebLogin
struct WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// IPFS/GetFileInfoResponse/Content
struct Content_tFC7A3C664DB9F57BEB2E902E1E77ED59828561E4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EVM_t4CB9F43860ADE16A97838AAEA17067F24EB140AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Web3Wallet_t981201C98C5E889969444984CC19BAF5B46A4913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral038805BF2AC07717601BA1C0667AE15F858ECAC4;
IL2CPP_EXTERN_C String_t* _stringLiteral063357668FE9D25EEA467879D48BCF7E34236C9E;
IL2CPP_EXTERN_C String_t* _stringLiteral0B7DAC07514FCE815EF8D7FDCE1FAAC769DC0664;
IL2CPP_EXTERN_C String_t* _stringLiteral34DC9DA7C4C8D3F2DB2AF22304EB328E3CCA01DE;
IL2CPP_EXTERN_C String_t* _stringLiteral3EFBAB9CEB69AEB992732EFEEB9B79F3A5CCB68C;
IL2CPP_EXTERN_C String_t* _stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A;
IL2CPP_EXTERN_C String_t* _stringLiteral54EEFB97193BEF7C9DA19DA9BB24C0896A0F3EA5;
IL2CPP_EXTERN_C String_t* _stringLiteral59FE0EDF5091FB867FDC25EA5C56BB4D4CA603DE;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral77F31D67733B00003C51A2EDA405BAE5A1F74A07;
IL2CPP_EXTERN_C String_t* _stringLiteral79B448933ECD7F81BA8820B771D2B5337743DA91;
IL2CPP_EXTERN_C String_t* _stringLiteral81DB7BE166C465D5A9B10E99A68F7C98BCC38AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral828B708B9697B1A49614B3D3B963BBD58373077D;
IL2CPP_EXTERN_C String_t* _stringLiteral858F39BFA83669BE8E5841AB7D3F3FD9144FE821;
IL2CPP_EXTERN_C String_t* _stringLiteral96389B1D5463382BD4CB534955DA480A2DED07DA;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D795FBD58CC7592D955A219374339A323801A9;
IL2CPP_EXTERN_C String_t* _stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1;
IL2CPP_EXTERN_C String_t* _stringLiteralC8023DFB4F5200FC44AAB47FFF63A6F372E1B6D3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE865D3786611B98296355880B32DEA9941EBBC20;
IL2CPP_EXTERN_C String_t* _stringLiteralEDD6ACC6C06C82120317BC17D98F0A059ED05229;
IL2CPP_EXTERN_C String_t* _stringLiteralEEF62FBD3D90AFCA4A0EEFB679E9E0650202BC39;
IL2CPP_EXTERN_C String_t* _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_TisU3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A_m520B6A556BCA0973EC165BC771BDEC0582EA3872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77_m69D273CC119F212C5BE1B4E8A45B30344A59A3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C_mC97B1AE3054543A0D6E7AFFA65A1F44B56918EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50_mFE0FBC4A31F8E0BF36066D4952AB29FAB99C3AF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A_m679F3C10BF08D62E160C2E6BACCC666EDB8D5A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m91025E3138D9254B4F78785609356606668BD0F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m22933548B77ECFD0EB1D5B7226C2B566DFF168EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA_m37BD14A687B5008E4425305FBA551F4DBFBC71B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE_mB874E3AF62B6096C3775FA89F2F57B4CF781B4FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779_mC376024971D8305D3347A67A5D3573D669D36149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941  : public RuntimeObject
{
public:
	// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::_isDone
	bool ____isDone_0;
	// System.Exception IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::_exception
	Exception_t * ____exception_1;
	// System.Action IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::_continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____continuation_2;

public:
	inline static int32_t get_offset_of__isDone_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941, ____isDone_0)); }
	inline bool get__isDone_0() const { return ____isDone_0; }
	inline bool* get_address_of__isDone_0() { return &____isDone_0; }
	inline void set__isDone_0(bool value)
	{
		____isDone_0 = value;
	}

	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941, ____exception_1)); }
	inline Exception_t * get__exception_1() const { return ____exception_1; }
	inline Exception_t ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941, ____continuation_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__continuation_2() const { return ____continuation_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__continuation_2() { return &____continuation_2; }
	inline void set__continuation_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____continuation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_2), (void*)value);
	}
};


// IPFS/GetFileInfoResponse/Content
struct Content_tFC7A3C664DB9F57BEB2E902E1E77ED59828561E4  : public RuntimeObject
{
public:
	// System.String IPFS/GetFileInfoResponse/Content::cid
	String_t* ___cid_0;

public:
	inline static int32_t get_offset_of_cid_0() { return static_cast<int32_t>(offsetof(Content_tFC7A3C664DB9F57BEB2E902E1E77ED59828561E4, ___cid_0)); }
	inline String_t* get_cid_0() const { return ___cid_0; }
	inline String_t** get_address_of_cid_0() { return &___cid_0; }
	inline void set_cid_0(String_t* value)
	{
		___cid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cid_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Web3WalletTransfer20Example/<OnTransfer20>d__0
struct U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 
{
public:
	// System.Int32 Web3WalletTransfer20Example/<OnTransfer20>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Web3WalletTransfer20Example/<OnTransfer20>d__0::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.String Web3WalletTransfer20Example/<OnTransfer20>d__0::<chainId>5__2
	String_t* ___U3CchainIdU3E5__2_2;
	// System.String Web3WalletTransfer20Example/<OnTransfer20>d__0::<contract>5__3
	String_t* ___U3CcontractU3E5__3_3;
	// System.String Web3WalletTransfer20Example/<OnTransfer20>d__0::<value>5__4
	String_t* ___U3CvalueU3E5__4_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Web3WalletTransfer20Example/<OnTransfer20>d__0::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CchainIdU3E5__2_2() { return static_cast<int32_t>(offsetof(U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4, ___U3CchainIdU3E5__2_2)); }
	inline String_t* get_U3CchainIdU3E5__2_2() const { return ___U3CchainIdU3E5__2_2; }
	inline String_t** get_address_of_U3CchainIdU3E5__2_2() { return &___U3CchainIdU3E5__2_2; }
	inline void set_U3CchainIdU3E5__2_2(String_t* value)
	{
		___U3CchainIdU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CchainIdU3E5__2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontractU3E5__3_3() { return static_cast<int32_t>(offsetof(U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4, ___U3CcontractU3E5__3_3)); }
	inline String_t* get_U3CcontractU3E5__3_3() const { return ___U3CcontractU3E5__3_3; }
	inline String_t** get_address_of_U3CcontractU3E5__3_3() { return &___U3CcontractU3E5__3_3; }
	inline void set_U3CcontractU3E5__3_3(String_t* value)
	{
		___U3CcontractU3E5__3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontractU3E5__3_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__4_4() { return static_cast<int32_t>(offsetof(U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4, ___U3CvalueU3E5__4_4)); }
	inline String_t* get_U3CvalueU3E5__4_4() const { return ___U3CvalueU3E5__4_4; }
	inline String_t** get_address_of_U3CvalueU3E5__4_4() { return &___U3CvalueU3E5__4_4; }
	inline void set_U3CvalueU3E5__4_4(String_t* value)
	{
		___U3CvalueU3E5__4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__4_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Web3WalletTransfer721Example/<OnTransfer721>d__0
struct U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC 
{
public:
	// System.Int32 Web3WalletTransfer721Example/<OnTransfer721>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Web3WalletTransfer721Example/<OnTransfer721>d__0::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.String Web3WalletTransfer721Example/<OnTransfer721>d__0::<chainId>5__2
	String_t* ___U3CchainIdU3E5__2_2;
	// System.String Web3WalletTransfer721Example/<OnTransfer721>d__0::<contract>5__3
	String_t* ___U3CcontractU3E5__3_3;
	// System.String Web3WalletTransfer721Example/<OnTransfer721>d__0::<value>5__4
	String_t* ___U3CvalueU3E5__4_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Web3WalletTransfer721Example/<OnTransfer721>d__0::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CchainIdU3E5__2_2() { return static_cast<int32_t>(offsetof(U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC, ___U3CchainIdU3E5__2_2)); }
	inline String_t* get_U3CchainIdU3E5__2_2() const { return ___U3CchainIdU3E5__2_2; }
	inline String_t** get_address_of_U3CchainIdU3E5__2_2() { return &___U3CchainIdU3E5__2_2; }
	inline void set_U3CchainIdU3E5__2_2(String_t* value)
	{
		___U3CchainIdU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CchainIdU3E5__2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontractU3E5__3_3() { return static_cast<int32_t>(offsetof(U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC, ___U3CcontractU3E5__3_3)); }
	inline String_t* get_U3CcontractU3E5__3_3() const { return ___U3CcontractU3E5__3_3; }
	inline String_t** get_address_of_U3CcontractU3E5__3_3() { return &___U3CcontractU3E5__3_3; }
	inline void set_U3CcontractU3E5__3_3(String_t* value)
	{
		___U3CcontractU3E5__3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontractU3E5__3_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__4_4() { return static_cast<int32_t>(offsetof(U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC, ___U3CvalueU3E5__4_4)); }
	inline String_t* get_U3CvalueU3E5__4_4() const { return ___U3CvalueU3E5__4_4; }
	inline String_t** get_address_of_U3CvalueU3E5__4_4() { return &___U3CvalueU3E5__4_4; }
	inline void set_U3CvalueU3E5__4_4(String_t* value)
	{
		___U3CvalueU3E5__4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__4_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// WebGLSendContractExample/<OnSendContract>d__0
struct U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C 
{
public:
	// System.Int32 WebGLSendContractExample/<OnSendContract>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebGLSendContractExample/<OnSendContract>d__0::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebGLSendContractExample WebGLSendContractExample/<OnSendContract>d__0::<>4__this
	WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WebGLSendContractExample/<OnSendContract>d__0::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C, ___U3CU3E4__this_2)); }
	inline WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebGLSendTransactionExample/<OnSendTransaction>d__0
struct U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 
{
public:
	// System.Int32 WebGLSendTransactionExample/<OnSendTransaction>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebGLSendTransactionExample/<OnSendTransaction>d__0::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebGLSendTransactionExample WebGLSendTransactionExample/<OnSendTransaction>d__0::<>4__this
	WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WebGLSendTransactionExample/<OnSendTransaction>d__0::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50, ___U3CU3E4__this_2)); }
	inline WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebGLSha3Example/<OnHashMessage>d__0
struct U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 
{
public:
	// System.Int32 WebGLSha3Example/<OnHashMessage>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebGLSha3Example/<OnHashMessage>d__0::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebGLSha3Example WebGLSha3Example/<OnHashMessage>d__0::<>4__this
	WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WebGLSha3Example/<OnHashMessage>d__0::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77, ___U3CU3E4__this_2)); }
	inline WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebGLSignMessageExample/<OnSignMessage>d__0
struct U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A 
{
public:
	// System.Int32 WebGLSignMessageExample/<OnSignMessage>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebGLSignMessageExample/<OnSignMessage>d__0::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebGLSignMessageExample WebGLSignMessageExample/<OnSignMessage>d__0::<>4__this
	WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WebGLSignMessageExample/<OnSignMessage>d__0::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A, ___U3CU3E4__this_2)); }
	inline WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebGLSignVerifyExample/<OnHashMessage>d__4
struct U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 
{
public:
	// System.Int32 WebGLSignVerifyExample/<OnHashMessage>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebGLSignVerifyExample/<OnHashMessage>d__4::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebGLSignVerifyExample WebGLSignVerifyExample/<OnHashMessage>d__4::<>4__this
	WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * ___U3CU3E4__this_2;
	// System.String WebGLSignVerifyExample/<OnHashMessage>d__4::<hashedMessage>5__2
	String_t* ___U3ChashedMessageU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WebGLSignVerifyExample/<OnHashMessage>d__4::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_4;
	// UnityEngine.UI.Text WebGLSignVerifyExample/<OnHashMessage>d__4::<>7__wrap2
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984, ___U3CU3E4__this_2)); }
	inline WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChashedMessageU3E5__2_3() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984, ___U3ChashedMessageU3E5__2_3)); }
	inline String_t* get_U3ChashedMessageU3E5__2_3() const { return ___U3ChashedMessageU3E5__2_3; }
	inline String_t** get_address_of_U3ChashedMessageU3E5__2_3() { return &___U3ChashedMessageU3E5__2_3; }
	inline void set_U3ChashedMessageU3E5__2_3(String_t* value)
	{
		___U3ChashedMessageU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChashedMessageU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984, ___U3CU3E7__wrap2_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___U3CU3E7__wrap2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_5), (void*)value);
	}
};


// WebGLTransfer1155/<SafeTransferFrom>d__5
struct U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE 
{
public:
	// System.Int32 WebGLTransfer1155/<SafeTransferFrom>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebGLTransfer1155/<SafeTransferFrom>d__5::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebGLTransfer1155 WebGLTransfer1155/<SafeTransferFrom>d__5::<>4__this
	WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WebGLTransfer1155/<SafeTransferFrom>d__5::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE, ___U3CU3E4__this_2)); }
	inline WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebGLTransfer20/<Transfer>d__4
struct U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 
{
public:
	// System.Int32 WebGLTransfer20/<Transfer>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebGLTransfer20/<Transfer>d__4::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebGLTransfer20 WebGLTransfer20/<Transfer>d__4::<>4__this
	WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WebGLTransfer20/<Transfer>d__4::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779, ___U3CU3E4__this_2)); }
	inline WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebGLTransfer721/<SafeTransferFrom>d__4
struct U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA 
{
public:
	// System.Int32 WebGLTransfer721/<SafeTransferFrom>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebGLTransfer721/<SafeTransferFrom>d__4::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebGLTransfer721 WebGLTransfer721/<SafeTransferFrom>d__4::<>4__this
	WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WebGLTransfer721/<SafeTransferFrom>d__4::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA, ___U3CU3E4__this_2)); }
	inline WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebLogin/<OnConnected>d__6
struct U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A 
{
public:
	// System.Int32 WebLogin/<OnConnected>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebLogin/<OnConnected>d__6::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebLogin WebLogin/<OnConnected>d__6::<>4__this
	WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * ___U3CU3E4__this_2;
	// System.Object WebLogin/<OnConnected>d__6::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A, ___U3CU3E4__this_2)); }
	inline WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WebGLSendContractExample
struct WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WebGLSendTransactionExample
struct WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WebGLSha3Example
struct WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WebGLSignMessageExample
struct WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WebGLSignVerifyExample
struct WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String WebGLSignVerifyExample::message
	String_t* ___message_4;
	// UnityEngine.UI.Text WebGLSignVerifyExample::textHashedMessage
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textHashedMessage_5;
	// UnityEngine.UI.Text WebGLSignVerifyExample::textSignedHash
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textSignedHash_6;
	// UnityEngine.UI.Text WebGLSignVerifyExample::verifyAddress
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___verifyAddress_7;

public:
	inline static int32_t get_offset_of_message_4() { return static_cast<int32_t>(offsetof(WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932, ___message_4)); }
	inline String_t* get_message_4() const { return ___message_4; }
	inline String_t** get_address_of_message_4() { return &___message_4; }
	inline void set_message_4(String_t* value)
	{
		___message_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_4), (void*)value);
	}

	inline static int32_t get_offset_of_textHashedMessage_5() { return static_cast<int32_t>(offsetof(WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932, ___textHashedMessage_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textHashedMessage_5() const { return ___textHashedMessage_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textHashedMessage_5() { return &___textHashedMessage_5; }
	inline void set_textHashedMessage_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textHashedMessage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textHashedMessage_5), (void*)value);
	}

	inline static int32_t get_offset_of_textSignedHash_6() { return static_cast<int32_t>(offsetof(WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932, ___textSignedHash_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textSignedHash_6() const { return ___textSignedHash_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textSignedHash_6() { return &___textSignedHash_6; }
	inline void set_textSignedHash_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textSignedHash_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSignedHash_6), (void*)value);
	}

	inline static int32_t get_offset_of_verifyAddress_7() { return static_cast<int32_t>(offsetof(WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932, ___verifyAddress_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_verifyAddress_7() const { return ___verifyAddress_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_verifyAddress_7() { return &___verifyAddress_7; }
	inline void set_verifyAddress_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___verifyAddress_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verifyAddress_7), (void*)value);
	}
};


// WebGLTransfer1155
struct WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String WebGLTransfer1155::contract
	String_t* ___contract_4;
	// System.String WebGLTransfer1155::toAccount
	String_t* ___toAccount_5;
	// System.String WebGLTransfer1155::tokenId
	String_t* ___tokenId_6;
	// System.String WebGLTransfer1155::amount
	String_t* ___amount_7;
	// System.String WebGLTransfer1155::abi
	String_t* ___abi_8;

public:
	inline static int32_t get_offset_of_contract_4() { return static_cast<int32_t>(offsetof(WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80, ___contract_4)); }
	inline String_t* get_contract_4() const { return ___contract_4; }
	inline String_t** get_address_of_contract_4() { return &___contract_4; }
	inline void set_contract_4(String_t* value)
	{
		___contract_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contract_4), (void*)value);
	}

	inline static int32_t get_offset_of_toAccount_5() { return static_cast<int32_t>(offsetof(WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80, ___toAccount_5)); }
	inline String_t* get_toAccount_5() const { return ___toAccount_5; }
	inline String_t** get_address_of_toAccount_5() { return &___toAccount_5; }
	inline void set_toAccount_5(String_t* value)
	{
		___toAccount_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toAccount_5), (void*)value);
	}

	inline static int32_t get_offset_of_tokenId_6() { return static_cast<int32_t>(offsetof(WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80, ___tokenId_6)); }
	inline String_t* get_tokenId_6() const { return ___tokenId_6; }
	inline String_t** get_address_of_tokenId_6() { return &___tokenId_6; }
	inline void set_tokenId_6(String_t* value)
	{
		___tokenId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenId_6), (void*)value);
	}

	inline static int32_t get_offset_of_amount_7() { return static_cast<int32_t>(offsetof(WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80, ___amount_7)); }
	inline String_t* get_amount_7() const { return ___amount_7; }
	inline String_t** get_address_of_amount_7() { return &___amount_7; }
	inline void set_amount_7(String_t* value)
	{
		___amount_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amount_7), (void*)value);
	}

	inline static int32_t get_offset_of_abi_8() { return static_cast<int32_t>(offsetof(WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80, ___abi_8)); }
	inline String_t* get_abi_8() const { return ___abi_8; }
	inline String_t** get_address_of_abi_8() { return &___abi_8; }
	inline void set_abi_8(String_t* value)
	{
		___abi_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abi_8), (void*)value);
	}
};


// WebGLTransfer20
struct WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String WebGLTransfer20::contract
	String_t* ___contract_4;
	// System.String WebGLTransfer20::toAccount
	String_t* ___toAccount_5;
	// System.String WebGLTransfer20::amount
	String_t* ___amount_6;
	// System.String WebGLTransfer20::abi
	String_t* ___abi_7;

public:
	inline static int32_t get_offset_of_contract_4() { return static_cast<int32_t>(offsetof(WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A, ___contract_4)); }
	inline String_t* get_contract_4() const { return ___contract_4; }
	inline String_t** get_address_of_contract_4() { return &___contract_4; }
	inline void set_contract_4(String_t* value)
	{
		___contract_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contract_4), (void*)value);
	}

	inline static int32_t get_offset_of_toAccount_5() { return static_cast<int32_t>(offsetof(WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A, ___toAccount_5)); }
	inline String_t* get_toAccount_5() const { return ___toAccount_5; }
	inline String_t** get_address_of_toAccount_5() { return &___toAccount_5; }
	inline void set_toAccount_5(String_t* value)
	{
		___toAccount_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toAccount_5), (void*)value);
	}

	inline static int32_t get_offset_of_amount_6() { return static_cast<int32_t>(offsetof(WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A, ___amount_6)); }
	inline String_t* get_amount_6() const { return ___amount_6; }
	inline String_t** get_address_of_amount_6() { return &___amount_6; }
	inline void set_amount_6(String_t* value)
	{
		___amount_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amount_6), (void*)value);
	}

	inline static int32_t get_offset_of_abi_7() { return static_cast<int32_t>(offsetof(WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A, ___abi_7)); }
	inline String_t* get_abi_7() const { return ___abi_7; }
	inline String_t** get_address_of_abi_7() { return &___abi_7; }
	inline void set_abi_7(String_t* value)
	{
		___abi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abi_7), (void*)value);
	}
};


// WebGLTransfer721
struct WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String WebGLTransfer721::contract
	String_t* ___contract_4;
	// System.String WebGLTransfer721::toAccount
	String_t* ___toAccount_5;
	// System.String WebGLTransfer721::tokenId
	String_t* ___tokenId_6;
	// System.String WebGLTransfer721::abi
	String_t* ___abi_7;

public:
	inline static int32_t get_offset_of_contract_4() { return static_cast<int32_t>(offsetof(WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C, ___contract_4)); }
	inline String_t* get_contract_4() const { return ___contract_4; }
	inline String_t** get_address_of_contract_4() { return &___contract_4; }
	inline void set_contract_4(String_t* value)
	{
		___contract_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contract_4), (void*)value);
	}

	inline static int32_t get_offset_of_toAccount_5() { return static_cast<int32_t>(offsetof(WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C, ___toAccount_5)); }
	inline String_t* get_toAccount_5() const { return ___toAccount_5; }
	inline String_t** get_address_of_toAccount_5() { return &___toAccount_5; }
	inline void set_toAccount_5(String_t* value)
	{
		___toAccount_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toAccount_5), (void*)value);
	}

	inline static int32_t get_offset_of_tokenId_6() { return static_cast<int32_t>(offsetof(WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C, ___tokenId_6)); }
	inline String_t* get_tokenId_6() const { return ___tokenId_6; }
	inline String_t** get_address_of_tokenId_6() { return &___tokenId_6; }
	inline void set_tokenId_6(String_t* value)
	{
		___tokenId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenId_6), (void*)value);
	}

	inline static int32_t get_offset_of_abi_7() { return static_cast<int32_t>(offsetof(WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C, ___abi_7)); }
	inline String_t* get_abi_7() const { return ___abi_7; }
	inline String_t** get_address_of_abi_7() { return &___abi_7; }
	inline void set_abi_7(String_t* value)
	{
		___abi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abi_7), (void*)value);
	}
};


// WebLogin
struct WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 WebLogin::expirationTime
	int32_t ___expirationTime_4;
	// System.String WebLogin::account
	String_t* ___account_5;

public:
	inline static int32_t get_offset_of_expirationTime_4() { return static_cast<int32_t>(offsetof(WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD, ___expirationTime_4)); }
	inline int32_t get_expirationTime_4() const { return ___expirationTime_4; }
	inline int32_t* get_address_of_expirationTime_4() { return &___expirationTime_4; }
	inline void set_expirationTime_4(int32_t value)
	{
		___expirationTime_4 = value;
	}

	inline static int32_t get_offset_of_account_5() { return static_cast<int32_t>(offsetof(WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD, ___account_5)); }
	inline String_t* get_account_5() const { return ___account_5; }
	inline String_t** get_address_of_account_5() { return &___account_5; }
	inline void set_account_5(String_t* value)
	{
		___account_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___account_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Web3WalletTransfer20Example/<OnTransfer20>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m12FEAA3D8F29B0CB33DF24C484F3DDEF47BEC7B8_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Web3WalletTransfer721Example/<OnTransfer721>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m0F70CD90763FE95261338555C003FB2CDA6463A4_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WebGLSendContractExample/<OnSendContract>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C_m55A9828EE448F3C49B99F9FD5D0716762FCF86DE_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WebGLSendTransactionExample/<OnSendTransaction>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50_mECBE84E73C0E4A1F17440A0B17C60A62F259E337_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WebGLSha3Example/<OnHashMessage>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77_m524B21EC6B59AB51C91A2C48E61FCB716E6407EE_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WebGLSignMessageExample/<OnSignMessage>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A_m0FA76C61A2800926C3F9E79988EAD981898C4811_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WebGLSignVerifyExample/<OnHashMessage>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m1592B1E4CE7225E3522B9234853B46B8444C79AC_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WebGLTransfer1155/<SafeTransferFrom>d__5>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE_m712597561EC00E9FC3719B1DA6835487B2DE4AE0_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WebGLTransfer20/<Transfer>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779_m5A8DB1083A600D4F561D00E6B2935C09870C843B_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WebGLTransfer721/<SafeTransferFrom>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA_m4AFCE7EB623B3B68E6861976243C572A3BB5F659_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,WebLogin/<OnConnected>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A_m5FCBDD410D4AE6E8E3C1E5799D2072D1F053B3DE_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___awaiter0, U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A * ___stateMachine1, const RuntimeMethod* method);

// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mA1CE7826146AD4F03BAEC589ED87E3DB5C2182F0 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> EVM::CreateContractData(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * EVM_CreateContractData_m0A69CC06452FBB76AC259D74C32CCC81DBC02A92 (String_t* ____abi0, String_t* ____method1, String_t* ____args2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Web3WalletTransfer20Example/<OnTransfer20>d__0>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m91025E3138D9254B4F78785609356606668BD0F3 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m12FEAA3D8F29B0CB33DF24C484F3DDEF47BEC7B8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Web3Wallet::SendTransaction(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Web3Wallet_SendTransaction_mF2426B50D053EF9F8A0D3A6BD8C5A054015D3510 (String_t* ____chainId0, String_t* ____to1, String_t* ____value2, String_t* ____data3, String_t* ____gasLimit4, String_t* ____gasPrice5, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Web3WalletTransfer20Example/<OnTransfer20>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTransfer20U3Ed__0_MoveNext_mAC06EED0D1221620A17D9BE470EA8130592D27BE (U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Web3WalletTransfer20Example/<OnTransfer20>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTransfer20U3Ed__0_SetStateMachine_mF8F73F2742E7641DF16BA8DAD19AB3A74142E61C (U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Web3WalletTransfer721Example/<OnTransfer721>d__0>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m22933548B77ECFD0EB1D5B7226C2B566DFF168EA (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m0F70CD90763FE95261338555C003FB2CDA6463A4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Web3WalletTransfer721Example/<OnTransfer721>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTransfer721U3Ed__0_MoveNext_m8C1BB1B0A36207ABDD5BB95E54BEA6EE2265F07F (U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC * __this, const RuntimeMethod* method);
// System.Void Web3WalletTransfer721Example/<OnTransfer721>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTransfer721U3Ed__0_SetStateMachine_mF885565CD1B11CCD1E3057612D11154B7629129D (U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Web3GL::SendContract(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Web3GL_SendContract_m6675BF158272EAC923D284D5CC10C7F09558E173 (String_t* ____method0, String_t* ____abi1, String_t* ____contract2, String_t* ____args3, String_t* ____value4, String_t* ____gasLimit5, String_t* ____gasPrice6, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WebGLSendContractExample/<OnSendContract>d__0>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C_mC97B1AE3054543A0D6E7AFFA65A1F44B56918EF2 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C_m55A9828EE448F3C49B99F9FD5D0716762FCF86DE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B (Exception_t * ___exception0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void WebGLSendContractExample/<OnSendContract>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSendContractU3Ed__0_MoveNext_m87D0E94C972176E1F9AEA97BCEFD7CBBF79BB814 (U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C * __this, const RuntimeMethod* method);
// System.Void WebGLSendContractExample/<OnSendContract>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSendContractU3Ed__0_SetStateMachine_m7A097F8F1BB131B8A785D2F22D1D28D7527646EA (U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Web3GL::SendTransaction(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Web3GL_SendTransaction_mD40DBCA64188F5159A42BE864CA19D5B61C7F5D9 (String_t* ____to0, String_t* ____value1, String_t* ____gasLimit2, String_t* ____gasPrice3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WebGLSendTransactionExample/<OnSendTransaction>d__0>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50_mFE0FBC4A31F8E0BF36066D4952AB29FAB99C3AF4 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50_mECBE84E73C0E4A1F17440A0B17C60A62F259E337_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebGLSendTransactionExample/<OnSendTransaction>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSendTransactionU3Ed__0_MoveNext_mC7CE9060F43BA816093410666933E4EBB204561B (U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 * __this, const RuntimeMethod* method);
// System.Void WebGLSendTransactionExample/<OnSendTransaction>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSendTransactionU3Ed__0_SetStateMachine_mC12443C49C60F7DCAA5CDA5E716B32E16BD74723 (U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Web3GL::Sha3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Web3GL_Sha3_m6B7A92EF3D8E24D478C97BB1D742449866F03A8E (String_t* ____message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WebGLSha3Example/<OnHashMessage>d__0>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77_m69D273CC119F212C5BE1B4E8A45B30344A59A3DD (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77_m524B21EC6B59AB51C91A2C48E61FCB716E6407EE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void WebGLSha3Example/<OnHashMessage>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHashMessageU3Ed__0_MoveNext_m01CA5F8741ACCAEA6035C842210538028A9FCE03 (U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 * __this, const RuntimeMethod* method);
// System.Void WebGLSha3Example/<OnHashMessage>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHashMessageU3Ed__0_SetStateMachine_mE0363E4EC0FF531DDDEF4A511EFFB96E9DC3790B (U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Web3GL::Sign(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Web3GL_Sign_mFEAE31488340360AB008F8E3FAE799D1E10871C7 (String_t* ____message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WebGLSignMessageExample/<OnSignMessage>d__0>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A_m679F3C10BF08D62E160C2E6BACCC666EDB8D5A86 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A_m0FA76C61A2800926C3F9E79988EAD981898C4811_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebGLSignMessageExample/<OnSignMessage>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSignMessageU3Ed__0_MoveNext_m3057F7982AC1CB0EDD2664D8ED6B7E5AC4ADE2A1 (U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A * __this, const RuntimeMethod* method);
// System.Void WebGLSignMessageExample/<OnSignMessage>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSignMessageU3Ed__0_SetStateMachine_m3F0DC2AEF8F20669EFA57A92C67E1F9A5F4B6802 (U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WebGLSignVerifyExample/<OnHashMessage>d__4>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m1592B1E4CE7225E3522B9234853B46B8444C79AC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebGLSignVerifyExample::ParseSignatureFunction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLSignVerifyExample_ParseSignatureFunction_m7AE274B2FD8E85BF9D537192DF68C4F30FD496A4 (WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * __this, String_t* ___sig0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> EVM::Verify(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * EVM_Verify_mA8C92E16EF841C6356A849C6E29765534B0EA2CB (String_t* ____message0, String_t* ____signature1, const RuntimeMethod* method);
// System.Void WebGLSignVerifyExample/<OnHashMessage>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHashMessageU3Ed__4_MoveNext_mC613B02A00E698EDED0256CA3D62D43FC7FA530F (U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 * __this, const RuntimeMethod* method);
// System.Void WebGLSignVerifyExample/<OnHashMessage>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHashMessageU3Ed__4_SetStateMachine_mDFED69975911F7409E2A60A6CB0198532B9CB5ED (U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WebGLTransfer1155/<SafeTransferFrom>d__5>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE_mB874E3AF62B6096C3775FA89F2F57B4CF781B4FB (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE_m712597561EC00E9FC3719B1DA6835487B2DE4AE0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebGLTransfer1155/<SafeTransferFrom>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSafeTransferFromU3Ed__5_MoveNext_m64353C3BCC55943924533B82580063995694E676 (U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE * __this, const RuntimeMethod* method);
// System.Void WebGLTransfer1155/<SafeTransferFrom>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSafeTransferFromU3Ed__5_SetStateMachine_m357DFCF039FEA8B6C3395C25DFC5753549AD9156 (U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WebGLTransfer20/<Transfer>d__4>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779_mC376024971D8305D3347A67A5D3573D669D36149 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779_m5A8DB1083A600D4F561D00E6B2935C09870C843B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebGLTransfer20/<Transfer>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransferU3Ed__4_MoveNext_m5655C8D900D8FDBA8EF1BB4A1111791D22525BFD (U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 * __this, const RuntimeMethod* method);
// System.Void WebGLTransfer20/<Transfer>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransferU3Ed__4_SetStateMachine_mA32D0A2CF0FC0E65AD5EA5081D9B5860C23936DE (U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WebGLTransfer721/<SafeTransferFrom>d__4>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA_m37BD14A687B5008E4425305FBA551F4DBFBC71B2 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA_m4AFCE7EB623B3B68E6861976243C572A3BB5F659_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebGLTransfer721/<SafeTransferFrom>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSafeTransferFromU3Ed__4_MoveNext_m967807132732773C90E46AD493832B9237EA807B (U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA * __this, const RuntimeMethod* method);
// System.Void WebGLTransfer721/<SafeTransferFrom>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSafeTransferFromU3Ed__4_SetStateMachine_m72420EB4DE07C850B47609F4910E992BFAA0CC10 (U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.String WebLogin::ConnectAccount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebLogin_ConnectAccount_mC1E264919C9BEB95A48D4B2F73CF6AE68BE907E7 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter IEnumeratorAwaitExtensions::GetAwaiter(UnityEngine.WaitForSeconds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * IEnumeratorAwaitExtensions_GetAwaiter_mCF15394B4340D38A6E1868DFEA2BE686CD3E69DA (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___instruction0, const RuntimeMethod* method);
// System.Boolean IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mDA7B7280FCDDED248719D8DC7F5C6167B8624A5A_inline (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter,WebLogin/<OnConnected>d__6>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_TisU3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A_m520B6A556BCA0973EC165BC771BDEC0582EA3872 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 ** ___awaiter0, U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 **, U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A_m5FCBDD410D4AE6E8E3C1E5799D2072D1F053B3DE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_mD72737AB448D1C1A8B51E1037389CBE22E0861FA (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void WebLogin::SetConnectAccount(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebLogin_SetConnectAccount_mFB37E0B21EC829A9BD04821AFD16E75F3522353A (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void WebLogin/<OnConnected>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnConnectedU3Ed__6_MoveNext_m01EC6E60475A256640C35990CAD5131C04AB747D (U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A * __this, const RuntimeMethod* method);
// System.Void WebLogin/<OnConnected>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnConnectedU3Ed__6_SetStateMachine_mCDC0D60876FA7F6803612569D8BCB444418EC9D9 (U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Web3WalletTransfer20Example/<OnTransfer20>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTransfer20U3Ed__0_MoveNext_mAC06EED0D1221620A17D9BE470EA8130592D27BE (U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m91025E3138D9254B4F78785609356606668BD0F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVM_t4CB9F43860ADE16A97838AAEA17067F24EB140AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Web3Wallet_t981201C98C5E889969444984CC19BAF5B46A4913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral828B708B9697B1A49614B3D3B963BBD58373077D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96389B1D5463382BD4CB534955DA480A2DED07DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8023DFB4F5200FC44AAB47FFF63A6F372E1B6D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDD6ACC6C06C82120317BC17D98F0A059ED05229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00a1;
			}
		}

IL_000d:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0126;
			}
		}

IL_0014:
		{
			// string chainId = "5"; // goerli
			__this->set_U3CchainIdU3E5__2_2(_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
			// string contract = "0xc778417e063141139fce010982780140aa0cd5ab";
			__this->set_U3CcontractU3E5__3_3(_stringLiteral96389B1D5463382BD4CB534955DA480A2DED07DA);
			// string value = "0";
			__this->set_U3CvalueU3E5__4_4(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
			// string abi = "[ { \"inputs\": [ { \"internalType\": \"string\", \"name\": \"name_\", \"type\": \"string\" }, { \"internalType\": \"string\", \"name\": \"symbol_\", \"type\": \"string\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"constructor\" }, { \"anonymous\": false, \"inputs\": [ { \"indexed\": true, \"internalType\": \"address\", \"name\": \"owner\", \"type\": \"address\" }, { \"indexed\": true, \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"indexed\": false, \"internalType\": \"uint256\", \"name\": \"value\", \"type\": \"uint256\" } ], \"name\": \"Approval\", \"type\": \"event\" }, { \"anonymous\": false, \"inputs\": [ { \"indexed\": true, \"internalType\": \"address\", \"name\": \"from\", \"type\": \"address\" }, { \"indexed\": true, \"internalType\": \"address\", \"name\": \"to\", \"type\": \"address\" }, { \"indexed\": false, \"internalType\": \"uint256\", \"name\": \"value\", \"type\": \"uint256\" } ], \"name\": \"Transfer\", \"type\": \"event\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"owner\", \"type\": \"address\" }, { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" } ], \"name\": \"allowance\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"approve\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"account\", \"type\": \"address\" } ], \"name\": \"balanceOf\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"decimals\", \"outputs\": [ { \"internalType\": \"uint8\", \"name\": \"\", \"type\": \"uint8\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"subtractedValue\", \"type\": \"uint256\" } ], \"name\": \"decreaseAllowance\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"spender\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"addedValue\", \"type\": \"uint256\" } ], \"name\": \"increaseAllowance\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"name\", \"outputs\": [ { \"internalType\": \"string\", \"name\": \"\", \"type\": \"string\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"symbol\", \"outputs\": [ { \"internalType\": \"string\", \"name\": \"\", \"type\": \"string\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"totalSupply\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"recipient\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"transfer\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [ { \"internalType\": \"address\", \"name\": \"sender\", \"type\": \"address\" }, { \"internalType\": \"address\", \"name\": \"recipient\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"amount\", \"type\": \"uint256\" } ], \"name\": \"transferFrom\", \"outputs\": [ { \"internalType\": \"bool\", \"name\": \"\", \"type\": \"bool\" } ], \"stateMutability\": \"nonpayable\", \"type\": \"function\" } ]";
			V_1 = _stringLiteral828B708B9697B1A49614B3D3B963BBD58373077D;
			// string method = "transfer";
			V_2 = _stringLiteralEDD6ACC6C06C82120317BC17D98F0A059ED05229;
			// string toAccount = "0xdD4c825203f97984e7867F11eeCc813A036089D1";
			V_3 = _stringLiteralC8023DFB4F5200FC44AAB47FFF63A6F372E1B6D3;
			// string amount = "1000000000000000";
			V_4 = _stringLiteralBB012E8AECF9960218AEA1A96AFE93090316B3B1;
			// string[] obj = {toAccount, amount};
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
			String_t* L_5 = V_3;
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
			String_t* L_7 = V_4;
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
			// string args = JsonConvert.SerializeObject(obj);
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
			String_t* L_8;
			L_8 = JsonConvert_SerializeObject_mA1CE7826146AD4F03BAEC589ED87E3DB5C2182F0((RuntimeObject *)(RuntimeObject *)L_6, /*hidden argument*/NULL);
			V_5 = L_8;
			// string data = await EVM.CreateContractData(abi, method, args);
			String_t* L_9 = V_1;
			String_t* L_10 = V_2;
			String_t* L_11 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(EVM_t4CB9F43860ADE16A97838AAEA17067F24EB140AF_il2cpp_TypeInfo_var);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_12;
			L_12 = EVM_CreateContractData_m0A69CC06452FBB76AC259D74C32CCC81DBC02A92(L_9, L_10, L_11, /*hidden argument*/NULL);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_13;
			L_13 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_12, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_9 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_00be;
			}
		}

IL_007d:
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_16 = V_9;
			__this->set_U3CU3Eu__1_5(L_16);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m91025E3138D9254B4F78785609356606668BD0F3((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), (U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m91025E3138D9254B4F78785609356606668BD0F3_RuntimeMethod_var);
			goto IL_01a7;
		}

IL_00a1:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_18 = __this->get_U3CU3Eu__1_5();
			V_9 = L_18;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_19 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
		}

IL_00be:
		{
			String_t* L_21;
			L_21 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			V_6 = L_21;
			// string gasLimit = "";
			V_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string gasPrice = "";
			V_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string response = await Web3Wallet.SendTransaction(chainId, contract, value, data, gasLimit, gasPrice);
			String_t* L_22 = __this->get_U3CchainIdU3E5__2_2();
			String_t* L_23 = __this->get_U3CcontractU3E5__3_3();
			String_t* L_24 = __this->get_U3CvalueU3E5__4_4();
			String_t* L_25 = V_6;
			String_t* L_26 = V_7;
			String_t* L_27 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(Web3Wallet_t981201C98C5E889969444984CC19BAF5B46A4913_il2cpp_TypeInfo_var);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_28;
			L_28 = Web3Wallet_SendTransaction_mF2426B50D053EF9F8A0D3A6BD8C5A054015D3510(L_22, L_23, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_29;
			L_29 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_28, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_9 = L_29;
			bool L_30;
			L_30 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_0143;
			}
		}

IL_0102:
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			__this->set_U3CU3E1__state_0(L_31);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_32 = V_9;
			__this->set_U3CU3Eu__1_5(L_32);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m91025E3138D9254B4F78785609356606668BD0F3((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_33, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), (U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4_m91025E3138D9254B4F78785609356606668BD0F3_RuntimeMethod_var);
			goto IL_01a7;
		}

IL_0126:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_34 = __this->get_U3CU3Eu__1_5();
			V_9 = L_34;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_35 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_36 = (-1);
			V_0 = L_36;
			__this->set_U3CU3E1__state_0(L_36);
		}

IL_0143:
		{
			String_t* L_37;
			L_37 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			// print(response);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_37, /*hidden argument*/NULL);
			goto IL_017f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0151;
		}
		throw e;
	}

CATCH_0151:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CchainIdU3E5__2_2((String_t*)NULL);
		__this->set_U3CcontractU3E5__3_3((String_t*)NULL);
		__this->set_U3CvalueU3E5__4_4((String_t*)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_38 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_39 = V_10;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_38, L_39, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01a7;
	} // end catch (depth: 1)

IL_017f:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CchainIdU3E5__2_2((String_t*)NULL);
		__this->set_U3CcontractU3E5__3_3((String_t*)NULL);
		__this->set_U3CvalueU3E5__4_4((String_t*)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_40, /*hidden argument*/NULL);
	}

IL_01a7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnTransfer20U3Ed__0_MoveNext_mAC06EED0D1221620A17D9BE470EA8130592D27BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 * _thisAdjusted = reinterpret_cast<U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 *>(__this + _offset);
	U3COnTransfer20U3Ed__0_MoveNext_mAC06EED0D1221620A17D9BE470EA8130592D27BE(_thisAdjusted, method);
}
// System.Void Web3WalletTransfer20Example/<OnTransfer20>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTransfer20U3Ed__0_SetStateMachine_mF8F73F2742E7641DF16BA8DAD19AB3A74142E61C (U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnTransfer20U3Ed__0_SetStateMachine_mF8F73F2742E7641DF16BA8DAD19AB3A74142E61C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 * _thisAdjusted = reinterpret_cast<U3COnTransfer20U3Ed__0_t3CD34BBD71FF80DD78C25D0FE992ED9D1353E8F4 *>(__this + _offset);
	U3COnTransfer20U3Ed__0_SetStateMachine_mF8F73F2742E7641DF16BA8DAD19AB3A74142E61C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Web3WalletTransfer721Example/<OnTransfer721>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTransfer721U3Ed__0_MoveNext_m8C1BB1B0A36207ABDD5BB95E54BEA6EE2265F07F (U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m22933548B77ECFD0EB1D5B7226C2B566DFF168EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVM_t4CB9F43860ADE16A97838AAEA17067F24EB140AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Web3Wallet_t981201C98C5E889969444984CC19BAF5B46A4913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DC9DA7C4C8D3F2DB2AF22304EB328E3CCA01DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59FE0EDF5091FB867FDC25EA5C56BB4D4CA603DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE865D3786611B98296355880B32DEA9941EBBC20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00b3;
			}
		}

IL_000d:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_013f;
			}
		}

IL_0014:
		{
			// string chainId = "5"; // goerli
			__this->set_U3CchainIdU3E5__2_2(_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
			// string contract = "0xde458cd3deaa28ce67beefe3f45368c875b3ffd6";
			__this->set_U3CcontractU3E5__3_3(_stringLiteral59FE0EDF5091FB867FDC25EA5C56BB4D4CA603DE);
			// string value = "0";
			__this->set_U3CvalueU3E5__4_4(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
			// string abi = "[{ \"inputs\": [ { \"internalType\": \"address\", \"name\": \"from\", \"type\": \"address\" }, { \"internalType\": \"address\", \"name\": \"to\", \"type\": \"address\" }, { \"internalType\": \"uint256\", \"name\": \"tokenId\", \"type\": \"uint256\" } ], \"name\": \"safeTransferFrom\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }]";
			V_1 = _stringLiteralE865D3786611B98296355880B32DEA9941EBBC20;
			// string method = "safeTransferFrom";
			V_2 = _stringLiteral34DC9DA7C4C8D3F2DB2AF22304EB328E3CCA01DE;
			// string toAccount = PlayerPrefs.GetString("Account");
			String_t* L_3;
			L_3 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A, /*hidden argument*/NULL);
			V_3 = L_3;
			// string tokenId = "5";
			V_4 = _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
			// string[] obj = { PlayerPrefs.GetString("Account"), toAccount, tokenId };
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
			String_t* L_6;
			L_6 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_5, L_6);
			(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
			String_t* L_8 = V_3;
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
			String_t* L_10 = V_4;
			ArrayElementTypeCheck (L_9, L_10);
			(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
			// string args = JsonConvert.SerializeObject(obj);
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
			String_t* L_11;
			L_11 = JsonConvert_SerializeObject_mA1CE7826146AD4F03BAEC589ED87E3DB5C2182F0((RuntimeObject *)(RuntimeObject *)L_9, /*hidden argument*/NULL);
			V_5 = L_11;
			// string data = await EVM.CreateContractData(abi, method, args);
			String_t* L_12 = V_1;
			String_t* L_13 = V_2;
			String_t* L_14 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(EVM_t4CB9F43860ADE16A97838AAEA17067F24EB140AF_il2cpp_TypeInfo_var);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_15;
			L_15 = EVM_CreateContractData_m0A69CC06452FBB76AC259D74C32CCC81DBC02A92(L_12, L_13, L_14, /*hidden argument*/NULL);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_16;
			L_16 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_15, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_9 = L_16;
			bool L_17;
			L_17 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_00d0;
			}
		}

IL_008f:
		{
			int32_t L_18 = 0;
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_19 = V_9;
			__this->set_U3CU3Eu__1_5(L_19);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m22933548B77ECFD0EB1D5B7226C2B566DFF168EA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_20, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), (U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m22933548B77ECFD0EB1D5B7226C2B566DFF168EA_RuntimeMethod_var);
			goto IL_01c0;
		}

IL_00b3:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_21 = __this->get_U3CU3Eu__1_5();
			V_9 = L_21;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_22 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_22, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_23 = (-1);
			V_0 = L_23;
			__this->set_U3CU3E1__state_0(L_23);
		}

IL_00d0:
		{
			String_t* L_24;
			L_24 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			V_6 = L_24;
			// print(data);
			String_t* L_25 = V_6;
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_25, /*hidden argument*/NULL);
			// string gasLimit = "";
			V_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string gasPrice = "";
			V_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string response = await Web3Wallet.SendTransaction(chainId, contract, value, data, gasLimit, gasPrice);
			String_t* L_26 = __this->get_U3CchainIdU3E5__2_2();
			String_t* L_27 = __this->get_U3CcontractU3E5__3_3();
			String_t* L_28 = __this->get_U3CvalueU3E5__4_4();
			String_t* L_29 = V_6;
			String_t* L_30 = V_7;
			String_t* L_31 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(Web3Wallet_t981201C98C5E889969444984CC19BAF5B46A4913_il2cpp_TypeInfo_var);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_32;
			L_32 = Web3Wallet_SendTransaction_mF2426B50D053EF9F8A0D3A6BD8C5A054015D3510(L_26, L_27, L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_33;
			L_33 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_32, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_9 = L_33;
			bool L_34;
			L_34 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_015c;
			}
		}

IL_011b:
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			__this->set_U3CU3E1__state_0(L_35);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_36 = V_9;
			__this->set_U3CU3Eu__1_5(L_36);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_37 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m22933548B77ECFD0EB1D5B7226C2B566DFF168EA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_37, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), (U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC_m22933548B77ECFD0EB1D5B7226C2B566DFF168EA_RuntimeMethod_var);
			goto IL_01c0;
		}

IL_013f:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_38 = __this->get_U3CU3Eu__1_5();
			V_9 = L_38;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_39 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_39, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->set_U3CU3E1__state_0(L_40);
		}

IL_015c:
		{
			String_t* L_41;
			L_41 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			// print(response);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_41, /*hidden argument*/NULL);
			goto IL_0198;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_016a;
		}
		throw e;
	}

CATCH_016a:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CchainIdU3E5__2_2((String_t*)NULL);
		__this->set_U3CcontractU3E5__3_3((String_t*)NULL);
		__this->set_U3CvalueU3E5__4_4((String_t*)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_42 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_43 = V_10;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c0;
	} // end catch (depth: 1)

IL_0198:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CchainIdU3E5__2_2((String_t*)NULL);
		__this->set_U3CcontractU3E5__3_3((String_t*)NULL);
		__this->set_U3CvalueU3E5__4_4((String_t*)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_44 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_44, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnTransfer721U3Ed__0_MoveNext_m8C1BB1B0A36207ABDD5BB95E54BEA6EE2265F07F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC * _thisAdjusted = reinterpret_cast<U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC *>(__this + _offset);
	U3COnTransfer721U3Ed__0_MoveNext_m8C1BB1B0A36207ABDD5BB95E54BEA6EE2265F07F(_thisAdjusted, method);
}
// System.Void Web3WalletTransfer721Example/<OnTransfer721>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTransfer721U3Ed__0_SetStateMachine_mF885565CD1B11CCD1E3057612D11154B7629129D (U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnTransfer721U3Ed__0_SetStateMachine_mF885565CD1B11CCD1E3057612D11154B7629129D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC * _thisAdjusted = reinterpret_cast<U3COnTransfer721U3Ed__0_t19C7B441C34CB2F433CAD229877558815977CDCC *>(__this + _offset);
	U3COnTransfer721U3Ed__0_SetStateMachine_mF885565CD1B11CCD1E3057612D11154B7629129D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebGLSendContractExample/<OnSendContract>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSendContractU3Ed__0_MoveNext_m87D0E94C972176E1F9AEA97BCEFD7CBBF79BB814 (U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C_mC97B1AE3054543A0D6E7AFFA65A1F44B56918EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54EEFB97193BEF7C9DA19DA9BB24C0896A0F3EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B448933ECD7F81BA8820B771D2B5337743DA91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral858F39BFA83669BE8E5841AB7D3F3FD9144FE821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF62FBD3D90AFCA4A0EEFB679E9E0650202BC39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0040;
			}
		}

IL_0011:
		{
			// string method = "addTotal";
			V_2 = _stringLiteral79B448933ECD7F81BA8820B771D2B5337743DA91;
			// string abi = "[ { \"inputs\": [ { \"internalType\": \"uint8\", \"name\": \"_myArg\", \"type\": \"uint8\" } ], \"name\": \"addTotal\", \"outputs\": [], \"stateMutability\": \"nonpayable\", \"type\": \"function\" }, { \"inputs\": [], \"name\": \"myTotal\", \"outputs\": [ { \"internalType\": \"uint256\", \"name\": \"\", \"type\": \"uint256\" } ], \"stateMutability\": \"view\", \"type\": \"function\" } ]";
			V_3 = _stringLiteral54EEFB97193BEF7C9DA19DA9BB24C0896A0F3EA5;
			// string contract = "0x7286Cf0F6E80014ea75Dbc25F545A3be90F4904F";
			V_4 = _stringLiteral858F39BFA83669BE8E5841AB7D3F3FD9144FE821;
			// string args = "[\"1\"]";
			V_5 = _stringLiteralEEF62FBD3D90AFCA4A0EEFB679E9E0650202BC39;
			// string value = "0";
			V_6 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			// string gasLimit = "";
			V_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string gasPrice = "";
			V_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		}

IL_0040:
		{
		}

IL_0041:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0086;
				}
			}

IL_0044:
			{
				// string response = await Web3GL.SendContract(method, abi, contract, args, value, gasLimit, gasPrice);
				String_t* L_4 = V_2;
				String_t* L_5 = V_3;
				String_t* L_6 = V_4;
				String_t* L_7 = V_5;
				String_t* L_8 = V_6;
				String_t* L_9 = V_7;
				String_t* L_10 = V_8;
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_11;
				L_11 = Web3GL_SendContract_m6675BF158272EAC923D284D5CC10C7F09558E173(L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_12;
				L_12 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_11, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_9 = L_12;
				bool L_13;
				L_13 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00a3;
				}
			}

IL_0065:
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_15 = V_9;
				__this->set_U3CU3Eu__1_3(L_15);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C_mC97B1AE3054543A0D6E7AFFA65A1F44B56918EF2((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), (U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C_mC97B1AE3054543A0D6E7AFFA65A1F44B56918EF2_RuntimeMethod_var);
				goto IL_00e7;
			}

IL_0086:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_17 = __this->get_U3CU3Eu__1_3();
				V_9 = L_17;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_18 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
			}

IL_00a3:
			{
				String_t* L_20;
				L_20 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				// Debug.Log(response);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
				// } catch (Exception e) {
				goto IL_00b9;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00b1;
			}
			throw e;
		}

CATCH_00b1:
		{ // begin catch(System.Exception)
			// Debug.LogException(e, this);
			WebGLSendContractExample_t69A3686A5C09CD04184278A40805D54481117CFB * L_21 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), L_21, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00b9;
		} // end catch (depth: 2)

IL_00b9:
		{
			goto IL_00d4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bb;
		}
		throw e;
	}

CATCH_00bb:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_23 = V_10;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e7;
	} // end catch (depth: 1)

IL_00d4:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_24, /*hidden argument*/NULL);
	}

IL_00e7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnSendContractU3Ed__0_MoveNext_m87D0E94C972176E1F9AEA97BCEFD7CBBF79BB814_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C * _thisAdjusted = reinterpret_cast<U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C *>(__this + _offset);
	U3COnSendContractU3Ed__0_MoveNext_m87D0E94C972176E1F9AEA97BCEFD7CBBF79BB814(_thisAdjusted, method);
}
// System.Void WebGLSendContractExample/<OnSendContract>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSendContractU3Ed__0_SetStateMachine_m7A097F8F1BB131B8A785D2F22D1D28D7527646EA (U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnSendContractU3Ed__0_SetStateMachine_m7A097F8F1BB131B8A785D2F22D1D28D7527646EA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C * _thisAdjusted = reinterpret_cast<U3COnSendContractU3Ed__0_t15F35AD460E7321938C2FD75A065307A93876F9C *>(__this + _offset);
	U3COnSendContractU3Ed__0_SetStateMachine_m7A097F8F1BB131B8A785D2F22D1D28D7527646EA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebGLSendTransactionExample/<OnSendTransaction>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSendTransactionU3Ed__0_MoveNext_mC7CE9060F43BA816093410666933E4EBB204561B (U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50_mFE0FBC4A31F8E0BF36066D4952AB29FAB99C3AF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B7DAC07514FCE815EF8D7FDCE1FAAC769DC0664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81DB7BE166C465D5A9B10E99A68F7C98BCC38AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_002b;
			}
		}

IL_0011:
		{
			// string to = "0x428066dd8A212104Bc9240dCe3cdeA3D3A0f7979";
			V_2 = _stringLiteral81DB7BE166C465D5A9B10E99A68F7C98BCC38AC7;
			// string value = "12300000000000000";
			V_3 = _stringLiteral0B7DAC07514FCE815EF8D7FDCE1FAAC769DC0664;
			// string gasLimit = "";
			V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string gasPrice = "";
			V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		}

IL_002b:
		{
		}

IL_002c:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_006b;
				}
			}

IL_002f:
			{
				// string response = await Web3GL.SendTransaction(to, value, gasLimit, gasPrice);
				String_t* L_4 = V_2;
				String_t* L_5 = V_3;
				String_t* L_6 = V_4;
				String_t* L_7 = V_5;
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_8;
				L_8 = Web3GL_SendTransaction_mD40DBCA64188F5159A42BE864CA19D5B61C7F5D9(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_9;
				L_9 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_8, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_6 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0088;
				}
			}

IL_004a:
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_12 = V_6;
				__this->set_U3CU3Eu__1_3(L_12);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50_mFE0FBC4A31F8E0BF36066D4952AB29FAB99C3AF4((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_6), (U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50_mFE0FBC4A31F8E0BF36066D4952AB29FAB99C3AF4_RuntimeMethod_var);
				goto IL_00cc;
			}

IL_006b:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_14 = __this->get_U3CU3Eu__1_3();
				V_6 = L_14;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_15 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
			}

IL_0088:
			{
				String_t* L_17;
				L_17 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				// Debug.Log(response);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
				// } catch (Exception e) {
				goto IL_009e;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0096;
			}
			throw e;
		}

CATCH_0096:
		{ // begin catch(System.Exception)
			// Debug.LogException(e, this);
			WebGLSendTransactionExample_tEDB304B208287C836BD9E41249EF21CEE555B62E * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), L_18, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_009e;
		} // end catch (depth: 2)

IL_009e:
		{
			goto IL_00b9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a0;
		}
		throw e;
	}

CATCH_00a0:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_7;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cc;
	} // end catch (depth: 1)

IL_00b9:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnSendTransactionU3Ed__0_MoveNext_mC7CE9060F43BA816093410666933E4EBB204561B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 * _thisAdjusted = reinterpret_cast<U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 *>(__this + _offset);
	U3COnSendTransactionU3Ed__0_MoveNext_mC7CE9060F43BA816093410666933E4EBB204561B(_thisAdjusted, method);
}
// System.Void WebGLSendTransactionExample/<OnSendTransaction>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSendTransactionU3Ed__0_SetStateMachine_mC12443C49C60F7DCAA5CDA5E716B32E16BD74723 (U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnSendTransactionU3Ed__0_SetStateMachine_mC12443C49C60F7DCAA5CDA5E716B32E16BD74723_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 * _thisAdjusted = reinterpret_cast<U3COnSendTransactionU3Ed__0_t2A7D6CDF5773E00BAEA1859E778C6BC14638EA50 *>(__this + _offset);
	U3COnSendTransactionU3Ed__0_SetStateMachine_mC12443C49C60F7DCAA5CDA5E716B32E16BD74723(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebGLSha3Example/<OnHashMessage>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHashMessageU3Ed__0_MoveNext_m01CA5F8741ACCAEA6035C842210538028A9FCE03 (U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77_m69D273CC119F212C5BE1B4E8A45B30344A59A3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038805BF2AC07717601BA1C0667AE15F858ECAC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D795FBD58CC7592D955A219374339A323801A9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78 * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_004d;
				}
			}

IL_0014:
			{
				// string message = "hello";
				// string hashedMessage = await Web3GL.Sha3(message);
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_4;
				L_4 = Web3GL_Sha3_m6B7A92EF3D8E24D478C97BB1D742449866F03A8E(_stringLiteralB6D795FBD58CC7592D955A219374339A323801A9, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_5;
				L_5 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_4, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_3 = L_5;
				bool L_6;
				L_6 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0069;
				}
			}

IL_002d:
			{
				int32_t L_7 = 0;
				V_0 = L_7;
				__this->set_U3CU3E1__state_0(L_7);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_8 = V_3;
				__this->set_U3CU3Eu__1_3(L_8);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77_m69D273CC119F212C5BE1B4E8A45B30344A59A3DD((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_9, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), (U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77_m69D273CC119F212C5BE1B4E8A45B30344A59A3DD_RuntimeMethod_var);
				goto IL_00b9;
			}

IL_004d:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_10 = __this->get_U3CU3Eu__1_3();
				V_3 = L_10;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_11 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_12 = (-1);
				V_0 = L_12;
				__this->set_U3CU3E1__state_0(L_12);
			}

IL_0069:
			{
				String_t* L_13;
				L_13 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				V_2 = L_13;
				// Debug.Log("Hashed Message :" + hashedMessage);
				String_t* L_14 = V_2;
				String_t* L_15;
				L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral038805BF2AC07717601BA1C0667AE15F858ECAC4, L_14, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
				// }
				goto IL_008b;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0083;
			}
			throw e;
		}

CATCH_0083:
		{ // begin catch(System.Exception)
			// Debug.LogException(e, this);
			WebGLSha3Example_tD8A513FFC034C03988CFD48616F976B7883D4E78 * L_16 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), L_16, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_008b;
		} // end catch (depth: 2)

IL_008b:
		{
			goto IL_00a6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008d;
		}
		throw e;
	}

CATCH_008d:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b9;
	} // end catch (depth: 1)

IL_00a6:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnHashMessageU3Ed__0_MoveNext_m01CA5F8741ACCAEA6035C842210538028A9FCE03_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 * _thisAdjusted = reinterpret_cast<U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 *>(__this + _offset);
	U3COnHashMessageU3Ed__0_MoveNext_m01CA5F8741ACCAEA6035C842210538028A9FCE03(_thisAdjusted, method);
}
// System.Void WebGLSha3Example/<OnHashMessage>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHashMessageU3Ed__0_SetStateMachine_mE0363E4EC0FF531DDDEF4A511EFFB96E9DC3790B (U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnHashMessageU3Ed__0_SetStateMachine_mE0363E4EC0FF531DDDEF4A511EFFB96E9DC3790B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 * _thisAdjusted = reinterpret_cast<U3COnHashMessageU3Ed__0_tD8613649BEC9714BBDADA10EA1B2FBB7521F0C77 *>(__this + _offset);
	U3COnHashMessageU3Ed__0_SetStateMachine_mE0363E4EC0FF531DDDEF4A511EFFB96E9DC3790B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebGLSignMessageExample/<OnSignMessage>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSignMessageU3Ed__0_MoveNext_m3057F7982AC1CB0EDD2664D8ED6B7E5AC4ADE2A1 (U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A_m679F3C10BF08D62E160C2E6BACCC666EDB8D5A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D795FBD58CC7592D955A219374339A323801A9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2 * V_1 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_004d;
				}
			}

IL_0014:
			{
				// string message = "hello";
				// string response = await Web3GL.Sign(message);
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_4;
				L_4 = Web3GL_Sign_mFEAE31488340360AB008F8E3FAE799D1E10871C7(_stringLiteralB6D795FBD58CC7592D955A219374339A323801A9, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_5;
				L_5 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_4, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_2 = L_5;
				bool L_6;
				L_6 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0069;
				}
			}

IL_002d:
			{
				int32_t L_7 = 0;
				V_0 = L_7;
				__this->set_U3CU3E1__state_0(L_7);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_8 = V_2;
				__this->set_U3CU3Eu__1_3(L_8);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A_m679F3C10BF08D62E160C2E6BACCC666EDB8D5A86((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_9, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), (U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A_m679F3C10BF08D62E160C2E6BACCC666EDB8D5A86_RuntimeMethod_var);
				goto IL_00ab;
			}

IL_004d:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_10 = __this->get_U3CU3Eu__1_3();
				V_2 = L_10;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_11 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_12 = (-1);
				V_0 = L_12;
				__this->set_U3CU3E1__state_0(L_12);
			}

IL_0069:
			{
				String_t* L_13;
				L_13 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				// print(response);
				MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_13, /*hidden argument*/NULL);
				// } catch (Exception e) {
				goto IL_007f;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0077;
			}
			throw e;
		}

CATCH_0077:
		{ // begin catch(System.Exception)
			// Debug.LogException(e, this);
			WebGLSignMessageExample_t6B1C913E8904B2D53E392604E2E19ACCB04905D2 * L_14 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), L_14, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_007f;
		} // end catch (depth: 2)

IL_007f:
		{
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_16 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ab;
	} // end catch (depth: 1)

IL_0098:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnSignMessageU3Ed__0_MoveNext_m3057F7982AC1CB0EDD2664D8ED6B7E5AC4ADE2A1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A * _thisAdjusted = reinterpret_cast<U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A *>(__this + _offset);
	U3COnSignMessageU3Ed__0_MoveNext_m3057F7982AC1CB0EDD2664D8ED6B7E5AC4ADE2A1(_thisAdjusted, method);
}
// System.Void WebGLSignMessageExample/<OnSignMessage>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSignMessageU3Ed__0_SetStateMachine_m3F0DC2AEF8F20669EFA57A92C67E1F9A5F4B6802 (U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnSignMessageU3Ed__0_SetStateMachine_m3F0DC2AEF8F20669EFA57A92C67E1F9A5F4B6802_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A * _thisAdjusted = reinterpret_cast<U3COnSignMessageU3Ed__0_t53C2F5D040A39F6A271091DF3DCEF85F1D9D150A *>(__this + _offset);
	U3COnSignMessageU3Ed__0_SetStateMachine_m3F0DC2AEF8F20669EFA57A92C67E1F9A5F4B6802(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebGLSignVerifyExample/<OnHashMessage>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHashMessageU3Ed__4_MoveNext_mC613B02A00E698EDED0256CA3D62D43FC7FA530F (U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EVM_t4CB9F43860ADE16A97838AAEA17067F24EB140AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral063357668FE9D25EEA467879D48BCF7E34236C9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EFBAB9CEB69AEB992732EFEEB9B79F3A5CCB68C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F31D67733B00003C51A2EDA405BAE5A1F74A07);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				switch (L_3)
				{
					case 0:
					{
						goto IL_0064;
					}
					case 1:
					{
						goto IL_00f5;
					}
					case 2:
					{
						goto IL_0189;
					}
				}
			}

IL_0025:
			{
				// string hashedMessage = await Web3GL.Sha3(message);
				WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * L_4 = V_1;
				String_t* L_5 = L_4->get_message_4();
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_6;
				L_6 = Web3GL_Sha3_m6B7A92EF3D8E24D478C97BB1D742449866F03A8E(L_5, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_7;
				L_7 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_6, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_4 = L_7;
				bool L_8;
				L_8 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0081;
				}
			}

IL_0040:
			{
				int32_t L_9 = 0;
				V_0 = L_9;
				__this->set_U3CU3E1__state_0(L_9);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_10 = V_4;
				__this->set_U3CU3Eu__1_4(L_10);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), (U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22_RuntimeMethod_var);
				goto IL_021a;
			}

IL_0064:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_12 = __this->get_U3CU3Eu__1_4();
				V_4 = L_12;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_13 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_14 = (-1);
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
			}

IL_0081:
			{
				String_t* L_15;
				L_15 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				V_3 = L_15;
				String_t* L_16 = V_3;
				__this->set_U3ChashedMessageU3E5__2_3(L_16);
				// textHashedMessage.text = hashedMessage;
				WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * L_17 = V_1;
				Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = L_17->get_textHashedMessage_5();
				String_t* L_19 = __this->get_U3ChashedMessageU3E5__2_3();
				VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_19);
				// Debug.Log("Hashed Message: " + hashedMessage);
				String_t* L_20 = __this->get_U3ChashedMessageU3E5__2_3();
				String_t* L_21;
				L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral77F31D67733B00003C51A2EDA405BAE5A1F74A07, L_20, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_21, /*hidden argument*/NULL);
				// string signHashed = await Web3GL.Sign(hashedMessage);
				String_t* L_22 = __this->get_U3ChashedMessageU3E5__2_3();
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_23;
				L_23 = Web3GL_Sign_mFEAE31488340360AB008F8E3FAE799D1E10871C7(L_22, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_24;
				L_24 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_23, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_4 = L_24;
				bool L_25;
				L_25 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0112;
				}
			}

IL_00d1:
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_27 = V_4;
				__this->set_U3CU3Eu__1_4(L_27);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_28, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), (U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22_RuntimeMethod_var);
				goto IL_021a;
			}

IL_00f5:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_29 = __this->get_U3CU3Eu__1_4();
				V_4 = L_29;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_30 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
			}

IL_0112:
			{
				String_t* L_32;
				L_32 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				V_2 = L_32;
				// Debug.Log("Signed Hashed: " + signHashed);
				String_t* L_33 = V_2;
				String_t* L_34;
				L_34 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3EFBAB9CEB69AEB992732EFEEB9B79F3A5CCB68C, L_33, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_34, /*hidden argument*/NULL);
				// textSignedHash.text = signHashed;
				WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * L_35 = V_1;
				Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = L_35->get_textSignedHash_6();
				String_t* L_37 = V_2;
				VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_37);
				// ParseSignatureFunction(signHashed);
				WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * L_38 = V_1;
				String_t* L_39 = V_2;
				WebGLSignVerifyExample_ParseSignatureFunction_m7AE274B2FD8E85BF9D537192DF68C4F30FD496A4(L_38, L_39, /*hidden argument*/NULL);
				// Task<string> verify = EVM.Verify(hashedMessage, signHashed);
				String_t* L_40 = __this->get_U3ChashedMessageU3E5__2_3();
				String_t* L_41 = V_2;
				IL2CPP_RUNTIME_CLASS_INIT(EVM_t4CB9F43860ADE16A97838AAEA17067F24EB140AF_il2cpp_TypeInfo_var);
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_42;
				L_42 = EVM_Verify_mA8C92E16EF841C6356A849C6E29765534B0EA2CB(L_40, L_41, /*hidden argument*/NULL);
				// verifyAddress.text = await verify;
				WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * L_43 = V_1;
				Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_44 = L_43->get_verifyAddress_7();
				__this->set_U3CU3E7__wrap2_5(L_44);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_45;
				L_45 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_42, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_4 = L_45;
				bool L_46;
				L_46 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_01a6;
				}
			}

IL_0165:
			{
				int32_t L_47 = 2;
				V_0 = L_47;
				__this->set_U3CU3E1__state_0(L_47);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_48 = V_4;
				__this->set_U3CU3Eu__1_4(L_48);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_49 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_49, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), (U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984_m6A215E2BAB1A984690EE6015412C2A9AFD5F5A22_RuntimeMethod_var);
				goto IL_021a;
			}

IL_0189:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_50 = __this->get_U3CU3Eu__1_4();
				V_4 = L_50;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_51 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_51, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_52 = (-1);
				V_0 = L_52;
				__this->set_U3CU3E1__state_0(L_52);
			}

IL_01a6:
			{
				String_t* L_53;
				L_53 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				V_3 = L_53;
				Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_54 = __this->get_U3CU3E7__wrap2_5();
				String_t* L_55 = V_3;
				VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_54, L_55);
				__this->set_U3CU3E7__wrap2_5((Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)NULL);
				// Debug.Log("Verify Address: " + verifyAddress.text);
				WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * L_56 = V_1;
				Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_57 = L_56->get_verifyAddress_7();
				String_t* L_58;
				L_58 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_57);
				String_t* L_59;
				L_59 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral063357668FE9D25EEA467879D48BCF7E34236C9E, L_58, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_59, /*hidden argument*/NULL);
				// }
				__this->set_U3ChashedMessageU3E5__2_3((String_t*)NULL);
				goto IL_01ec;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01e4;
			}
			throw e;
		}

CATCH_01e4:
		{ // begin catch(System.Exception)
			// Debug.LogException(e, this);
			WebGLSignVerifyExample_t2AE970C95709E7D79FE1676E943F8687A1156932 * L_60 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), L_60, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01ec;
		} // end catch (depth: 2)

IL_01ec:
		{
			goto IL_0207;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ee;
		}
		throw e;
	}

CATCH_01ee:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_62 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_61, L_62, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_021a;
	} // end catch (depth: 1)

IL_0207:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_63 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_63, /*hidden argument*/NULL);
	}

IL_021a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnHashMessageU3Ed__4_MoveNext_mC613B02A00E698EDED0256CA3D62D43FC7FA530F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 * _thisAdjusted = reinterpret_cast<U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 *>(__this + _offset);
	U3COnHashMessageU3Ed__4_MoveNext_mC613B02A00E698EDED0256CA3D62D43FC7FA530F(_thisAdjusted, method);
}
// System.Void WebGLSignVerifyExample/<OnHashMessage>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnHashMessageU3Ed__4_SetStateMachine_mDFED69975911F7409E2A60A6CB0198532B9CB5ED (U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnHashMessageU3Ed__4_SetStateMachine_mDFED69975911F7409E2A60A6CB0198532B9CB5ED_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 * _thisAdjusted = reinterpret_cast<U3COnHashMessageU3Ed__4_tF91C06D535F18DAFE79D87966937954D3EB1D984 *>(__this + _offset);
	U3COnHashMessageU3Ed__4_SetStateMachine_mDFED69975911F7409E2A60A6CB0198532B9CB5ED(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebGLTransfer1155/<SafeTransferFrom>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSafeTransferFromU3Ed__5_MoveNext_m64353C3BCC55943924533B82580063995694E676 (U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE_mB874E3AF62B6096C3775FA89F2F57B4CF781B4FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DC9DA7C4C8D3F2DB2AF22304EB328E3CCA01DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0068;
			}
		}

IL_0011:
		{
			// string method = "safeTransferFrom";
			V_2 = _stringLiteral34DC9DA7C4C8D3F2DB2AF22304EB328E3CCA01DE;
			// string[] obj = { PlayerPrefs.GetString("Account"), toAccount, tokenId, amount, "0x" };
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
			String_t* L_5;
			L_5 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
			WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * L_7 = V_1;
			String_t* L_8 = L_7->get_toAccount_5();
			ArrayElementTypeCheck (L_6, L_8);
			(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
			WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * L_10 = V_1;
			String_t* L_11 = L_10->get_tokenId_6();
			ArrayElementTypeCheck (L_9, L_11);
			(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_11);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_9;
			WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * L_13 = V_1;
			String_t* L_14 = L_13->get_amount_7();
			ArrayElementTypeCheck (L_12, L_14);
			(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_12;
			ArrayElementTypeCheck (L_15, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
			(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
			// string args = JsonConvert.SerializeObject(obj);
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
			String_t* L_16;
			L_16 = JsonConvert_SerializeObject_mA1CE7826146AD4F03BAEC589ED87E3DB5C2182F0((RuntimeObject *)(RuntimeObject *)L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			// string value = "0";
			V_4 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			// string gasLimit = "";
			V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string gasPrice = "";
			V_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		}

IL_0068:
		{
		}

IL_0069:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_17 = V_0;
				if (!L_17)
				{
					goto IL_00b6;
				}
			}

IL_006c:
			{
				// string response = await Web3GL.SendContract(method, abi, contract, args, value, gasLimit, gasPrice);
				String_t* L_18 = V_2;
				WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * L_19 = V_1;
				String_t* L_20 = L_19->get_abi_8();
				WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * L_21 = V_1;
				String_t* L_22 = L_21->get_contract_4();
				String_t* L_23 = V_3;
				String_t* L_24 = V_4;
				String_t* L_25 = V_5;
				String_t* L_26 = V_6;
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_27;
				L_27 = Web3GL_SendContract_m6675BF158272EAC923D284D5CC10C7F09558E173(L_18, L_20, L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_28;
				L_28 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_27, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00d3;
				}
			}

IL_0095:
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_31 = V_7;
				__this->set_U3CU3Eu__1_3(L_31);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE_mB874E3AF62B6096C3775FA89F2F57B4CF781B4FB((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_32, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), (U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE_mB874E3AF62B6096C3775FA89F2F57B4CF781B4FB_RuntimeMethod_var);
				goto IL_0117;
			}

IL_00b6:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_33 = __this->get_U3CU3Eu__1_3();
				V_7 = L_33;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_34 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->set_U3CU3E1__state_0(L_35);
			}

IL_00d3:
			{
				String_t* L_36;
				L_36 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				// Debug.Log(response);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_36, /*hidden argument*/NULL);
				// } catch (Exception e) {
				goto IL_00e9;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e1;
			}
			throw e;
		}

CATCH_00e1:
		{ // begin catch(System.Exception)
			// Debug.LogException(e, this);
			WebGLTransfer1155_t4B7D5BD7F1B768A116719F1D39FEA9B3276BCB80 * L_37 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), L_37, /*hidden argument*/NULL);
			// };
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00e9;
		} // end catch (depth: 2)

IL_00e9:
		{
			// };
			goto IL_0104;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00eb;
		}
		throw e;
	}

CATCH_00eb:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_38 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_39 = V_8;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_38, L_39, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0117;
	} // end catch (depth: 1)

IL_0104:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_40, /*hidden argument*/NULL);
	}

IL_0117:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSafeTransferFromU3Ed__5_MoveNext_m64353C3BCC55943924533B82580063995694E676_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE * _thisAdjusted = reinterpret_cast<U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE *>(__this + _offset);
	U3CSafeTransferFromU3Ed__5_MoveNext_m64353C3BCC55943924533B82580063995694E676(_thisAdjusted, method);
}
// System.Void WebGLTransfer1155/<SafeTransferFrom>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSafeTransferFromU3Ed__5_SetStateMachine_m357DFCF039FEA8B6C3395C25DFC5753549AD9156 (U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSafeTransferFromU3Ed__5_SetStateMachine_m357DFCF039FEA8B6C3395C25DFC5753549AD9156_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE * _thisAdjusted = reinterpret_cast<U3CSafeTransferFromU3Ed__5_t7DECABE00F0A217B61D3EBE9046646C3A3C2B0AE *>(__this + _offset);
	U3CSafeTransferFromU3Ed__5_SetStateMachine_m357DFCF039FEA8B6C3395C25DFC5753549AD9156(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebGLTransfer20/<Transfer>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransferU3Ed__4_MoveNext_m5655C8D900D8FDBA8EF1BB4A1111791D22525BFD (U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779_mC376024971D8305D3347A67A5D3573D669D36149_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDD6ACC6C06C82120317BC17D98F0A059ED05229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004a;
			}
		}

IL_0011:
		{
			// string method = "transfer";
			V_2 = _stringLiteralEDD6ACC6C06C82120317BC17D98F0A059ED05229;
			// string[] obj = {toAccount, amount};
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
			WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * L_5 = V_1;
			String_t* L_6 = L_5->get_toAccount_5();
			ArrayElementTypeCheck (L_4, L_6);
			(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_4;
			WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * L_8 = V_1;
			String_t* L_9 = L_8->get_amount_6();
			ArrayElementTypeCheck (L_7, L_9);
			(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
			// string args = JsonConvert.SerializeObject(obj);
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
			String_t* L_10;
			L_10 = JsonConvert_SerializeObject_mA1CE7826146AD4F03BAEC589ED87E3DB5C2182F0((RuntimeObject *)(RuntimeObject *)L_7, /*hidden argument*/NULL);
			V_3 = L_10;
			// string value = "0";
			V_4 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			// string gasLimit = "";
			V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string gasPrice = "";
			V_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		}

IL_004a:
		{
		}

IL_004b:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_11 = V_0;
				if (!L_11)
				{
					goto IL_0098;
				}
			}

IL_004e:
			{
				// string response = await Web3GL.SendContract(method, abi, contract, args, value, gasLimit, gasPrice);
				String_t* L_12 = V_2;
				WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * L_13 = V_1;
				String_t* L_14 = L_13->get_abi_7();
				WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * L_15 = V_1;
				String_t* L_16 = L_15->get_contract_4();
				String_t* L_17 = V_3;
				String_t* L_18 = V_4;
				String_t* L_19 = V_5;
				String_t* L_20 = V_6;
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_21;
				L_21 = Web3GL_SendContract_m6675BF158272EAC923D284D5CC10C7F09558E173(L_12, L_14, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_22;
				L_22 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_21, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_7 = L_22;
				bool L_23;
				L_23 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00b5;
				}
			}

IL_0077:
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_25 = V_7;
				__this->set_U3CU3Eu__1_3(L_25);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779_mC376024971D8305D3347A67A5D3573D669D36149((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_26, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), (U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779_mC376024971D8305D3347A67A5D3573D669D36149_RuntimeMethod_var);
				goto IL_00f9;
			}

IL_0098:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_27 = __this->get_U3CU3Eu__1_3();
				V_7 = L_27;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_28 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->set_U3CU3E1__state_0(L_29);
			}

IL_00b5:
			{
				String_t* L_30;
				L_30 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				// Debug.Log(response);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_30, /*hidden argument*/NULL);
				// } catch (Exception e) {
				goto IL_00cb;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00c3;
			}
			throw e;
		}

CATCH_00c3:
		{ // begin catch(System.Exception)
			// Debug.LogException(e, this);
			WebGLTransfer20_t081FD59CDBAF6AE4314056B8B7B6249964572A0A * L_31 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), L_31, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00cb;
		} // end catch (depth: 2)

IL_00cb:
		{
			goto IL_00e6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cd;
		}
		throw e;
	}

CATCH_00cd:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_8;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f9;
	} // end catch (depth: 1)

IL_00e6:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_34, /*hidden argument*/NULL);
	}

IL_00f9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTransferU3Ed__4_MoveNext_m5655C8D900D8FDBA8EF1BB4A1111791D22525BFD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 * _thisAdjusted = reinterpret_cast<U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 *>(__this + _offset);
	U3CTransferU3Ed__4_MoveNext_m5655C8D900D8FDBA8EF1BB4A1111791D22525BFD(_thisAdjusted, method);
}
// System.Void WebGLTransfer20/<Transfer>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransferU3Ed__4_SetStateMachine_mA32D0A2CF0FC0E65AD5EA5081D9B5860C23936DE (U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTransferU3Ed__4_SetStateMachine_mA32D0A2CF0FC0E65AD5EA5081D9B5860C23936DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 * _thisAdjusted = reinterpret_cast<U3CTransferU3Ed__4_t4EB7258C238E19FF60A86837B4E6620F284C8779 *>(__this + _offset);
	U3CTransferU3Ed__4_SetStateMachine_mA32D0A2CF0FC0E65AD5EA5081D9B5860C23936DE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebGLTransfer721/<SafeTransferFrom>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSafeTransferFromU3Ed__4_MoveNext_m967807132732773C90E46AD493832B9237EA807B (U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA_m37BD14A687B5008E4425305FBA551F4DBFBC71B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DC9DA7C4C8D3F2DB2AF22304EB328E3CCA01DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0057;
			}
		}

IL_0011:
		{
			// string method = "safeTransferFrom";
			V_2 = _stringLiteral34DC9DA7C4C8D3F2DB2AF22304EB328E3CCA01DE;
			// string[] obj = { PlayerPrefs.GetString("Account"), toAccount, tokenId };
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
			String_t* L_5;
			L_5 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
			WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * L_7 = V_1;
			String_t* L_8 = L_7->get_toAccount_5();
			ArrayElementTypeCheck (L_6, L_8);
			(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
			WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * L_10 = V_1;
			String_t* L_11 = L_10->get_tokenId_6();
			ArrayElementTypeCheck (L_9, L_11);
			(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_11);
			// string args = JsonConvert.SerializeObject(obj);
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_tE6BEC0144590DD363669B76685D1C371866C3D87_il2cpp_TypeInfo_var);
			String_t* L_12;
			L_12 = JsonConvert_SerializeObject_mA1CE7826146AD4F03BAEC589ED87E3DB5C2182F0((RuntimeObject *)(RuntimeObject *)L_9, /*hidden argument*/NULL);
			V_3 = L_12;
			// string value = "0";
			V_4 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			// string gasLimit = "";
			V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// string gasPrice = "";
			V_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		}

IL_0057:
		{
		}

IL_0058:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_13 = V_0;
				if (!L_13)
				{
					goto IL_00a5;
				}
			}

IL_005b:
			{
				// string response = await Web3GL.SendContract(method, abi, contract, args, value, gasLimit, gasPrice);
				String_t* L_14 = V_2;
				WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * L_15 = V_1;
				String_t* L_16 = L_15->get_abi_7();
				WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * L_17 = V_1;
				String_t* L_18 = L_17->get_contract_4();
				String_t* L_19 = V_3;
				String_t* L_20 = V_4;
				String_t* L_21 = V_5;
				String_t* L_22 = V_6;
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_23;
				L_23 = Web3GL_SendContract_m6675BF158272EAC923D284D5CC10C7F09558E173(L_14, L_16, L_18, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_24;
				L_24 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_23, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_7 = L_24;
				bool L_25;
				L_25 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_00c2;
				}
			}

IL_0084:
			{
				int32_t L_26 = 0;
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_27 = V_7;
				__this->set_U3CU3Eu__1_3(L_27);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA_m37BD14A687B5008E4425305FBA551F4DBFBC71B2((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_28, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), (U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA_m37BD14A687B5008E4425305FBA551F4DBFBC71B2_RuntimeMethod_var);
				goto IL_0106;
			}

IL_00a5:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_29 = __this->get_U3CU3Eu__1_3();
				V_7 = L_29;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_30 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
			}

IL_00c2:
			{
				String_t* L_32;
				L_32 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				// Debug.Log(response);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_32, /*hidden argument*/NULL);
				// } catch (Exception e) {
				goto IL_00d8;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00d0;
			}
			throw e;
		}

CATCH_00d0:
		{ // begin catch(System.Exception)
			// Debug.LogException(e, this);
			WebGLTransfer721_t3DF4C3057637769675C1EFA29FAAF75CE9AA314C * L_33 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_mE0C50EE1EE5F38196CABAF961EF7E43DD520C29B(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), L_33, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00d8;
		} // end catch (depth: 2)

IL_00d8:
		{
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00da;
		}
		throw e;
	}

CATCH_00da:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_35 = V_8;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_34, L_35, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	} // end catch (depth: 1)

IL_00f3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_36, /*hidden argument*/NULL);
	}

IL_0106:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSafeTransferFromU3Ed__4_MoveNext_m967807132732773C90E46AD493832B9237EA807B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA * _thisAdjusted = reinterpret_cast<U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA *>(__this + _offset);
	U3CSafeTransferFromU3Ed__4_MoveNext_m967807132732773C90E46AD493832B9237EA807B(_thisAdjusted, method);
}
// System.Void WebGLTransfer721/<SafeTransferFrom>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSafeTransferFromU3Ed__4_SetStateMachine_m72420EB4DE07C850B47609F4910E992BFAA0CC10 (U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSafeTransferFromU3Ed__4_SetStateMachine_m72420EB4DE07C850B47609F4910E992BFAA0CC10_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA * _thisAdjusted = reinterpret_cast<U3CSafeTransferFromU3Ed__4_t3CA8E5B1F971C292BEA3561C1036CA365AC1ECFA *>(__this + _offset);
	U3CSafeTransferFromU3Ed__4_SetStateMachine_m72420EB4DE07C850B47609F4910E992BFAA0CC10(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebLogin/<OnConnected>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnConnectedU3Ed__6_MoveNext_m01EC6E60475A256640C35990CAD5131C04AB747D (U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_TisU3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A_m520B6A556BCA0973EC165BC771BDEC0582EA3872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * V_1 = NULL;
	SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * V_2 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0059;
			}
		}

IL_0011:
		{
			// account = ConnectAccount();
			WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * L_3 = V_1;
			String_t* L_4;
			L_4 = WebLogin_ConnectAccount_mC1E264919C9BEB95A48D4B2F73CF6AE68BE907E7(/*hidden argument*/NULL);
			L_3->set_account_5(L_4);
			goto IL_0086;
		}

IL_001e:
		{
			// await new WaitForSeconds(1f);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (1.0f), /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_6;
			L_6 = IEnumeratorAwaitExtensions_GetAwaiter_mCF15394B4340D38A6E1868DFEA2BE686CD3E69DA(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_7 = V_2;
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_mDA7B7280FCDDED248719D8DC7F5C6167B8624A5A_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0075;
			}
		}

IL_0036:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_TisU3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A_m520B6A556BCA0973EC165BC771BDEC0582EA3872((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 **)(&V_2), (U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_TisU3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A_m520B6A556BCA0973EC165BC771BDEC0582EA3872_RuntimeMethod_var);
			goto IL_00f4;
		}

IL_0059:
		{
			RuntimeObject * L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 *)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0075:
		{
			SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * L_14 = V_2;
			SimpleCoroutineAwaiter_GetResult_mD72737AB448D1C1A8B51E1037389CBE22E0861FA(L_14, /*hidden argument*/NULL);
			// account = ConnectAccount();
			WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * L_15 = V_1;
			String_t* L_16;
			L_16 = WebLogin_ConnectAccount_mC1E264919C9BEB95A48D4B2F73CF6AE68BE907E7(/*hidden argument*/NULL);
			L_15->set_account_5(L_16);
		}

IL_0086:
		{
			// while (account == "") {
			WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * L_17 = V_1;
			String_t* L_18 = L_17->get_account_5();
			bool L_19;
			L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_001e;
			}
		}

IL_0098:
		{
			// PlayerPrefs.SetString("Account", account);
			WebLogin_tF88C4CA5F48CD5D6A1973176EAB073A5AD819BBD * L_20 = V_1;
			String_t* L_21 = L_20->get_account_5();
			PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral54793609F88E1BD1C262633A62D194BF2699F40A, L_21, /*hidden argument*/NULL);
			// SetConnectAccount("");
			WebLogin_SetConnectAccount_mFB37E0B21EC829A9BD04821AFD16E75F3522353A(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
			IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_22;
			L_22 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
			V_3 = L_22;
			int32_t L_23;
			L_23 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
			SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
			goto IL_00e1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c8;
		}
		throw e;
	}

CATCH_00c8:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f4;
	} // end catch (depth: 1)

IL_00e1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_26, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnConnectedU3Ed__6_MoveNext_m01EC6E60475A256640C35990CAD5131C04AB747D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A * _thisAdjusted = reinterpret_cast<U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A *>(__this + _offset);
	U3COnConnectedU3Ed__6_MoveNext_m01EC6E60475A256640C35990CAD5131C04AB747D(_thisAdjusted, method);
}
// System.Void WebLogin/<OnConnected>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnConnectedU3Ed__6_SetStateMachine_mCDC0D60876FA7F6803612569D8BCB444418EC9D9 (U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnConnectedU3Ed__6_SetStateMachine_mCDC0D60876FA7F6803612569D8BCB444418EC9D9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A * _thisAdjusted = reinterpret_cast<U3COnConnectedU3Ed__6_tEFC9E3F446B694229C87DDAF8E60AD510F0C5F1A *>(__this + _offset);
	U3COnConnectedU3Ed__6_SetStateMachine_mCDC0D60876FA7F6803612569D8BCB444418EC9D9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IPFS/GetFileInfoResponse/Content::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Content__ctor_m131313B8271BCFA4F6887236505B2F536E518565 (Content_tFC7A3C664DB9F57BEB2E902E1E77ED59828561E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mDA7B7280FCDDED248719D8DC7F5C6167B8624A5A_inline (SimpleCoroutineAwaiter_tC155044B7FDCBA1C9073BF1C69EC18199B5A6941 * __this, const RuntimeMethod* method)
{
	{
		// get { return _isDone; }
		bool L_0 = __this->get__isDone_0();
		return L_0;
	}
}
