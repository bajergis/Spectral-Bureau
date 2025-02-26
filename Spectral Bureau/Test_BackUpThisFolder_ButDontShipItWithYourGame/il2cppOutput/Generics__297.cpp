#include "pch-cpp.hpp"





template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
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
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct IEnumerator_1_tC3FD18B6B54C22DE1E74AED225347B9A248B1118;
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5;
struct UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4;
struct Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F;
IL2CPP_EXTERN_C String_t* _stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457;
IL2CPP_EXTERN_C String_t* _stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5  : public RuntimeObject
{
	Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF 
{
	uint64_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
typedef Il2CppFullySharedGenericStruct NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51;
typedef Il2CppFullySharedGenericStruct Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6;
typedef Il2CppFullySharedGenericStruct Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6;
struct ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_ThreadIndex;
};
struct UnsafeParallelHashMapBase_2_t7C4F12F07CF1ADD13346E702547584E2A01A318A 
{
};
struct UnsafeParallelHashMapBase_2_t2EFCD0EB26ED746FC5546891C4B9F616C16368AA 
{
};
struct UnsafeParallelHashMapBase_2_tFFA96C6358793E339B408DF1C579432254274BAF 
{
};
struct UnsafeParallelHashMapBase_2_tB5E97D275338A63802436C4B39D1CCA6B1ABE38E 
{
};
struct UnsafeParallelHashMapBase_2_tE1972978836775FEF6773510F242213E74BB109B 
{
};
struct UnsafeParallelHashMapBase_2_t4FB24DF7B8BD8AF640B6F98964EEB879CCA114D5 
{
};
struct UnsafeParallelHashMapBase_2_tC9A90870EF7154E90FC350CFEC5BAF8C8F35A4C0 
{
};
struct UnsafeParallelHashMapBase_2_t6BA67CB076A982AD559CA34920F7C94094E912CE 
{
};
struct UnsafeParallelHashMapBase_2_t3D97B13506AF5D443C625CBFA95E32B6DFD62467 
{
};
struct UnsafeParallelHashMapBase_2_tAAE08D929C0FA1FD4A848B64A79E086691DDF1AB 
{
};
struct UnsafeParallelHashMapBase_2_t76BA22EE61ABEC568B9E2007939459B7CE9C23D9 
{
};
struct UnsafeParallelHashMapBase_2_t9D64ED5E8461F54D509DE9F1FB39A513B00E9F10 
{
};
struct UnsafeParallelHashMapBase_2_tB5FD805F8785F40AC1DB26649FA1604D2BB76BAC 
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
struct ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A 
{
	int32_t ___Value;
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
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 
{
	int32_t ___Id;
};
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
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_BucketIndex;
	int32_t ___m_NextIndex;
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
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E 
{
	union
	{
		struct
		{
			int16_t ___FaceIndex;
			uint8_t ___EdgeIndex;
		};
		uint8_t Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E__padding[4];
	};
};
struct ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 
{
	int32_t ___Id;
	uint64_t ___Target;
};
struct Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 ___m_Enumerator;
};
struct NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD 
{
	Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 
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
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk;
				};
				#pragma pack(pop, tp)
				struct
				{
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding_forAlignmentOnly[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_forAlignmentOnly;
				};
			};
		};
		uint8_t ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5__padding[16];
	};
};
#pragma pack(pop, tp)
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GhostPrefabType_tD1030BF7DF962E1D907F3A02CB6B63F5E06056B9 
{
	int32_t ___value__;
};
struct GhostSendType_tC967BCDE4BAB2E9E904DE2976DADCABD63623E64 
{
	int32_t ___value__;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___m_ConnectionId;
};
struct UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___IndexInBakerArray;
};
struct EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___componentTypeIndex;
};
struct AccessMode_t08155A76104B91A50C66C3D69AB1F04FF5D91B5D 
{
	int32_t ___value__;
};
struct ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C 
{
	int32_t ___Id;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___TargetEntity;
};
struct ComponentOverrideType_t2DE7965D17406CE7419ACC700A7B6075AD5F857C 
{
	int32_t ___value__;
};
struct NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F 
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
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9 
{
	alignas(IL2CPP_SIZEOF_VOID_P) ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 
{
	EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78 
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF ___m_HashMapData;
};
struct UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4  : public RuntimeObject
{
	UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___m_Target;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___AccessModeType;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 
{
	int32_t ___OverrideType;
	int32_t ___PrefabType;
	int32_t ___SendMask;
	uint64_t ___Variant;
};
struct UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___pipeline;
	int32_t ___stage;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___connection;
};
struct NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 
{
	NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Keys;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Values;
};
struct NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 
{
	UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___Component;
};
struct Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 
{
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___ComponentType;
	int32_t ___ChildIndex;
};
struct NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 
{
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 
{
	Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5_StaticFields
{
	Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BD3C4A045ADF5381D44D369C5A69A8B2DD32D4E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF2418E7E944152B84C09B22EF8A07D4D94B92D12_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m11C7277A5B60C6B324DA2B34F2969C8C31B1042C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m35453D3ABC90B71F0F5BD74E73E052E1F3E42AF7_gshared_inline (void* ___0_destination, int32_t ___1_index, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mAEBC29EFF550131FA06C0F9F99E1E1E536FE47A3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD7646268C8E1CD0145689EABAA93CBCC06707647_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m69BBAC065DF8B2039F69B66A19DADCB4C8992846_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB3E0584E5CCB62AC4F42664FF465C46D77D36857_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_gshared_inline (void* ___0_destination, int32_t ___1_index, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m5577C19D6C0DC4974E2C4ABEC6B344532003A83B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m46880A0EFDF4ED537C59F10305595122C0D496DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_gshared_inline (void* ___0_destination, int32_t ___1_index, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46CE22D4650E9A42E776A9B11BBE0B4C87B5ED74_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___2_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_gshared_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_gshared_inline (void* ___0_destination, int32_t ___1_index, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mC77F5AB66A3F1112F9581CC2257BD11CFA332338_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___1_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD8D6DD2A93EE9841F8C6BC003EE2A63CD89F1E65_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___1_key, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* ___2_item, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m24683F35C36E565FB387D57C1F05F589C2402838_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_gshared_inline (void* ___0_destination, int32_t ___1_index, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE88D7B8B14D9E59AACC1169D9EE60E17BB243580_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_mE8BAA05443E959A9604B7940343773FAB5248D4D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m7D9B60A3879B085214080F83732C7ADAFFD44DF9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* ___1_item, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_gshared_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_gshared_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m8172112F6FE3C6916DC996A4DB0BF4DA5FF112E9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_gshared_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_mF43DD5CEDDEF5A8B4F7346EA7F2F490060EA8744_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m199EA1217EB4A344B7B06D873523C4554C800036_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___1_key, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* ___2_item, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mF7141B103D03304556D3112EDF413E90A64AEA68_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_mAD0413C9D9C1734624D6A23B91BD429B12F4FF64_gshared_inline (void* ___0_destination, int32_t ___1_index, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m3EDB30826A7EC57A18F948E9811D51327ACC443A_gshared_inline (void* ___0_destination, int32_t ___1_index, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE338330DCC27425A983F11FBEDA8F2351D21A31F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_mDF55858BA3C083427547E9DDD399F14F74F83355_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 UnsafeUtility_ReadArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_m04E66CD84FDA180D298E9DF9021FB03A947207B7_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mE5422D8A3C3FBD45B28F1C7F7B08E29A07AAEAC5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* ___1_item, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 UnsafeUtility_ReadArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m275C6C1087E16BA46C974C520C6E02A4F5CB644E_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m7DF34CBA6463972A30701AB081B9A3B842426B8D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m02FD7D8E68F00611750F0E03B3429EA02B9E492C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2B040772E480C47D6406E56382C8594BF3E47071_gshared_inline (void* ___0_destination, int32_t ___1_index, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m59424C7EB3DA4176DBDD2C6E0461FF3ED8B656F7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4373CA01694EFB1C98C8B19F57AECB4BA616CB9C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC7684897CC3C8E75D298B9FB6348FA0FC27E82D4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37_gshared (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pair_2__ctor_mCA54688368FE894C9F314471A3DA94A72B709F51_gshared (Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6* __this, Il2CppFullySharedGenericAny ___0_k, Il2CppFullySharedGenericAny ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m609BD02706D0A56487A7FC98C33DF71B5EB0E761_gshared (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m2E53F5D6022E23282FFA234ED50F9C8685FBF5F6_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_m416017EE770C3267F0C9CA35A89F35AE479D77ED_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_gshared_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_mC57447E87D721D0D17954030EAAEBDF1267CC2D0_gshared_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_mC23E3D58C124993FE9D422854DC11C2E01AFDEDE_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m71E29C26817D417A8A2F0BD72CC655A63A0B7916_gshared_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD1E87DCC3447DC53CF50C8E0C425286137D92579_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_mC63A571B6461AEE4D7973FF7558829E0C6D361AD_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mC88C64959293D233F279CAFFAD6EA5FB33DB1534_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mA23378D8DA4E65A23FC798E3863D2B99C9F1DAF3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mBC59040AB5EB4A22AF13613D696C467EB376C90D_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_m924C3105428639D4DE1F5BF3A7E169682852C52B_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m9E60D18BB452518D138218E6F2BE2A37179FCD74_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mCE7CD577AF9B4EB836529203675C53014B3E0695_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC05160D401557EBF8C1D4078E84D639751A5D43C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mC68BD77ED52BA5DA1FC853AA41A7E567B3FF8F2B_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m16CEDF3623866D732CBD2A3FB3710BD80223C230_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Item_m012E326C6238474A1D9373D1D05362A867255DED_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m26FEB8B618B54CEB2C0EF511628A9E09DF874A43_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_mB935226BDDA83792C02500C4F8F1685168CFF8DF_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m8D472FACAA50E2042374C5F3F946E5FB1C6747BA_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_gshared (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m30087FCD445B38A8CFF744231A0D1118556B7DEC_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F CollectionHelper_CreateNativeArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m7B481BF2605AD45C196C593E624327E013980A4E_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m1A9AC5B26196AC660CED48C9B5FA70886895726E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F UnsafeParallelHashMap_2_GetKeyArray_mE56FBE47878983240B4C14210188652BC756F6A7_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_mE627FE8337EF8DD911F929D9E7D3FDCF38C742E0_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m56D5231FEA13DE3087E1614A5AA13D9E3A4B93B9_gshared (NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CAC76103930742DFC5B46B9136F6633EC0578AE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 UnsafeParallelHashMap_2_GetKeyValueArrays_m10524B3CFFCB0AF695E085E7899C587F15D09A04_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F UnsafeParallelHashMap_2_AsParallelWriter_m38976EE84FB87AE68CFD2688048BBBBBA0566EC6_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnly__ctor_m42EDB99E7FBA7D561B00C29BCC88EC01917DD5D0_gshared_inline (ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78* __this, UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF ___0_hashMapData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78 UnsafeParallelHashMap_2_AsReadOnly_mDC988E7C28AB83309114AAAB1C3FEDBE32386624_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 UnsafeParallelHashMap_2_GetEnumerator_mC48C538EF1FDF8269F2B51618590A8554402E94E_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBBA0C20ECA9F46225BBD361AFE36A21F6262100E_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m53513A1D80D83ECD8DA49D1DE8B7B4008AEA1ADD_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, uint8_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, uint64_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, uint8_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3 (int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BD3C4A045ADF5381D44D369C5A69A8B2DD32D4E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BD3C4A045ADF5381D44D369C5A69A8B2DD32D4E_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81 (uint64_t* __this, uint64_t ___0_obj, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint8_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF2418E7E944152B84C09B22EF8A07D4D94B92D12 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF2418E7E944152B84C09B22EF8A07D4D94B92D12_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m11C7277A5B60C6B324DA2B34F2969C8C31B1042C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m11C7277A5B60C6B324DA2B34F2969C8C31B1042C_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m35453D3ABC90B71F0F5BD74E73E052E1F3E42AF7_inline (void* ___0_destination, int32_t ___1_index, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m35453D3ABC90B71F0F5BD74E73E052E1F3E42AF7_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mAEBC29EFF550131FA06C0F9F99E1E1E536FE47A3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mAEBC29EFF550131FA06C0F9F99E1E1E536FE47A3_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD7646268C8E1CD0145689EABAA93CBCC06707647 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD7646268C8E1CD0145689EABAA93CBCC06707647_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m69BBAC065DF8B2039F69B66A19DADCB4C8992846 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m69BBAC065DF8B2039F69B66A19DADCB4C8992846_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, int32_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB3E0584E5CCB62AC4F42664FF465C46D77D36857 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB3E0584E5CCB62AC4F42664FF465C46D77D36857_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline (void* ___0_destination, int32_t ___1_index, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m5577C19D6C0DC4974E2C4ABEC6B344532003A83B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m5577C19D6C0DC4974E2C4ABEC6B344532003A83B_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, uint64_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m46880A0EFDF4ED537C59F10305595122C0D496DA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m46880A0EFDF4ED537C59F10305595122C0D496DA_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A, bool*, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_inline (void* ___0_destination, int32_t ___1_index, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, bool, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46CE22D4650E9A42E776A9B11BBE0B4C87B5ED74 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46CE22D4650E9A42E776A9B11BBE0B4C87B5ED74_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UntypedWeakReferenceId_Equals_m8822E534760FE8F7765B70862B2ADD4987C1EC21 (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* __this, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, bool*, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___2_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline (void* ___0_destination, int32_t ___1_index, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8 (EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mC77F5AB66A3F1112F9581CC2257BD11CFA332338 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mC77F5AB66A3F1112F9581CC2257BD11CFA332338_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityComponentPair_Equals_mA1EEA429040690BDE4E8322F3BDC7D6C37BAEAE1 (EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D* __this, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___0_rhs, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___1_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD8D6DD2A93EE9841F8C6BC003EE2A63CD89F1E65 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___1_key, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* ___2_item, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E*, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD8D6DD2A93EE9841F8C6BC003EE2A63CD89F1E65_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m24683F35C36E565FB387D57C1F05F589C2402838 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m24683F35C36E565FB387D57C1F05F589C2402838_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_inline (void* ___0_destination, int32_t ___1_index, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Edge_GetHashCode_m1BC1607914656EB22B22AA6D6ED30CF44276BB57 (Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mE88D7B8B14D9E59AACC1169D9EE60E17BB243580 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mE88D7B8B14D9E59AACC1169D9EE60E17BB243580_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_mE8BAA05443E959A9604B7940343773FAB5248D4D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_mE8BAA05443E959A9604B7940343773FAB5248D4D_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Edge_Equals_mB001B58914664716BAA13E76363FE40667DF6FEF (Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* __this, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m7D9B60A3879B085214080F83732C7ADAFFD44DF9 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* ___1_item, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E*, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m7D9B60A3879B085214080F83732C7ADAFFD44DF9_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m8172112F6FE3C6916DC996A4DB0BF4DA5FF112E9 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m8172112F6FE3C6916DC996A4DB0BF4DA5FF112E9_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D (EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD* __this, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_mF43DD5CEDDEF5A8B4F7346EA7F2F490060EA8744 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_mF43DD5CEDDEF5A8B4F7346EA7F2F490060EA8744_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m199EA1217EB4A344B7B06D873523C4554C800036 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___1_key, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* ___2_item, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713*, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m199EA1217EB4A344B7B06D873523C4554C800036_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mF7141B103D03304556D3112EDF413E90A64AEA68 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mF7141B103D03304556D3112EDF413E90A64AEA68_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_mAD0413C9D9C1734624D6A23B91BD429B12F4FF64_inline (void* ___0_destination, int32_t ___1_index, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_mAD0413C9D9C1734624D6A23B91BD429B12F4FF64_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m3EDB30826A7EC57A18F948E9811D51327ACC443A_inline (void* ___0_destination, int32_t ___1_index, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m3EDB30826A7EC57A18F948E9811D51327ACC443A_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Component_GetHashCode_mEB6142F1685B4ABE8B92D0148211C1D4ABB6FBCD (Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mE338330DCC27425A983F11FBEDA8F2351D21A31F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mE338330DCC27425A983F11FBEDA8F2351D21A31F_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_mDF55858BA3C083427547E9DDD399F14F74F83355 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_mDF55858BA3C083427547E9DDD399F14F74F83355_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 UnsafeUtility_ReadArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_m04E66CD84FDA180D298E9DF9021FB03A947207B7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_m04E66CD84FDA180D298E9DF9021FB03A947207B7_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_Equals_m1DE9039AB7341833AFEE20278B642A6C9D344A70 (Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6* __this, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mE5422D8A3C3FBD45B28F1C7F7B08E29A07AAEAC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* ___1_item, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713*, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mE5422D8A3C3FBD45B28F1C7F7B08E29A07AAEAC5_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 UnsafeUtility_ReadArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m275C6C1087E16BA46C974C520C6E02A4F5CB644E_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m275C6C1087E16BA46C974C520C6E02A4F5CB644E_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m7DF34CBA6463972A30701AB081B9A3B842426B8D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2, bool*, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m7DF34CBA6463972A30701AB081B9A3B842426B8D_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m02FD7D8E68F00611750F0E03B3429EA02B9E492C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m02FD7D8E68F00611750F0E03B3429EA02B9E492C_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2B040772E480C47D6406E56382C8594BF3E47071_inline (void* ___0_destination, int32_t ___1_index, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2B040772E480C47D6406E56382C8594BF3E47071_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdatePipeline_GetHashCode_mDE83FBE14228AA9C267883597A045FA1B871B65E (UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m59424C7EB3DA4176DBDD2C6E0461FF3ED8B656F7 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m59424C7EB3DA4176DBDD2C6E0461FF3ED8B656F7_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4373CA01694EFB1C98C8B19F57AECB4BA616CB9C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4373CA01694EFB1C98C8B19F57AECB4BA616CB9C_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UpdatePipeline_Equals_mFD4C35E67429A6239DBB7CF76E7E817A5542C778 (UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2* __this, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC7684897CC3C8E75D298B9FB6348FA0FC27E82D4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, bool*, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC7684897CC3C8E75D298B9FB6348FA0FC27E82D4_gshared)(___0_data, ___1_item, ___2_it, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline void NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37 (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37_gshared)(__this, method);
}
inline void Pair_2__ctor_m080327976BEF3D9FBA133845A20983F2462E1D6A (Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6* __this, Il2CppFullySharedGenericStruct ___0_k, Il2CppFullySharedGenericStruct ___1_v, const RuntimeMethod* method)
{
	((  void (*) (Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Pair_2__ctor_mCA54688368FE894C9F314471A3DA94A72B709F51_gshared)((Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6*)__this, (Il2CppFullySharedGenericAny)___0_k, (Il2CppFullySharedGenericAny)___1_v, method);
}
inline void UnsafeParallelHashMapData_AllocateHashMap_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m609BD02706D0A56487A7FC98C33DF71B5EB0E761 (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**, const RuntimeMethod*))UnsafeParallelHashMapData_AllocateHashMap_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m609BD02706D0A56487A7FC98C33DF71B5EB0E761_gshared)(___0_length, ___1_bucketLength, ___2_label, ___3_outBuf, method);
}
inline void UnsafeParallelHashMap_2_Clear_m2E53F5D6022E23282FFA234ED50F9C8685FBF5F6 (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_Clear_m2E53F5D6022E23282FFA234ED50F9C8685FBF5F6_gshared)(__this, method);
}
inline void UnsafeParallelHashMap_2__ctor_m416017EE770C3267F0C9CA35A89F35AE479D77ED (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2__ctor_m416017EE770C3267F0C9CA35A89F35AE479D77ED_gshared)(__this, ___0_capacity, ___1_allocator, method);
}
inline bool UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsEmpty_mC57447E87D721D0D17954030EAAEBDF1267CC2D0_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsEmpty_mC57447E87D721D0D17954030EAAEBDF1267CC2D0_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_Count_mC23E3D58C124993FE9D422854DC11C2E01AFDEDE (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_mC23E3D58C124993FE9D422854DC11C2E01AFDEDE_gshared)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_get_Capacity_m71E29C26817D417A8A2F0BD72CC655A63A0B7916_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_m71E29C26817D417A8A2F0BD72CC655A63A0B7916_gshared_inline)(__this, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD1E87DCC3447DC53CF50C8E0C425286137D92579 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD1E87DCC3447DC53CF50C8E0C425286137D92579_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline void UnsafeParallelHashMap_2_set_Capacity_mC63A571B6461AEE4D7973FF7558829E0C6D361AD (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_set_Capacity_mC63A571B6461AEE4D7973FF7558829E0C6D361AD_gshared)(__this, ___0_value, method);
}
inline void UnsafeParallelHashMapBase_2_Clear_mC88C64959293D233F279CAFFAD6EA5FB33DB1534 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_mC88C64959293D233F279CAFFAD6EA5FB33DB1534_gshared)(___0_data, method);
}
inline bool UnsafeParallelHashMapBase_2_TryAdd_mA23378D8DA4E65A23FC798E3863D2B99C9F1DAF3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, int32_t, bool, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryAdd_mA23378D8DA4E65A23FC798E3863D2B99C9F1DAF3_gshared)(___0_data, ___1_key, ___2_item, ___3_isMultiHashMap, ___4_allocation, method);
}
inline bool UnsafeParallelHashMap_2_TryAdd_mBC59040AB5EB4A22AF13613D696C467EB376C90D (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_TryAdd_mBC59040AB5EB4A22AF13613D696C467EB376C90D_gshared)(__this, ___0_key, ___1_item, method);
}
inline void UnsafeParallelHashMap_2_Add_m924C3105428639D4DE1F5BF3A7E169682852C52B (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_Add_m924C3105428639D4DE1F5BF3A7E169682852C52B_gshared)(__this, ___0_key, ___1_item, method);
}
inline int32_t UnsafeParallelHashMapBase_2_Remove_m9E60D18BB452518D138218E6F2BE2A37179FCD74 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, bool, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Remove_m9E60D18BB452518D138218E6F2BE2A37179FCD74_gshared)(___0_data, ___1_key, ___2_isMultiHashMap, method);
}
inline bool UnsafeParallelHashMap_2_Remove_mCE7CD577AF9B4EB836529203675C53014B3E0695 (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, const RuntimeMethod*))UnsafeParallelHashMap_2_Remove_mCE7CD577AF9B4EB836529203675C53014B3E0695_gshared)(__this, ___0_key, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC05160D401557EBF8C1D4078E84D639751A5D43C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, int32_t*, NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC05160D401557EBF8C1D4078E84D639751A5D43C_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline bool UnsafeParallelHashMap_2_TryGetValue_mC68BD77ED52BA5DA1FC853AA41A7E567B3FF8F2B (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t* ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, int32_t*, const RuntimeMethod*))UnsafeParallelHashMap_2_TryGetValue_mC68BD77ED52BA5DA1FC853AA41A7E567B3FF8F2B_gshared)(__this, ___0_key, ___1_item, method);
}
inline bool UnsafeParallelHashMap_2_ContainsKey_m16CEDF3623866D732CBD2A3FB3710BD80223C230 (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, const RuntimeMethod*))UnsafeParallelHashMap_2_ContainsKey_m16CEDF3623866D732CBD2A3FB3710BD80223C230_gshared)(__this, ___0_key, method);
}
inline int32_t UnsafeParallelHashMap_2_get_Item_m012E326C6238474A1D9373D1D05362A867255DED (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Item_m012E326C6238474A1D9373D1D05362A867255DED_gshared)(__this, ___0_key, method);
}
inline bool UnsafeParallelHashMapBase_2_SetValue_m26FEB8B618B54CEB2C0EF511628A9E09DF874A43 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9* ___1_it, int32_t* ___2_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9*, int32_t*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_SetValue_m26FEB8B618B54CEB2C0EF511628A9E09DF874A43_gshared)(___0_data, ___1_it, ___2_item, method);
}
inline void UnsafeParallelHashMap_2_set_Item_mB935226BDDA83792C02500C4F8F1685168CFF8DF (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_set_Item_mB935226BDDA83792C02500C4F8F1685168CFF8DF_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMap_2_Dispose_m8D472FACAA50E2042374C5F3F946E5FB1C6747BA (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_Dispose_m8D472FACAA50E2042374C5F3F946E5FB1C6747BA_gshared)(__this, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_gshared)(___0_jobData, ___1_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m30087FCD445B38A8CFF744231A0D1118556B7DEC (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))UnsafeParallelHashMap_2_Dispose_m30087FCD445B38A8CFF744231A0D1118556B7DEC_gshared)(__this, ___0_inputDeps, method);
}
inline NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F CollectionHelper_CreateNativeArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m7B481BF2605AD45C196C593E624327E013980A4E (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m7B481BF2605AD45C196C593E624327E013980A4E_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetKeyArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m1A9AC5B26196AC660CED48C9B5FA70886895726E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F, const RuntimeMethod*))UnsafeParallelHashMapData_GetKeyArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m1A9AC5B26196AC660CED48C9B5FA70886895726E_gshared)(___0_data, ___1_result, method);
}
inline NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F UnsafeParallelHashMap_2_GetKeyArray_mE56FBE47878983240B4C14210188652BC756F6A7 (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetKeyArray_mE56FBE47878983240B4C14210188652BC756F6A7_gshared)(__this, ___0_allocator, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E_gshared)(___0_data, ___1_result, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_mE627FE8337EF8DD911F929D9E7D3FDCF38C742E0 (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetValueArray_mE627FE8337EF8DD911F929D9E7D3FDCF38C742E0_gshared)(__this, ___0_allocator, method);
}
inline void NativeKeyValueArrays_2__ctor_m56D5231FEA13DE3087E1614A5AA13D9E3A4B93B9 (NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeKeyValueArrays_2__ctor_m56D5231FEA13DE3087E1614A5AA13D9E3A4B93B9_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetKeyValueArrays_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CAC76103930742DFC5B46B9136F6633EC0578AE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8, const RuntimeMethod*))UnsafeParallelHashMapData_GetKeyValueArrays_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CAC76103930742DFC5B46B9136F6633EC0578AE_gshared)(___0_data, ___1_result, method);
}
inline NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 UnsafeParallelHashMap_2_GetKeyValueArrays_m10524B3CFFCB0AF695E085E7899C587F15D09A04 (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetKeyValueArrays_m10524B3CFFCB0AF695E085E7899C587F15D09A04_gshared)(__this, ___0_allocator, method);
}
inline ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F UnsafeParallelHashMap_2_AsParallelWriter_m38976EE84FB87AE68CFD2688048BBBBBA0566EC6 (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_AsParallelWriter_m38976EE84FB87AE68CFD2688048BBBBBA0566EC6_gshared)(__this, method);
}
inline void ReadOnly__ctor_m42EDB99E7FBA7D561B00C29BCC88EC01917DD5D0_inline (ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78* __this, UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF ___0_hashMapData, const RuntimeMethod* method)
{
	((  void (*) (ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78*, UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF, const RuntimeMethod*))ReadOnly__ctor_m42EDB99E7FBA7D561B00C29BCC88EC01917DD5D0_gshared_inline)(__this, ___0_hashMapData, method);
}
inline ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78 UnsafeParallelHashMap_2_AsReadOnly_mDC988E7C28AB83309114AAAB1C3FEDBE32386624 (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78 (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_AsReadOnly_mDC988E7C28AB83309114AAAB1C3FEDBE32386624_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736 (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 UnsafeParallelHashMap_2_GetEnumerator_mC48C538EF1FDF8269F2B51618590A8554402E94E (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_GetEnumerator_mC48C538EF1FDF8269F2B51618590A8554402E94E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
inline RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBBA0C20ECA9F46225BBD361AFE36A21F6262100E (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBBA0C20ECA9F46225BBD361AFE36A21F6262100E_gshared)(__this, method);
}
inline RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m53513A1D80D83ECD8DA49D1DE8B7B4008AEA1ADD (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*, const RuntimeMethod*))UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m53513A1D80D83ECD8DA49D1DE8B7B4008AEA1ADD_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m446C930A4ECCE73D5EB3D9D141FEC0D9FD97E38B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mC22789FFEA55F030DF18C9B098578731C8C09AD2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint64_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		uint8_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		uint64_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mD4516577672163E127FCFE4BCD92A7BDD01151AB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint8_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m0871CFFF53688FC3F8E77997FA358C62F3AB074B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BD3C4A045ADF5381D44D369C5A69A8B2DD32D4E(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		uint64_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		uint8_t L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m6F2C8253913DF1F9AB9FE0253C8A0D595BA67298_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		uint64_t L_16 = ___1_key;
		bool L_17;
		L_17 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m58671616C021782650B094DBCA7778C65783EDFD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		uint8_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(uint8_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		uint8_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint64_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		uint8_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(uint8_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		uint64_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_22 = ___2_it;
		uint64_t L_23 = L_22->___key;
		bool L_24;
		L_24 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		uint8_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		uint8_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(uint8_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m9ADBB8E3E823D0A293BDE6B5C2412619A0990F8C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, uint8_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		uint8_t* L_9 = ___2_item;
		uint8_t L_10 = (*(uint8_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m1BB7DF4615FA65384A29B37299C9EC20DF0C9B81_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mD45F6095913CCAF5B55FB3B698F70D2D7BD6F0AD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m54A1B24AFB1F4D0FC8FD5716D7FE548D0889523F_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m0C82DF6CBF9B1393CF77F78951EF55E972594EE7_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m03731CBBC55CB5DE43D4DDF1ABD5F1405FB4A9AD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m11C7277A5B60C6B324DA2B34F2969C8C31B1042C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mAEBC29EFF550131FA06C0F9F99E1E1E536FE47A3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mBE30937CE607FFE1998066D5172FFFB33CE46323_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF2418E7E944152B84C09B22EF8A07D4D94B92D12(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m11C7277A5B60C6B324DA2B34F2969C8C31B1042C(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint64_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m35453D3ABC90B71F0F5BD74E73E052E1F3E42AF7_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		uint64_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF2418E7E944152B84C09B22EF8A07D4D94B92D12(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mAEBC29EFF550131FA06C0F9F99E1E1E536FE47A3(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m30F38034CEB1904F3A6B8D26E9695071381C9F6A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m11C7277A5B60C6B324DA2B34F2969C8C31B1042C(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m35453D3ABC90B71F0F5BD74E73E052E1F3E42AF7_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m573A061DAFC8B86330975ACF2916FDA05BFF4DBE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF2418E7E944152B84C09B22EF8A07D4D94B92D12(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD7646268C8E1CD0145689EABAA93CBCC06707647(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		uint64_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m35453D3ABC90B71F0F5BD74E73E052E1F3E42AF7_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mDF5E49B194ADD7E0AB94739CFB4C01D9C21E060C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		uint64_t L_16 = ___1_key;
		bool L_17;
		L_17 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m4F4E06A4822737E98D6A010AC8298391C06F2AFF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF2418E7E944152B84C09B22EF8A07D4D94B92D12_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m69BBAC065DF8B2039F69B66A19DADCB4C8992846(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m69BBAC065DF8B2039F69B66A19DADCB4C8992846_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint64_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		uint64_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_22 = ___2_it;
		uint64_t L_23 = L_22->___key;
		bool L_24;
		L_24 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mECD7ECF0490297C3F177CD3C48D53E3EA024F906_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_9 = ___2_item;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_10 = (*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_9);
		UnsafeUtility_WriteArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m35453D3ABC90B71F0F5BD74E73E052E1F3E42AF7_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mA58031AF6F8A9A29B210B926BE987EB08D951514_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mB79089429A1F94AD25D6E363CDAD807E3073DAD5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mFA56183E43AAFE46534B23D584CAF71120960953_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mA51981AA628ADB4AA5F43D2BE1D08ED262F4A0DA_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mC6D3C8A7706E07DEB15F18070D3DE957703F334C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mD4A0FF023252BE72C67146C73BCD440F3A963BE4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint64_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		uint64_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m7082A5BC616C87E0338E86895AB5A891E5ADFB14_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mF8D766493619C99FF0598ED9106B99D68F4403CE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB3E0584E5CCB62AC4F42664FF465C46D77D36857(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		uint64_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		int32_t L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m2F4E47E9EB36DC1FC357386612479DD4161C2ACA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		uint64_t L_16 = ___1_key;
		bool L_17;
		L_17 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mB342AB1911603B5537FDC45083C0CC93DB7C87DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		int32_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(int32_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		int32_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint64_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		uint64_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_22 = ___2_it;
		uint64_t L_23 = L_22->___key;
		bool L_24;
		L_24 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		int32_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(int32_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mC50969BC07CC83C75E315AC941D64E82E3BE7333_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_item;
		int32_t L_10 = (*(int32_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m96C33A42D6EB53D37F53255A2B2859DF99FBF9E9_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m36C6680627CA47EA32E80AD49DE395681C23F938_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m90DE2213345741059E818432CC334A363F447187_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m496648C2CE11B4C18C8516AC515F16B0FFB638F9_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m5C4DFB0EC72855C4BC8D2E34F65B7EC35110733B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m991BE37AF523008FD144AE341C23CA87A63D835B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint64_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		uint64_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m0A2CE040A44EB65318CBF33C61D6D3FB637B2A00_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mC408F045C28A4984D27A1BF967A117F83FFD11C0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m5577C19D6C0DC4974E2C4ABEC6B344532003A83B(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		uint64_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mD41D1447F5366E7D1F255C290EA99805AD6286DD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		uint64_t L_16 = ___1_key;
		bool L_17;
		L_17 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m62DE6F3B682E9525DEF2037FC69C31557404677D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint64_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		uint64_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_22 = ___2_it;
		uint64_t L_23 = L_22->___key;
		bool L_24;
		L_24 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m10990DF802A43795FD7003177DCEE8F8BBD8573E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_9 = ___2_item;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_10 = (*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)L_9);
		UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m07344D6C16DE878FE07C5AA2E760FDE41F977D5F_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mAFE7B6EE5EC9D26B5DC6B34E9A16ED3C1C952874_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m0C84486403546B2ACF81457A79E08C222AB1BA42_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mC0997908D4E88D3A05D29AF775E4014FFD020B59_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m70A5124DEDCA3AF09DCBFFE25EB0F4ABB6EF86A2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mB17F9D3FF2A247BF16BFDC72E3DD81069633AA08_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint64_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		uint64_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		uint64_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m047B77555AE6827AF669391B3DC2178AC5642933_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint64_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mBA1C6FE4204916DBA24B80D68EF0C606DD0BF29D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m46880A0EFDF4ED537C59F10305595122C0D496DA(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		uint64_t L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		uint64_t L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m7D980F2236420F5DB654E315C859803AC03DD9D2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		uint64_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		uint64_t L_16 = ___1_key;
		bool L_17;
		L_17 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mDDAC4320F71ADB4B8D45D4C908C1F243586352F0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		uint64_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(uint64_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		uint64_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint64_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		uint64_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(uint64_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		uint64_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_22 = ___2_it;
		uint64_t L_23 = L_22->___key;
		bool L_24;
		L_24 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		uint64_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		uint64_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(uint64_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m702F35110FC690ACAD8D2484D77BCA6B3F35009B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, uint64_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		uint64_t* L_9 = ___2_item;
		uint64_t L_10 = (*(uint64_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mE2459A2B6935138D77FDB9582B9002F8700AEADC_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m0735BF2A69B32D38D3AD1A9B9EC95F1F17FEC820_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m71CF55252AC54DC72A57EC1CBAE0B7C22587F9E4_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mA639B425BA670F077E3DF821B91B80F67A245A74_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mACD75E1D7C20A4E9927A3C63A86F835AAA754831_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m6B56A71C832D5DCF172F938A10F4299C836340BC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		bool L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m9ADFDBB1EE2C6F14AD8F19FF3B9436AD4628C410_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m12EFA2199A30049C78986E9167F8AE28DAF6E423_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46CE22D4650E9A42E776A9B11BBE0B4C87B5ED74(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		bool L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m0F59DC00B16406D572B626979D670DE94DD4E992_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_16 = ___1_key;
		bool L_17;
		L_17 = UntypedWeakReferenceId_Equals_m8822E534760FE8F7765B70862B2ADD4987C1EC21((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m15891C4F3A6CE84AE7EBF09CA105477981F54446_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_4 = (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_0 = ___3_it;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		bool* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(bool));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		bool* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		bool* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(bool));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_22 = ___2_it;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_23 = L_22->___key;
		bool L_24;
		L_24 = UntypedWeakReferenceId_Equals_m8822E534760FE8F7765B70862B2ADD4987C1EC21((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		bool* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		bool L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(bool*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m4CC512F5AC710FACD9DB33D8823B6283B96A7CAC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___1_it, bool* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		bool* L_9 = ___2_item;
		bool L_10 = (*(bool*)L_9);
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m82AF0F877910C1FD93F6270BFE50D43664A94D32_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m977D7AF65AD10BEF391959613C0A7D37FC39CA00_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m0387669D654BE4625B4EAEF656B8CA8EC37DA24A_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mDCE300C0D59DD8AF6B64906B8909053E6D6B6D73_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mCAE3A74A5AB042537557D83CCB3C4B27F509B19C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_9 = L_1;
	const Il2CppFullySharedGenericStruct L_33 = L_1;
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_2;
		L_2 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_7, L_8, L_9);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		il2cpp_codegen_memcpy(L_13, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_11, L_12, L_13);
		int32_t L_15;
		L_15 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_14, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		V_6 = L_28;
		int32_t* L_29 = V_5;
		int32_t L_30 = V_2;
		int32_t L_31 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_31;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		il2cpp_codegen_memcpy(L_33, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_34;
		L_34 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_32, L_33, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_34)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t L_36 = V_2;
		int32_t L_37 = ___3_threadIndex;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_35, L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_38 = V_4;
		int32_t L_39 = V_3;
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		int32_t L_42;
		L_42 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4)))), L_40, L_41, NULL);
		int32_t L_43 = V_6;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m943307074EE293074937D7AE27E1745AA05FE78E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_4, L_5, L_6);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_8, L_9, L_10);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_11, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		uint8_t* L_16 = L_15->___buckets;
		V_2 = (int32_t*)L_16;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___next;
		V_4 = (int32_t*)L_18;
	}

IL_0046:
	{
		int32_t* L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_24;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		int32_t L_29;
		L_29 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))), L_27, L_28, NULL);
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m6F349BA91ED50CB53221A30136FCD2F0D0A2922B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_71 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_66 = L_2;
	const Il2CppFullySharedGenericStruct L_70 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		il2cpp_codegen_memcpy(L_2, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_3;
		L_3 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_1, L_2, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		il2cpp_codegen_memcpy(L_66, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_64, L_65, L_66);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		il2cpp_codegen_memcpy(L_70, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_68, L_69, L_70);
		int32_t L_72;
		L_72 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_71, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		int32_t L_74 = L_73->___bucketCapacityMask;
		V_4 = ((int32_t)(L_72&L_74));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___buckets;
		V_5 = (int32_t*)L_76;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_77 = ___0_data;
		NullCheck(L_77);
		uint8_t* L_78 = L_77->___next;
		V_3 = (int32_t*)L_78;
		int32_t* L_79 = V_3;
		int32_t L_80 = V_2;
		int32_t* L_81 = V_5;
		int32_t L_82 = V_4;
		int32_t L_83 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_79, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_80), 4))))) = (int32_t)L_83;
		int32_t* L_84 = V_5;
		int32_t L_85 = V_4;
		int32_t L_86 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_86;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m6648F1C82F87EE0C1EC2361356969E1893FF4EAC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_6, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_7;
		L_7 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_6, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (void*)L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16);
		il2cpp_codegen_memcpy(V_6, L_16, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_memcpy(L_17, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_19;
		L_19 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_18, (void*)(Il2CppFullySharedGenericStruct*)V_6, L_17);
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_26;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_27 = V_2;
		int32_t L_28 = V_4;
		int32_t* L_29 = V_2;
		int32_t L_30 = V_5;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))) = (int32_t)L_31;
	}

IL_0086:
	{
		int32_t* L_32 = V_2;
		int32_t L_33 = V_5;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t* L_38;
		L_38 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_37, NULL);
		int32_t L_39 = (*(L_38));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))) = (int32_t)L_39;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_34;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00bb:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m8BAE6A94FC57AB2FD13A4FD8729670F270544F06_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method) 
{
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_12 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_26 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_32 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_36 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_43 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t L_5;
		L_5 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_4, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer((NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)___1_it, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0)))));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		il2cpp_codegen_memcpy(L_12, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		il2cpp_codegen_memcpy(L_26, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		il2cpp_codegen_memcpy(L_32, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		il2cpp_codegen_memcpy(L_36, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_36, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		il2cpp_codegen_memcpy(L_43, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_44 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_43, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct* ___2_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___3_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___3_it;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_write_instance_field_data(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0), L_1, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_6);
		int32_t L_7 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_7);
		Il2CppFullySharedGenericStruct* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_11, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_2 = L_20;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_20);
		int32_t L_21 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_21);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		Il2CppFullySharedGenericStruct* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_24 = ___3_it;
		bool L_25;
		L_25 = ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_23 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_36 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_2, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___2_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1));
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_2 = ___2_it;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), (-1));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_3 = ___2_it;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), (-1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (void*)L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21);
		il2cpp_codegen_memcpy(V_2, L_21, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_22 = ___2_it;
		il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0)), SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_25;
		L_25 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_24, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_23);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		il2cpp_codegen_write_instance_field_data<int32_t>(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_29);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_30 = ___2_it;
		int32_t L_31 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_31);
		Il2CppFullySharedGenericStruct* L_32 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		uint8_t* L_34 = L_33->___values;
		int32_t L_35 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (void*)L_34, L_35, (Il2CppFullySharedGenericStruct*)L_36);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_32, L_36, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), (void**)(Il2CppFullySharedGenericStruct*)L_32, (void*)L_36);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m557C0D5801C035501701C60FE81775298FDD76A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, Il2CppFullySharedGenericStruct* ___2_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___1_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		Il2CppFullySharedGenericStruct* L_9 = ___2_item;
		il2cpp_codegen_memcpy(L_10, L_9, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_7, L_8, L_10);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m38D20A847D6996E7C118E952524DEE9592A2B629_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mFE0B2263ABF50F3C1DD001FF39C0D0DC181DD163_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mE68740A5B03A3A069612808990A947A3C61FCDE0_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m01EFA9C0C2C6B2994ED33A385814CC4C0FF28B19_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mD43D514B46250A8A918C363C0ABBE55F5FD86E05_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m06112A8C3C322DED4C227F12751FA67C00162280_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m48DE3A5273F0D922F5D6F8586591FCD5E70E4882_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m569D27B59979D96094528CBBA6CE76C01F95744C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mC77F5AB66A3F1112F9581CC2257BD11CFA332338(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mDCACDB0FFAA08F6DEA8E2D66B4D7680011684E36_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_16 = ___1_key;
		bool L_17;
		L_17 = EntityComponentPair_Equals_mA1EEA429040690BDE4E8322F3BDC7D6C37BAEAE1((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m0A460A55C5E8F908CC0A05FC0DC2074F37A71C73_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D* L_4 = (EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___2_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_0 = ___3_it;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___1_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_22 = ___2_it;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_23 = L_22->___key;
		bool L_24;
		L_24 = EntityComponentPair_Equals_mA1EEA429040690BDE4E8322F3BDC7D6C37BAEAE1((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mAE24DB0215C2EFE8FDD636D06C9F4B1F62F179FD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___1_it, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_9 = ___2_item;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_10 = (*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)L_9);
		UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m4AA4BA9E862D67350D871E5C0E3CF7227C69081D_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m3C75ECA674BC09CF86CED11D364566300E3D719A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m2C3CFF1935D8C2BC6270722BC37178F1D0292440_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mE19FA445B7211CFB297AACF60DE3B5222CDA6290_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m24B482D5515957CB9B3E09305BC8187518DAC1EF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m24683F35C36E565FB387D57C1F05F589C2402838_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE88D7B8B14D9E59AACC1169D9EE60E17BB243580_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m73432F014E8E8BF663B270FBD7C43AD657050850_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___1_key, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD8D6DD2A93EE9841F8C6BC003EE2A63CD89F1E65(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m24683F35C36E565FB387D57C1F05F589C2402838(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Edge_GetHashCode_m1BC1607914656EB22B22AA6D6ED30CF44276BB57((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD8D6DD2A93EE9841F8C6BC003EE2A63CD89F1E65(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mE88D7B8B14D9E59AACC1169D9EE60E17BB243580(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mD9C846A73155685BE0AAAE46CAFB23A12922CEA4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___1_key, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m24683F35C36E565FB387D57C1F05F589C2402838(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Edge_GetHashCode_m1BC1607914656EB22B22AA6D6ED30CF44276BB57((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mCE73874D0E0F79A64FC468A28B56DF289379C7CC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___1_key, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD8D6DD2A93EE9841F8C6BC003EE2A63CD89F1E65(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_mE8BAA05443E959A9604B7940343773FAB5248D4D(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Edge_GetHashCode_m1BC1607914656EB22B22AA6D6ED30CF44276BB57((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m328FDFEA38B5A5C92C3BC0A8D9E295AD0FC0347F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Edge_GetHashCode_m1BC1607914656EB22B22AA6D6ED30CF44276BB57((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_16 = ___1_key;
		bool L_17;
		L_17 = Edge_Equals_mB001B58914664716BAA13E76363FE40667DF6FEF((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m2C685EFA00704CEC9CE7A70119E9FF504C651B86_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* L_4 = (Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Edge_GetHashCode_m1BC1607914656EB22B22AA6D6ED30CF44276BB57(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD8D6DD2A93EE9841F8C6BC003EE2A63CD89F1E65_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___1_key, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* ___2_item, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_0 = ___3_it;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Edge_GetHashCode_m1BC1607914656EB22B22AA6D6ED30CF44276BB57((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m7D9B60A3879B085214080F83732C7ADAFFD44DF9(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m7D9B60A3879B085214080F83732C7ADAFFD44DF9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* ___1_item, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_22 = ___2_it;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_23 = L_22->___key;
		bool L_24;
		L_24 = Edge_Equals_mB001B58914664716BAA13E76363FE40667DF6FEF((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m6E475AF70BD8481BE9F0FEA664F7D200A5B04B51_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* ___1_it, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t9C59A5257BBBDAE996C6F7C275854F6497CD57FD* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E* L_9 = ___2_item;
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_10 = (*(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E*)L_9);
		UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mEF099417615AEE187C331B9A13EEF56C437DEA19_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m7035319629BEE2F93DDF384E43C55E8E82E2485A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mE5B7013AB4190B8CC796F49B17E6EE0404783306_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m8C2E336BCE031C6EEC4DDAADAEA520C16B80E166_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mD207B16B4B48F4E1F2A055D8AB56525DA3897CE4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m87EC433A3C97B6C80AAC72E53CAC192701CDFDC9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_14(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_15;
		L_15 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_14), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		V_6 = L_28;
		int32_t* L_29 = V_5;
		int32_t L_30 = V_2;
		int32_t L_31 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_31;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_33 = ___1_key;
		bool L_34;
		L_34 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489(L_32, L_33, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_34)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t L_36 = V_2;
		int32_t L_37 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3(L_35, L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_38 = V_4;
		int32_t L_39 = V_3;
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		int32_t L_42;
		L_42 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4)))), L_40, L_41, NULL);
		int32_t L_43 = V_6;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m17E2F0E7EF708A45A7F7AF07F6D193D6288BF1A6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_11(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_12;
		L_12 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_11), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		uint8_t* L_16 = L_15->___buckets;
		V_2 = (int32_t*)L_16;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___next;
		V_4 = (int32_t*)L_18;
	}

IL_0046:
	{
		int32_t* L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_24;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		int32_t L_29;
		L_29 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))), L_27, L_28, NULL);
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m421366715A6C94576C782D6F2026650C242FC77B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m8172112F6FE3C6916DC996A4DB0BF4DA5FF112E9(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_71(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_72;
		L_72 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_71), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		int32_t L_74 = L_73->___bucketCapacityMask;
		V_4 = ((int32_t)(L_72&L_74));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___buckets;
		V_5 = (int32_t*)L_76;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_77 = ___0_data;
		NullCheck(L_77);
		uint8_t* L_78 = L_77->___next;
		V_3 = (int32_t*)L_78;
		int32_t* L_79 = V_3;
		int32_t L_80 = V_2;
		int32_t* L_81 = V_5;
		int32_t L_82 = V_4;
		int32_t L_83 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_79, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_80), 4))))) = (int32_t)L_83;
		int32_t* L_84 = V_5;
		int32_t L_85 = V_4;
		int32_t L_86 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_86;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m1D9BAAA2E8E2546666E964B6A2C9E667772343A7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_6(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_16;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_17 = ___1_key;
		bool L_18;
		L_18 = EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D((&V_6), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		int32_t* L_23 = V_2;
		int32_t L_24 = V_5;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_25;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_26 = V_2;
		int32_t L_27 = V_4;
		int32_t* L_28 = V_2;
		int32_t L_29 = V_5;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))) = (int32_t)L_30;
	}

IL_0086:
	{
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		int32_t L_33 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))));
		int32_t* L_34 = V_2;
		int32_t L_35 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_35), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = V_5;
		*((int32_t*)L_40) = (int32_t)L_41;
		V_5 = L_33;
		bool L_42 = ___2_isMultiHashMap;
		if (L_42)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_43 = V_5;
		V_4 = L_43;
		int32_t* L_44 = V_2;
		int32_t L_45 = V_5;
		int32_t L_46 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))));
		V_5 = L_46;
	}

IL_00bb:
	{
		int32_t L_47 = V_5;
		if ((((int32_t)L_47) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_48 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		int32_t L_50 = L_49->___keyCapacity;
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m8ACBC5305CE72C024A0DEFBCE27386ABD8A697F0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD* L_4 = (EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)(&(&___1_it)->___key);
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_5(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		int32_t L_6;
		L_6 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_5), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_2 = ((int32_t)(L_6&L_8));
		int32_t* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_0051:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_29 = V_3;
		int32_t* L_30 = V_1;
		int32_t L_31 = V_3;
		int32_t* L_32 = V_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_33 = ___1_it;
		int32_t L_34 = L_33.___EntryIndex;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_35;
	}

IL_007b:
	{
		int32_t* L_36 = V_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_37 = ___1_it;
		int32_t L_38 = L_37.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = (*(L_40));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_44 = ___1_it;
		int32_t L_45 = L_44.___EntryIndex;
		*((int32_t*)L_43) = (int32_t)L_45;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___3_it;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_11(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_12;
		L_12 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_11), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_2 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_2;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_22 = ___2_it;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_23 = L_22->___key;
		bool L_24;
		L_24 = EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m4862991FC465C30D83A4810008EF8EE7287C6A6C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___1_it, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_9 = ___2_item;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_10 = (*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)L_9);
		UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m0DFDAB7D5CB472DF01919ED2C08370EA18601032_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m2BE6D33C8E352065F18E32154E9C3100DAD48E77_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mF9759F0970CE44AF25C67E79C65A6614B581CF36_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m46CF29948F0ECEA28D7C8D7874D489E554553D0A_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mC83C8EF71F47A7E6DB3DC52B2C968021FB0AC151_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m7B6B56701B3E0B236C9376BA71FBD1EEC441F945_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_14(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_15;
		L_15 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_14), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		V_6 = L_28;
		int32_t* L_29 = V_5;
		int32_t L_30 = V_2;
		int32_t L_31 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_31;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_33 = ___1_key;
		bool L_34;
		L_34 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA(L_32, L_33, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_34)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t L_36 = V_2;
		int32_t L_37 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1(L_35, L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_38 = V_4;
		int32_t L_39 = V_3;
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		int32_t L_42;
		L_42 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4)))), L_40, L_41, NULL);
		int32_t L_43 = V_6;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m0E9A74141EE1209F71ACA0B943D18E4735F62E14_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_11(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_12;
		L_12 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_11), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		uint8_t* L_16 = L_15->___buckets;
		V_2 = (int32_t*)L_16;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___next;
		V_4 = (int32_t*)L_18;
	}

IL_0046:
	{
		int32_t* L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_24;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		int32_t L_29;
		L_29 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))), L_27, L_28, NULL);
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m7F0E80AB09716EB21900FEC164B48B31171679D1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_mF43DD5CEDDEF5A8B4F7346EA7F2F490060EA8744(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_71(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_72;
		L_72 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_71), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		int32_t L_74 = L_73->___bucketCapacityMask;
		V_4 = ((int32_t)(L_72&L_74));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___buckets;
		V_5 = (int32_t*)L_76;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_77 = ___0_data;
		NullCheck(L_77);
		uint8_t* L_78 = L_77->___next;
		V_3 = (int32_t*)L_78;
		int32_t* L_79 = V_3;
		int32_t L_80 = V_2;
		int32_t* L_81 = V_5;
		int32_t L_82 = V_4;
		int32_t L_83 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_79, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_80), 4))))) = (int32_t)L_83;
		int32_t* L_84 = V_5;
		int32_t L_85 = V_4;
		int32_t L_86 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_86;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mEE987B0D967786B5A28CD1ADCA60E581F68201D0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_6(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_7;
		L_7 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_16;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_17 = ___1_key;
		bool L_18;
		L_18 = EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D((&V_6), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		int32_t* L_23 = V_2;
		int32_t L_24 = V_5;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_25;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_26 = V_2;
		int32_t L_27 = V_4;
		int32_t* L_28 = V_2;
		int32_t L_29 = V_5;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))) = (int32_t)L_30;
	}

IL_0086:
	{
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		int32_t L_33 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))));
		int32_t* L_34 = V_2;
		int32_t L_35 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_35), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = V_5;
		*((int32_t*)L_40) = (int32_t)L_41;
		V_5 = L_33;
		bool L_42 = ___2_isMultiHashMap;
		if (L_42)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_43 = V_5;
		V_4 = L_43;
		int32_t* L_44 = V_2;
		int32_t L_45 = V_5;
		int32_t L_46 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))));
		V_5 = L_46;
	}

IL_00bb:
	{
		int32_t L_47 = V_5;
		if ((((int32_t)L_47) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_48 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		int32_t L_50 = L_49->___keyCapacity;
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mCD2EC249D2087A12B6B603A9A21EC7E82C8A2BA0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD* L_4 = (EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)(&(&___1_it)->___key);
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_5(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		int32_t L_6;
		L_6 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_5), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_2 = ((int32_t)(L_6&L_8));
		int32_t* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_0051:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_29 = V_3;
		int32_t* L_30 = V_1;
		int32_t L_31 = V_3;
		int32_t* L_32 = V_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_33 = ___1_it;
		int32_t L_34 = L_33.___EntryIndex;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_35;
	}

IL_007b:
	{
		int32_t* L_36 = V_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_37 = ___1_it;
		int32_t L_38 = L_37.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = (*(L_40));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_44 = ___1_it;
		int32_t L_45 = L_44.___EntryIndex;
		*((int32_t*)L_43) = (int32_t)L_45;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___3_it;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_11(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_12;
		L_12 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_11), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_2 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_2;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_22 = ___2_it;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_23 = L_22->___key;
		bool L_24;
		L_24 = EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mCB0CBA290F72592422CF097DB9CF9D2F1B009728_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___1_it, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_9 = ___2_item;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_10 = (*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)L_9);
		UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mCFC53D7D76A39DFAA6C8736DA13CB1BA6947831A_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m5BA520D8A05048BAEFEDD23E4962C1FBF6D3FC04_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m956453DB455A93253C310181AB82E6776C366A0A_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mA64F015642DEB29F522CDD6C8CE448FC590D46EC_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mF84C23357A9EAF9A7960FD6DCF3FF9C8A4EF408D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mF7141B103D03304556D3112EDF413E90A64AEA68_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE338330DCC27425A983F11FBEDA8F2351D21A31F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mC386503D756B040EF5ABE5CD40EDC304800FA313_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___1_key, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m199EA1217EB4A344B7B06D873523C4554C800036(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mF7141B103D03304556D3112EDF413E90A64AEA68(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_mAD0413C9D9C1734624D6A23B91BD429B12F4FF64_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m3EDB30826A7EC57A18F948E9811D51327ACC443A_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Component_GetHashCode_mEB6142F1685B4ABE8B92D0148211C1D4ABB6FBCD((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m199EA1217EB4A344B7B06D873523C4554C800036(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mE338330DCC27425A983F11FBEDA8F2351D21A31F(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m8C6F5331464AD1DF5C93552AB748FC9D19A72C67_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___1_key, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mF7141B103D03304556D3112EDF413E90A64AEA68(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_mAD0413C9D9C1734624D6A23B91BD429B12F4FF64_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m3EDB30826A7EC57A18F948E9811D51327ACC443A_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Component_GetHashCode_mEB6142F1685B4ABE8B92D0148211C1D4ABB6FBCD((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m76A7D11380E3F14A8B732E0DC81EF22CCD6F811C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___1_key, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m199EA1217EB4A344B7B06D873523C4554C800036(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_mDF55858BA3C083427547E9DDD399F14F74F83355(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_mAD0413C9D9C1734624D6A23B91BD429B12F4FF64_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m3EDB30826A7EC57A18F948E9811D51327ACC443A_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = Component_GetHashCode_mEB6142F1685B4ABE8B92D0148211C1D4ABB6FBCD((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m942C81F4EBBA25031BCD3F4EDB4E9B597B884508_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Component_GetHashCode_mEB6142F1685B4ABE8B92D0148211C1D4ABB6FBCD((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_m04E66CD84FDA180D298E9DF9021FB03A947207B7_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_16 = ___1_key;
		bool L_17;
		L_17 = Component_Equals_m1DE9039AB7341833AFEE20278B642A6C9D344A70((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mF8807B5CA17FA7480E65CE6432B6FFFAFC572DC6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6* L_4 = (Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Component_GetHashCode_mEB6142F1685B4ABE8B92D0148211C1D4ABB6FBCD(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m199EA1217EB4A344B7B06D873523C4554C800036_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___1_key, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* ___2_item, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_0 = ___3_it;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Component_GetHashCode_mEB6142F1685B4ABE8B92D0148211C1D4ABB6FBCD((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mE5422D8A3C3FBD45B28F1C7F7B08E29A07AAEAC5(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mE5422D8A3C3FBD45B28F1C7F7B08E29A07AAEAC5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* ___1_item, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_m04E66CD84FDA180D298E9DF9021FB03A947207B7_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_22 = ___2_it;
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_23 = L_22->___key;
		bool L_24;
		L_24 = Component_Equals_m1DE9039AB7341833AFEE20278B642A6C9D344A70((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m275C6C1087E16BA46C974C520C6E02A4F5CB644E_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m3EB281B6AE6631418E32EE81D8D9BA0BE1C2E15E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* ___1_it, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tE8721DA213CA3A33425D0BCB711F0FAF17F20649* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713* L_9 = ___2_item;
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 L_10 = (*(ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713*)L_9);
		UnsafeUtility_WriteArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m3EDB30826A7EC57A18F948E9811D51327ACC443A_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m36B27FDD011D963A8B56D1EB91522E685123098F_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m38364725E2056E97FD7CF65D4F0D2B400C7686BA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m1613AC5A10A558FC07DF42AFD59000725A31FF0B_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m616019B0B34A117D959C9678F5AB18B4E7A9ADD8_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m405ECFC807A7FD9930EAE2F1E3ACD2475403D2FD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0052;
	}

IL_003e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		L_15->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m02FD7D8E68F00611750F0E03B3429EA02B9E492C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = ___1_threadIndex;
		int32_t L_11;
		L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___keyCapacity;
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t* L_17 = (int32_t*)(&L_16->___allocatedIndexLength);
		int32_t L_18;
		L_18 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_17, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16)));
		int32_t L_19 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		int32_t L_21 = L_20->___keyCapacity;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		V_4 = L_25;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_5;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, L_28))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), 1));
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_34 = V_1;
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_35, L_36)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = ___1_threadIndex;
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_41, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_44 = V_0;
		return L_44;
	}

IL_00ca:
	{
		int32_t L_45 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t* L_49;
		L_49 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_48, NULL);
		int32_t L_50 = ___1_threadIndex;
		int32_t L_51;
		L_51 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_52 = V_0;
		return L_52;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		int32_t* L_54;
		L_54 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_53, NULL);
		int32_t L_55 = ___1_threadIndex;
		int32_t L_56;
		L_56 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_55, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_57;
		L_57 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_57;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_58 = ___1_threadIndex;
		int32_t L_59 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_58, 1))%L_59));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = V_6;
		int32_t L_63;
		L_63 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16)))), 4)))));
		V_0 = L_63;
		int32_t L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))), ((int32_t)-3), L_69, NULL);
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_72 = V_0;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_6;
		int32_t* L_77 = V_1;
		int32_t L_78 = V_0;
		int32_t L_79 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_78), 4))))));
		int32_t L_80;
		L_80 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), L_79, NULL);
		int32_t* L_81 = V_1;
		int32_t L_82 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 4))))) = (int32_t)(-1);
		int32_t L_83 = V_0;
		return L_83;
	}

IL_0184:
	{
		int32_t L_84 = V_6;
		int32_t L_85 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_84, 1))%L_85));
	}

IL_018c:
	{
		int32_t L_86 = V_6;
		int32_t L_87 = ___1_threadIndex;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_88 = V_3;
		if (L_88)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		int32_t* L_90;
		L_90 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_89, NULL);
		int32_t L_91 = ___1_threadIndex;
		int32_t L_92 = V_0;
		int32_t L_93;
		L_93 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_91, ((int32_t)16)))), 4)))), ((int32_t)-3), L_92, NULL);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		int32_t L_97 = ___1_threadIndex;
		int32_t* L_98 = V_1;
		int32_t L_99 = V_0;
		int32_t L_100 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_98, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_99), 4))))));
		int32_t L_101;
		L_101 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16)))), 4)))), L_100, NULL);
		int32_t* L_102 = V_1;
		int32_t L_103 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_102, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 4))))) = (int32_t)(-1);
		int32_t L_104 = V_0;
		return L_104;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m59424C7EB3DA4176DBDD2C6E0461FF3ED8B656F7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___2_threadIndex;
		int32_t L_13 = ___1_idx;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), L_13, L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mCBE3B75A4E1B71C14C7A0C1B510BAB73A48B8427_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m7DF34CBA6463972A30701AB081B9A3B842426B8D(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m02FD7D8E68F00611750F0E03B3429EA02B9E492C(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2B040772E480C47D6406E56382C8594BF3E47071_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		bool L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UpdatePipeline_GetHashCode_mDE83FBE14228AA9C267883597A045FA1B871B65E((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m7DF34CBA6463972A30701AB081B9A3B842426B8D(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m59424C7EB3DA4176DBDD2C6E0461FF3ED8B656F7(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m8EEBA27CE9D344AA99CA0748E05FAAFBD34A86B0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m02FD7D8E68F00611750F0E03B3429EA02B9E492C(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2B040772E480C47D6406E56382C8594BF3E47071_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UpdatePipeline_GetHashCode_mDE83FBE14228AA9C267883597A045FA1B871B65E((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m3D7CE4B8DD0D83B281EFC46465C0011005CE2D55_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m7DF34CBA6463972A30701AB081B9A3B842426B8D(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0153;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = (*(L_9));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		int32_t L_15 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16)))), 4))))));
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		int32_t* L_17;
		L_17 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_16, NULL);
		int32_t L_18 = V_7;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)16)))), 4))))));
		V_2 = L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_3 = (int32_t*)L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23;
		L_23 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_22, NULL);
		int32_t L_24 = V_7;
		int32_t* L_25 = V_3;
		int32_t L_26 = V_2;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_24, ((int32_t)16)))), 4))))) = (int32_t)L_27;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = ___0_data;
		int32_t* L_31;
		L_31 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_30, NULL);
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		int32_t L_34 = V_7;
		int32_t L_35 = V_6;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		int32_t* L_37;
		L_37 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_36, NULL);
		int32_t L_38 = (*(L_37));
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		int32_t L_40 = L_39->___keyCapacity;
		int32_t L_41;
		L_41 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_40, NULL);
		V_8 = L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = V_8;
		int32_t L_44 = V_8;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_44, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_46 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4373CA01694EFB1C98C8B19F57AECB4BA616CB9C(L_42, L_43, L_45, L_46, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00c5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t* L_48;
		L_48 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_47, NULL);
		int32_t L_49 = (*(L_48));
		V_2 = L_49;
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		int32_t* L_52;
		L_52 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_51, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		uint8_t* L_54 = L_53->___next;
		int32_t L_55 = V_2;
		int32_t L_56 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 4)))));
		*((int32_t*)L_52) = (int32_t)L_56;
		goto IL_00f8;
	}

IL_00e6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t* L_58 = (int32_t*)(&L_57->___allocatedIndexLength);
		int32_t* L_59 = L_58;
		int32_t L_60 = *((int32_t*)L_59);
		V_9 = L_60;
		int32_t L_61 = V_9;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_9;
		V_2 = L_62;
	}

IL_00f8:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		uint8_t* L_64 = L_63->___keys;
		int32_t L_65 = V_2;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_66 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2B040772E480C47D6406E56382C8594BF3E47071_inline((void*)L_64, L_65, L_66, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_67 = ___0_data;
		NullCheck(L_67);
		uint8_t* L_68 = L_67->___values;
		int32_t L_69 = V_2;
		bool L_70 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_68, L_69, L_70, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_71;
		L_71 = UpdatePipeline_GetHashCode_mDE83FBE14228AA9C267883597A045FA1B871B65E((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_72 = ___0_data;
		NullCheck(L_72);
		int32_t L_73 = L_72->___bucketCapacityMask;
		V_4 = ((int32_t)(L_71&L_73));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		NullCheck(L_74);
		uint8_t* L_75 = L_74->___buckets;
		V_5 = (int32_t*)L_75;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_76 = ___0_data;
		NullCheck(L_76);
		uint8_t* L_77 = L_76->___next;
		V_3 = (int32_t*)L_77;
		int32_t* L_78 = V_3;
		int32_t L_79 = V_2;
		int32_t* L_80 = V_5;
		int32_t L_81 = V_4;
		int32_t L_82 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_79), 4))))) = (int32_t)L_82;
		int32_t* L_83 = V_5;
		int32_t L_84 = V_4;
		int32_t L_85 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_83, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 4))))) = (int32_t)L_85;
		return (bool)1;
	}

IL_0153:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m3359C7111F37F0EB35003953D5C22B78EB51157A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UpdatePipeline_GetHashCode_mDE83FBE14228AA9C267883597A045FA1B871B65E((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_16 = ___1_key;
		bool L_17;
		L_17 = UpdatePipeline_Equals_mFD4C35E67429A6239DBB7CF76E7E817A5542C778((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0086:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = (*(L_36));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_37;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = V_5;
		*((int32_t*)L_39) = (int32_t)L_40;
		V_5 = L_32;
		bool L_41 = ___2_isMultiHashMap;
		if (L_41)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_42 = V_5;
		V_4 = L_42;
		int32_t* L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))));
		V_5 = L_45;
	}

IL_00bb:
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_47 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_50 = V_0;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m06B303DB7824DBD326A27E738A58027387A3B896_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2* L_4 = (UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UpdatePipeline_GetHashCode_mDE83FBE14228AA9C267883597A045FA1B871B65E(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		*((int32_t*)L_42) = (int32_t)L_44;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m7DF34CBA6463972A30701AB081B9A3B842426B8D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_0 = ___3_it;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		bool* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(bool));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UpdatePipeline_GetHashCode_mDE83FBE14228AA9C267883597A045FA1B871B65E((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		bool* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC7684897CC3C8E75D298B9FB6348FA0FC27E82D4(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC7684897CC3C8E75D298B9FB6348FA0FC27E82D4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		bool* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(bool));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_22 = ___2_it;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_23 = L_22->___key;
		bool L_24;
		L_24 = UpdatePipeline_Equals_mFD4C35E67429A6239DBB7CF76E7E817A5542C778((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		bool* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		bool L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(bool*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m003686A2CD5BF8E698FD6F9CFA71BFB3A86C2354_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* ___1_it, bool* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t1C1777B055C85C1EF4C449F2B28CBA232165A972* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		bool* L_9 = ___2_item;
		bool L_10 = (*(bool*)L_9);
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m18ED3DD7DF634EB35C631A20645637E05D7EE0EF_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.int32_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mD514EC4F740D657F16FEFCCA3E1024C81B1AA7DF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mA26607B472363C2D71CC383E3E0780A8B768E528_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m3E32B42298B27422FA202E7A9929C3AA951F6B97_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDebuggerTypeProxy_2__ctor_m987AD575BFED1AEAD92F5DABF40893738C0F47A0_gshared (UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4* __this, UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___0_target, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 L_0 = ___0_target;
		__this->___m_Target = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* UnsafeParallelHashMapDebuggerTypeProxy_2_get_Items_mFAF8210CCD89AD5741956F8C54BAA23928CF4408_gshared (UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const uint32_t SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2);
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29);
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29);
	const Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6 L_15 = alloca(SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609);
	List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* V_0 = NULL;
	NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_0 = (List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_0;
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* L_1 = (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707*)(&__this->___m_Target);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_3;
		L_3 = ((  NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 (*) (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{
				NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				return;
			}
		});
		try
		{
			{
				V_2 = 0;
				goto IL_004a_1;
			}

IL_001c_1:
			{
				List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_4 = V_0;
				NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_5 = V_1;
				NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = L_5.___Keys;
				V_3 = L_6;
				int32_t L_7 = V_2;
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_3), L_7, (Il2CppFullySharedGenericStruct*)L_8);
				NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_9 = V_1;
				NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = L_9.___Values;
				V_4 = L_10;
				int32_t L_11 = V_2;
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (&V_4), L_11, (Il2CppFullySharedGenericStruct*)L_12);
				memset(L_15, 0, SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609);
				Pair_2__ctor_m080327976BEF3D9FBA133845A20983F2462E1D6A((Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6*)L_15, il2cpp_codegen_memcpy(L_13, L_8, SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2), il2cpp_codegen_memcpy(L_14, L_12, SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				NullCheck(L_4);
				InvokerActionInvoker1< Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_4, L_15);
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_004a_1:
			{
				int32_t L_17 = V_2;
				int32_t L_18;
				L_18 = ((  int32_t (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				if ((((int32_t)L_17) < ((int32_t)L_18)))
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0064;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_19 = V_0;
		return L_19;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_m416017EE770C3267F0C9CA35A89F35AE479D77ED_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_4 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m609BD02706D0A56487A7FC98C33DF71B5EB0E761(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2)), L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		UnsafeParallelHashMap_2_Clear_m2E53F5D6022E23282FFA234ED50F9C8685FBF5F6(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2__ctor_m416017EE770C3267F0C9CA35A89F35AE479D77ED_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	UnsafeParallelHashMap_2__ctor_m416017EE770C3267F0C9CA35A89F35AE479D77ED(_thisAdjusted, ___0_capacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_mC57447E87D721D0D17954030EAAEBDF1267CC2D0_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_get_IsEmpty_mC57447E87D721D0D17954030EAAEBDF1267CC2D0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_IsEmpty_mC57447E87D721D0D17954030EAAEBDF1267CC2D0_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_mC23E3D58C124993FE9D422854DC11C2E01AFDEDE_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_Count_mC23E3D58C124993FE9D422854DC11C2E01AFDEDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Count_mC23E3D58C124993FE9D422854DC11C2E01AFDEDE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m71E29C26817D417A8A2F0BD72CC655A63A0B7916_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_get_Capacity_m71E29C26817D417A8A2F0BD72CC655A63A0B7916_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_Capacity_m71E29C26817D417A8A2F0BD72CC655A63A0B7916_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_mC63A571B6461AEE4D7973FF7558829E0C6D361AD_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD1E87DCC3447DC53CF50C8E0C425286137D92579(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_set_Capacity_mC63A571B6461AEE4D7973FF7558829E0C6D361AD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	UnsafeParallelHashMap_2_set_Capacity_mC63A571B6461AEE4D7973FF7558829E0C6D361AD(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m2E53F5D6022E23282FFA234ED50F9C8685FBF5F6_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_mC88C64959293D233F279CAFFAD6EA5FB33DB1534(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Clear_m2E53F5D6022E23282FFA234ED50F9C8685FBF5F6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	UnsafeParallelHashMap_2_Clear_m2E53F5D6022E23282FFA234ED50F9C8685FBF5F6(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mBC59040AB5EB4A22AF13613D696C467EB376C90D_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_1 = ___0_key;
		int32_t L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_mA23378D8DA4E65A23FC798E3863D2B99C9F1DAF3(L_0, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_TryAdd_mBC59040AB5EB4A22AF13613D696C467EB376C90D_AdjustorThunk (RuntimeObject* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_TryAdd_mBC59040AB5EB4A22AF13613D696C467EB376C90D(_thisAdjusted, ___0_key, ___1_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_m924C3105428639D4DE1F5BF3A7E169682852C52B_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_1 = ___0_key;
		int32_t L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_mA23378D8DA4E65A23FC798E3863D2B99C9F1DAF3(L_0, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Add_m924C3105428639D4DE1F5BF3A7E169682852C52B_AdjustorThunk (RuntimeObject* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	UnsafeParallelHashMap_2_Add_m924C3105428639D4DE1F5BF3A7E169682852C52B(_thisAdjusted, ___0_key, ___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mCE7CD577AF9B4EB836529203675C53014B3E0695_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_m9E60D18BB452518D138218E6F2BE2A37179FCD74(L_0, L_1, (bool)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_Remove_mCE7CD577AF9B4EB836529203675C53014B3E0695_AdjustorThunk (RuntimeObject* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Remove_mCE7CD577AF9B4EB836529203675C53014B3E0695(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mC68BD77ED52BA5DA1FC853AA41A7E567B3FF8F2B_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) 
{
	NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_1 = ___0_key;
		int32_t* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC05160D401557EBF8C1D4078E84D639751A5D43C(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_TryGetValue_mC68BD77ED52BA5DA1FC853AA41A7E567B3FF8F2B_AdjustorThunk (RuntimeObject* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t* ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_TryGetValue_mC68BD77ED52BA5DA1FC853AA41A7E567B3FF8F2B(_thisAdjusted, ___0_key, ___1_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m16CEDF3623866D732CBD2A3FB3710BD80223C230_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC05160D401557EBF8C1D4078E84D639751A5D43C(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_ContainsKey_m16CEDF3623866D732CBD2A3FB3710BD80223C230_AdjustorThunk (RuntimeObject* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_ContainsKey_m16CEDF3623866D732CBD2A3FB3710BD80223C230(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Item_m012E326C6238474A1D9373D1D05362A867255DED_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_mC68BD77ED52BA5DA1FC853AA41A7E567B3FF8F2B(__this, L_0, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_get_Item_m012E326C6238474A1D9373D1D05362A867255DED_AdjustorThunk (RuntimeObject* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_Item_m012E326C6238474A1D9373D1D05362A867255DED(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_mB935226BDDA83792C02500C4F8F1685168CFF8DF_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t85AFD0F4AE87F54C6105061C024D3DA74D6ECDD9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC05160D401557EBF8C1D4078E84D639751A5D43C(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_SetValue_m26FEB8B618B54CEB2C0EF511628A9E09DF874A43(L_3, (&V_1), (&___1_value), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}

IL_0023:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 L_6 = ___0_key;
		int32_t L_7 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8 = __this->___m_AllocatorLabel;
		bool L_9;
		L_9 = UnsafeParallelHashMapBase_2_TryAdd_mA23378D8DA4E65A23FC798E3863D2B99C9F1DAF3(L_5, L_6, L_7, (bool)0, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_set_Item_mB935226BDDA83792C02500C4F8F1685168CFF8DF_AdjustorThunk (RuntimeObject* __this, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	UnsafeParallelHashMap_2_set_Item_mB935226BDDA83792C02500C4F8F1685168CFF8DF(_thisAdjusted, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m8D472FACAA50E2042374C5F3F946E5FB1C6747BA_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_1, L_2, NULL);
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_m8D472FACAA50E2042374C5F3F946E5FB1C6747BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	UnsafeParallelHashMap_2_Dispose_m8D472FACAA50E2042374C5F3F946E5FB1C6747BA(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m30087FCD445B38A8CFF744231A0D1118556B7DEC_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = ___0_inputDeps;
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		(&V_0)->___Data = L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_3;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
		return L_6;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m30087FCD445B38A8CFF744231A0D1118556B7DEC_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_m30087FCD445B38A8CFF744231A0D1118556B7DEC(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F UnsafeParallelHashMap_2_GetKeyArray_mE56FBE47878983240B4C14210188652BC756F6A7_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m7B481BF2605AD45C196C593E624327E013980A4E(L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m1A9AC5B26196AC660CED48C9B5FA70886895726E(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F UnsafeParallelHashMap_2_GetKeyArray_mE56FBE47878983240B4C14210188652BC756F6A7_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	NativeArray_1_t44EB3A133DF22EE1B584A5B212FD6518CD42B27F _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetKeyArray_mE56FBE47878983240B4C14210188652BC756F6A7(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_mE627FE8337EF8DD911F929D9E7D3FDCF38C742E0_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B(L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_mE627FE8337EF8DD911F929D9E7D3FDCF38C742E0_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetValueArray_mE627FE8337EF8DD911F929D9E7D3FDCF38C742E0(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 UnsafeParallelHashMap_2_GetKeyValueArrays_m10524B3CFFCB0AF695E085E7899C587F15D09A04_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_m56D5231FEA13DE3087E1614A5AA13D9E3A4B93B9((&V_0), L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CAC76103930742DFC5B46B9136F6633EC0578AE(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 UnsafeParallelHashMap_2_GetKeyValueArrays_m10524B3CFFCB0AF695E085E7899C587F15D09A04_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	NativeKeyValueArrays_2_t19D6755C256E9E9799F2B04324A5777EA9202AA8 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetKeyValueArrays_m10524B3CFFCB0AF695E085E7899C587F15D09A04(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F UnsafeParallelHashMap_2_AsParallelWriter_m38976EE84FB87AE68CFD2688048BBBBBA0566EC6_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___m_ThreadIndex = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F UnsafeParallelHashMap_2_AsParallelWriter_m38976EE84FB87AE68CFD2688048BBBBBA0566EC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	ParallelWriter_tFE1AFC8CEDC274D782B5C204DF7E46488AF09C1F _returnValue;
	_returnValue = UnsafeParallelHashMap_2_AsParallelWriter_m38976EE84FB87AE68CFD2688048BBBBBA0566EC6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78 UnsafeParallelHashMap_2_AsReadOnly_mDC988E7C28AB83309114AAAB1C3FEDBE32386624_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF L_0 = (*(UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*)__this);
		ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnly__ctor_m42EDB99E7FBA7D561B00C29BCC88EC01917DD5D0_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return L_1;
	}
}
IL2CPP_EXTERN_C  ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78 UnsafeParallelHashMap_2_AsReadOnly_mDC988E7C28AB83309114AAAB1C3FEDBE32386624_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_AsReadOnly_mDC988E7C28AB83309114AAAB1C3FEDBE32386624(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 UnsafeParallelHashMap_2_GetEnumerator_mC48C538EF1FDF8269F2B51618590A8554402E94E_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736((&L_1), L_0, NULL);
		(&V_0)->___m_Enumerator = L_1;
		Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 UnsafeParallelHashMap_2_GetEnumerator_mC48C538EF1FDF8269F2B51618590A8554402E94E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	Enumerator_t03E2BD59174F16AA87A62D8037212BA7F5D5CAC2 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetEnumerator_mC48C538EF1FDF8269F2B51618590A8554402E94E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBBA0C20ECA9F46225BBD361AFE36A21F6262100E_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBBA0C20ECA9F46225BBD361AFE36A21F6262100E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBBA0C20ECA9F46225BBD361AFE36A21F6262100E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m53513A1D80D83ECD8DA49D1DE8B7B4008AEA1ADD_gshared (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m53513A1D80D83ECD8DA49D1DE8B7B4008AEA1ADD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m53513A1D80D83ECD8DA49D1DE8B7B4008AEA1ADD(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___2_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m35453D3ABC90B71F0F5BD74E73E052E1F3E42AF7_gshared_inline (void* ___0_destination, int32_t ___1_index, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_3 = ___2_value;
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_3 = (*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_gshared_inline (void* ___0_destination, int32_t ___1_index, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = ___2_value;
		*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = (*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_gshared_inline (void* ___0_destination, int32_t ___1_index, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_3 = ___2_value;
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = ___2_value;
		*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_3 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = (*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_gshared_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_3 = ___2_value;
		*(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_gshared_inline (void* ___0_destination, int32_t ___1_index, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F);
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_3 = ___2_value;
		*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_3 = (*(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F);
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_3 = (*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m37733B91635203421C616F8FFD1AC69767186AE6_gshared_inline (void* ___0_destination, int32_t ___1_index, Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E);
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_3 = ___2_value;
		*(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E UnsafeUtility_ReadArrayElement_TisEdge_t42A2E98E36FF6C01B5676E368679987BD2F1591E_m8DDE784D617CE832C6DE20FF52F3F36C5644C1CA_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E);
		Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E L_3 = (*(Edge_t42A2E98E36FF6C01B5676E368679987BD2F1591E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_gshared_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_3 = ___2_value;
		*(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_gshared_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78);
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_3 = ___2_value;
		*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_3 = (*(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78);
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_3 = (*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_gshared_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C);
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_3 = ___2_value;
		*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C);
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_3 = (*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_mAD0413C9D9C1734624D6A23B91BD429B12F4FF64_gshared_inline (void* ___0_destination, int32_t ___1_index, Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6);
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_3 = ___2_value;
		*(Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m3EDB30826A7EC57A18F948E9811D51327ACC443A_gshared_inline (void* ___0_destination, int32_t ___1_index, ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713);
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 L_3 = ___2_value;
		*(ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 UnsafeUtility_ReadArrayElement_TisComponent_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6_m04E66CD84FDA180D298E9DF9021FB03A947207B7_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6);
		Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6 L_3 = (*(Component_t14D56EB4E115D3A73696DD096FD0A0FB2D9C7DC6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 UnsafeUtility_ReadArrayElement_TisComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713_m275C6C1087E16BA46C974C520C6E02A4F5CB644E_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713);
		ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713 L_3 = (*(ComponentOverride_tAD6F4788018C5B1B7633F6DF0C8EB07FFD9B2713*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m2B040772E480C47D6406E56382C8594BF3E47071_gshared_inline (void* ___0_destination, int32_t ___1_index, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2);
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_3 = ___2_value;
		*(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 UnsafeUtility_ReadArrayElement_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mC1917A7646F09213727BC23D1069EE21D2BF3920_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2);
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_3 = (*(UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_gshared_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_mC57447E87D721D0D17954030EAAEBDF1267CC2D0_gshared_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m3FD2B5365051A862F4DAF8A7DA1FD1C57D1D676E_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m71E29C26817D417A8A2F0BD72CC655A63A0B7916_gshared_inline (UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnly__ctor_m42EDB99E7FBA7D561B00C29BCC88EC01917DD5D0_gshared_inline (ReadOnly_t7286ED39F6A4AAFF2425371ADFBCA5BC2E4E1C78* __this, UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF ___0_hashMapData, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMap_2_t511CCBF207E65080A2C295EB920D0D10653441AF L_0 = ___0_hashMapData;
		__this->___m_HashMapData = L_0;
		return;
	}
}
