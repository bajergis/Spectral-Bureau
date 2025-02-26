﻿#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NativeArrayExtensions_t9A6F3FA904DDB64CC47FB8CECF1EE92FAFD47BA2  : public RuntimeObject
{
};
struct NativeArrayExtensions_t36BA4CCABADE7EC33970CCCB625455C3D6F85372  : public RuntimeObject
{
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB 
{
	int32_t ___Id;
	int32_t ___Version;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
#pragma pack(push, tp, 1)
struct SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59__padding[4];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C__padding[4];
	};
};
#pragma pack(pop, tp)
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1 
{
	int32_t ___Offset;
};
struct Aabb_tCE79FBED620BCE1AC56CA435BA9E9CE1B4291853 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Min;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Max;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere;
	float ___m_ShadowCascadeBlendCullingFactor;
	float ___m_CullingNearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___Connection;
	int32_t ___BufferIndex;
};
struct SystemAttributeKind_t1AB9CCBF92C722C8E4A130B638F67F2DF4816A65 
{
	int32_t ___value__;
};
struct TypeCategory_t94731637F2239CC5D222E482298E0D9A80AA2CD2 
{
	int32_t ___value__;
};
struct LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 
{
	int32_t ___RefCount;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SceneEntity;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrefabRoot;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct BackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA 
{
	int32_t ___ent;
	int32_t ___indexInBackup;
	intptr_t ___backupState;
};
struct StateType_tFA58B6E2D509ED7D3442ED463739A079F659C10A 
{
	int32_t ___value__;
};
struct NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t83F02282C33BAD818D67110F7760483208880311 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t921487953942E613D844675021E6F65D8A357005 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t010AC827019013D3B1034F837369288019917D36 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct HashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C 
{
	Aabb_tCE79FBED620BCE1AC56CA435BA9E9CE1B4291853 ___Bounds;
	int32_t ___MeshKey;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___BodyFromShape;
	int32_t ___IncludedIndicesStartIndex;
	int32_t ___IncludedIndicesCount;
	int32_t ___BlendShapeWeightsStartIndex;
	int32_t ___BlendShapeWeightsCount;
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform;
	int32_t ___offsetX;
	int32_t ___offsetY;
	int32_t ___resolution;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	int32_t ___m_InstanceId;
	int32_t ___m_Flags;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED 
{
	int32_t ___Kind;
	alignas(4) SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___TargetSystemTypeIndex;
	int32_t ___Flags;
};
struct TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___SizeInChunk;
	int32_t ___ElementSize;
	int32_t ___BufferCapacity;
	uint64_t ___MemoryOrdering;
	uint64_t ___StableTypeHash;
	uint64_t ___BloomFilterMask;
	int32_t ___AlignmentInBytes;
	int32_t ___Category;
	int32_t ___EntityOffsetCount;
	int32_t ___EntityOffsetStartIndex;
	int32_t ____HasBlobAssetRefs;
	int32_t ____HasUnityObjectRefs;
	int32_t ___BlobAssetRefOffsetCount;
	int32_t ___BlobAssetRefOffsetStartIndex;
	int32_t ___WeakAssetRefOffsetCount;
	int32_t ___WeakAssetRefOffsetStartIndex;
	int32_t ___UnityObjectRefOffsetCount;
	int32_t ___UnityObjectRefOffsetStartIndex;
	int32_t ___WriteGroupCount;
	int32_t ___WriteGroupStartIndex;
	int32_t ___MaximumChunkCapacity;
	int32_t ___TypeSize;
};
struct State_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D 
{
	int32_t ___Type;
	int32_t ___Count;
};
struct URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 
{
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___slices;
	uint32_t ___slicesValidMask;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_StaticFields
{
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_m68F17942B8F41C829DF0C06886BD7C00CD1F01F5_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_mDADDCD57D316DDD908CF8D626704414805528DE7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_mC05A21B7948AD995376EB0A1E53A5E2A6C0EE911_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_m22D312318402572FF01E0EE48DD2FAE8BFA9ABE8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_mB9F26BB76FF29556DBEFB985AD9CC72B664C0955_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m87F606EAFA3F5A0433B50C3E46FDF7E947DC7823_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m7844FE2349651EB976E3F261838E5F863DF468F3_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m19DBDCDCF5DB18B1FCFBC024CF2F7E5EDE406081_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m470079DEF5A798DA7429C9A4223722654DD67B98_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_mC66797FD22E6A335429CEE4AAF30327973FF4285_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, BackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_m7CC3BE3B7D2EE0C193C33D8634C8BFE1E7AA705A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m08C23D346218A9FB7CF267463559D341DAD4B9C8_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, State_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m46B93E77F816BDB8CDF02635B04854B3EA217ECF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_m7D37451B0EC2D09AD37A39FE78528FF00F8BF89E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_mF4020445CBA3A1D09B442374CEC080C7F4D2D623_gshared (NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A819985C47AA98744FA04937D8AAB83A9884937_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m57AACCB0FE0890343B17F331E71703A87788F853_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m30F11DCEEBABFF58F2CCA05787B45BD9AD0D30B9_gshared (NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_mEAF3AE57BD1D383E09B980E8D7580E213D13397F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00_gshared (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mDA21180EDFBB39E049CCDE93CB60CB0643938694_gshared (NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m9EA7C75DE41D07A2541AC0A25470A850BDC7BC31_gshared (NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m3E690F509525382CEAB5744F69A1B4EE4E8DAA14_gshared (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_mA272EA3B0D40E27EE8A0C7C1D2C48B2BB7666865_gshared (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m4049A4C76A567998AA3C3143C472E438E2B27B5F_gshared (NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;

inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_m68F17942B8F41C829DF0C06886BD7C00CD1F01F5 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_m68F17942B8F41C829DF0C06886BD7C00CD1F01F5_gshared)(___0_t, ___1_u, ___2_items, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_mDADDCD57D316DDD908CF8D626704414805528DE7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_mDADDCD57D316DDD908CF8D626704414805528DE7_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___0_destination, int64_t ___1_size, const RuntimeMethod* method) ;
inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_mC05A21B7948AD995376EB0A1E53A5E2A6C0EE911 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1 ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_mC05A21B7948AD995376EB0A1E53A5E2A6C0EE911_gshared)(___0_t, ___1_u, ___2_items, method);
}
inline int32_t UnsafeUtility_SizeOf_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_m22D312318402572FF01E0EE48DD2FAE8BFA9ABE8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_m22D312318402572FF01E0EE48DD2FAE8BFA9ABE8_gshared_inline)(method);
}
inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_mB9F26BB76FF29556DBEFB985AD9CC72B664C0955 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_mB9F26BB76FF29556DBEFB985AD9CC72B664C0955_gshared)(___0_t, ___1_u, ___2_items, method);
}
inline int32_t UnsafeUtility_SizeOf_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m87F606EAFA3F5A0433B50C3E46FDF7E947DC7823_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m87F606EAFA3F5A0433B50C3E46FDF7E947DC7823_gshared_inline)(method);
}
inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m7844FE2349651EB976E3F261838E5F863DF468F3 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654 ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m7844FE2349651EB976E3F261838E5F863DF468F3_gshared)(___0_t, ___1_u, ___2_items, method);
}
inline int32_t UnsafeUtility_SizeOf_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m19DBDCDCF5DB18B1FCFBC024CF2F7E5EDE406081_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m19DBDCDCF5DB18B1FCFBC024CF2F7E5EDE406081_gshared_inline)(method);
}
inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m470079DEF5A798DA7429C9A4223722654DD67B98 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m470079DEF5A798DA7429C9A4223722654DD67B98_gshared)(___0_t, ___1_u, ___2_items, method);
}
inline int32_t UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_gshared_inline)(method);
}
inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_mC66797FD22E6A335429CEE4AAF30327973FF4285 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, BackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, BackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_mC66797FD22E6A335429CEE4AAF30327973FF4285_gshared)(___0_t, ___1_u, ___2_items, method);
}
inline int32_t UnsafeUtility_SizeOf_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_m7CC3BE3B7D2EE0C193C33D8634C8BFE1E7AA705A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_m7CC3BE3B7D2EE0C193C33D8634C8BFE1E7AA705A_gshared_inline)(method);
}
inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m08C23D346218A9FB7CF267463559D341DAD4B9C8 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, State_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, State_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m08C23D346218A9FB7CF267463559D341DAD4B9C8_gshared)(___0_t, ___1_u, ___2_items, method);
}
inline int32_t UnsafeUtility_SizeOf_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m46B93E77F816BDB8CDF02635B04854B3EA217ECF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m46B93E77F816BDB8CDF02635B04854B3EA217ECF_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_m7D37451B0EC2D09AD37A39FE78528FF00F8BF89E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_m7D37451B0EC2D09AD37A39FE78528FF00F8BF89E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_mF4020445CBA3A1D09B442374CEC080C7F4D2D623 (NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_mF4020445CBA3A1D09B442374CEC080C7F4D2D623_gshared)(___0_nativeArray, method);
}
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A819985C47AA98744FA04937D8AAB83A9884937 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A819985C47AA98744FA04937D8AAB83A9884937_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m57AACCB0FE0890343B17F331E71703A87788F853 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m57AACCB0FE0890343B17F331E71703A87788F853_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m30F11DCEEBABFF58F2CCA05787B45BD9AD0D30B9 (NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m30F11DCEEBABFF58F2CCA05787B45BD9AD0D30B9_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_mEAF3AE57BD1D383E09B980E8D7580E213D13397F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_mEAF3AE57BD1D383E09B980E8D7580E213D13397F_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00 (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00_gshared)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mDA21180EDFBB39E049CCDE93CB60CB0643938694 (NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mDA21180EDFBB39E049CCDE93CB60CB0643938694_gshared)(___0_nativeArray, method);
}
inline ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_gshared_inline)(___0_ptr, ___1_index, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m9EA7C75DE41D07A2541AC0A25470A850BDC7BC31 (NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m9EA7C75DE41D07A2541AC0A25470A850BDC7BC31_gshared)(___0_nativeArray, method);
}
inline URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_gshared_inline)(___0_ptr, ___1_index, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m3E690F509525382CEAB5744F69A1B4EE4E8DAA14 (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m3E690F509525382CEAB5744F69A1B4EE4E8DAA14_gshared)(___0_nativeArray, method);
}
inline VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_gshared_inline)(___0_ptr, ___1_index, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_mA272EA3B0D40E27EE8A0C7C1D2C48B2BB7666865 (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_mA272EA3B0D40E27EE8A0C7C1D2C48B2BB7666865_gshared)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m4049A4C76A567998AA3C3143C472E438E2B27B5F (NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m4049A4C76A567998AA3C3143C472E438E2B27B5F_gshared)(___0_nativeArray, method);
}
inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_gshared_inline)(___0_ptr, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_mD9FCE64CE2722E2EC484C4FC94349FBF82A403BA_gshared (NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* G_B2_0 = NULL;
	NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3));
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E));
		PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E L_3 = V_1;
		int32_t L_4 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_m68F17942B8F41C829DF0C06886BD7C00CD1F01F5((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		L_2->___m_Buffer = L_5;
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = (int32_t)G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t0BBC61E0123FC9C982A7F62EBA55B32F45F1C0F3* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int32_t L_16;
		L_16 = UnsafeUtility_SizeOf_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_mDADDCD57D316DDD908CF8D626704414805528DE7_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))), NULL);
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_m654DD3F7D5394C08EDEB6E81B447DABE4BC3C897_gshared (NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* G_B2_0 = NULL;
	NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9));
		NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1));
		EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1 L_3 = V_1;
		int32_t L_4 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_mC05A21B7948AD995376EB0A1E53A5E2A6C0EE911((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		L_2->___m_Buffer = L_5;
		NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = (int32_t)G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t83A0A5D5A558146CF033B3491C7333963BC289D9* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int32_t L_16;
		L_16 = UnsafeUtility_SizeOf_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_m22D312318402572FF01E0EE48DD2FAE8BFA9ABE8_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))), NULL);
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m1F23E288995594E041516E63A232124C71A5008B_gshared (NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* G_B2_0 = NULL;
	NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18));
		NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED));
		SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_3 = V_1;
		int32_t L_4 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_mB9F26BB76FF29556DBEFB985AD9CC72B664C0955((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		L_2->___m_Buffer = L_5;
		NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = (int32_t)G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int32_t L_16;
		L_16 = UnsafeUtility_SizeOf_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m87F606EAFA3F5A0433B50C3E46FDF7E947DC7823_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))), NULL);
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m3C4A4A7B33503666D03C1D8AE97F1E165E64D06E_gshared (NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* G_B2_0 = NULL;
	NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090));
		NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654));
		TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654 L_3 = V_1;
		int32_t L_4 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m7844FE2349651EB976E3F261838E5F863DF468F3((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		L_2->___m_Buffer = L_5;
		NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = (int32_t)G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t3F9FEF70271E5BD1817E7AC9ABA8F2F7CA138090* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int32_t L_16;
		L_16 = UnsafeUtility_SizeOf_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m19DBDCDCF5DB18B1FCFBC024CF2F7E5EDE406081_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))), NULL);
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_mBABC5F0182EFCC5B7529A1E9768A25BC6A3C4EC5_gshared (NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* G_B2_0 = NULL;
	NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5));
		NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02));
		LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 L_3 = V_1;
		int32_t L_4 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m470079DEF5A798DA7429C9A4223722654DD67B98((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		L_2->___m_Buffer = L_5;
		NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = (int32_t)G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t199AE8490F8EFECF20612BEF447818B3457173B5* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int32_t L_16;
		L_16 = UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))), NULL);
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_mD5631F074B1B4B10ABE9795097EFC32684979BA4_gshared (NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* G_B2_0 = NULL;
	NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305));
		NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(BackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA));
		BackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA L_3 = V_1;
		int32_t L_4 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_mC66797FD22E6A335429CEE4AAF30327973FF4285((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		L_2->___m_Buffer = L_5;
		NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = (int32_t)G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t50146404803A8B0A0DF60D074947F6CC4758A305* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int32_t L_16;
		L_16 = UnsafeUtility_SizeOf_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_m7CC3BE3B7D2EE0C193C33D8634C8BFE1E7AA705A_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))), NULL);
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_mFAA24EF14082824385343F4E81C8D4D9410FFA02_gshared (NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	State_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* G_B2_0 = NULL;
	NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD));
		NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* L_2 = ___0_array;
		il2cpp_codegen_initobj((&V_1), sizeof(State_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D));
		State_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D L_3 = V_1;
		int32_t L_4 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m08C23D346218A9FB7CF267463559D341DAD4B9C8((&V_0), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		L_2->___m_Buffer = L_5;
		NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* L_8 = ___0_array;
		bool L_9;
		L_9 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_9)
		{
			G_B2_0 = L_8;
			goto IL_003a;
		}
		G_B1_0 = L_8;
	}
	{
		int32_t L_10;
		L_10 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = (int32_t)G_B3_0;
		int32_t L_11 = ___3_options;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		NativeArray_1_t22DA9A4EAB2EE43BD2C7B9BB18F237C4813C55BD* L_14 = ___0_array;
		int32_t L_15 = L_14->___m_Length;
		int32_t L_16;
		L_16 = UnsafeUtility_SizeOf_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m46B93E77F816BDB8CDF02635B04854B3EA217ECF_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))), NULL);
	}

IL_005c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m8CE87D920E01F7DDBF409D77486D923A85F54A46_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericStruct* ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	memset(V_0, 0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B2_0 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B3_1 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		il2cpp_codegen_initobj(L_0, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		Il2CppFullySharedGenericStruct* L_2 = ___2_allocator;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
		int32_t L_4 = ___1_length;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = InvokerFuncInvoker3< void*, Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_2, L_3, L_4);
		L_1->___m_Buffer = L_5;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_array;
		int32_t L_7 = ___1_length;
		L_6->___m_Length = L_7;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___0_array;
		Il2CppFullySharedGenericStruct* L_9 = ___2_allocator;
		bool L_11;
		L_11 = ConstrainedFuncInvoker0< bool >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, (void*)L_9);
		if (L_11)
		{
			G_B2_0 = L_8;
			goto IL_0041;
		}
		G_B1_0 = L_8;
	}
	{
		Il2CppFullySharedGenericStruct* L_12 = ___2_allocator;
		int32_t L_14;
		L_14 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 7), L_13, (void*)L_12);
		G_B3_0 = ((int32_t)(L_14));
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		G_B3_1->___m_AllocatorLabel = (int32_t)G_B3_0;
		int32_t L_15 = ___3_options;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_16 = ___0_array;
		void* L_17 = L_16->___m_Buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_18 = ___0_array;
		int32_t L_19 = L_18->___m_Length;
		int32_t L_20;
		L_20 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(il2cpp_rgctx_method(method->rgctx_data, 8));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_17, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_19, L_20))), NULL);
	}

IL_0063:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayExtensions_Reinterpret_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m05F56B5EFBBA93ADA5DD6DAFE6D2103D218A3537_gshared (NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_m7D37451B0EC2D09AD37A39FE78528FF00F8BF89E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)))/((int64_t)L_4)));
		NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB L_5 = ___0_array;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_mF4020445CBA3A1D09B442374CEC080C7F4D2D623(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		int64_t L_7 = V_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8;
		L_8 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA(L_6, ((int32_t)L_7), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayExtensions_Reinterpret_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9CCBABDF6FC108B91A5C998626EC8FB96EA538BB_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)))/((int64_t)L_4)));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = ___0_array;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A819985C47AA98744FA04937D8AAB83A9884937(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		int64_t L_7 = V_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8;
		L_8 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA(L_6, ((int32_t)L_7), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayExtensions_Reinterpret_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m15060B8AB6EB28C94C74B989CD6F364317B4B347_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)))/((int64_t)L_4)));
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_5 = ___0_array;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m57AACCB0FE0890343B17F331E71703A87788F853(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		int64_t L_7 = V_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8;
		L_8 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA(L_6, ((int32_t)L_7), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayExtensions_Reinterpret_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mA330D618BD7C45E856E6DA4F12CA02BE46428C2B_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)))/((int64_t)L_4)));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = ___0_array;
		void* L_6;
		L_6 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		int64_t L_7 = V_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8;
		L_8 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_6, ((int32_t)L_7), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayExtensions_Reinterpret_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE69923C7B02178CE9D1CD4855F2D707A39F7073B_gshared (NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)))/((int64_t)L_4)));
		NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 L_5 = ___0_array;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m30F11DCEEBABFF58F2CCA05787B45BD9AD0D30B9(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		int64_t L_7 = V_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8;
		L_8 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA(L_6, ((int32_t)L_7), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayExtensions_Reinterpret_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2FECEACE0F6C6D1A429C9011307AC317845F6378_gshared (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_mEAF3AE57BD1D383E09B980E8D7580E213D13397F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_array))->___m_Length);
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)))/((int64_t)L_4)));
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_5 = ___0_array;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		int64_t L_7 = V_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8;
		L_8 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA(L_6, ((int32_t)L_7), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* NativeArrayExtensions_UnsafeElementAt_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m172973527DE9C444ABA117A4CE8B1D951C896487_gshared (NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mDA21180EDFBB39E049CCDE93CB60CB0643938694(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_index;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* NativeArrayExtensions_UnsafeElementAt_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m56159FAB7E5AD01E526C4937CB1FAFF4F8F52A7D_gshared (NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m9EA7C75DE41D07A2541AC0A25470A850BDC7BC31(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_index;
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* NativeArrayExtensions_UnsafeElementAt_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m7A148B250029B4DD2D82AA8B6C6BECC028AFB7E1_gshared (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m3E690F509525382CEAB5744F69A1B4EE4E8DAA14(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_index;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeArrayExtensions_UnsafeElementAt_TisIl2CppFullySharedGenericStruct_mD5A55E88E7EFCC4A84DC649BF433F56B5C426745_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_index;
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* NativeArrayExtensions_UnsafeElementAtMutable_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m7A59DCAA90F6829CC60BD80BD2CB07DEF9CF971C_gshared (NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_mA272EA3B0D40E27EE8A0C7C1D2C48B2BB7666865(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_index;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeArrayExtensions_UnsafeElementAtMutable_TisIl2CppFullySharedGenericStruct_m9C116426CA92D692BE5B19D3207BABE599300FFD_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_index;
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* NativeArrayExtensions_UnsafeElementAtMutable_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m24F4B1E162F6D8C43CBC0EB6CA0AF42B0881A6FB_gshared (NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m4049A4C76A567998AA3C3143C472E438E2B27B5F(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_index;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlobAssetReference_1_tC953AE1B35DBBA1A1A3BFCE8018409EFAE532602_m25791515F2688A64AACF853D37D90AB30D11C09A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB28FD75B6B99A6D0CD55F2F0A08313348B969124 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlobAssetReference_1_t724B2C79285FF64F597D0637F65DAA416537DEF3_m4FD2BC13640377FA49D3BF41AC37A9471F4759C2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8D3D97DAA65A9416577CC9A9C6964FAC3F7697FF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m567A59F366F22BA36C68D7FAB6B2635915D83502_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t49CA8CB698A42557C842DE2841B43EED57B5D969 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mBFE9783357F693B30D90CAC1F202ED21023E4275_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAE474C1B8F298F4BBA0958C6C6FC7AFB11C29A54 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mF1336E536F42605DD0F310BA42F8B8C82D2C4C90_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t650D615ED91779AB18AAF334DF5F727820A74CF2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m6B8E6DA8E69C6E29712DA85CF247EDF5065A4BB9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t802A8DD914D9BF136528C0EAF5710835115E8205 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_m0CB787A3A0A4894BA02E57E29153D11F90E6ADB2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t749CE03DB8CF39E44DE7AC7E681B438EB994B4A7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_mFA93F98D8752E6DE41B7170DF5F22F5D904872F8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA446A69A2720A0AAB2AC28FE6F8B612B3B082A4F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mB82AAB47678D11F4CF7E7D6B6C8CFA0628E9C9D7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t501D24CA95A1E287CF4BFDE572D60E640951529B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mAC93D8E58B420968E75C18F9DCB34BCBB2D5F874_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t013330616217EB4CE43981D40CFF3FAA9D52D927 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m6440F709AE93FA93B690BEC5B87B984D3754CA0B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF452EE1D74F4E5CCCF82E49E4505C3BD336246E2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEnumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D_m9B3E3544C0D4F687C5B091D7823D2CD43F6585D7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD56410DBC76FE586AED3038208F0DFA1C8B475F7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m14E6C675DAF5FE9D49D551CEF10710A6F9A672E5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDDDC3184E8345D8ABF1B6B69A7FF55AF5144F931 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnityObjectRef_1_tBDC2904A7324F2A71AB50EBABF5FA731EF2FA0C6_mB266D6426BC887EAD488F5E1316C31D0CB266AFA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD0093E2DF25D74C3CA2D06076D73AFD4864857F2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83_m2225BAAA945D1CA7C07F3960220B42454D890796_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6E902610E0CD21805BE2405EC94AEAF19C7C5C4B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050_m7AA05B8ACDF5F19A53838D0D37435F9586772C6D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t487272F249C63B1600FFDBF2211DFE04431F10C0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m0E8727A5959F88745FF036FF318F621512659EA2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C_m49F9D7CE26386E907F97B18CA974857CF3695A32_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1FB3867BA63BC3856F2E0457D4276346E1305555 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27_m84A6AC2B83B6D290B33B7958EDEE26AC349CC418_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC1AAE4397CFABA02C0FDE6A3D0EC20A6601B8837 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m52FAB92F3D2C5BB7036AF0D6FE59A9411781A687_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t01308121EFD97CCBB266560A0061E4E6D975EBE4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5_m4D7FC992351594969E0F28891F0241039156CD3C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t35EDD2123A234EA2A8851801BFCB82B95E46E48A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31_mE54BEA98CEC882E10880EBBF84AF9CD63B30834A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC84345605578F2A44B69D41B2B42610F4D8FE9F9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F_m15001C1CD2CCE9E8EA3E2E03F09FAF9E3776A9E9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB84406A553A3882573C46548953DE4FE573B3596 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA_m25635B60329424206F25E29304161ECFA6C4D6FA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisAABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A_mEB3D2BB4CFA0D631BDB2CAA17AE55DCCDA833E4F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tEA1CDFF3990541CCE5DB2228D58782D33425EB0A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisAabb_tCE79FBED620BCE1AC56CA435BA9E9CE1B4291853_mB6A92FEE1B5AA29A31CE93B62C491739F24A5C4F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF78A77C5286C0DD4C505D5D75EAA3ACB12B625E6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisActiveWeapon_t34043214BE9DC5C194F0C8AFD2449E4F8383B849_m67604C3C35A7388BAD736E7AF61798184AC77329_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBFAC5D7D501B749C7AB34D3FAFDD2F975F647DD0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisAdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1_m6F10B54676877F1CAAED6F31D55A14BF64A69C2F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDD46A51F0126572E950A002BEA88A5476AEAB178 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisAdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E_m9E0EE8F612AEE24F824A966BCADB0AFAA8C8406F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA10D74F04B7C6C29AC3C9A8C331B8ED44ABCFB53 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m49C2ACECAE39B30C5514FA23CFED0C0D5C41CB4B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB_m85764CC05F1417CFA5731A4489ABCCD731D4C09D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t46B9F7CE5C44BBD1192CDAA1CEFDE32AA0CFD5C0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mA9C9588258C6B41D0A826363A69EA9A5002006EB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t04DF635C0FEAB264F763F4B942D6A669F0B1F1C1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_mCCC659A0584F7EE8CA5829A8B2B312E741DDB36D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisAutoCommandTarget_t2DDAA53D1DF20CAAD90902389BEF5E6088EFC191_m6366F570C93ECD52337B3FAE78C3D7DBA01651DD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t76B4D2B887B7711B55B4CADD4A288E59D2C681A1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m2F231415DFDAF96984062C3D0DB73F7E7127A70D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1709CD62C8DAE5DE2F9B2D7D37E6E260F39FF73D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBakeStaticRoot_t20056F2B05BA4C4704568DBD928A33F69F6795F4_mFABA33F22C447D0150CE3DFDDB27CFD3052777A4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2EEECA85F68E04F186DCCC2DCAB0CE2F1C24CC81 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m370A08EA1CDECF4DB9EAB80AEF1B9F593A156AD9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE14EC68A3468927E8107E875446A79D116B04603 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCreateInfo_t15C4620EEBE83EE2A60F4B3A6141A82942786EB2_mE3CC6FA674117B09AFBBC3BACA05124A5B66D3A9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t862C4A7005AE8D9DDACD9AD5F80100FDABF7553F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m9A801781CB7C53E65CB881810CFF86D9D54F0147_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t305B9B37751B179420F66305AA26D74C3A0DED53 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m5CD57FB361E6EBF62A47AA548A0FFE1C0B6506AF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchInfo_tB688FB92123EA5763ADC1EC7914E64CBE88CD115_m83E4595E4EDA42A004B7D66FBA81FE6F43F4DE98_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBC73A8C580B890E0A51E85E9ACC74FBD7596F5D8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mBFB234403D303902894FFB4EB54A5E18967E992C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2_m237A2347D1D80E7070D6A6BC45299A73EEFC73F3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tEA040FDD2CB69B729E8DE418234DFE2D79A4A1ED L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mABF002C9E74D0CFDDB4DAEE69757C412C86587B3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBezierCurve_t9D2CC33508284289953A8A3A881F91ED39502988_m45FE7919C1E68EFA18EB5250B5E9436639DFBB4D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBezierKnot_t528BE6DD984DC35E0953B14AF9DEAF7EEB692CD3_m05E1F69C43B05740D728F50EA34D02C5EC25C69B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlendShapeWeight_t1C25C923D3E59C3027096C3A28F0B3BA31BBAF1E_mD884984B14D5B42CFD479135C1D3617FB4BF0F04_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBA3BE43F038965FA2630078B48CAF84974B63B4D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlendWeightBufferIndex_tF8CF0F3336B71B632F5883DC51FCE4A9BACA6ACF_m40CC811A964CD5152983037E7B00CE13B87646F4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0734604E3689D749A9B7F19F11006C20A825D7AB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_m208C42A02CC9F6F85249FE745ED89CA639E7E2B3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m8A1C522F736301032971F41F5F71935AE48C51FF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_m0AF06BEA4FD1692DCF068C6EDBC21C6E7EA9B360_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m4F8E14E073BB3466ED80C2096C863C1E1A49DB60_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC4A37FE4F670CE4681F5AD5FBBE68B0043BC29F2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m755CEF37289774CA34DDEC968D5BB1DA8D14E87F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010_m25E0D70379BE1E0F98BB6B05084D1211134D0687_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBroadphaseData_t283ED0771F35DEB34BC13ED55C73772D7CD154A3_m2695DC645A7CE8E32941480FE6483EA765136E4E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t117411FA725A713C12EB72E19B5C77DAF87DB6FF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBuildPhysicsWorldData_t2B48F1A635280E8C32969EF1108844731186F1B2_mDF2F9DECB5E2B0BEC1A676A30FADB8EB4FBF2B92_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAB08431F4227F78D7EB6F94D78B6E436CD14B0AC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77_m33C23AD6E68F92C5A52BB6791C79EA92CE57A9D1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAB1290B1D4E301B7A26D3A739B6F65B2319ABB2A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E_m6C145BA30C172E756783ED965084036BEF46F446_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t564AFA5FB599457961D70E63FF1D5EBDDD97253E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBuiltinMaterialPropertyUnity_MatrixPreviousM_t7BFFD7B8FBDED6225F4420CA00AC33BC83E94BFE_mFAD95A877C006FEE8992292B69C732DB7AA6C585_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5809B5C8FE60A40EBBD6FF6829A34736AF543A2C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBuiltinMaterialPropertyUnity_SHCoefficients_t543B714FC53AE0D9CBF0586C8B9F5B6CE8F5EF73_m5832C017D77A4FC4DC1BEAFC68C7DFE80A2C4BAD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t601AD77A331E531DD85895C9E70626747B92BB51 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m9674A4F7408E91C625C555944F3A0DF7689901AE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCPUSharedInstanceFlags_tA2264804A98F5A694C7AFDF536E9612C8C9E5455_m79B3F575D50540B66FFC77B5A89FB22A1B70D715_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t77B64176C0572D89FD510B6E3730C55F58D0F4E3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m965335460EAAF73C2B8BF4F8F7263F2EFC911E97_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCharacterInterpolation_tE8F7C8D12CC419ADFD6FE10F3D73C27B80ECC7E1_m7AFA19873A270F5F76FEC7526362596E620F6B18_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE0A5DC0AE6FB97668384DA90ECA05A13CC40C2F9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCharacterWeaponVisualFeedback_t796AA9CD94EC7DB2D0B0C006C2DEAADE6FDEC750_m959701A66D47C49FCAC9F5DB80616CA9899C6782_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1E9C46F096892450E1FD620C26CA2CD01DBC74FB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_mA6E573EF7C2C9368D6C6841CC5D0A89B13047F59_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t347435E1BD47484A791E09F72A3CDB5CB0F5D18A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChildCollider_tD7324951E4667897FBD59E29A4B3D2AF737F5585_m13E97B69D589514D1031C399EEBBE814D1BC9CDA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t78622937A5DC2C327353DFDF247B36A9DE562840 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChunkHeader_t3B1ED99D4C2CC2A8EFF6F9CFB6656451BB420F03_mC6D71D11AF7A319EEE8B4305DD2BBA6F479CF3A6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6B7C3DFADF425EDD2B5416A061FCF245EBFE1DA5 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A_mA74B4DD5112487A4D1226D01EFED078516DD083D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t50C0D8271CC500F6C997E20A0C2469D577BBC326 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChunkProperty_tFE8800ADA52889512BD70B3843D4F2F505D33A81_m0E17D5A26F09C8930BB74AD7F83C10622C0D1AC4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t22B037D93A016402E58B0F3ABD500E061B8DB395 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChunkVisibilityItem_t220AAC5BD7372B13CC8A41E3604981CD47327E17_m57967797F1121F1ED4709BEF282FD21CFC3E6989_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE842E8653E730971AF3BADEC8D67312A1FEE82EA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChunkWorldRenderBounds_t0DE3BB5E33AC5E26298EEB59F77F342AAC223D00_m74FB0B9166F4AA9A3BB609E90F0B8928FF5CB61F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D0362A7DAE9769C0E8B289C2E26515DF19B743E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisClientJoinRequestRpc_t6D91F8FAACB7CB9CFD19D787D15D231B53CEF81D_m1351A3E53C9FE09E17EF1B17F634C0058899338E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5DD71FE4894E8699AFFEB693CE1C4A638887C13B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisClientRequestRespawnRpc_tB0C02A3BFD936D488EFB1CEDD06CB605E94AA7EC_mEEEF7B47D9BC4C94D4F9A83CC10CA0538284A02A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCB7004B216C50D6BC325579B3621955649B57017 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisClientServerTickRate_t16FDBD0A027833FD92846C5F6B046820DE125602_mEADCB75D5DFC39C0DAF84EFFFC01BD653DAF88BD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t48A1F77AB11A92111E6BAF4636BA032C5716C5A2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisClientServerTickRateRefreshRequest_tF0F77B5239723EE12BB2B479D112D14B4BD5CB1B_m4D574F125181FC9511C3C32F38D617744D01DEC6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7707F995BF1C232994DD37167B442297C3A5C23E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisClientTickRate_t0E92DBFF5847A71B95752CF3292FD2FC140495C9_m7EEDD896EDE164CCB6114A383CAB357E7E56058B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9295114E578B033FB8C8438164DFA8D9868022CF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCodeGhostPrefab_t251FB695E997435E7CA76D3367859CE55153F128_m1E10D6337C064F43B19B52D9013425DD1AF21147_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9CBA087623C616CB0FFA019611C66BAD980F292C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisColliderCastHit_tB66CAC9AB42CCE701322D245A18D09CBB7474755_mF03FF833A0387BBDF77E5BB3EAE461688EA329C1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t35F0934985053F00A820F8138A6D585BE5DA7F37 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisColliderKey_tDBE6EEB4EFEF0384A4646B0E6002E267D2E96A56_mCD17E5ADFD0B912528CC8E19D566353B4C9C7F12_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA28518754A885640252AB6E41B62A128DB09C5D2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCollisionFilter_t510BABFDA15A5F9D69FE37F73CA499F64D9D844A_m877C2AC5F7E4590F24EF966436A082D31D1886EE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA0B681C291CCC6100CCA1A99C14122653C909BC4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB0E6C722DFEFFE3B487329BF6927CAE5E1503D89_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m6EDF08BE46169E502EEF61236BE7A5AEFAFAC16E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE_m406280B4D8246FD8AF28F78026D843E977DDA00F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE822B930A05E581215F4FEAB1245FB0C67AD1637 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCommandDataInterpolationDelay_tE699C7EF411A4BF6CC7362E99CDDCE99A9B6F14E_mC8AD9E01B34C7AF31940F2EE9268B93664E27D38_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD88BF556212C82BBD85421145E905C88DBB55F97 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCommandTarget_tEA67C6BE043BB1BBC06C4561C6829C20067BCC01_m1106D198E7C8636653A962410E7FD36C9FE2FAF3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBBC4AA9E2323DC9C47F7CBC6746D81228B7D9B95 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m3E8BCFD4670B7819DD24F750713F13545962DB74_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAE247F2024475A800520DAE016FD9AFBB078E73E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m0FAD0E7B47D56B94547543EA8DB9B8BEA4104DE6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3C4549E0042C159CF962BB776A84D2C0D9864609 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mC8670E87874255D8129887EED3256F46D814F4DA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA382EEE61A1BB1A47C7D6FE762A71DFA9BA0EC3E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m8A4B08F68C1E84C158987A00DD5A5AD01D7831E7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053_m9E558C4625898ED89460049F9B6168174777D72E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t26C4E7509C5B95A1D045ED360EBD749A0A957437 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponentTypeSerializationStrategy_t5A247B1736382F5BD5F2365F2D077754A9533886_mD6590AD7B55A97973266E6A49A3CE563B258AD17_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t26F0B9516309EAF2A04E596489E7D70637D71F39 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionApproved_tD5392D424254B664C88151D83D3A271A223D4452_m12301494EE1FC9CFD5843B48A28DA654A2360D8C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t95DE6C5C6FD9EF45122B1F1BA04F144A793D1901 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m57C8598D8700449AD3ED9550CA7AEF336AA3CA98_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t512F97AF64D482FD56DDCB57802B21523920E588 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionList_t44A2E822FB7BF1857B165A02353B85C6A293FA42_m0128D9F204CCCDC41D2988123E7358FD8D462272_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4446D3A4791B5B36BC3110BAA05D16758FEDFA0F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_m6CBE3EC65C1416B8E326AD62A109EDAC7E0475E8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFE8FC5608C99B21F217D9D91C0DC354AFB9B24ED L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionState_t90B0A9C543AF66A1223B8DE258A77DD7D8BA5995_mE13869151037896BC167247ABBDEB2A364D74946_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFF70D724DB3912C6ED32FEF2CB988A47D26D3FED L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionStateData_t7D728175B82CE019EC985D5D74EC6D16942F15F1_mA8179817C54DE985F686B44AEB7ED64BBD834B76_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t607FEFEB6E3893F1F37F1000458BD77D2C715F17 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52_m94069D61372A0FDB0810E7959C2E53D6067707D3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t31C7EC4320F3BC4BC4EFC38000AF6D29A68F756C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConstraint_t2186B4DA3C0A8B41658D12AB2C5472EE026BFC68_m76960DD18E2BFD6ACA23BCCB98FD29F729E0A5C7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE58B174A1ECD58EE69C68D7466C1059FA1FCF254 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m40BF337036199BB3C5FE16C61E3F9C4B3EB1183F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContactPoint_t47F477F7B3EC7233E0B35F9CD2511780810E94C9_m115CD27F581F1D4172955BE3D633A9AF52C59C73_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5D617A065EC1FB669EF5C28E9E231A0DB53119C2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030_m0413C2E3B87695F9846CE02FEC8BD2B4FF83EDF5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3D7B0AB83CF986E76A9732777756458790892E51 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B_m8C17C4E1CC6BFCFDF80CB325BD9B3EC207F87954_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA6D307ACAAFEA17D2E6F00BCECAF373BBDAE6145 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7_mA7B67A0E9F7D876E74628FA0DFEB2F7EC7A422FC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6C0D7EB480758563A7C1B31DF3FCE01067173437 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m85AB9C342A0ED93549F14704A3B0E6644C4B94C4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisConvertPredictionEntry_t1B07A72DF2518B7878F133F0F9BCDB52DB87D856_m873A54115D8425F816EF169B48539670601616E7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t64E383A94897ADFD25BF31F5938417656E08AFEB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m480A28B46FE9D731DF33CCA1279C6C266B5E3DCC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplitData_tCFA8EADD67BB0433DD4A1E9A32838187FE0B0B0E_m23BAC943EC5EB794CF476C6085A9830837A7DEE3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFADBF6C864A6F8200B7DD6B2EB51E826BCD9407D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCustomPhysicsProxyDriver_tA12A54FDC4F2780192F2BCB674A38F48A584F225_m2FC2C0E7CDB6EBD7F979E733C44F7A78F68167A7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB93492AFEEAA837CF6E30694216EE9ACE2715ED7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_m93F9EAEF099E375AFC04B405CC7A6BC5027EA6A4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83F02282C33BAD818D67110F7760483208880311 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD_m0A994DEA15EA8152B49FC0372AC9868AFD30502C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t83F02282C33BAD818D67110F7760483208880311 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83F02282C33BAD818D67110F7760483208880311 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83F02282C33BAD818D67110F7760483208880311 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83F02282C33BAD818D67110F7760483208880311));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t83F02282C33BAD818D67110F7760483208880311 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t83F02282C33BAD818D67110F7760483208880311 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83F02282C33BAD818D67110F7760483208880311 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49_m21BDD8AF9D8D970CCE1D7954BDBC125D4DA945F0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t197AED29D4CF7A6BC8C6C69B7BABD82BDC8475E2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDeformedMeshIndex_tEBE2179D4DF3A39AC97BE4A9F245EE6749F89A0E_mAA3A3AA7365C1F142B515B81AA3B5508E44F5373_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7B642B94A685460C3BE4AECBD0C2FE5319850140 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_m01C58924E8ADE251BE4243735B8AEFF0DB9A81BA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t951CDA03585BFE5FD2F7E1BC2A7D1AEED538AC9F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDistanceHit_t24623CA3232004563796E8AA41E409369C35643E_m4C25AAB752AD2EBFE3721F2D283E7366D3AF2AF8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDE7D1A262358F57760BB4BF21C49DC7C84A2A2FC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDistanceToInterpolation_t88DD77AC188D5F202C38FE6B29DD721AA84DC6B8_m705B46D46013C3958FADA741FF8DD09C3F593390_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_m19E8B54711D837E4F2AE63118DCD8F58BEEE6409_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mD8C83E07469E6FB0B7372DEC4C0B2ACDF41E5677_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawCommandBin_t5539B12FCDB48E97B70D54E10FD761C65A739361_mDA53911E836488679BB746357EF8A9A8C0692793_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4FB9792AEB6B2280949E3673E3AA9ADAFC06EB0E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mD16B2C2213E8AA4A8EB0579B2F6189E878D9CA66_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3BAE061C341D85B41936E0A0C161201E61ADD46E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A_mA04C197E99464BAD99FA105167EEEA92CDB66833_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t361A106E49B67CCE754C8BD715CF67CB4BA029CB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045_m5DBA7987A32F15E1C5DCFC4C711C052A85F61AC0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2D6260DB3CD965E92D50516CE3DEEE6F9BDEEE25 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m7B72ACAE1A0CC648407FEF776769C024F8DFA93E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m9A2A23D0381FEDA95A4F04370A4C65125624474D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mD66D1CCCAA9506F6F6DC88A28850D42C3D2B8071_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDummySimulationData_tF08233F42595C527B5309E9066099D4D24B216A8_mDBF7B2854D71CBB6D2351750A228EA9E78BE535D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t901ECD5B833C0B4B1BF87EC3A3555CB111686598 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92_m8F17FD75FA25C6BCE85D8B5E714F626DAF25A16C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE793742957D25E24A09FA36D78B4DCF6D5BE94A1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEnablePacketLogging_t84B9F5180512B911872FC51A810C4EABD128BFB2_mB21DAA864F2CC73E75A5AC6D9FFF79708F3C5981_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF5411DFAF7E7F76043F894DD2D95D805E523D82F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57_mDEFB472C06720199ACB1334ABC707EC889601809_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0C7D07A0FC8CD39D09261FBB8F96588348595152 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mBAFD31F27D75CF52FD1FD82409B4AEA0F841B2A6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDDBE2218E06075EFCDE280D90B6FA7C4BF46BFD2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m04C8B82620C74F839F8E08F1E8643DFCC0939014_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC67D6CD50656C66078EE4C1C9542495AFF22A619 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C_m7985C4CEC92701F1003646F067986F3C2579D728_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t49AC263153C958487B0150441A1A04F615D5D53D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008_mF788023F4C8C3245B966524BA2C4821C8D05DD1E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6C765BC4F7694A2D629A2DE995AEB562114FFF21 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m9810D8BC031562E9589305B081F2E044ED1FECF9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB_m3274655C221C6A966F72FF587DE462A0741C903F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9823D36D1B168800D0829481EDA5A64EFC00DBF7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mF23C99FDC1489F002639ADF3F32EF51E83EFE5F6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t914A2D89770088554B462280097B5C6823D2C33D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_m37C2E50563E20AEE96D479B734890922560FC097_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFFF7330A86BD0EA49FA225D7292A54A5812EBD21 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m7A28844C297C48C31E43DEAEE00558D89BC52EFC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54_m8E462D7B5B645D5E96DF78DCE9AAACC2EA8491C4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t33B206DB90F476E6A10A7E4D22B58D7283D09D71 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5_m84AC716BD6F5902F3B0AF7DD39C90588F9AF13BB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t887583759B0B3E1D800DFE188D9EEDD4B2358165 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_mB4A929173F05467247AB44A1472204598526693B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t71537D274958C61326583C5100B88F365C3A3217 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFirstPersonCharacterControl_t6249D667B6C51009BC3C5AD5E0C1B1295C415FEE_m5F096335F9E219885C79FB861274708CA37AF880_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5CE669C4D790C5C06F7065ADAFF2A9A6ECE6A515 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFirstPersonCharacterView_tEA7A1C5EF91AEB190A4B88295E202F7F79BBA2CE_mDD9ABFD9744C0D39B9793E939AC29F3CB17EEB21_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5F8E3DBA094415EA43B8B6FA660D9F320C8768A0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFirstPersonPlayer_t5879DC168D819F278E90BC0417DD9E5CBD015066_mAFC2B90B177391A9F3946F57545EC500A88A824D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8D0B2F203E062857792DD249239029877C2A60F2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mCDA80399D5E374F9D1796290201252F326CBACF7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7CB82EADB7EA759337793E6ABDB42FB140CF5E98 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFixedRandom_t4D3428C8755DB2D3C6F470BF229B1EF04C1A5655_mFC4827A68E1D94D76D1F5CEADA0320726714DC8D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t45A0C4CB148EA18EF04216B2EFEAE4E273629377 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m08A06524BE749710D45A63F714D96FF9A64FE284_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0215017C25A7FD4BE98E0A8000F004E7D119560D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m94DC322A580DDBC4B8B71C7A816AC890A277A495_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1864D78BA2DD264CF10C4F534C4A53B8D45EDFC3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m4D54E4A129461EDC7C49C1D5B0FDF4F0B723FE56_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mCDE85B8B01D580AB332CAAEACDFC6E7560A2A2F0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFC2E6F1CABF1D4EC4835DF525E14B1B3ACA499A8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m059A8D85858F860EAE3A55C44915C45DDF29A8D5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m64065F3A83B6E49F9AF8346B2C1BD7DC971B1E48_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mE101F26626792732C8CEF56DF3B4833C02AF8575_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_m4B2F71EFE8FAD59AA3544AAAFC4F2E1693DFE269_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m05C0DBBAA74D041736CAAB8D0A5357F215A3E43B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGameResourcesWeapon_t33BACCEA8139E13C955BD58FBDF6E9AE03BF9BA2_mA7F9EE6BF217F769C67086EC929353B5E94ADC0A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCDA5D72CE182CABA6105108D63756BD073CD1328 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGameplayMaps_tBCB9867630673AB8E660939CDACCFBB4A4726ACA_mB8CB51ED49309086366F1B7FF97E5DD8810A96BC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC9DED7D0ADD46BAD5622BBD92C31F5F3F315DA0E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m56282AFC20E2AEB9EFA9CF9AA17E961C830F5D7D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostAuthoringComponentOverridesBaking_t98E01A7545E5340B9098374CE6C560E5020D6C1D_mD9A50BB9069417EF9F29BB6D90633A2983CB2A0C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5C396313682BBFD73B4B926BA97B647A1AB2CEC7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostChunkSerializationState_tA56091075FA8D7F6C83B3246EB50A95CD09074A9_mCE66497A8E4EB794D61B64E4150746480932FDE1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFB695A180CFFC066AFA59F003A4026E2C940D469 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostCleanup_tE96F7C9F4DC59AEB2C9996CBA308E8A0603F6BBC_m074855B1D773CF760E29EE196A4461B9BE8DA383_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7A7BBE648355EFE50CFF8B0D8C886D94BE679F32 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostCollection_t13EDF41F2078D02C47FB76ED953412292F745219_mFD11A6D8CE0AE615F2AAEBCCBA1040CEF4E82646_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6AB3EF80807AD8F7507AF776B544170E597A21CF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostCollectionComponentIndex_tAED81E493A6621B761612432F7D2A0374567BD84_m3EF2B2FA112260D5F829C8C934747F914AD9BB3D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4A2F0639AF01762C8CEC34C90A8AB87030804DCC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostCollectionComponentType_t7EF415FEABE7437F67491C2EDDF8D6FACDC9B773_m3356881AFACC50CBE00579196FCE8734F21AA530_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB59F158F7040DBFE513307AFD84D251B1F482A31 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostCollectionCustomSerializers_tC24DB814691A70E857C3833A2C852379861896F1_m39524C491F46464AF60D521AA888CAD11E81E88A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t476D857897C84440FA9633449FB621B3F2404D1F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostCollectionPrefab_t8AF4B66BAD32F1BF1FD8A7E9B236EEBDFBC81D60_m2B039B163D4088E27382885DBAF3E29B36D58011_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t33BFC6CBED2A084CAA52D89F289DA6D6C73A635F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostCollectionPrefabSerializer_t43AFAE5C86BB6C5B56B6D6CB98DB02A62D372453_m3AEDDAB4DADF75B7A1A6A642EB1C2BEC6B0BB0B6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC19DC6D6AB122468D25FEB5B8656CE478512E72B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostComponentSerializerCollectionData_tBA662EAD4B94AC75D75278CE1D22A56621C92191_mC1239C2DB48BF71E3338CBCD995D74EC10F00B42_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t896A3712D93069DE522E71F903D652262C6AA7F1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostCount_t28FC783F6F6AEE97C5F7B67CA58CA6652CFC1083_m1D0C23B64D79CBE20B91A40CA2DEA679F03F8C83_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD44624EF02E4A69C1DB4D40D652577DE586DA0E5 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostDespawnQueues_tFCC28D3C6222373756344D11F4950B1CEF4E1B5B_mC715B41042AEAF2F0BD7F67B5B87DC2A4B9947F2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6957514018DF72A7B014ED1B515D9459F560A9AE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostGroup_t8ECA7AD607BCAB38B87CE278F14D44458FCE6891_m00FFDB663B55C5DE51D5D0ED9D7068D1F6A37425_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t76BCC550F069BDA1E7BE24C3FFA6B4A43B73A912 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m2F3FC8E7BF5A7E5625FC0AE48B24953198F1EA8A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDDCFB351B53C5C36D04F6310ADD4FF097CDF01E5 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostOwner_t00E10310781534F6A1E9BD56773C9BEE64046FE9_mA449244BF2E323DF5E483C61DD793582DDA83125_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83847F491430B5D9424F45740A04898226BE24BD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostOwnerPredictedSwitchingQueue_tC005A4D4732805D5D7C6FB393E20241F47551491_m722032EF49AA17C27DB165AAF6A4CC9510CF1D45_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t49711DF982C1D036575B22F71A742B5147BE10FB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostPredictionGroupTickState_tB8F7B7A4ADC6DDAD8291FA77A797B6BFF50BF0A2_mDF675F0BE70DDA78A02AE2EF22BDF4479E3EE0ED_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6F38ECDBC6A661B78FD98628E7D9AE24C5B55E20 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostPredictionHistoryState_tD55DF52D9563D83B55FA94B94BBF30A0D9F9DC28_mAAC7042FB5AB5E8180AA48B311493CE245EE2634_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t31774FB8EC1F62E59293712DD840E68B1AB92BBD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostPredictionSmoothing_tB6587249ECA5A9C2182026512CFF914FF75B37E0_mF101F34B6AD45A8D87A9B5E5E7D5C10DD8BD0870_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBE9A8311F45B30E6303239CB48900FF742C328D6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostPredictionSwitchingQueues_t766AA5F381338A4D531193C3CBFFFE35055BA661_m069E7107384D14C1442BAB454FB68F7146A697B1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3F92C9A023D08392B9B9D2ECADC5DC03814455B8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostPrefabCustomSerializer_t4C929C0E86E6C703F1B42B96A2F7FD598DE86DE7_mBB3773413BF0D0AF15B7DDCCE1AED388EDC97B16_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2D03C177A7B2EE518DD12FCA239B89B946B6B2CB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostPrefabMetaData_tCF69584BEDF11A9D0486F3C9211F045B8C0B9544_m0928A0CEFA7C0028B2CEB825F83F5C88CFA1A06E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9EEBF217F9E15C2935D36EA9914F61BAE4CB6F39 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostPrefabTracking_tFA42422DC954B461D79DE19415390FBAFFCF27DC_m4CDCAA4516A8D03BBB76B2C9AB7243650A5B6C21_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2A96909EACB813CCAFB4C6CA4544FEE42BC777D0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostPresentationGameObjectState_t4F0310F7B47CF37DE88C8818451706A83729E32D_m9CF6A231CC40F3C0DDC3FE3C5D7352A21E20A7EE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFE221CE98A268726808212848FBC1DE99A99302B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostRelevancy_t24C834524E3673B5061DBA61F39D29751B32D659_m65C5C04DF9AAFBFEA7B144072884784B49F7E361_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t77110F77C9855B81E9935B765FB90E704D341A29 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostSendSystemData_tAD3978C66B82BC5C4FFB9470AD3CBF2B7B2EFC84_mF129DA951F5F5701A792712CEBDD49C066014522_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t11BF3187A4018FBC3C8BE5F397AC28AA897384D6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostSnapshotLastBackupTick_tDE3EE53D10E5A0F839C2BD162E0F100B1C0E3C43_m008A0ADA3AAA062B7C4D3B7C72086F908DBABD42_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6BB892FF29EFCED8A2594AB999B78CCCD671E753 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostSpawnBuffer_t1197943A694681C3FAC0C0F3C2C09D0F6DA9A1E7_m61E4F40A04BBF99554C519DEF0E72DA1AF5C0798_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t58FBD9630D09BB76F32A2E2F791B0D909FCCD2D7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostType_tA0682225DDDF8FA7FA48FBFF8B051400E320CB5D_m88F7986D7C75D52EEA9C7C28CD2A025001B9F78F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t831396A7288A24AB90EF6849275DB1C745502085 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostUpdateVersion_t74F31010DC4C97BC537DDF95D069CCE7A8EE6F3B_mA0F0FEF2DD11942193EC5E0284B8DFB71CD9FBBF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t69762E0B6C07B7CF17F5C88B4A08CFE10B50549B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGpuUploadOperation_t39F13CF397D975692B4BCE5E300604E3AB8CA152_mC3BD8C41AF89C163754782DBCCD33BC2290F4C2D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t01D413A3E0996C46F9F186285326D23766CD0B56 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_mC55FAA3EB154DF123E9C8CC2FF7B16AA9B3EA642_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t67D64CCBEB337B3416FBAAEE315A81E3ACF74E6D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCAE1C807F78748D2AEB8BB349A39040C1BCED4DB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_m8C47640C71447C998C7B794E8A8E6B873B193F12_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t791A025F0EFEF75A2ED37D2824FB60B4A97D83AB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisHealth_tFB54B499DA2B21DEE147914FE3A4D44341A23456_m3ECBAEB716128BB09CFAAA52BEA71E89F813D316_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC283D6F89CC174768F88ECD0B747B06243CE6DE8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisHeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D_mF1E19D975F1E89AAD1C98B7062CDD94053A0447A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t171F4D089D87D9CA662FFD3ECA2DBFAEB4CC2E1E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D_m11DC9736BBC5F700129B47DDA2429B50B2D04AF1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBF1AD711F15837C65F0CC41DDB5DAE89E7302C41 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIncomingCommandDataStreamBuffer_t2976645F480CEBDE41DA0C7C7087249B04E21C4D_mFDE4F1071F2D562759014FE5F931268F398ACA4C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t27B01651ABD0E4410387E79E0CC690C02EB5C046 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIncomingRpcDataStreamBuffer_tD03174E9942E49474F1CEC1EC0D0EF596F139C22_mC4B97EC735DD7335A07D7DCAB3C9305A0DC5DDF8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF70121B7E34CBBB501D1D48CC155F8C8629FCFA7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIncomingSnapshotDataStreamBuffer_t5C29200C6E1F8FDF5571186643DA1D42EF44DD6C_mB837E152BEB161562DE45D30E20FF8EE8F0A3925_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4CB7D392FE433ADA5F189A14ABE1EA3F92674900 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7_mA5F4D96BA650A566C75C7D8AD058E57F08B27CEC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDA86883555088DBB263654CB442539C56B8E30FF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02_mFA74E85E28FD17DC1E32E5417CCBA2CC4C958FC7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t010CFDCC413C944832DC3E8129AE25C0D1FD6876 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m816FA654C16D64CE46369D4EDBF625810FC89F70_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mA4539D16749E7D83164A9F6906192D1FCD4C5D8B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mAAFE1179F9B4CA07CBD41970223DC6ED11530ABF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m6B3FADF0EA830D6822DAD73DF2D447F0E772BB20_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mDA93A492E48B6CBBB1A09BAEDE60E20627139DB4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m4266917B7A259822746873167BDE234747BF0E7E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_m029AB39649EBCFA2D32D3466A10C07ABB3F05FCA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF3737ED3A12338AE7A41EB25EFAF1F04CCEBEC28_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6156D55E581B498FAFDC9A42F62AC015415FCDCE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIntPtr_t_mA88F44F9B0C74809C63EB8A8AD5076567744C3A5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalQosResult_t524E2DACBC5C86A098DEECA90D8624BEF0A2C7CE_mC08E35DC66135D6E64AF0D55CC13F65BFC5E98B8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t14416F5A54963FFA0912C5FA738DEB565659C8EC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIsSectionLoaded_tBF08B3985E7B90393E9188BA6E4FE4B612667455_m00756F88C4022711247A73865063990EB80FF534_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6F100B92A5209DEF8F85E8EF80B8281F7E41524F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mFB2D349E4B6291E8DD43B9626AC2CDA81B127A1F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisJoint_tF53F198CBCDE0DB6E5DF1E7B5CCB695358CEA3B6_mBD4060E6ABBBB4411B776FDBE2F7969B36B9F3FF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDD90ECECD4EA167A0F2F20B719DC3ECF7E1258D6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m43AF445CDB2A7CCC81ED76C7D8FF2687F9800F7C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t18A37B1042ABB17354B75D6410D64F5348819A1C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisKinematicCharacterBody_t4FE38C7EDB4FCCDB531BFB4B0E69B0E7AC809584_mDC0CE47DF1B3D0A8C1CC31A3649B9E75F52C5095_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7E44A7258F75946FCD2BDE05894AC78B4EA99E03 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisKinematicCharacterDeferredImpulse_t86E4A087729C97348568B71E272A60F00CCD548C_m13CBA96386CFB239D1E050CDD2CA998D7108A68A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t069C661A084B20FCC9ED526AA4736E56403D2F7B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisKinematicCharacterHit_t864D62E27E83DA16D4B4B0C09A7BB167D7A77628_m6C80A11B1B406EB2548D3F2B66F322B22E99308F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0A0A971BB9D5E6CDBAB75C0F4DA5D4DD1075B84C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisKinematicCharacterProperties_tCB57F0D4680F14E9194DF1035286389926EC5651_mCE490CE1587FC7B4A99EAC89E4CF73C4E6DB4C18_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t861B15633287C8526D088255122985B71B5D05A4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisKinematicVelocityProjectionHit_t4C4BA3B45EB433F6A4245F023D5533DEE19B7F0B_m13F066E5806D89D11FF3D3E4C010B3BA95F7CF8A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t10169AA03557F49DD8206EB8935C2BC6FAD4B1B3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mEBFD0BCF5A3F486A7572E5BE74BC1B1B6B0DA2A3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_m1E2377E4F44889C9FEE11DECF263FDD2D9CD81B7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODGroupWorldReferencePoint_t1C378B661E81968AF1118358C53D86DA215D7C7E_mAD88E256CECA99EDCDC39AA6F52A2419E1CEC73C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6AC30215645CF6500FADE0EA446E4F068DCC5A95 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43_mA7A9C069BD27B1738374121971C13F323FF795B7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF0B0A863EBB23C124252529DCEE76B4EB4808BC4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODWorldReferencePoint_t21EAD8082967CB50E841485D0DAFBE001E3F4E4D_m364A58CB39A2AEAA324213DBC730366FE0B702B4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDAC15E71AA2BD5B4A2E5DD2C0E8460EB561AF0FF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E_mDED653F395C2CD8E9395294BD5ABE61D2884ADFD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8153A0CB17A2E2968DED8B39DA398F2C5FABBF33 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_m8AD8F9C52F686954AEBC5811990118359B2134F9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t525165F759B976AB757BAD9E488867F0B2A3BC66 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD_m3893B74AA39A7750BA5ACC2B4F148DD0908129A9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF1C3D607186B84FF3A502AA5F6C4EC3BA4F0422D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_m76F08F94E3F77903174D99A7A378F3C123E1EAC7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_mF2D1463B9A092CCF89C645FC8D379D0F976107F3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t34AB56C59781F569885F962002ECF394D076574C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m2F6C34A9C4384EE89D2368AEBF483890FFE74552_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9DFE9C1201BB4FB9467418EA0CEACFD8A4862D14 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_mD701F90C264874591984F9A3A46850A60E51A339_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1865EB3B9A20AEB3CF632D3FB78BBF9939F36FBC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMainCamera_t529D849A6776E2D80C8D4C23C10249F79EFE26C5_mE9B6ACF7A23A963FB66D120B8910886E45122F9C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t15B941A956E61FACF2AD771DBD16BD7DCC000889 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMappedBuffer_t4BAABC09EAD5812AB933A8BA242095323D4282C7_m0CC98EE8CE16594960221BD95B3435F8B79BF9C8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t884FB5BA67FA6B5F3A32AC599C0A200654023558 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74_m427A894AADA83237788EDF5B99971E3FB5A78F83_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2B444E5FDF0DC66BF910AF5DEF72B1829EB4777B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_m41A33FCA48DD6A799AFEC33E74D3891C6B841A33_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8CF414A4FA4DF9B56E716BCD09A982948D550B5B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m494D9B80C6146C32F14E344B8B8BA1326BAFE61D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC5D133C00EB18CEF14607F8339CB18D79BDB8A3C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mA90E8409D9EE202DEF177641757AF3E4F8C3C180_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMeshLODComponent_tEC7D454A01180040B6C5AA441896A4FB66630910_m99321FD86FCDFC02605A0AC003EA2362D5558289_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t524B7441508418E3DEFBE938B92A27DDE0C9444F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMeshLODGroupComponent_tBC1E27840E50C37F1244F281D24AAEB721FA15CC_mCC9FEF3B526C26CB414C90B730F21EF93E7A516B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3D0994C8390A7A9D2AA2FDEEA3CCD29E765BE6FE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E_m3F16698E9BC2A55C3560B9C5C6256B3D7C181CD3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6A549CFD68E0CFC2977F561865CFD4460909FC20 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_m32777023697429BD482C23B8AE3705AFDB8CA7AE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mFEB8AEAAAFF7FA2C9F9DB47C43E9EBA4FB2B85FA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMostRecentFixedTime_t6DD27BCC3288C652C0426E31DA2E0D25B8BDAB83_mA4EF25914FD9D953A36A1EFB641223FC1500264C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB2F30234078606E98A4CD8C030116C2E4766D0CD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMotionData_t90ABA558E7577C91268DEB49905473E71E49974E_mFECE8DAD2A6C909F100BA8D6A0C9D41312E934CA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDDBF0AE8BF4228CBCA85F33BB947447674AA5304 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMotionVelocity_t5E53D688AE1A087361B8A2DE3B4D3FE91F5478AF_m80A79FA6C496B1458C2713D0A9B2540902C791A2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8B393DC14316BBA05B8838269BD2A325BE49081E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNameTagProxy_tC75B216CAA468B970CE6214BE3DC065664FAABB7_m3B6F6B2C577D5114DF248D35BCD7DDAF59A195E9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2F482F27327E618FA146ED5E618E3E1604938ABE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_mC90919D86A65311D178AB87BD47755945032DCA8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t015E47DC583B21A737451644CDA72BC7AADAD7AD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m8F03D5BD6E05127DCAEB6114E4D838391FE69103_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetCodeConnectionEvent_tA3247AEC4B91921B5E89691221DA3EF9A3018F25_m7EA2E778F01C4B696FF5DE9BE15585A2D9D18D20_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t31F5EE72020E4F87C61FD34DEFB4B8C979610E60 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetDebug_t04383CA2B98C846A55C5A8960A6CCA2F84B8AEB8_m9EB33B3B2BA8B619E985BBFA243FA04E6B198854_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF9909513C4BB4CAF779A5CC5B506EFDF42FAE664 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC_mAF708412AE11F33B59D2681F4D5B451A55C8C119_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD5B3D215346B1527FA237140626E9D632A0EE488 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkEvent_t4F520D24065EC589593AE1281E955525AD11233F_mB0AFF399D5D819317CCB2B34D76F8AED7DA2F6C5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t005FE034BA50F1CB1E680D9402CAF28BDD593D13 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkId_t15A7021DA0A22D42A3251B2BAF4A349D27D8662B_m4E5977DBE606B4B7E0AF3317D2FC40C506C27F26_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t826AFD0CCCC41A2B400DE0DF9C317128056B5804 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkLayerWrapper_t6D78DE474098851EC3C82A6085753A4BF1ADC5F8_mCFDD8CDBFFFFDD82A0BD4E3FDC4270F73CBE2B50_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFD0938EEAF41C2851A2A73179CFEDB174413B196 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkPipelineStage_tEF17CBE5C7F718292F2E9F3E51D727D672A0400E_m979FDB35EA8646E4288380EC687DD4F683947EBD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA_m56CB99CD03C21493CCFEC557A63C91379CC69111_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFC701DABE7BF60E65C1A8BB1E3366CEAF7734267 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_mC5E917F3BFC2323651297B44E97450393BA7485B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC780DC4716AE0677837AF5007356A4E415AB3CF6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_m71F0C559FDC0ECBB4F294AAD485BBE21BD0E063F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t76972B99162E1413E3BB33503BC785E73B2D3157 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkStreamDriver_t09BCA975B6457E5C7517A235088519050F9952B6_m1CAE32CCE14BAB256FF14F57CF248D8BF6F459FE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t27E19D4551565D29CCF2B782B382304523574D90 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m7F828CF8B8A04CF12F60C59CA5D5D7604757A2F0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC55513440AC5AC3EE10FAB25EFE958C1B7153B15 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkStreamRequestConnect_t8A003E604BD430EF9D524D885160D859CE3EE9C6_m8741197C28C3C85712942C8E5225F84EB43A1730_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB17DE0EB920671AE66355DDCA39B5091A41F779F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkStreamRequestDisconnect_t4D1CE81C990B34C77F1D5C540F735C8C69953324_m79A4569AB35358D22E160F9503F1A2F93978B45A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t479C51E7D1157949D7DB0FBEBF86D726483DC10E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkStreamRequestListen_t1F2A0496FE2F704E78AD378D2C2F63EC3D85364C_mB8DB77477677C5EA7DFAC837340E2378A18858A6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD0BB44A20B8F0EF0706CFCCA68C92B7B0055F92D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkStreamRequestListenResult_tB58EFFD177B412411F506C31EE40E0359B1C92F7_mDA665AC53A461A2DD49B85EE7DE7FC8F94D093B0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t940B40882944076CA9E4F42C600D65AF834BF3C3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkStreamSnapshotTargetSize_t8D21D93EF792EABCFAB2598BF79BB34AB1959274_m360BE487A29860548802CA2E4A454FAC9E2CE3CE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF670175F4DB3AAC12143DDF0E772C167E81A6825 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkTick_tCF61CB74133453A92178246242D98E093DD3460B_m15565C530DD32CE964E017572F5A361DA2CD840C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE1294FDFB9C9BA4B9BC505B483704893C46931D4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkTime_t93D3431C358BE7639C60E4BDCB44756334ACB65D_m5BDAC24A2975D7885CCF548B08CE81B26AAE1142_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t769616E8282D8A1CB5F5BF1BEF802818D8698C2D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNetworkTimeSystemData_t6CF678998DCD95CDA09785B46DED450CD8874A53_m3FB7AB522D98CAD34664E1387BE2CDD1573DB2D3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFA289615DE5FA92C20C4F563E9756DF0EE3C754F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNonSpawnedGhostMapping_tC601C67380F0A0B83A6F1CA537A736C6E567CB46_mF77645EBC4333431E7E54720A4F3633A45634C77_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t61238360FA77E65A340995CB2A71F07CE155013F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m0A5B94994301656526BCB2210300A9169897FB56_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m4744C0407CEFB79D0C0A3BD47F35FF1FEB3B30CE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933_mF19675CF01CA700B80E9BA85A36562951EB28612_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8F0D14C1F4EAFB3AE60DB55E5E05E84CEA614690 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB_m1A1D5FBCF07D15B2241EFDAB6FC410708F0EFA50_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t64A170A060ACF969546C0A9E3DB21FE7ED7A6672 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m96338B3719212EBDE52AF8EC09475A3649EE8717_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m6B90BFDAFDD0E6429A024B7D2687D8BC0DEF1CA5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOutgoingCommandDataStreamBuffer_t74C9B36A80DF8A270BE763F2EBA733C6FC5E0A70_mCC1339D174BF2E37A435EC262D87878B9CC83102_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCE55B0ED1352B12C762AA3BE8ABD548F6761D2CD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOutgoingRpcDataStreamBuffer_tA2631406D1D633441A581B1296CC8DF20A8BF670_mD3B38FE2DA70DF0EF68EDABD990B694DAA56EC72_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFCC755A466C1B24E7A77E89BB62AB980CDDE76A9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOverrideLightProbeAnchorComponent_t504C206585014F2857B080A3A841B78DB0CBE1FB_m77CAC8C719A7D82014B2AFA1D2B1F8CF8546BEFC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t32DBD13ED4EF1BBEFE6AF0A2FA05FB228087E274 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOwnerSwithchingEntry_tF0A00B878AD1803334AC911A66215B3AFD76CCDD_m78E6B35F65AA9ED8DE406A93388F57DF3989E09D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAC83DDF74E84552892E17EC06CA99F46597C1BE8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_mA969B25AB1A0764DC4FBEBECF5080CFC32591B65_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_m1463E1BB9338E1569585330826D32E0B230C42C0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPacketBuffer_t3B409040E4B265E35E801C3924AC76644937FDBB_m1C9BFDAEA9B405C37AB16F3B6B5B066AC1B16CB4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4AA2730E35F844E92577D6A06619355C95053E10 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisParent_t473162287DAADFBE8C1A231B52DC5D0C80687304_m15DEF05D9F263A672031589DA3D058744EFE4CAF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7E63BC324672FCC4821FB532E5C8DB9B8BEB0FEF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m7ADD3AFFD57BC4770938F5FB32FBFF8BE89F6EE1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m1489A9555501A9E821E0A3BD2C6994C50E40FD3C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m632BA12D479333A12C14B2002A703717C39EE016_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_mA785BC209411703763A82097C0E27A53D2EC379F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m520582A88E9B6123B4C704D7DE3DF277D998B1BC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756_mCDB65E7A14411B0450BF2C70E559F5731CB6272F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB8DBFDDE49792E65893B3DEF1CC0A08E1B8068A3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_m284F714EA50462868CE8E8E80309A4BE43A05756_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t88895D152CB944B346330427078B21AC06D1000F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsColliderBakedData_t88F29679E0F65A704D5B2ABA268A9AD82BA3A0DF_mE60EA5CE304A76F80E6872391EA21228EA35BD0F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t478D53F437A3446CCDEC74737604A83D88CCC550 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsColliderKeyEntityPair_tAEF837B39E3949BB41536084707EE655C69D40FE_m575D99C3F1E03DE2E6FFD8E75E96946CF401AB0D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3A7BC73D899FB70984DF39DE5B5046B45F659791 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsCompoundData_t25E7A437D24DFE2C810FCF3B2B950BB889513648_m816FB97C0E2E7EDD5B98E949664B6734675E2776_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9A8A299452EA803B083A0592C1CCB3199332E240 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsConstrainedBodyPair_t11C5D7FDF2C7D1E0AC01DD9AA0E95492E8C14728_m9BC787097766D10C8371DBCA95E8ABDD3F1C0D83_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBA8D8522223BD35416C4D4C5B27CE0C8C97B09EB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsCustomTags_t3E62F244454E39BA2EF305D335EA418EC28925CE_mF07A4D65797AED6D4936A73114507BF69FBBD707_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA4E0271C9A8F12AC35B57562D50A3EB404A0EF16 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsDamping_tB2281F931BEED616E385A1C63DB97A5089C9259E_m0288A0B74B89C99370CEC943A320607E84C6A129_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6C55C05E791B2E7BBAC8085FEDD6A460B4A45FFF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsGraphicalInterpolationBuffer_t4425E9311BC421D1E03F6699B1CEDACD6598D8E9_m516BDF0BE42EBE6C29236DE9C6486A09B8500941_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6CE57C15395FDB32AABCC425E9ED9AF234D4E2DF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsGraphicalSmoothing_t9C3A887741C265D0E64E04E05F9FB8DA8B2716A4_m1026FAEAEBB11C0D7B2A71EE0538512AA8B502F6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0A6CBF714820E739665FCCD3A7A7503B822424D4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsGravityFactor_tB608287B830717BA7D35BEC77D2CF6A39A0DA8CC_m830EF716388EE40D00A4AB72B0533D9AB0396BBD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3B787206BF4629A3973A3EE763A51C073A45BB16 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsJoint_t7E81076F134608B1FDEA0070C11135E9B30A0897_mED91DE5C4DE27A67F30686D49AF6A04E3C56CB28_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC29D105CCF3F66DEB90A37ABA800015576A168DD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsJointCompanion_t22502ED52DA1DDE59D85D11AB7EC77BB59FC02C9_mDFB96DCEA10D6814CE5D05A91B8C8CC526D928DC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9375A65D46CAA0BDD71312624DC8B450269F68B9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_m4E911FB66A9E10F6B30F596B9F7487DEAB6202F2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFDDADEDEB0B9DF41AB4E673CD2FD690689CB9B5D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsMassOverride_t4C8B1404AB70E3D18FE08C3AF27C6F8B6D0228F2_m8464D4AEA52E87E66D9B6BED77695FE58F7E988D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC76A1F89213AABA428F1A27ABFF9DD010D8D85F8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsTemporalCoherenceInfo_t687207DF0B7ABEFCF3D015765DE3B943AF917FD3_m498AE76406F91E9E58566CB624B4D5FDA2A0E9ED_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB011277830330E1AC0041A20AD4A7D8D6035FECA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m6673C448EC92643A525DD1919490431B0E704633_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCEBCFBA3FFB618F277DB3B7E6231FFCAC6BF92E7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsWorldHistorySingleton_tAB64E013DD6A12815A31F2B5432265555C160209_mAEE09876184383309B59D8AF2A0E4F65D77575FB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4A977D8FD84C844463A78DF65C084A230F07A6CA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_m7BCA140AC76A1E113B7CC008F271C5DEC067D79B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4C30B6DDD35F8973277993070B89D1FC07D52EE6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsWorldIndexBakingData_t52C0D750845527DE9C3235CDF24583283B9909E0_mFC97DB3618FDB9A2A56B9DCC71B4F80A5FADF0D8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t88570EECB8ACB95EE30488511CEE799444C4948D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPhysicsWorldSingleton_t378ADEC7BEB4615C6B7972AB0EC26DF2BD864AFA_m1ED7031D1B56F6AEA9B76E152A499833AC56E38A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t13C7DEC8E3DFB4E396BFA3EABC6329E5504D0417 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t7492FDA226E7E1A4521F1B170122B8FEC435660E_m1B5A21E9B7EAB701636483119395F88628412193_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3A01DD31E930836BB2983FABBE361B36C2277606 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_m9B577CB6BE1B08B83E8C6EC84DE76C6F8B420C74_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1334F46E2EB967F5FBF9CFBBFE1471E6E63DE79B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPreSpawnedGhostIndex_t86F3B58DA3DA317013EC9E6BFD41DEFB2E243015_m6BE4C77D2EF497CF87EEA0B57DE0B035D7523E06_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFA8F4BD7017A8098FCAB34C3467CC1FE3255EB5D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_mC7B989804ED0C55DC76AB6FEBE8ACE53BFCE7AC1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3570221015D68B3FDC8D329FD0B2CB8994EDD9C9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPredictedGhostSpawn_t96659E85EA19D71C225AD96C6245B47BCBA92B29_m92BB8758035C95D5622FEF28C5B7B1B6363984B9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCFDD03C385AA9068CA06FE7CE7D8E7A6ECA5DB1B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPredictionSwitchingSmoothing_tF295F9FDC0DA030E6D6730B6D90908702248C894_m3B3819327BEAF78B02971ED8EE7A237730845C86_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5AB76C9D85972F06BC70C326BE46FBFAD3973B0A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m06A0976CD2EF59F1A69EA654C183FA46E221035E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t41976F124D960D870E7CC8A35B995FDD00E582FB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m372F6AEEA81466FEA6BEE0FEF7E15A9AE438C145_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4FFBB5A3D23110E4F3CD5583649AE34B94C6331C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrespawnGhostBaseline_tA12CE09F9336397F5AAC7F1F995F70002471CCE7_mB451A8A6B6EAA29345C107FDBCA73BC94757BA30_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB85FF41CD3A8F379EB7318FE3792FBADA93C36E7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrespawnGhostIdRange_tA869F9D0F6CB1DD79ABF8E1923B07C6D295EC734_m25D5FE2641B921CD4B7F08E38F2B58FD60F7CC62_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t99DD0A95E6C2DFDE0CE03F6EA7F93FDD9DCEC117 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_m190996ED20C4661BDFA674A8B6B21BB145A4A8D1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5B47F69F46A0DE921B31CC51DB714B0BBFD91EC0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrespawnSectionAck_t72DD566B954ACB7C212D14532F10F79EE700E417_mF83C45A012D81A255325376D7E18B51A2926790C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4A38D071A479E6FAF984700517EF461AF32A46ED L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD_mC26B6E278F0D16943553858412B3F7AB2301C472_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF34CBF536C9E3B8B37F20C9C5619E0FFA0CCA58E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPreviousServerTick_tE8DBEA01B483AC758AD54BF11A604624C166269B_mBDD55E145011EAF165CA9B76FA2C9C62B2FBB1BE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAE7B8A05206F374120A0AAA162120D97D946558E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrioChunk_tCDB42FE06F2B08027828B305BAB3E95D382F171E_mCA092C44EE776A6DD69F78BC30BEA78E6B63123C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC853B4AB3C7C76DC6CA8539F68A3E632F2183ADA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisProjectileSpawnId_tC5CE15D177BF931BFDBD0019B26225BD563F0640_mA73E3E09BC9B2D80A004720704EF76A4DE34A929_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF3436B09B993745FFBB62784A58860E57F3A4BCC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634_m4D17AB03DC4C6B71C1541B96DC5F01871EA7EE1D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC375FD06BA92D1F3575E4149C88AB57CE8AD4A6F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mD7CEBD73999042AAC575D52A40749352CD4C0D60_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m7CAA82EFC2E8E8F933B45D4C9BCD9D38A33A2E79_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit_tE3537BC5FE6F1F4DBEE4843517092CBCDF0B5D56_m75932C544E087734C52A76E94038B232D4C11186_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2C5E0C52271322DC252EC549096F980AC5F189B4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastProjectile_t6CB35602792F5A2F5BA64EFDD70163A60ED11B1B_mC8BE2EB0B8484C2A352BFEC765D4DF00FE0D2B6C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE54BB15B567B7F94EA438F7A157BEA12813CE124 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastWeaponVisualProjectileEvent_t49590D2F126AACDE2D98554AD781D3BFF3D975D8_m06285BE5A4381588C0DFA18DF321277E2C67AFAA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDCB2622EF8EC16E453257E12BA5CCC046C5C7C3A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F_m0838D497166C8E8AA394E3C1639BCEDE35CB7DD4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8F42F28201309C196AF229870A1018B17FD2342C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisReceiveRpcCommandRequest_tF93887C57B00FDD627E07116C2537835A453DC35_m7B00B8B3DD0A252A727226BAE4DFEB18C603C6D2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5BB5A5624F94E7199B5E736D4E2571A1BCE88129 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRelevantGhostForConnection_tE61CEA9CCCD51139DBA37F6B7F23528366292A88_mEF1DFF3DDAC94C8B6EE4FC1B1FE2ED3C43646B77_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBC1FBA580098EC99172E1FF4EA3CD07B79BB6AE0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0_m3ECD2183D0BE58070E8944CCCB4180FCE06BF217_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF090214FC4349EE619F881DDFE0239CE8DBE9DF9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D_mBEB788C74C038B6C20123DFC05658A73CA646070_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC7C12A038C44619C81FFEFBC66A9CCE5AAD4976C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRenderBounds_tE83D2C345D9E9FBEA1E680C79E47CCF6A46AFA0A_m746770709DC892402C8D5D18AC028BCDD819D1D0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD3664B21B1C0BF8DB400493AA6AFEB3C77DA59A2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m5A82321BF9937698168615E0030BD0E5C7AD0464_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t319B330A3C51D5DB2E95B460BAC45752C2D5D207 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m4E325FFED6578A5A724FC38D9164970E7C0E7DEA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_mABA5FC44D6E6C37B5E4E63AF920426FD31289698_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8738CEB207CE3C73651D1482570682861BAB2107 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE_m37D4ABD7CBD89444B57A90B6FB6A81E77EF134D4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7A80CABFA3811E1D646BD735E0738923D26E8876 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D_m467F39D359C093D25D3F130D21C986968059D7CB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFFBB174AF6C8E0CAAD72041BFB0CBD1542F75DC6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_m1C7856C74F7E8CB94579AFAC70AE5184BF093683_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m63FE1F7FACBFC438D1409A2D93F964F256F1FC11_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m62504F3E9CCA30500F7942D9F82B48D9208B290B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mCE9B3904BB0931297F915724F98659F7B6E39293_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRigidBody_t1F09F1AFFC17A49EEA39F56D11705984FC7AC90F_mA7727B24BAA11AE8BCEE6F1E2050DFB3AC3A12E6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t58ABDF1D70E02E1C5137BE1E64B0D5064B968645 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRigidbodyBakingData_t8EB12AE048EE91B3F926F0B18055B96754194AE1_mA3AAFF079C5D5AAB394321764E435B5A1931FA6C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t891DE044BDFBAB7DE8E5F8812D3F7CC3CD33BEAE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRootLODRange_tE8326688FFD668D4F94CFA3D3FD1FFF29A851BDE_mA68D5E65ADDC67E419FE722B5D1A62365ABAF9F2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCA993740D07BBAD213600B85CE02C7B98CAF7098 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRootLODWorldReferencePoint_t402BFA80364BFC8AC31A752126AF65FF4DD1D49D_m641ECAC0D11E0ABD654CB15F2C458AE4EE77EB67_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tEE5A3BCDCFC332C160093F6082240C6B97167143 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRpcCollection_tF5A8386ADA59B8E4787F09F2F82406BFEECBDA11_mB70E4D36FB755048CCFA09A33450431031C5B394_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC80CADF63E8A6705148A7154BC418DD113B50649 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00_m6F6007060A20F2742A0D7F95BA2B96DEA16D3C02_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t18355B9CB7F49AA3F8AA60FD9314AA5E791A8A1D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSceneBoundingVolume_tFA9A1787D49E9E52434EA07C08014B51384FE462_m1C4993EA5BCE82A7B944DF545BCD11FA809616EA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7E654EC5CC72D3008183CAF327110DFD6A9DFB9D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_m1B375B11319FFBBA0AB9EA099F95A73CE64AE942_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0475DA60D13472B1E92644DCAAFCE4148B5A08B9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_m77AFC0F74A350ED703FB25B14847F55E04E47876_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD7A83809C11D60F530A79C789B904134E5D20645 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m730F49E9E818C5021A9A87AB6E2047ADA9426762_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t221E0FD580D17A99C9139FF960DDE7B5B396E7C6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_m72DE257F72DEAADF463D2902F5A9DE671E5E17C5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t61F5C369144E338F0DA4758FFB6A8761A11D785D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B_mEB7BFD7D853217584F02452D28C5312F7D8A6D93_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE85467B73B962E4E6103512D1DD741FDCFAB55BE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_m9A271F4A8822A39F0224F31A5E0FBFC6880E83F5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD3E4BDA18CC46D633400175D8F8992A3B1C876F3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927_mCCFB6030A2F181BBEBF6D1BE21756FC71F123CC9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF3DC6E77E8010BAD0E116D561BBD61F3E033EAC7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mC7D8837A9B3B4DA8DE4E41E1344D4D3D9A0622C2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9E0CF56A0D887903C301CE08898D1ADBC54C3D74 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSetPlayerToDebugColor_t7EDD7200C1A3E2455E5ACCD2D12C1193149BBCF0_mBD1F442351C51F30382B971C948EFD78CCB9B513_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB14F1B6D4FB0AA0AE54F087574B53FE75413B22D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_m42B83AC2F30386184CBD940E2F8ADD48C942B3D9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mC690AE962EEEFA08DEE978EB24AC6D4A8DCBC088_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_m6C87AD19AC12E659E7C400EE7E2FCC187A3AED35_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA2391F0EA33606F8CB18FA0D246CC440E6F0ABFA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m122F056F254BECA805288CE7909DDB92614FBCA6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSharedMeshData_tFF18A151F1BA3B6810B3002DF0C28C2C66D5E32C_m7FA8AD7E98398FD8BEAF10EB460C2BDFC2EB9A83_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t191F90469F40B057A9E2A88661DA5D037D6CEC76 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSimulationSingleton_tC8F3A5395E08472F6FDD1EFF8D449D42732BBE52_m49C059B8E7D4207DCCD739DA826E6719C6FA161D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7A188E19C7805B80E7640149D3BBC2399CF16DD1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69_m36AF6D8F371218406F7ECC3C0462CE7F26C84137_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1BDA321A8D7C9D816175EDA60ACC0E311E7A5DA2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E_m6380D3851AD79FAE66F6338D2A4B009AA74834EB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAA8C406C7023006B1BEECBEA118BAA63A38B5480 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_mCC3016EB260DFBD8B234FE2C5ED339E6CC42CC42_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAE8FF949BDE5E9A4E71121CC92C0E3D518D40FA6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSnapshotData_t6B1E9DEBD977F5E7CC7EAEA947DB0F618B972E55_m8F059CA45C96405C335981E627E0CAEE5D9CA297_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8ADE9C3C07DB944DFE09851C9BAB31FE7DD3F1B0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_m6CB1B5FE82C6669A46220DBCDE45BE82A0CAF3D7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6D2128A1250778A17FB778EA1C7A08474FDC18F8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSnapshotDataLookupCache_tBA5215C26B10FEA4031201CE3879AE3BF6C287E7_m132D35E3E91ED43CD35146A2AA27469E0485CB86_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAA0934463DB0073F88E0C99DD6ED9E2EB548BD77 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSnapshotDynamicDataBuffer_t86B9B9FD28BE110828F71B4E3B30A5AB97536F42_m7372351C242CDC6746357FB1C6C8E2CF9A02C6CD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAB55691222E5D675D895EA89C1B6DD37BBD3D073 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSnapshotLookupCacheKey_t910591CA2DB0DCD1B2800D4799854971E377EE43_mDADCD2E1067EFE8A19BBF9325E66CA06FDF3E482_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBB20E6A8758F1C938AFC61B007927281B290C09A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSnapshotPreSerializeData_t63C5B523BC74A52B84DEA753C46051F2BD36C068_mB6FA398242143E461F5C54EB2725AE606DF0816B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDF6DD06F4EE43EEBDAF13F0897C9D8FB1C407BFC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSpawnCharacter_t3C65F711548ADBD912FFD08EC7D8DFE2329EAA3B_mBDB22673FF8A9740DB186FA0292B3A060FCC418A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t453AE0C035A060AA7052C812D12394432ECEB596 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSpawnedGhost_tC1E173D55BA036D5684AED7918316FB186FAFCAF_mA630F3BA8FC33CCEE2555BB14ED81500EE7EAB89_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6A9D65A75080079C9B9EEF9322DE21F96173C249 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSpawnedGhostEntityMap_t0BCFA4A062202D8F78450F55D68776FF38A95807_m03675042C5E2A5B981B3A0C4267B85EBF1755610_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3113DDB0DB06E24AF6444E56502793E79E77992E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSpawnedGhostMapping_tCFD0BE01E34AC47601686D705D709E8F45839E17_mE877BFE9DC26DACED662EE6C334ADDF20FB6E74B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D5D6B6B6037DF08610F83BBACAD207C76CFE11C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSpectatorController_tFD98B743B9E30BECE6DDAA391B154479623B2D3B_m9CC8C2EEE8CDD95BF1CBAFE74C8BE0628A16BD98_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDAE041777D682716FAADA59DD2700C1B6CC1C21B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mEF9C9B1A10D46D21C97370A3B5E1A92CE8C5EF3E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m50617CEA46D49173BDD53AF93BE8B5EB2B432B1F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t47EB7378D478AE0773699CC05090E6414753B973 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisStatefulKinematicCharacterHit_tC62C9D1712BE538FCB2CA9845130D4C305D2AAB8_m86282160E1B4215CF84FF75876F813E30C8183EE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE6173096D1B6842B0624F679DEA5D8156EDFE6F9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisStaticOptimizePhysicsBaking_tE69BF2D3D1E838B1FB9C736A3E947603DB18BA2F_m512B075522D7F46FA0E009100E06CA7F0B54068F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t12799E6BBEBC00ABF6392FBAF2070BA1EE7CA4D6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisStepInputSingleton_tF8533E0D6AACD3BB57B6641B05F78A5C48F3A92E_m44E2F0310752CD364542590DC6A38676847F7CFA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4DF044909CECF3FB606FA434CD8B05DDA34F0504 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_m59D0289E312CDE8810A7F13FBE0E5C53C937D196_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF018B15617CC263FF474C98E4660C16B493EE98D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisStoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_mA63DBAA0B8E6865D8F2647300EF0602C4F037FA6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t796559460FE0F3BAAFD2F2EB4D5A941EE05DFEE8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_m3F1ED25DA3DB668FCEF89A9D4C92DACA35B90A67_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t229FE020108EF91C942A8AE38A22FB77D5281508 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m24853A18EB38839670565ED58453E4B144BA1044_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_m4AAFFA63C12283594C2D57F42BF285AC8932B1C4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubSceneWithGhostCleanup_t687703217183BD3C6CC5D419F1157A4886DC0A9E_mE779488F8DF3DDFCC0B84F2BD27199E2E801DA50_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t299AE8D5EB7F4F02AA758D868088CCB839BAEEF4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_mD2FD03494B6B163DAA1D6116AF3E23F88315A9F3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8CD74008A60DC78934271F5265CD01EC25AE96E4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSurfaceConstraintInfo_tB8B9B6FA7E06B29C78579B7C875D7B7D7CD4BF5B_m22753FBC88B436052D6351BA6BF8D5AF787DA190_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4464FBB72D2D8486C438174EB4560A5C331EB07C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSwitchPredictionSmoothing_t77F66A976B2B8967484C1CDF987CA6EB0CA27D54_mE4C4F55FD91F1F24E4361B35D05F6DE60EA87BA3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t02A04EF393F8C4AA2FBA002C2FFFF5CDD523CC43 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894_mF26D3B16C4BA692C74ADBAFCFF13C770F3BBB42C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9C6876B0242E8A038109100ACFF11A006BF77ACC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59_mBB6D95AFFE4CF5EB128DF092A36EA14EB777B4A4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisThreadLocalAABB_t9E046151708D95D2A75A2108020F1402970B40AC_m5AC758A1608B5143AA8468AA3DD4135A42D9A6B2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3724008CBE796142475A77D4C9993BEEB0F8F36D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t921487953942E613D844675021E6F65D8A357005 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A_mFA73E47D8425188C60D937C4548C14F916C03C84_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t921487953942E613D844675021E6F65D8A357005 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t921487953942E613D844675021E6F65D8A357005 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t921487953942E613D844675021E6F65D8A357005 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t921487953942E613D844675021E6F65D8A357005));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t921487953942E613D844675021E6F65D8A357005 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t921487953942E613D844675021E6F65D8A357005 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t921487953942E613D844675021E6F65D8A357005 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisThreadLocalDrawCommands_t822AD6AA83D6162496D9693946084E12C2CABD42_mC58BAADCC39873269F43729EE37960D1EF2630BD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7601BFE5F0C7001A09388485D554B5AE852249B2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackedTransform_t26337E726D9F91AC61CABEB748253360539B0F83_mDAC04A929023465187F57EDF9609215C68F5F1AD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2472786C436BC0711525D856F7D3796ED135F80B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_mEE38AA4C0FB4111B705DE12ACE6EB56F534DB71A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t158B971680686271CF9B1AEFBB672D30FDCA4CD7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_m5F64DEB34C28FC9941CE9DF20BC7B2189D53A69D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_mAADEDD21EDC9CAEA4B90FF54F59B76C097FA660C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t88D704C42FF4613A6E6131D50108F5AFCA5F4144 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m3FAE3C093A052D48B77FC736342F385006FEBE97_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8EAF026790EF3DF68B0045BB0E38FB17C27171FF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_mED8FD533CA33D6C801E838005C3458934905D540_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCA3C0E258C3B84070408CBC43E5B473E8BE1CE5D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_m694C6B32E4C24F8139AB80DA1579A9389BCF5868_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisURPMaterialPropertyBaseColor_t8CF3D5B869C67266D711C7954064BBC7B4012233_m76B8FB35A685C25B189531F118FFF3CD553B6186_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0F85CE7B849D88B81B6E4434909FF2D416459E15 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUniqueInputTickMap_tD54F27A8967281B8FC4FCD0D0113C3B1A5F5D436_m514F9797E41D6B94366E26B30036360AEAFF8B54_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFE519A94F6163EDC9B8B24D184B7BB5DD47C90FD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnmanagedComponentSystemDelegates_tB8457009CD4CC3E4A0CF63B17035080EF847DCEC_mAF3DDA46D65A30DB21785CE1BD066D436AFAE444_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE850A69B8974D31EDC8A496462F8B9AF9AF2E3E3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_mD84396AA5BBC8B9A87950EB08E06B8129EC41D4D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC7C2EFB0FB10BEC93356E52A95E2A53B8E8487E4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnscaledClientTime_tDAFC6D1DDC2ED9DAF55E5A5420AB36D27FE48447_m3AA0AACA37B91B3682FE93E588481F907FC53FA2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBA4A4997CE7567799305FB7D2AF21C0F5122232D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m0FD79D80DC990370CAB2F1AFCB9DEC5047CD76F4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3348E32CE02DFE5B4012620EFD1FE7BF5285DA7A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUpdateIndex_t56DEB0F69DA53BA69507467621AA550CA2EDCAEE_m3279729C6CF7607892A24272BAFAEEE82A1E525B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t86F6D8041C8363D32555CB0AD6D0301860FC9FA1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisValueBlitDescriptor_t4D89920038FC97B4349AEEF66019CE340E615C22_mF2104AC90D4C4433CCB4FE654540F1732ED0B174_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tADC4221A3A89967D258F1026C286FE1E26AAE6BE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mA55F80DF654C4635152262C5F05B0274963608C8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t210B93B7A5B9BC18A004761353B12A37F92DD72A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVelocity_t1B644805925B4583C7A7F78AEE9A480D3FE86089_m615FC394D43605D8DA50BF64ADD9C2337C4C7BBF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD0AFE61C05F934BEF93A18FD93522F4BE0A2289B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mDD01532369407B5BA1AC28EFA2E998C47C0AA022_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVertexData_t2A2722B5DBC952F7EC99B8B5EE539363A19009ED_mBFBD6EB8C0C4AA5D64864249D66F836F68D2AC59_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE9C3BEBDD1C96380C141409CAB7F0E4F7FFC99E9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVfxHitRequest_t21FBE6A1B00EEFF3C82000AA561D43C0F7A1575C_m4043A1671040C1BAF5BCDDA06D991406E68F664C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE2574A3173569DE4ECD905F7555B8EF3B428C84F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVfxHitResources_tE16DC53D1C6D58EF0BA97CF6D4045B7B943BC80C_m592DF6715390B28FB7A10CB6E962D8C95F8500EE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t09F91FD58F854E2D21D902D2405A97024F6E1213 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m212572101685FD8A1B11AE6CB89F859D04721B05_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_mA1B9B486611AB443D9F931830D9481B1E9D6FAF1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWeakAssetReferenceLoadingData_t6D8B06AF3AB465C50AC930178723361477E0B106_m4F275C6CBBAB2BA8E4D6F54D348069182CFA6B8B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAC482E870FB2520F9665D8F7E93AEA7A6E0F0EE6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWeaponControl_t5AB0EB825E7C3CD5A28E96E8E1950245F08B331B_m02308E1DC0633A48300BE690D4138D3F51DB88DD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF6E81C6BC74940BC8228580334103ACCFFFDD4A6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWeaponProjectileEvent_t29E0C0B748270F64BFF89EEAE6228BFB9B40C491_mC195811748F445083F183F2831F75E0A0A447868_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0929A3F1C15280CE40CBCC5037BE0DF13CCB3638 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWeaponShotIgnoredEntity_tF580C95D32EABA91865AE3753267064FC0BEB7C4_mE786EB6FF2E71F7CB740169E4716F745CBD5B47F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAF0D2C76055D475857DA68A386D2D75BA61F8371 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWeaponShotSimulationOriginOverride_tC522BE40B385B76197F2412721C824B5572B1434_m17757F006E0C218ECD426A998948AA6004E330F3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC7CEEF7891BBF8F82A21AEDB92D53BBA2C67157F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWeaponVisualFeedback_t00933BB2414618F56FF791E1ECC17381C3018DE1_m5E735CF3806A8BCE06A60B9D824F7B799DE3E12D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE67A4F74663D8D6B92478AD0E34C1C7700B35322 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldRenderBounds_t64795874B5660B82736111211DF4F1096F9CE94D_m0A4C009EC53464D3EA311EF084CBD498470986AF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBA3E64899157285B741E96CA91B47E68C44E7111 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldTimeQueue_t6461241C9AB0AC6FD360FDB581E6238886FBB03A_mE40D01729B823131EF37838CFA688CC56227DD87_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t540AA188620F05C847602ADB7160E02A519254B0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisdouble4x4_tB452F9489714C6B8D74D46CA2CF1F0CA8F185D3C_mD401E8437F13CED735CA6D78423AEDBBC6588E79_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6A2857BF462946603D4B7CEB286B62529230D56B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m20058E109D326C1C1E396501A06A647C54F1EBC9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mDFC145DE75A32D27CD366C374A11CE0882171A88_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tEDE9DAD2CAE5954286BC0EF394A57ED0AC69FEE6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51_mA5C4F76CE74934BD86AD646133F485C2210138E6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t05AEE7CC1F5EA9929B32E9D6D58E25177874DF6E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m3A2155B778C72544765AAE3A75BDB08C78C4ED28_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m5BAB13B68A94FE9DB07E37DFCD48563A5818F8AD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m03078F37E20FFFFFE03EF5A50B44F3CE8348A0E2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9248E8A02F2181CB28F1C64DD218426B00702296_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisquaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_mB04DF6F6E403BFBF71668B8E6089073E9EE07E38_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE645174F30913B665DE45D85525F90B1F64E054A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m273E54C2CEDFE86F7B6481150B42A3F2C91DFD0D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m3D662C344C77F249A94130ED8C833E350C11C4E8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6BB9B80B0F7974ABDDCC6212EC861C47D38450ED L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m660F52F126F15110708AD0226A438411576EF23D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t605EE6881E7CBF0C803EC1F3B91C779E90FF938F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_mCC2CA203C6B01A6DBA390278A0E1CB32E5467858_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t021E2A3E5A6A871FA36CA2A7C7E8F28E2997F960 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m745D18380F00A21EC4922D5193C53026D8F1E1B6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE86C54A5ACEFF0199233969AEBAE4AB1FD8AA8A4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mEB9F6EF824C74E50C4DB262EB63E84FDCCFF6E53_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9230D5979ADB0724CE54B965F21469A945186974 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mE4E45CEC73B4063FD3E053AC4E644EE812D44711_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6B944030010D60829E768DB6CAF4A6E8ACFBFC51 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mC57A26CE2554E4F191168E8CFA74EB4E0E987D30_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t558AA1B39C895CFA4159FB64D6E90FBBDE347107 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m90FA8915FC3E41DB613A53009817AFBA99B7528E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA828356220037230A27BC3A8E67C1781DC6A8B7D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m095A31DA6C55CF9AE7E21BFC95D267093851B29A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1291B8EED1157C7B3FF62D91683A0AC7D076C6BE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m73F4DEB42FB66053048D4D97B387FD3A5FECC753_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tEE4C676F8F6EE01446E2FB86503B8701786CD215 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81_mB8FF0B7496B07D24FEDC1F6CEED770B2ABB66189_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFCA7AC2AF5D66A269F0A22C2AAC38BFBFD011A9A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBakingOnlyChildren_t4847B0A4EC56721DCE2D2CC3D930842C23A32DE9_m063330B526C35013E29C6ADCD5A607676BA0CF6D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t05F2C0CD99031F8FD1608A962E68C33A50A6FCCD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t3BE4D7DACA33583BBE2C8373A5C47EFC4B20049F_m118EB678D4B2384272060A72B255D3BC082064CE_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC2625A852DBB8BEA18194B9887A50887C2329BDE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t3C4D290E03B1550607585431A91F6254C68B5D91_mFF790BD4597ECE6D51CCFADF17C83F79096E37B4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t93D9F369D30DC46B2E289BA54BFA59CFFCFC304C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_tCAA7B5B53C65D96E834EED2D2BF2AB5506867D26_m8A1617B4730A1A182132B6BBB56D35BE0D2713A2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBB7ADC4A3476DCF9B4487CD963C9886C275F4547 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t26DC1AF10CA15B26730980E6E27C1EF0C2BE9477_m2883C896FC8AC8B327E433E5D816302E10ABF0D7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t82DDC59668F7B408627093FD19F19627C3D95622 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t1651082D66AC0E8FDCC10F98F216B9BF100ED8C4_mFCD42D3E37B90ADC397BD0186A9B865328F02CF8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t170130A97EA91BBD6E838D688A4032091EB6B2D9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBaselib_RegisteredNetwork_CompletionResult_t4C07F67F2F155FE19DBE7A41393038A154301CC7_mDE3AE6908A1E106233F97086D4325FF13DFECF05_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE4A7B41B1D50AC83DAD0DA25A221F1829C4F6196 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBaselib_RegisteredNetwork_Request_t6AF2E70EE04D8C3608FB27091CDE9B4A25A9A4FE_mF5F5B58B6F8D106327EAE75CC87EEB517977E691_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4128574F7259752679DF201CA2155F8F98E10757 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8_m4A6E6548FB786B1EA4E1F11170DFAED395D5CE7A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8D8A92CF33E3074C093C929C308E308F20D3BE64 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982_mC10267270861126259364B0A0D5430BE07CD101F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t946AC5DAFF410003855097F8F0FCDAAC0D1AFA85 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_mD0065D61D159B1B2C19B095C4FD491897F690798_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisElementLocationData_t2DC8CF14D3098FD56B0668225062A6599F17D92D_m66FB1865F24FC213E6420F53BC088A028F1B4E7C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t603F16D56B890BA5ECDB9D16C6EF1F19D60983D8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNode_t8BECE0845920D1B28CC0CB3D37A8E1F510CA83CD_mA60CA7EB84E1F6C1FD0E66800E184BA8527C4840_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t51FC2C33A3D4D5731874BD9393D30F8F7D842713 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointAndIndex_t64AFEF7AC88E760243FD33E64203C3B7FC9B6559_m7EE6538F03CCDE5658A647F110197103531E1445_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t35DF411D3F5F8259237BBFADBE9D5AF5715E1C2C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRemovalData_tB50A1E9E93557B9AAB9C82704F227F1F485E182E_m45C4CEE0714CF7094C8CAA389F1B5FF3BC853188_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t75BF69A0661A2AB82BCC25B559642F9A59749721 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUpdateData_tDF56309053A87DBC39E71BF2DEBD04E5FE9101FC_m21362708F8EE96E2A90D1726CB2ABA55DDBE3CD4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB99A36D6632C7163EC21CB3554069D6FB19B79DD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChildInstance_t75CC80E6BE0201559FF42B4771BAA74D167C6AE2_mAE698A80CD907312CC9BE5D5FF190B2E0CBF8869_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE53373D1C46480709BFAE48CFC39D0DA6C50A667 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDeferredCompoundResult_tF19BDC0907822F8BD9376BFA491263C81C327560_mB8072820AF5B6F6150C1FA6C8BF1995C9FA2BF42_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t90547D7944C7661220E233E7869DE0C5D80F8305 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t54EEAD2311CF856F94003347B6A21A186E71D0FE_m7390AA0995DACC96419DA30F6D3DE8BEFFB7291D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t136353ADA9FB8CF1D5D268FF8D5C6D6CBE5ABA5B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIndexAndInstance_t162E5C82D8414227A61868C3D627A753CD8F1BDE_m31E7B6E7F48846D25A2AC32476942BBF23EED5C4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1197742CE8596623164E735CED638C1E604BE524 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSystemElement_tBDDC92F5CEF616DC50C4A55E623B7DF3630F3558_m7475D76BBAA35A6C1D2B1EDF2323EC9CE410E0ED_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBFFA15C515C7AEC789610A33F2433ED71F1C41BC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTypeHeapElement_t55A8C117D355D24B8A43BB5FBF32A58CB0E67D97_mF4F379167831B2EBAA5466AB703E1B507EF52DF1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t97AFC6C793407AB2627FBFBD1B0DC906BA63DF2B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisColliderBlobInstance_t3C4B63E63BE0F24BACF2534F4650E24E4B34F6A4_m538A396A1B25D040922EEC159FFFB38CC5D69DCA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t58FC9A95D78058C43690C5025A7381855B66C14D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIncomingDisconnection_tD1F2DDEC6E7112BF5659DFF4FFD8DE263CF7F294_mACB5E38B0551AC6AEAB125A525E465ED54B95D90_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF6BA832393B5DB3C805CA5E8023DEFD731867F43 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostState_t8867917E4580620F7172C349A5A9752105DD7171_m256FF8DF9DDA99A44722D6E6C3BFD2AE307ACC9A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2FFD99F1EF8F2F5A1F2A2F32E17C4DA102B79571 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContentSet_t82D71DAF90151FCB6B7679F088EC156C64B69DF3_m84D73DE93C0DE44064A7D594457CF85FFDB32D2C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tAC3D64BB29C822288C38258EF21DDBE8F50E86D2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDeliveryStatus_t79696FB092BEE2D10C9B1E776129C0DE820CB2F6_m8015C4A09BB18F0F391D19A1B159FED59E4EACD5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD543D035C9BA596317804D43D52F8600DF5ED0A0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_mF730441D4878467504B3B450C238199702755C2A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t92EFD0F9C3849A47AFFABB66850313678C42095E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFace_t8D5A975398874D9000CD7651DA2BCE10FA32FB86_m59A2F9061F46FDF5BEA04C2BEB841267271D2FF1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2E808E712BCE40B6465A2CDE8056FCD22A26E19E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCollapse_t759905DD2BD5C6541B18DC420F49CA30F6831F24_mD4C9194AC5EB80E9F257F96D6BDAF103E9F598DB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB215F2A9044A667B6A207E8CFFC0AA74A70CC699 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEdge_t95552864120701D5A98A698DAE24B3AD1007BA16_m82EC7584F79A941DA47766CC38B8B1D850153DD0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t42A3071680D44146081639AF8A1C108CDDCAB967 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFaceMerge_tE0E4CC0838A41F1D9C42AC902D54188220C80556_m49057F390193A58197E2307681CE6FFD366DB5CD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t906CAACA3CB1526E15C3682970CDB37A8827A44E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOLSData_t02C2AE31E80D13938E479F8ED4C12B2441C8CD79_mF660870935A8B09788661735E2530AB422B4FEFC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8EF256DC5D132D910B43681C604E6BF8048620B4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTriangle_tCAF27016AA1DCCE08FE5926FB6E7927B9E30FCBF_m5B6263F51B4352F6DFDBBC403CEC535D35AB90B4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t3BE62B56A8FFD56BE0FF16B031C423CA61E6FB96 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVertex_t6F376458B5297E17B1F2687BBD04BCC1D9E9BDDA_mA273E22226B4CBD58E13A9F7A0B12BF93F0BE2F2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6123033A82BA498FDC33E47B1A5F8D1464838589 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t010AC827019013D3B1034F837369288019917D36 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisHashRule_t283771FBEE5FD2879F8CF8E04B51CE1DC09B5C4A_m1DD364C3ACF36BC3FD02582995C726E13DD9BE91_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t010AC827019013D3B1034F837369288019917D36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t010AC827019013D3B1034F837369288019917D36 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t010AC827019013D3B1034F837369288019917D36 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t010AC827019013D3B1034F837369288019917D36));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t010AC827019013D3B1034F837369288019917D36 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t010AC827019013D3B1034F837369288019917D36 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t010AC827019013D3B1034F837369288019917D36 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDispatchPair_tDCB0F8DC3D9986807F0B3868E65487059D87050E_m99DBFD9C61796BD5A41E44838E2C433583682904_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE6E424C3080A035B31764227D22FF65E58E1E30E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t64065E6CEC923A03666B8AB0360CC5BEBD4584C3_m9D3DCC4FA62ACEC429C7F7DD6D2E98432A3586AD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5D5D1C412A1E013D073DAD88F07BA1E1B97CB0FE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t98A3C260D7EC2417778B2B6B5C85A94CB302CEDE_mB074A694CF3FC3660A34F139BA333D1E90263189_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6A2BC90EB3FBCA8C1A3DF6971F41312E6503A1E9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t7B01EB05343F6EBACE8022A40F0E4ADE261DE7BF_m247A75B38C835586F43B5BD96B51E7FBDCA5304B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4BF8DFEF0F126EAA29786272EA2034C822C70D21 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t374672F8E4A603D633C5ABEBA6FB5F00833D1A2D_m1D6BB9E6645F2AC3E2A5485E08B96D2CC3BB96F1_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t94413DA540E6BC32D9C94EA7B0A8E49E28367C9F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChunkAndEnabledMask_tC0D980F7FEF198C0867996F17431F70A674490D9_mDE1811577F33D890717240FD7DD121FA2DC15432_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE48FE0C9743758A55BDA72385BB9C48707ED1A07 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSharedComponentInfo_tC04CFD574DE82A0BD72273D1EB8868562AE8D021_m043084859113833A7E97A0F35CCE092BBE3EE52F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1E064241E9F5AB6816AB3AD762D61348D4DE2B22 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCreatedEntity_t4523F94FCBCB6FB19B7153F5F3B0D2FACF093789_mC09569E91919EF776E6EF014417A83AF537D1C60_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tEF8EDF05A9A67C24F8F18284E5D6FB9B5BB88BE5 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDeferredManagedComponentChange_t85FB6E1E6B8CB3FC9D147A5F3AFFED7EF2B54684_m037C7ED8F62AC13FD2FBD29A3E187B1A9124D9FB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9888E21A3299D866CC05D17E38956DDF5774D1BA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDeferredSharedComponentChange_tDB490D192C8FE6B8C1CA8CD7FB2418E07712DD21_m3F8E1D8BF5133C42D301AF4719A575B60F361251_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA7E964BE1FA6F7C3C318199A56B834F8C78DA9A9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDestroyedEntity_tB65F008A1DCD91F8167FB0D4FCF60B6F2A24B1EB_m7BBD722F16453550C73166EF8276829713788925_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB9F74037B84A613FA2217E65414C236FA43CE355 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityInChunkWithGuid_t5F8CED25C882A02C1591039A84AC5124A6ED522F_m1C029FB61A8A7EC8B6ECB4479F2CCE28B6685C5F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB92A7555038BF0153255D2C510DAFD8620CC2B40 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisModifiedEntity_t10B8540FA4A9BC79DCB30669BFFF003BD576BC24_m4362D6A270C6DF108D7070B754DB0F6A197D133D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBDB7674329028C8B1E6753ED7D26676964CDDD08 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNameModifiedEntity_t0541D21986D0F6C67016BFDB8A3F91AC88BE1D07_m9087A12ACF128C4B2E6156821CC9A2FFF0358F75_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1EEC28DBF3053EF4E15F180E38B21ACC1B9E9616 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisNonSerializableDebugInfo_tD62884941A8F4EC76E3C2DF6459E567715CC5EFB_mFB299333220377D5F350350738663362904D025E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA9D106F266E517A99EF1D4C19DCD1DC5C14C0013 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRemapArchetype_tE28C99F9B6080A25C7DE5CA4824B6D21373AF500_m6D648DEDF8D998BA7DC938681B93217B03FF18C2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t29C1BE5669D536B81BEEB67281F42A145138D528 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRemapChunk_t47C9060DC02CD2BD4079C46F4E2284B069DEBC93_m7EEF992F3B9FBFDC6684D5D5006AE61ADB25D23C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF83E68EA9EE48FBEDD97BAA76E4AD9681B3E5C08 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntry_tE11DB2A14D5C72CE3B7D539459DC052335506586_m1FCD70F3E18E6737B0F062FFF40D645D933F49DF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD18107A2D0CEF283BF3B68E012750AA918D0E594 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChild_tB3B8312B6C7689241AE15D4E948F03A3984B42DF_m50FD7203A4B18C6A6C7D4D800A6B2348ACF4B075_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t17BDC3A3E40D99462ED54CC3AA9D347227365AF1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mF08DFEF6CED5234E15B73554FC9F216478A944B5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8BCB604BE54DAF273FDE916E4D30F17CBB42F015 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m67DC61FD5CFB602C30458C6ED4B170834C7D2D57_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF0CA4ED4A83B35E0F121BAEE253FFBF1311D7A9A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisManagedComponentData_tB22104B1D8AFAA878734C31A843AFE1BA8D18768_mE90A60F661440FA09C9DFEF355CE6EC1B8D4E4D4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF2DD9E83B8BD7BE331B20AA234A1CEE34F3FEFC0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m89501E8362C50F25C1A735630BF6350F46F6C501_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2ECE991FE3C71C2513CF9F90F251E98C74D7E290 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m422F51587DA78DC1625A31A123A72CBF3A776FE0_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t39D14A39A6ACA2DB850DF32D81E357AC49675730 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSetComponentError_tA78ED4F15A77D84259ECEBA5B32A77C33843D9AE_mADDD38FB16F3C51EEE9DAC692D3A51F905DCE556_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDADFE7071694F47266B30C62854DEE55C3D4D851 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUnmanagedPackedComponentData_tCE58E7C48ECFF3A70A36EF91872FD8C223F413AA_m748EF0923E59D29260EF0FCE8FA3FBC9AED227F2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1B392FF178B8858BCB82B8FE6523D5F51A2052EA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQueryTypes_tE3A9F854C5272D3077BA4C51A154002D3B0E7408_mCD1E4C177067C90DC0D3FE94936870BEB1D2A8B8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2E5DD1A12A6DFC919F539657FA39F5E6BB746FE0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEntityRemapInfo_tA64FEC7BEE0C8ABFC0CA4682E455222E284E913D_mCD635B6EAE64D903E5BDD6DB9CF101E65FF1C38A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t614E8D1B51B283ADE62C3C8728E72AD18FD0FA08 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLayoutInfo_t6C73A4A6C0AF8558383C91744D57E67C2CA2C0D0_mA5AACCC43FF6632D87FE349D581B9D8CD458FBCD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBD1A4C7A0CCEE2B6ABD7DA50F570D7D05D7D453B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTypeInfo_tCFA653EB60859AE1B480DFE77FB79547976213FD_m39BEB2875DF2610585F6DE7CE8ADA5BF02AFF821_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t03F7979BC10C668CDF0F0650F28BDF4269E285BF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1_mDEF3CCC20DC4D1310DA6919416346A3A46786FFC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2B2619D3AF55D0AEACE8EBBD0366C11F622B0F01 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_m586C9FB68ECEC2E3C5A789726BDF6B5B35AC04EC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_m35FD02485910DD26E106E8F90569644D6CDFE3A5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlanePacket4_tE72632F89444458E7080824D585AF61181BE2948_mD3B04C43AA0C1A6A75D3C602A2D088B1323BD225_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC74F90F4399BDB8D671D257FCC30EE2EBCE899C4 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07_m62A22C83308B72F651E0BE6E27D20225FE435BAA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5322C9463FF74A9E271418BB28A235FE3BA914CB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSnapshotBaseline_t6E6CD12C073FE455E343F7287FBD3F2C0A673241_mF636A399668412C022EBCD9611D93FEEE6653C38_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDC79D11AB3E52214F00B9DB340562F5BE7697E09 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUsedComponentType_tF1CC98809046D5055529ABE8231D1C720FE3D5C5_m0D1E9A87F596D514BD77F4B66ED594F5B556C393_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t48AD33DBF5296A31C3485AF8443224A2E9E18A3A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisState_t583D7FAB6D38B74AF495A7205BBCEBEADCBAC09A_m5109AF66164114FDFF7BB68AA03A88EDCC4CD32F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9848779C5BCFA4268A78C95BAFFDB82038B0E95D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDelayedDespawnGhost_t46FCAF04D5BBCA8AC6C45024811814C53027489B_m5B07AC892FD6BFF09BF757934DE26B469F9A066E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t04555ABAC94EB23FD76C818D310CFD042E45B947 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPredictionBufferHistoryData_tF809DBD55E2A5B7947DC086ACE67249755717117_mF353A00A858F9F4D7E7B911AF0AC337D52AF9B4B_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD77F9C278099A814FFC6BA0EA4C1FC1D8E5394DA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPredictionStateEntry_t4747B659B2A0DC7A2982D4F155DA808FBA215ACC_m9115AAF3F184FD74422D04CC679E1B1F2C4B811D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t01B7398CA2F5D1BDC88C66553D5FFC6306DE5FE3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSmoothingActionState_t70DF53D0FF5DAF8DC1685B172A635D889A03018F_mF4270EC803C633EFECA9A9B5C6EBD15464CB83B5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4BBE6B8CCB69B0FA7A95DADFC8976688FE3C7716 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponentReference_t493776A141868252F933D905F55A9E43455FA640_m27C4647716494BFF6EA6ACBDF3F1CFB9E845D927_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8EB3AC3AE1393AFA3840CF9FA9EB0268A1F1FE3E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_m1BA93B38CF70738DF57C01537AC0E055FFA95BBA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t95EBBB2CB660CFCBCC719E4A8DCB6734268AD68B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m6FBE5E0DADD003DE5E812291550F505E46CA361D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tEB30A05FF356E688A973AA0B6D90B08DFA42B1E7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDelayedSpawnGhost_tEFF6FC58ABDE76E5C1DBD4D181161C19983116F0_m3B120C5A1C96DEB100D2CEA82C2EA3AB15BE7B27_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t84330A10EF7A89ACC25B606BFF971C8FC153AF65 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBlocksOfSize_t9E0BFF08F0AC83213C679F3A4DEC5AB85A9ED499_m65B144783B11E676590C376F8DA4B6F659475A11_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t496F423D5970F12081465E31EFDF0171A08CB071 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSizeBin_tA45AFAE9A9D0ADB26A241E17837A0892BB2F18BB_m67E6A52CCC38BAAFAD67B08984316CD577FA0BA3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD8B589E9DAFF1AB91E4CC07B51EED1E12FB7C903 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIPCData_t46E9604572E2A38CBBA8A418C6E25E6BAE2757CC_mD7441666DAB77B3B83083F867A613D5AE6D1B522_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t122AAC8E47A90530BA1B4A803C979876928B1BA3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisParentChange_tB85D86EA4D947967D969518493144EF9469E0FE1_mC746BC171D3ED24BBC1A5F95AEE2E1D3061603F7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF2022ACB23E50B8F000339A5B3BE08AA86F11DC0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisChangedComponentsInfo_t9BE2FD0327AD7BE0E54F12C7D51DE5638A1B7850_m5585AE6AC3DCBB0BC940762D881EFA62B68CFCC6_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE446596DFE01FE38852F97ECECAA88304037D934 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGameObjectProperties_t0ADFD1F127DCB68292C03D272ADC648763986ABD_m56420C02638014F10839C67E2C488E12211D3687_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C53E41AC3309560C8A04F15EF35BFCF198C10AA L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSiblingIndexEntry_t4B0560C764457A09195B37D6A6E812C2B758B30F_m62C7D967F16AD0BC91038B1E5E1AEDA5B9B1D20C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t277100F1BE32DB1B0E9A7B98E4B7C1429388C591 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_m8333F4D35E0BA65DC9DB3465BBCC5F019BAB058A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInfo_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84_mB401D7332CB3325F3A9A5BE3155D9E52E47940B3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA036DE3D670EBF7CC1F5832A8044B334A0CF3615 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m955DEE15F28E399A044880AAF014EC20D59BC470_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInstance_tF624C99400E4460E8444063C16520E9CFFDD1B13_m0DE4FBEA398077A5208BCF686C23FA30D62B8984_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC3988658A1CA88EF4609A7251E705D9AC571FFFE L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLiveConvertedSceneCleanup_t85C67009D442CFA09978ED3D50351A95747B261E_m30B078ED7BB682DC162543B4A854B8BEA3A79D05_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA013CC93B2257378572D59934CDFB23D1386DE4E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSharedComponentInfo_tC656661802EA2022F9B96C0569E69E618AFADC76_m21AFC8420CB20FDA4AE2F69884943F11B8ED8B4A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t933EA3F4F2D1FB8EF8B1A199BDC6C31E742F0B67 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrimitiveVertexIndices_t8EB9B6734656AA71E5B297FCA2BB03019572D3DF_mDC174AD598612528B40F798BEB8385FA7454EAE2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t72DE24DE95ECB62A42896D25775F0814DD6F0FA3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTempSectionRanges_tD6990F0B14E9E72BC862BB68EB67AEF5E0FC407A_m2ADF2056F894F2AEA3FF1847611ADD856562B155_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t7F25B9DC93C3F419EEB1504C316EA5A43A839013 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEdge_t45BDBB2EAABFC5DC56CFB8436B9BBDCF0817B042_m08E65CAA9E56298C1238904F92CF907E227AEDF3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD3F76E385395C54E30617CB7A70FA7A0C13A03FD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisEdgeData_tBE9F16F63CD1A6394E24C849E1C61EE2E949B327_m5516345431CA6811683AAE3EF117223DAD704EC3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2AF8901281F4FBDC0F72EE87BD64432E22CA3D8A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPrimitive_t2F0453D5728DBE6EB92401AD416590FF2A8044E1_m1DCAFE52EA4625309208DC707347A0CEEB5CFD93_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDDEFF67D10DF34C63199A4C9C8A5E1A382E696BC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTriangle_t0D6AD70EA81ED70B3CA18ED449932FD7965CF67C_mC529AC85657E7089FB8A8A58C710E195D9A524A3_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF13A0A98AF8A7266955561F91169FEDA8E3038DC L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVertex_tE910EACD4C00381493115B96187EACC145339C0D_m4333980275F88EAF4CA6327D8B93527BD9F83603_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBFAAE10A76E748DA8B813E59760FA31B8C65893D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVertexWithHash_t299994254AC8D16FE08871768D770865CC9E0803_m5092BB3A1B64CFC42E9350A635480B99904E0F32_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCFB88C92EB125220BE5E0BF5F485A4C31C3E7CC3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_m58338362C8E432EFC6A0823D6EF071D198806532_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m50A3027788A8966B3DAE4C590DAB4DA4F57E4326_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMaterialReferenceElement_t92B9C280FA5368F6A6C297561C172FA97EFBECAC_m2CFEED004555656DB7E335361B76A50EED3C96ED_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t18DAA986D077DA65817003C3C30533C28BC46FC3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubQueueItem_tAE6DA2A0B68107490190DB4680442767B9D420B7_mBE1C386CEE449FF0D851702151FF384C3165F23E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDD3CE9EF5F70858510DABB35CED98E57E5D5B325 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingleton_t5DD8E367CBD667FFC7D1AB73A7A2E2977008D79E_m2D0E7A4FC2209C9DCA070AA13A7BD07F324AB799_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4417AFCD30B3B044AD4C1820F261C4150BF2583C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E_m1AA51934173647D396895689A589224D085D6F74_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t297CCD1F4B5B2F0D5D4F02F6294D70E2F2129CE3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m233A99CC60113B3450B36BD78554E94AD6971E52_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF0A83538A02306EA7A8F22FEA945A6961365E8C8 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisParameterSlice_t11C9B163EC6791F24FB25F285363BC41ECEBE899_m0B679B9449783B7B628EC576082144E9F704E517_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tD66836534F00AADA4D14B93A8662AF8DA2D65075 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisObjectCacheEntry_tAF4D11F6AFF381CFF5663CEB107619335076E759_m4CBD9D8BCF14DC2807E2E4DD37DE4B2C212275B7_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1B659F9EAA7AD6B33721482F9FAE2AEC55A3D2C7 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m7550BC1E99E0E24223BEABE75210A804B2A9FF1E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPageInfo_t81B26DC2FC7AD78BC250F63F64EF2298AA12BE65_m13CD2C44F7237B11B193733BCC3CC2B0AC567D36_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA819843379444B67361326C661517B3CBE9EC6BB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m796FAEE0119C7A7433A647AD8C17310F9102AC29_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGhostIdInterval_tD48317D5BB85BFA1FEA8C038467761ED1CA6B912_mFFB0918560D0FFE03967FE881E6424F229F2B3E9_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t31E17D087B6B6EFA2924F23EECEC205BFC69DCCF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_mBB565E811073C063FC64066CF8B4B03F90A5DCEB_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBA7C3E15B67AEC95EB7BED61838A132B300A973A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A_m764BC91EE2E2D0E42B2805AE56911328C8F29574_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE1B72526B63B55CFCBF14E6B85775DED90C593C9 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m3BBEA86CBEEEB43395518F2501F09298E1F0F875_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRpcData_tAB66AA2284DCBC30B270751D6C527D5D12F9BE98_m6FFEF2736ED852AA5CBF85AB1D139C6E2272C215_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5594A2D5CBD363FD654FD5E610EE4FC98CA40496 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisArchiveLocation_tD1562A3B215068C85A77C1FF8706473A76FBF655_mE0E8F8DF55A4817D358FF2C402031823594237F2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5447C4E9738871F576316F92B4F536D15E202D4E L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisFileLocation_t9FA33B07144C24711FBEA421A9B90002FB7CCA53_m79404D3FF2FF009EBD01A361DC987291D1BBCA16_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t82B50323644184A7EB55F307ABD634860305B4AB L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisObjectLocation_tD004AC6D5AC91011A7EB7C3AE5DA194C5B687CFC_mDC54643D27217C920C43EC106D07869B13CA9B57_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFACFD63AA64CE5E87F43299317B36B1F1A5434B3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSceneLocation_t513A15994008EE7017AB6D88B353633C02D23251_m62BA7582D3431C9D9990E479E5C4B3E0EDB1C52F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE6C3A13B92F688CD5D36D96C6436A2E127D783C1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisActiveArchive_tCFA65607E96F373A624DFCE4D471FDF57429072F_mA91E634F7AC2634412CED0D0A6207F1FE9B97AE4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1170C49C96ABFA4F521CFC129D5418799647B13D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisActiveDependencySet_t2C7B254B9601C026F505B547CE3AFA54FDCEFB3E_mA2FD56C75DF97CBE0D996FCF0623CD079A741AB5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t674ED69046586A8A6F3063F20EA9F5AA2E179F7A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisActiveFile_t9648B8D9D7C2FE88CEDEECF22C507B1206B63724_m4ECA3F58A111DF6E11BDABFBE2D3173AE2CA74E2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBDFA1AC5AEB238644639F72C9F5FE69694AC8845 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisActiveObject_t269A7DEBE73CC6BA881C0F3A0A2A630577208081_m11C8A391F8E5AB0DFC27397DC82F7C24251B4D6E_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t991314D62AAB5FE66482505EAFC5DCBA739D8A9F L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisActiveScene_tB123EA4386EAE3B3D5645D6F3D41B39E4652D946_m46F4B21F1B7F02EAF09F4DCFA126104E6A9FDC37_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA811C07C24EC5A781AC5A6E82EE23732A79B8204 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisDeferredSceneDependencyUnload_tDE83BDAA8E1787CC2208DEC5F17C6BDDCB2DE280_mC039E88C00D178611FC96988E66AD5EEDE466A31_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF2264E3DE4E33131B73422BBC557DDE580236D29 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBufferPatchRecord_tBD8091132E007F22E94E8A2DBF5990E3B4B04B26_mB0D00AE2712F619BD8E656676EBC14F9E4DC3FFA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB3FB702F939338B75DE36B17F14FC2CA1E67E998 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMegaChunkInfo_t91C79EF158AC491B4B9FC9A193EF54A57EE5BA15_m97CE241FB23488E1317506EEB6EBADD83897BB8D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8F5F9EFF74AE21382A72CF317447A477E67AEEBF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSharedComponentRecord_tD2E55E43750EB885E2D891C5D7E9175ADCA54668_mE6D8A1CBE4A9CD38FEAB02C1B976FFF445C99AFD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tFC4BD5F24198ECEB8A65416D4AE0B2295F8DB86B L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisWorldDeserializationResult_tDF92FEE1575055CA091FCB54B02B4B53484F70C3_m5ED71BCCB6A432317E4586139AE590A3871EB328_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t587D7A8A1A309DAB5078749F00478212648B95D3 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisJoinedClient_tFEC0EFA49481E942D7D357D82F504604526B7028_m0FBD7FA64FD7A2481FE4D6256F3E27CEFA40AE16_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6F1DEC4D8C88DBBD451FB7F1F7B204275F09E73 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E_mDADDCD57D316DDD908CF8D626704414805528DE7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PendingSend_tC3CE84554C44A80712A3DA2E69BD887F0300440E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1_m22D312318402572FF01E0EE48DD2FAE8BFA9ABE8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m87F606EAFA3F5A0433B50C3E46FDF7E947DC7823_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTypeInfo_tD43B08A8D19156EEC98399693A96161F02139654_m19DBDCDCF5DB18B1FCFBC024CF2F7E5EDE406081_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3714C1DA541A15F113193B5BF9F03A517ACBDB4B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA_m7CC3BE3B7D2EE0C193C33D8634C8BFE1E7AA705A_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BackupRange_tBAAB2E916D2C332D8C2176F757D721D16974DDAA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisState_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D_m46B93E77F816BDB8CDF02635B04854B3EA217ECF_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(State_tD2F6D9EE8AC94467184FAB71EFC60936E9A6D09D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C_m7D37451B0EC2D09AD37A39FE78528FF00F8BF89E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashableShapeInputs_tA7B60F06514BFDD6A49C70D77AB4BDAC0C68300C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_mEAF3AE57BD1D383E09B980E8D7580E213D13397F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* UnsafeUtility_ArrayElementAsRef_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_mE2EC96A1D8E6D4DF7EC659E128814755A7075557_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20);
		return (ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20*)(((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* UnsafeUtility_ArrayElementAsRef_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mC51F8EF1765EE70896955EF51C596ADDC4E896FB_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9);
		return (URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9*)(((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* UnsafeUtility_ArrayElementAsRef_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m1EFB114B0998C1ECB40C7D8AF8D156995CBBB81A_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805);
		return (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805*)(((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* UnsafeUtility_ArrayElementAsRef_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m96D507BA80BD38725EE300102E3C10D8A40FE7CD_gshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE);
		return (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE*)(((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
	}
}
