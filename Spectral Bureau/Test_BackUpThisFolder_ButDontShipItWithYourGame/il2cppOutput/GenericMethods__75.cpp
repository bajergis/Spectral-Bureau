#include "pch-cpp.hpp"





template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
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
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct BufferHeader_tE8AAA8D273ED176E5B8CC1BB6D927DE310D8E18B;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA;
struct BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5;
struct QueryTypes_tE3A9F854C5272D3077BA4C51A154002D3B0E7408;

IL2CPP_EXTERN_C RuntimeClass* ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct DynamicBuffer_1_t03741E98D2491126D3A04D847826ECA466AD8062 
{
	BufferHeader_tE8AAA8D273ED176E5B8CC1BB6D927DE310D8E18B* ___m_Buffer;
	int32_t ___m_InternalCapacity;
};
struct DynamicBuffer_1_t69E813233C3220F53EF1E72AB0633180139D8974 
{
	BufferHeader_tE8AAA8D273ED176E5B8CC1BB6D927DE310D8E18B* ___m_Buffer;
	int32_t ___m_InternalCapacity;
};
struct DynamicBuffer_1_t130ECD8704095576339006DD0470FC2DC6A4BE95 
{
	BufferHeader_tE8AAA8D273ED176E5B8CC1BB6D927DE310D8E18B* ___m_Buffer;
	int32_t ___m_InternalCapacity;
};
struct DynamicBuffer_1_t133A81701BD02BCBE16237681DF151150C1F8DA2 
{
	BufferHeader_tE8AAA8D273ED176E5B8CC1BB6D927DE310D8E18B* ___m_Buffer;
	int32_t ___m_InternalCapacity;
};
struct RefRW_1_t5CFAF5C079CBAF303F6478628E3D460BF43BF12F 
{
	uint8_t* ____Data;
};
struct RefRW_1_t2656D726C60E003E5F3A45C682C3DBEEBE538B94 
{
	uint8_t* ____Data;
};
struct RefRW_1_t4D4BFBFC4F0286F3E9E3AC6B652499FBBF9ECAD2 
{
	uint8_t* ____Data;
};
struct RefRW_1_t0CE6085269F8F20CAAB343FD72B8473DF6F4A80F 
{
	uint8_t* ____Data;
};
struct RefRW_1_t03CA70EAB1AC34D2F8AC85CC5EE4514788516586 
{
	uint8_t* ____Data;
};
struct RefRW_1_tB66EB971C02EC31B52B9DA020E3F60BDFD6426F1 
{
	uint8_t* ____Data;
};
struct RefRW_1_t97324A4CC51388A489E039808C3DD3DE5F0B99D1 
{
	uint8_t* ____Data;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
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
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
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
					uint8_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_OffsetPadding[1];
					uint8_t ___byte0001;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_OffsetPadding[2];
					uint8_t ___byte0002;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_OffsetPadding[3];
					uint8_t ___byte0003;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_OffsetPadding[4];
					uint8_t ___byte0004;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_OffsetPadding[5];
					uint8_t ___byte0005;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_OffsetPadding[6];
					uint8_t ___byte0006;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_OffsetPadding[7];
					uint8_t ___byte0007;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint8_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_OffsetPadding[9];
					uint8_t ___byte0009;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_OffsetPadding[10];
					uint8_t ___byte0010;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_OffsetPadding[11];
					uint8_t ___byte0011;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_OffsetPadding[12];
					uint8_t ___byte0012;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_OffsetPadding[13];
					uint8_t ___byte0013;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_OffsetPadding[14];
					uint8_t ___byte0014;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_OffsetPadding[15];
					uint8_t ___byte0015;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
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
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674 
{
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t1B7B48A9B1389CD907B27629BAA5B0F080F48D58 
{
	QueryTypes_tE3A9F854C5272D3077BA4C51A154002D3B0E7408* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D 
{
	BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* ____builderDataPtr;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ____allocator;
};
struct EntityQueryOptions_t92CCDF8D6C6B7CA6FD47494CE90A2D496114F66D 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
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
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_OffsetPadding[16];
					uint8_t ___byte0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_OffsetPadding[17];
					uint8_t ___byte0017;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_OffsetPadding[18];
					uint8_t ___byte0018;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_OffsetPadding[19];
					uint8_t ___byte0019;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_OffsetPadding[20];
					uint8_t ___byte0020;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_OffsetPadding[21];
					uint8_t ___byte0021;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_OffsetPadding[22];
					uint8_t ___byte0022;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_OffsetPadding[23];
					uint8_t ___byte0023;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_OffsetPadding[24];
					uint8_t ___byte0024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_OffsetPadding[25];
					uint8_t ___byte0025;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_OffsetPadding[26];
					uint8_t ___byte0026;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_OffsetPadding[27];
					uint8_t ___byte0027;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_OffsetPadding[28];
					uint8_t ___byte0028;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_OffsetPadding[29];
					uint8_t ___byte0029;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};
#pragma pack(pop, tp)
struct KinematicCharacterAspect_t8EFA437B3D16A60F5793D274869E8124F1C0FF5D 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	RefRW_1_tB66EB971C02EC31B52B9DA020E3F60BDFD6426F1 ___LocalTransform;
	RefRW_1_t03CA70EAB1AC34D2F8AC85CC5EE4514788516586 ___CharacterProperties;
	RefRW_1_t0CE6085269F8F20CAAB343FD72B8473DF6F4A80F ___CharacterBody;
	RefRW_1_t97324A4CC51388A489E039808C3DD3DE5F0B99D1 ___PhysicsCollider;
	DynamicBuffer_1_t69E813233C3220F53EF1E72AB0633180139D8974 ___CharacterHitsBuffer;
	DynamicBuffer_1_t133A81701BD02BCBE16237681DF151150C1F8DA2 ___StatefulHitsBuffer;
	DynamicBuffer_1_t03741E98D2491126D3A04D847826ECA466AD8062 ___DeferredImpulsesBuffer;
	DynamicBuffer_1_t130ECD8704095576339006DD0470FC2DC6A4BE95 ___VelocityProjectionHits;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct AccessMode_t08155A76104B91A50C66C3D69AB1F04FF5D91B5D 
{
	int32_t ___value__;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___AccessModeType;
};
struct FirstPersonCharacterAspect_t08A07A31494695EF4D31A81F804ABCA1F8DBA280 
{
	KinematicCharacterAspect_t8EFA437B3D16A60F5793D274869E8124F1C0FF5D ___m_CharacterAspect;
	RefRW_1_t2656D726C60E003E5F3A45C682C3DBEEBE538B94 ___m_CharacterComponent;
	RefRW_1_t4D4BFBFC4F0286F3E9E3AC6B652499FBBF9ECAD2 ___m_CharacterControl;
	RefRW_1_t5CFAF5C079CBAF303F6478628E3D460BF43BF12F ___m_ActiveWeapon;
};
struct FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 ___bytes;
		};
		uint8_t FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824__padding[32];
	};
};
struct BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5 
{
	UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674 ____typeData;
	UnsafeList_1_t1B7B48A9B1389CD907B27629BAA5B0F080F48D58 ____indexData;
	UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674 ____all;
	UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674 ____any;
	UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674 ____none;
	UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674 ____disabled;
	UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674 ____absent;
	UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674 ____present;
	int32_t ____pendingOptions;
	uint8_t ____isFinalized;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_StaticFields
{
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_None;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Buffer;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Exclude;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Readonly;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrefabWeapon_tE3DBA6E146BE2D64F6D46FA062ABFDF0EF6EBC34_mB34796CFA52B6074461EE0C27F327D7DD4DCBB2B_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_gshared_inline (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* __this, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrespawnGhostIdRange_tA869F9D0F6CB1DD79ABF8E1923B07C6D295EC734_mD7417A0D218F851EDD3EAABFF156B0D38C305B3B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_mA7AB7109BC1FF4B68186F1B9F6619E57CC52565B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_m605A0E93F835EC920221AA8D27576992F9E9BA37_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRaycastWeapon_t8BA7B9255E74C830BF7C6DE64E611ACC94E4B279_m6D5ECF156F05C29C4A54C84B5A3CAA8868D7E78B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisReceiveRpcCommandRequest_tF93887C57B00FDD627E07116C2537835A453DC35_mFED375CB629262C7092D7BD9A30839372C7576BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRenderMesh_t6B129D69D8E39AC5B2425F2CC9735C845FEA360D_m0DF4CFA0156F001BC67B2ADFB19C86EDD09A7199_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m315BBB7014A48D6EA91CE5F41D270F8D90D3F6C1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m9280A0A88A6F0BBF7615664B2772B9148992F094_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m489D25E73D17754E1617D080BC4D80F47732BC69_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRigidbodyBakingData_t8EB12AE048EE91B3F926F0B18055B96754194AE1_mC4B4C9CA27F39CFF2390389C0D80EB5ED281055F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRpcCollection_tF5A8386ADA59B8E4787F09F2F82406BFEECBDA11_mB21B699AA298587C6AB3C2A46115850046E36B0B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_mE63D71E60B319B3370A91FD5A60641283BFBEAD6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSectionMetadataSetup_tAA4925FBDF24CDE3AC041BF2F3682116EE780CF3_mCC3183AA55D2733CF075B0BA420B2631E5F1A67C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSetPlayerToDebugColor_t7EDD7200C1A3E2455E5ACCD2D12C1193149BBCF0_m99DE2F642FDCA6C0DE58D89750518A903444CFBF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSharedMeshTracker_t32B97BE3ACFA13F4D721D6B3B1D5AF089C22FA90_m01226CD6DE3BA04F680042132A26BBF196F9A135_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_m30F2158F2643D7C9BEB0138EF959CC01FE2F2F70_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSimulationSingleton_tC8F3A5395E08472F6FDD1EFF8D449D42732BBE52_m3C2CD339E07C033F82072E5E639868FA26EE8580_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69_m1850FFB696EC3FE7A02AB3F0FF3DDAC3D74FE7BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E_m453BADF9860D8CC3501EC8C3FD4BADF1BDB4A15B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_m7A56721F25F4850E27698151B4BD87DF85028EE5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpawnCharacter_t3C65F711548ADBD912FFD08EC7D8DFE2329EAA3B_mFCE1798327C8D98A79B3D31CDBD68460682C7EFB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpawnedGhostEntityMap_t0BCFA4A062202D8F78450F55D68776FF38A95807_m68A55004084BB1E962BEAB28B359FD2D8D6BDC7A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m47BA8188DCB537ED8911366260DDD9054B00BE49_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStatic_tFEF5CDCD173067402E86BD8086EC0DF54C812AE9_mFA3A0D7957DE28F08C82A57D15D27C3124E5F0DA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStaticOptimizePhysicsBaking_tE69BF2D3D1E838B1FB9C736A3E947603DB18BA2F_m78D3CEF866866ECC168DACC118D429A5AD2BFD86_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_mF32B07397F399C3B9C5DE1C1AED74B5FA0F0B29E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_m864F382F53065240543247AE0DBD61F9B70B7618_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSubSceneWithGhostCleanup_t687703217183BD3C6CC5D419F1157A4886DC0A9E_mD2695FD6A566AD86B765890CA29454ED2249CDEF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_mC24E02DAF5E12147F17D481ACCBDDCE4BF105358_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSystemInstance_tBBEC8F4B93D1778490129996C36585CD5A20DCDC_m908F96D1C3D2827FEC48B4C31041888BAB7B6A5C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m1A81156C63974EA84F0A4643642D358A715B6A6D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisVfxHitRequest_t21FBE6A1B00EEFF3C82000AA561D43C0F7A1575C_m64001F534A07FC6B37A536E298D39A9F55226AB1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponProjectileEvent_t29E0C0B748270F64BFF89EEAE6228BFB9B40C491_m3B7450257E170280E7B2F628EF68FB3A427810A2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponShotIgnoredEntity_tF580C95D32EABA91865AE3753267064FC0BEB7C4_m1E94D8B2EF41E7F54FCC0BBF06B05C55815879D9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponShotSimulationOriginOverride_tC522BE40B385B76197F2412721C824B5572B1434_mD17EE52E8EED481F46604D94C0BAE8C6345C8CD7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBakingOnlyChildren_t4847B0A4EC56721DCE2D2CC3D930842C23A32DE9_mC2E6E55E56F2D63CDC4EE071AABBC834D8CA25CB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t3BE4D7DACA33583BBE2C8373A5C47EFC4B20049F_m1289448A6EDDF07B5229C7FBFCC9F48B79E319D7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t26DC1AF10CA15B26730980E6E27C1EF0C2BE9477_mAB99D63691B68A0CFA1C1C9DE78049F54DD82BB3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t64065E6CEC923A03666B8AB0360CC5BEBD4584C3_m1C299D989AA51186FDE6E61D2AAA9B8A7167C48D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t7B01EB05343F6EBACE8022A40F0E4ADE261DE7BF_m939EDDD6784881C87ED4781C84DA6202FF5C5761_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisIsolateCopiedEntities_t76F1AC3E4C27284515CD2F8BE4BFDA7DE3BCC034_mE48D3C1B72CE88B90D132F8055BE861B120D059B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSmoothingAction_tAD30188B5CD91A350BF147E6BB72F3746EF0CE86_m1869A4B1A6583576C8829039FB41E36170FD8346_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLiveConvertedSceneCleanup_t85C67009D442CFA09978ED3D50351A95747B261E_m1DCD1CE15031D829F3A29AF81EB0CBE997B5C90A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t5DD8E367CBD667FFC7D1AB73A7A2E2977008D79E_m88F5E0CF21829DAD6CDAA92C035B35E13D78E6F9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisProtocolVersionError_tF742C6BE56698243ADE2AE22E9091F317D105AEB_m3E9A758C51C7620D7CB5A9C38E7F200246A6190D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisAdditionalMeshRendererEntity_tB01CF1C46D3E56F39956D314D696850AD9A8594E_m8561EDDD3DE6BE26A21808309CAE59B2661D4F95_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_mB5769CCD719C54614BA29E1901759254C3F301C4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBakeStaticRoot_t20056F2B05BA4C4704568DBD928A33F69F6795F4_m422DC35AC6B37551602E42003918A3CC45D72211_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBakedEntity_tA80601A59125E066241325C1A5191D59FAD23352_m31FAE09135CA0F29701CDE7C1901130F6F94A718_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCompanionGameObjectActiveCleanup_tE1E7380BD2CA958C6AAC9DCF6A1AE76CBD95D862_m87F3F2DE88FDBBFF35981828034E7E157B7ED7EA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m35B180D8E0FB2E919950E250BE18134F7343708A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mE0A816AC86861E2EE6B0BA21209C249B38EACC3B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_mE9932D6D9BB9C62F7AEF531CE8BF7C2A3A4193E4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m76ED19F2481A5858F9D3F419A014636A3F96F372_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_m536A71CECD540E9756702882D208C8EB0E058F86_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonCharacterControl_t6249D667B6C51009BC3C5AD5E0C1B1295C415FEE_m66BED0BEA8F311EF7BAC42766E32997B09379B25_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_m429A072DFC20903E1578F2F87BC665BF94792F73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonPlayer_t5879DC168D819F278E90BC0417DD9E5CBD015066_m61D650C90B0442A326F3EA3EDBD504D28ADFC1D2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mBC1DF91ADAADEF83890AB26250426A79689E16A3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_mBD28BA67E6A7F5691191CC2BC33B8E3EB9DA59E9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisHealth_tFB54B499DA2B21DEE147914FE3A4D44341A23456_m2D099F5817D44C4092C03CE7FEC3813DF2607246_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLightBakingOutputData_t9C7D694F4B60178715CA553248702C0C5603C2F2_m4991861AF58908B0D9A361026CA28BF06328195D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRuntimeObject_m99918C9C8538796DF0CFF217F939FDE6F84496E4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCharacterInterpolation_tE8F7C8D12CC419ADFD6FE10F3D73C27B80ECC7E1_m1DA277D06C257072FE66633D3C9DA43164250005_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_mE906F6A32DF896D9054B52C72D4CFFAE0D70A494_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisParent_t473162287DAADFBE8C1A231B52DC5D0C80687304_m8B12138A3E7C48A95753F440F4414C59E885BF21_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_m9FB73CA49A71611CC798F3729B6EB08530B638D6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m7CD1869A1B8F96774012746387B3085F74F9F881_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCommandTarget_tEA67C6BE043BB1BBC06C4561C6829C20067BCC01_m3777EB9629F5FF189A339D465A78B52501BDB692_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_mDF41949DE496AE94DE78B9A53C7408A033EA3516_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsTemporalCoherenceInfo_t687207DF0B7ABEFCF3D015765DE3B943AF917FD3_mD793CCE84E010C5AB5BCE93ABA33A943469DA5B2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_m52F6874E1B8C0B5D6C83885D95B32E602356CAD4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m4D6D8D55D1B1E84DCB7D1EA56993A632D31BE236_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_m7FF4F21856AA1493269912203A1CC9E042CC5324_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m649C085CC01829AD79C40E85752CE0BF5B866E22_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPreSpawnedGhostIndex_t86F3B58DA3DA317013EC9E6BFD41DEFB2E243015_m23D5738433CC0127CEA78AA0DE8AA0576F26BF9F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPredictedGhostSpawnRequest_tF1875A417A0FD6CAB1170E11F1678E1764BA1539_m829F34926C0A340AC2D96739B01F218C3F84088E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostType_tA0682225DDDF8FA7FA48FBFF8B051400E320CB5D_m4967700ED0F7915C03F24F49312F4B26510D4BCF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_m5230672F6FF2F02CDAB4863BBD19ECB7A8E83239_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisDisableSceneResolveAndLoad_t4250381D87869C0AD2D831D3414EBA2C7A26B516_m82021480FD67E604C45BDDF5F6E52194A966CBDA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_m32613B7A68993E09512739825CEBD2E50AF4201A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_mF46A945D1FBC5F730FE4AB9CE92E455E9840E868_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_m657EC137B43E232DD2AD18CDB35219BCF4BDEA41_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisClientJoinRequestRpc_t6D91F8FAACB7CB9CFD19D787D15D231B53CEF81D_m59E31CE9B5F3336DD7D40B243FB40F821AE6DC5C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisClientRequestRespawnRpc_tB0C02A3BFD936D488EFB1CEDD06CB605E94AA7EC_mE6F7AAA82E8ED7BB225D33B54F72C65C89028DF4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSnapshotData_t6B1E9DEBD977F5E7CC7EAEA947DB0F618B972E55_m8736F800BCDEAF183953B7B8922DA04BE569102B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpawnPoint_t25713D4D601F769F60F42CA7998F31B4F47BBA0A_m5565BE1830C4278A28016E46BD531CAC97CC0E44_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpectatorSpawnPoint_t6EF04E0AE426BB628B10394B3B228EF12B50CFFB_mC11DB120AF00584E172E6030CE70698C73007E3B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_m7B799A963F110DAF3573E8909357B5A220139902_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicCharacterProperties_tCB57F0D4680F14E9194DF1035286389926EC5651_m46076054211A281BDEA3FA6036A68AD232DD3564_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisIsSectionLoaded_tBF08B3985E7B90393E9188BA6E4FE4B612667455_mFD8268FF9C7C966C60C10879CB3B2956E7FC6FEE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSubScenePrespawnBaselineResolved_tB25FB1FFE6B19222EA8510EE41863D0EE300CE1F_mED674BAF8C637D42FB820B9312EE84249EC64975_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRemoveUnusedEntityInBake_tD9ECD1A4695A5071B0D2316B09A8B48A3FFB4DE1_m4C57DE307DAAF466D6E263D507E046DD4C2128E3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m0E5A96385B9B87F40791B94AFA304FAF965A6694_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostOwner_t00E10310781534F6A1E9BD56773C9BEE64046FE9_m5D55C72709635A7AC7831132DF8F2456EEDECDF3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBulletShotVisuals_t72C0C1CC6071D42CC4D0250022BABD26EAC19A3B_mCAA13361E2CD04F0D84CECCDB3CFB761B8C37354_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_m05C43686BED9C6169B0C2C3E8CA39B192DE24A4D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCompanionLinkTransform_tBCA469674FB09DE2A20CC9E6A9B26B92462A7F11_m167A714D37B6E2167FA0AAF692B3A25A8C22F852_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostDistancePartitionShared_t2A64D9C74B21E979B0B3AD3C5D8DBE31102CC92F_m4DB2E2D0B2E1ECA6C888F68BE3E2BBDBFED82D05_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPrefabMetaData_tCF69584BEDF11A9D0486F3C9211F045B8C0B9544_mF0E9F2FD37BD5E7FE640240461B1A5724D1EC64C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPrefabRuntimeStrip_t7F62492831ECDA11D63D2F4792B1CB5FB10E5654_m8262AFA119F9096D0239E841F1CEE0E2AD2D90DF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicCharacterBody_t4FE38C7EDB4FCCDB531BFB4B0E69B0E7AC809584_mD2678DE926E354680199F48784E8A6ED1E237A68_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_m7E3D5387743B797F3102A04A73201B028796B8EF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisIncomingCommandDataStreamBuffer_t2976645F480CEBDE41DA0C7C7087249B04E21C4D_m537342EAA4D2B3FE8B8C6180362468A4FA0F19EA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsConstrainedBodyPair_t11C5D7FDF2C7D1E0AC01DD9AA0E95492E8C14728_m9D1B79B617CE177B561F6A0BDCB036BAB1372BF6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsJoint_t7E81076F134608B1FDEA0070C11135E9B30A0897_mEE2012D86F5668FDA5C8C1FCCBB4EC0F7313D50B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_m31F3748EDFD132CF6325D066FBBB03817FD96582_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCustomPhysicsProxyDriver_tA12A54FDC4F2780192F2BCB674A38F48A584F225_m6E5167680CB403CE5BCEFBD109A722100C4FC127_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicCharacterHit_t864D62E27E83DA16D4B4B0C09A7BB167D7A77628_m06E3BDE3F9571A993185B10265373685A6D2EFB9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStatefulKinematicCharacterHit_tC62C9D1712BE538FCB2CA9845130D4C305D2AAB8_m3770D75B77F64F59425DDDD4D922320FE0F9C01C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicCharacterDeferredImpulse_t86E4A087729C97348568B71E272A60F00CCD548C_mDD69E00B6F5151F2304CB42219FC8557AA123422_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicVelocityProjectionHit_t4C4BA3B45EB433F6A4245F023D5533DEE19B7F0B_m1CEA3D45C024DAD92A4AE49F58E48BEE08F69F6C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsGraphicalSmoothing_t9C3A887741C265D0E64E04E05F9FB8DA8B2716A4_m4A43FA491A0AE43E872830E9A1C18021D64990E0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRocketShotVisual_t0153CB43E9B61E7338B583C3D0A57FB6E46B7CA9_mBED3DF66E0D00D8A29DF3E3B57D27C0AD7F9EFEC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisAutoCommandTarget_t2DDAA53D1DF20CAAD90902389BEF5E6088EFC191_mFE5BD238935245103669D542C46955C97945BA4F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLaserShotVisuals_t19AA7C016DE761566EE1CD14B3B0CB35EB2B5B14_m1CA75A2D101420294DBBDD63D77B56918921AAA5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisActiveWeapon_t34043214BE9DC5C194F0C8AFD2449E4F8383B849_m440AA166DEF4EA71EA990B64B18F506845AD6F3E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisAdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1_m6DCEFDA00308D5CF93ACF4FF75A1E5B207B212D1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBaseWeapon_tC216A83AE78BB8EC23049B07598B598BA353B335_m7F21E1087C149D4779E371A01C1D12AAC1A7938F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD_m0F23A448C61CCF70DF9C04FC86EB10D61DDC3A72_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBroadphaseData_t283ED0771F35DEB34BC13ED55C73772D7CD154A3_m231A9F12C94DCC196177B0153F47393B403460E7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBuildPhysicsWorldData_t2B48F1A635280E8C32969EF1108844731186F1B2_m11C0F36734285030D82A9424C569C0F21C28DD8D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77_m7842F319E5F79C371C19D99A3BDABAB48983A50E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E_m0D48267FE6D42C6E933EBC874096C29538382795_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCharacterWeaponVisualFeedback_t796AA9CD94EC7DB2D0B0C006C2DEAADE6FDEC750_m4AE5C68F4A467732D0AFD9DECF44BBFC484EBFBA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisClientServerTickRate_t16FDBD0A027833FD92846C5F6B046820DE125602_m253E94A751C8AAD2F9AE71E695614F8BBC0DD5B0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisClientTickRate_t0E92DBFF5847A71B95752CF3292FD2FC140495C9_m390277FD3E8D44958907E1768F3B9908034DE49C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisColliderBlobCleanupData_tFEC8BF2F69AE15547D452B79FACB5A3A88064E32_mF56C17C837A47992FA0744957F8F579F05DA3C27_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonPlayerNetworkInput_t65C76C5DDF988140A9498C5400E0B40B3943307A_mD7931B74D500178D9E7E0972A29B4A9F4B1B1E06_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFixedRandom_t4D3428C8755DB2D3C6F470BF229B1EF04C1A5655_mF223DD5574F361468D84CB538B36183595EF8676_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGameResourcesWeapon_t33BACCEA8139E13C955BD58FBDF6E9AE03BF9BA2_mFA8BBE19B141BA5E0069FD1F0D5321FCB0415B35_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGameplayMaps_tBCB9867630673AB8E660939CDACCFBB4A4726ACA_mA3A956490C18C8E46D84F782E615A673E57628DE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostCleanup_tE96F7C9F4DC59AEB2C9996CBA308E8A0603F6BBC_m78442F5D825A49D22A62F85A2BC9478AB4370516_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostCollection_t13EDF41F2078D02C47FB76ED953412292F745219_mB84A324CCF547FBD67690E998133E3316B02262D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostCollectionPrefab_t8AF4B66BAD32F1BF1FD8A7E9B236EEBDFBC81D60_m61CC8A58EF4C6E694005B54187F76C650A450856_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostComponentSerializerCollectionData_tBA662EAD4B94AC75D75278CE1D22A56621C92191_mC7BF4B5DAF5CE5F55E0D9958CA2C1FEB85D76CD5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostCount_t28FC783F6F6AEE97C5F7B67CA58CA6652CFC1083_m276861C40F10051DE071E11EEAE9E22E85F6BA5F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostDespawnQueues_tFCC28D3C6222373756344D11F4950B1CEF4E1B5B_mAA9E66F0BC0A862293B28E564D5D202BB83FEFD8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostOwnerPredictedSwitchingQueue_tC005A4D4732805D5D7C6FB393E20241F47551491_mC966ED9D00528305CFDB87205580567B9300B224_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPredictionGroupTickState_tB8F7B7A4ADC6DDAD8291FA77A797B6BFF50BF0A2_m4DEFA234023B38F121CE84B02E5B962A0F23256A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPredictionHistoryState_tD55DF52D9563D83B55FA94B94BBF30A0D9F9DC28_m050C814D3893DBF216CD02CBA893469EFFBFE59A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPredictionSmoothing_tB6587249ECA5A9C2182026512CFF914FF75B37E0_mE52515741C176ED61587830941DF3C059A16C7B5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPredictionSwitchingQueues_t766AA5F381338A4D531193C3CBFFFE35055BA661_m10AA7712D2825A6D27DDFDE11E6B105635F9B4D1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostRelevancy_t24C834524E3673B5061DBA61F39D29751B32D659_m989972E6870512C5B294502FAE3E2D3F932271D6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostSendSystemData_tAD3978C66B82BC5C4FFB9470AD3CBF2B7B2EFC84_m8C2570044726DBC4BAFFAFB783DE81D0613B8C7D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostSnapshotLastBackupTick_tDE3EE53D10E5A0F839C2BD162E0F100B1C0E3C43_m47664754B590B07BBBBE9EFA0EE7BA4601B9147F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostSpawnBuffer_t1197943A694681C3FAC0C0F3C2C09D0F6DA9A1E7_m852EAF6FE241869B308E43BF6541FE2BB5F5F88A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostUpdateVersion_t74F31010DC4C97BC537DDF95D069CCE7A8EE6F3B_m0B697ADDA809280663E0CADAA267473B14029797_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisMachineGunBarrelVisual_tEAD5AC48DABC351CDD9818CD9809EAEFE100E88C_mC03CF7BF6A59C6F5F0426D543A15297DD455B7EE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetDebug_t04383CA2B98C846A55C5A8960A6CCA2F84B8AEB8_m7AA2E5CD9D1A2AA84EFF2A267ABD87574F67FC25_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkStreamDriver_t09BCA975B6457E5C7517A235088519050F9952B6_mC4F0E45FECBE15839CEA93350F6A697E227595F0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkTimeSystemData_t6CF678998DCD95CDA09785B46DED450CD8874A53_mA61D7AB2E054347C602039E12980BC2CB36D3603_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisOutgoingCommandDataStreamBuffer_t74C9B36A80DF8A270BE763F2EBA733C6FC5E0A70_m42F3C278B4CAA92D678E4C3C7F09F8A04DEB0A24_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsColliderKeyEntityPair_tAEF837B39E3949BB41536084707EE655C69D40FE_mC5A4A8875E6EF47D1F65327252F076A9BB3B9F3B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsCompoundData_t25E7A437D24DFE2C810FCF3B2B950BB889513648_m34960BFF4B1D94D25519D3B5FDC4A8C6A0476CD6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsGraphicalInterpolationBuffer_t4425E9311BC421D1E03F6699B1CEDACD6598D8E9_mEBAE7050FABF64F14D7C29810C05D5EA822A917D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsTemporalCoherenceTag_t36AD20C7CC2757DD29698462895002BF0911B2B4_mD1C40FAD70ED135D27F57C7BD54FEE4A3C144429_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsWorldHistorySingleton_tAB64E013DD6A12815A31F2B5432265555C160209_m2239A2238DEDB2342B2CF2977D35648403D3425C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsWorldSingleton_t378ADEC7BEB4615C6B7972AB0EC26DF2BD864AFA_m0E191D35FB6B760FEFDFCC07AB95174523A5A10E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrespawnGhostBaseline_tA12CE09F9336397F5AAC7F1F995F70002471CCE7_m1CB9F69046CFEDA6400C6A7A5298BB0B701149F3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD_mEF28DFCAD423E26B81F10A8CB792E628B9553C50_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRaycastWeaponVisualProjectileEvent_t49590D2F126AACDE2D98554AD781D3BFF3D975D8_m07A4DA71264FCC770084D1BD7A2C06FAA8234FB2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_mCA5211449B686BA7B83148CDFC9095DC7360FB21_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20_mDA9DDA0556CCFFE8D45941BA53503BA2812E2CBD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D_mC379C8817A25B9D2B39DB4B07A96533E4686D41D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306_mBB6E1A3B821CE326AED3045B286B16AAA2243D30_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F_mBB5DB3E42C1BDDB96F2A8AA88913165166EDDE5A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRetainBlobAssets_t190E68112895048346A189ADC59FD9CCAE9C73B3_m6F8DA48C67546418A606D3F2DF3EE2345F91C7C4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpectatorController_tFD98B743B9E30BECE6DDAA391B154479623B2D3B_m267861A5BFA4BB9F7ED85900D0612B839ACC3AFD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStepInputSingleton_tF8533E0D6AACD3BB57B6641B05F78A5C48F3A92E_m9E5B4EA89C750E36B3353073165EB59FBFEB9851_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisTrackedTransform_t26337E726D9F91AC61CABEB748253360539B0F83_mD9C18543D5E0BBFCECCA509F92D0B1E9FA5DE8DE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisUniqueInputTickMap_tD54F27A8967281B8FC4FCD0D0113C3B1A5F5D436_m3B11CD86D34C535158387E8B8EDB356FDD3D4D8E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisVfxHitResources_tE16DC53D1C6D58EF0BA97CF6D4045B7B943BC80C_m3C96266D8EE985EEC05CCB21ED3A2142B8D095A3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponControl_t5AB0EB825E7C3CD5A28E96E8E1950245F08B331B_mE2FEA37619E214F1A82E772BD99D8AE7DBEFC45C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponOwner_t25A7D7472E25F4C948CF47A8CE4FAB9EC4402F2D_m44A9521B38ECB979AB30F421612E4719F22268C2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponVisualFeedback_t00933BB2414618F56FF791E1ECC17381C3018DE1_m467531E1DEC089A9A13E6E9860A1C75A596345E0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t3C4D290E03B1550607585431A91F6254C68B5D91_mF4039B4DA6EE4DE3F43D34D2026BAC6B6F05497E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_tCAA7B5B53C65D96E834EED2D2BF2AB5506867D26_m3A1D7602D30967D8B78AE0633F0CD129C726A0DD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t1651082D66AC0E8FDCC10F98F216B9BF100ED8C4_m2AF1E6707AEBF72608178F8898735EB50A2E0533_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t54EEAD2311CF856F94003347B6A21A186E71D0FE_m06161074DD15FC218661E5CFDA183CEDD7F30B44_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t98A3C260D7EC2417778B2B6B5C85A94CB302CEDE_mD858397FD2BEA5A31DEF9087B588F06FAF3A7315_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t374672F8E4A603D633C5ABEBA6FB5F00833D1A2D_m79F42C098FD5196D1B6B493E240BDDD32869E340_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisState_t583D7FAB6D38B74AF495A7205BBCEBEADCBAC09A_m4AA6770C3F7E3C446E8E3165C39B10C8058C7013_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisMaterialReferenceElement_t92B9C280FA5368F6A6C297561C172FA97EFBECAC_m034B261205C75B76955DD2B074998C7708E87E84_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStreamingState_t26FE12C040BCF324059A9D9487A142D51678EBB7_mEF6863C1F6A7D2877D414B4EB0215D36635861C0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634_mF018CFE927579488AF20C4292FBA364866BBC730_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSwitchPredictionSmoothing_t77F66A976B2B8967484C1CDF987CA6EB0CA27D54_m72FD8CC28BD7A6680CD1A129DE5F652A3F96FC90_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostChildEntity_tBA1424BC5FFA91C3F17C633F75AD7C26078F59C2_m70CA927E5514BC3451D74FF75207BCE63FD818DC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisMeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E_m8C1E7F147ECEEBD946BA39F37EC7D07FF8E76769_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSkinnedMeshRendererBakingData_t150FE20D34A6D7BBE2D3F0BB6029B3588DA7FA36_m53301195B532F30D951D795C0A1962C762DF29EC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBakingOnlyEntity_tBDD362F696A87274ED664FDE5FD13A74CFA7A2CE_m96B9401FC8FD0B04F55F3BC782166E5FD434CB6E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCharacterInitialized_tDD35F02EA206A49804244EC27197F074A3A7ABD0_m0095DF6BAADAB1903C91AB9C689AD359171CE887_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Resize_m62AE410F7B9BB1F934C33AB8E6E65198CF695A1F_gshared (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method) ;

inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrefabWeapon_tE3DBA6E146BE2D64F6D46FA062ABFDF0EF6EBC34_mB34796CFA52B6074461EE0C27F327D7DD4DCBB2B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPrefabWeapon_tE3DBA6E146BE2D64F6D46FA062ABFDF0EF6EBC34_mB34796CFA52B6074461EE0C27F327D7DD4DCBB2B_gshared)(method);
}
inline void UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* __this, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*, const RuntimeMethod*))UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_gshared_inline)(__this, ___0_value, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrespawnGhostIdRange_tA869F9D0F6CB1DD79ABF8E1923B07C6D295EC734_mD7417A0D218F851EDD3EAABFF156B0D38C305B3B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPrespawnGhostIdRange_tA869F9D0F6CB1DD79ABF8E1923B07C6D295EC734_mD7417A0D218F851EDD3EAABFF156B0D38C305B3B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_mA7AB7109BC1FF4B68186F1B9F6619E57CC52565B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_mA7AB7109BC1FF4B68186F1B9F6619E57CC52565B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_m605A0E93F835EC920221AA8D27576992F9E9BA37 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_m605A0E93F835EC920221AA8D27576992F9E9BA37_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRaycastWeapon_t8BA7B9255E74C830BF7C6DE64E611ACC94E4B279_m6D5ECF156F05C29C4A54C84B5A3CAA8868D7E78B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRaycastWeapon_t8BA7B9255E74C830BF7C6DE64E611ACC94E4B279_m6D5ECF156F05C29C4A54C84B5A3CAA8868D7E78B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisReceiveRpcCommandRequest_tF93887C57B00FDD627E07116C2537835A453DC35_mFED375CB629262C7092D7BD9A30839372C7576BA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisReceiveRpcCommandRequest_tF93887C57B00FDD627E07116C2537835A453DC35_mFED375CB629262C7092D7BD9A30839372C7576BA_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRenderMesh_t6B129D69D8E39AC5B2425F2CC9735C845FEA360D_m0DF4CFA0156F001BC67B2ADFB19C86EDD09A7199 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRenderMesh_t6B129D69D8E39AC5B2425F2CC9735C845FEA360D_m0DF4CFA0156F001BC67B2ADFB19C86EDD09A7199_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m315BBB7014A48D6EA91CE5F41D270F8D90D3F6C1 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m315BBB7014A48D6EA91CE5F41D270F8D90D3F6C1_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m9280A0A88A6F0BBF7615664B2772B9148992F094 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m9280A0A88A6F0BBF7615664B2772B9148992F094_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m489D25E73D17754E1617D080BC4D80F47732BC69 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m489D25E73D17754E1617D080BC4D80F47732BC69_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRigidbodyBakingData_t8EB12AE048EE91B3F926F0B18055B96754194AE1_mC4B4C9CA27F39CFF2390389C0D80EB5ED281055F (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRigidbodyBakingData_t8EB12AE048EE91B3F926F0B18055B96754194AE1_mC4B4C9CA27F39CFF2390389C0D80EB5ED281055F_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRpcCollection_tF5A8386ADA59B8E4787F09F2F82406BFEECBDA11_mB21B699AA298587C6AB3C2A46115850046E36B0B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRpcCollection_tF5A8386ADA59B8E4787F09F2F82406BFEECBDA11_mB21B699AA298587C6AB3C2A46115850046E36B0B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_mE63D71E60B319B3370A91FD5A60641283BFBEAD6 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_mE63D71E60B319B3370A91FD5A60641283BFBEAD6_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSectionMetadataSetup_tAA4925FBDF24CDE3AC041BF2F3682116EE780CF3_mCC3183AA55D2733CF075B0BA420B2631E5F1A67C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSectionMetadataSetup_tAA4925FBDF24CDE3AC041BF2F3682116EE780CF3_mCC3183AA55D2733CF075B0BA420B2631E5F1A67C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSetPlayerToDebugColor_t7EDD7200C1A3E2455E5ACCD2D12C1193149BBCF0_m99DE2F642FDCA6C0DE58D89750518A903444CFBF (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSetPlayerToDebugColor_t7EDD7200C1A3E2455E5ACCD2D12C1193149BBCF0_m99DE2F642FDCA6C0DE58D89750518A903444CFBF_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSharedMeshTracker_t32B97BE3ACFA13F4D721D6B3B1D5AF089C22FA90_m01226CD6DE3BA04F680042132A26BBF196F9A135 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSharedMeshTracker_t32B97BE3ACFA13F4D721D6B3B1D5AF089C22FA90_m01226CD6DE3BA04F680042132A26BBF196F9A135_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_m30F2158F2643D7C9BEB0138EF959CC01FE2F2F70 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_m30F2158F2643D7C9BEB0138EF959CC01FE2F2F70_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSimulationSingleton_tC8F3A5395E08472F6FDD1EFF8D449D42732BBE52_m3C2CD339E07C033F82072E5E639868FA26EE8580 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSimulationSingleton_tC8F3A5395E08472F6FDD1EFF8D449D42732BBE52_m3C2CD339E07C033F82072E5E639868FA26EE8580_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69_m1850FFB696EC3FE7A02AB3F0FF3DDAC3D74FE7BA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69_m1850FFB696EC3FE7A02AB3F0FF3DDAC3D74FE7BA_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E_m453BADF9860D8CC3501EC8C3FD4BADF1BDB4A15B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E_m453BADF9860D8CC3501EC8C3FD4BADF1BDB4A15B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_m7A56721F25F4850E27698151B4BD87DF85028EE5 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_m7A56721F25F4850E27698151B4BD87DF85028EE5_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpawnCharacter_t3C65F711548ADBD912FFD08EC7D8DFE2329EAA3B_mFCE1798327C8D98A79B3D31CDBD68460682C7EFB (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSpawnCharacter_t3C65F711548ADBD912FFD08EC7D8DFE2329EAA3B_mFCE1798327C8D98A79B3D31CDBD68460682C7EFB_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpawnedGhostEntityMap_t0BCFA4A062202D8F78450F55D68776FF38A95807_m68A55004084BB1E962BEAB28B359FD2D8D6BDC7A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSpawnedGhostEntityMap_t0BCFA4A062202D8F78450F55D68776FF38A95807_m68A55004084BB1E962BEAB28B359FD2D8D6BDC7A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m47BA8188DCB537ED8911366260DDD9054B00BE49 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m47BA8188DCB537ED8911366260DDD9054B00BE49_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStatic_tFEF5CDCD173067402E86BD8086EC0DF54C812AE9_mFA3A0D7957DE28F08C82A57D15D27C3124E5F0DA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisStatic_tFEF5CDCD173067402E86BD8086EC0DF54C812AE9_mFA3A0D7957DE28F08C82A57D15D27C3124E5F0DA_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStaticOptimizePhysicsBaking_tE69BF2D3D1E838B1FB9C736A3E947603DB18BA2F_m78D3CEF866866ECC168DACC118D429A5AD2BFD86 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisStaticOptimizePhysicsBaking_tE69BF2D3D1E838B1FB9C736A3E947603DB18BA2F_m78D3CEF866866ECC168DACC118D429A5AD2BFD86_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_mF32B07397F399C3B9C5DE1C1AED74B5FA0F0B29E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_mF32B07397F399C3B9C5DE1C1AED74B5FA0F0B29E_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_m864F382F53065240543247AE0DBD61F9B70B7618 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_m864F382F53065240543247AE0DBD61F9B70B7618_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSubSceneWithGhostCleanup_t687703217183BD3C6CC5D419F1157A4886DC0A9E_mD2695FD6A566AD86B765890CA29454ED2249CDEF (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSubSceneWithGhostCleanup_t687703217183BD3C6CC5D419F1157A4886DC0A9E_mD2695FD6A566AD86B765890CA29454ED2249CDEF_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_mC24E02DAF5E12147F17D481ACCBDDCE4BF105358 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_mC24E02DAF5E12147F17D481ACCBDDCE4BF105358_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSystemInstance_tBBEC8F4B93D1778490129996C36585CD5A20DCDC_m908F96D1C3D2827FEC48B4C31041888BAB7B6A5C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSystemInstance_tBBEC8F4B93D1778490129996C36585CD5A20DCDC_m908F96D1C3D2827FEC48B4C31041888BAB7B6A5C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m1A81156C63974EA84F0A4643642D358A715B6A6D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m1A81156C63974EA84F0A4643642D358A715B6A6D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisVfxHitRequest_t21FBE6A1B00EEFF3C82000AA561D43C0F7A1575C_m64001F534A07FC6B37A536E298D39A9F55226AB1 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisVfxHitRequest_t21FBE6A1B00EEFF3C82000AA561D43C0F7A1575C_m64001F534A07FC6B37A536E298D39A9F55226AB1_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponProjectileEvent_t29E0C0B748270F64BFF89EEAE6228BFB9B40C491_m3B7450257E170280E7B2F628EF68FB3A427810A2 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisWeaponProjectileEvent_t29E0C0B748270F64BFF89EEAE6228BFB9B40C491_m3B7450257E170280E7B2F628EF68FB3A427810A2_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponShotIgnoredEntity_tF580C95D32EABA91865AE3753267064FC0BEB7C4_m1E94D8B2EF41E7F54FCC0BBF06B05C55815879D9 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisWeaponShotIgnoredEntity_tF580C95D32EABA91865AE3753267064FC0BEB7C4_m1E94D8B2EF41E7F54FCC0BBF06B05C55815879D9_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponShotSimulationOriginOverride_tC522BE40B385B76197F2412721C824B5572B1434_mD17EE52E8EED481F46604D94C0BAE8C6345C8CD7 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisWeaponShotSimulationOriginOverride_tC522BE40B385B76197F2412721C824B5572B1434_mD17EE52E8EED481F46604D94C0BAE8C6345C8CD7_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBakingOnlyChildren_t4847B0A4EC56721DCE2D2CC3D930842C23A32DE9_mC2E6E55E56F2D63CDC4EE071AABBC834D8CA25CB (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBakingOnlyChildren_t4847B0A4EC56721DCE2D2CC3D930842C23A32DE9_mC2E6E55E56F2D63CDC4EE071AABBC834D8CA25CB_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t3BE4D7DACA33583BBE2C8373A5C47EFC4B20049F_m1289448A6EDDF07B5229C7FBFCC9F48B79E319D7 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t3BE4D7DACA33583BBE2C8373A5C47EFC4B20049F_m1289448A6EDDF07B5229C7FBFCC9F48B79E319D7_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t26DC1AF10CA15B26730980E6E27C1EF0C2BE9477_mAB99D63691B68A0CFA1C1C9DE78049F54DD82BB3 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t26DC1AF10CA15B26730980E6E27C1EF0C2BE9477_mAB99D63691B68A0CFA1C1C9DE78049F54DD82BB3_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t64065E6CEC923A03666B8AB0360CC5BEBD4584C3_m1C299D989AA51186FDE6E61D2AAA9B8A7167C48D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t64065E6CEC923A03666B8AB0360CC5BEBD4584C3_m1C299D989AA51186FDE6E61D2AAA9B8A7167C48D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t7B01EB05343F6EBACE8022A40F0E4ADE261DE7BF_m939EDDD6784881C87ED4781C84DA6202FF5C5761 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t7B01EB05343F6EBACE8022A40F0E4ADE261DE7BF_m939EDDD6784881C87ED4781C84DA6202FF5C5761_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisIsolateCopiedEntities_t76F1AC3E4C27284515CD2F8BE4BFDA7DE3BCC034_mE48D3C1B72CE88B90D132F8055BE861B120D059B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisIsolateCopiedEntities_t76F1AC3E4C27284515CD2F8BE4BFDA7DE3BCC034_mE48D3C1B72CE88B90D132F8055BE861B120D059B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSmoothingAction_tAD30188B5CD91A350BF147E6BB72F3746EF0CE86_m1869A4B1A6583576C8829039FB41E36170FD8346 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSmoothingAction_tAD30188B5CD91A350BF147E6BB72F3746EF0CE86_m1869A4B1A6583576C8829039FB41E36170FD8346_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLiveConvertedSceneCleanup_t85C67009D442CFA09978ED3D50351A95747B261E_m1DCD1CE15031D829F3A29AF81EB0CBE997B5C90A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisLiveConvertedSceneCleanup_t85C67009D442CFA09978ED3D50351A95747B261E_m1DCD1CE15031D829F3A29AF81EB0CBE997B5C90A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t5DD8E367CBD667FFC7D1AB73A7A2E2977008D79E_m88F5E0CF21829DAD6CDAA92C035B35E13D78E6F9 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t5DD8E367CBD667FFC7D1AB73A7A2E2977008D79E_m88F5E0CF21829DAD6CDAA92C035B35E13D78E6F9_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisProtocolVersionError_tF742C6BE56698243ADE2AE22E9091F317D105AEB_m3E9A758C51C7620D7CB5A9C38E7F200246A6190D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisProtocolVersionError_tF742C6BE56698243ADE2AE22E9091F317D105AEB_m3E9A758C51C7620D7CB5A9C38E7F200246A6190D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisAdditionalMeshRendererEntity_tB01CF1C46D3E56F39956D314D696850AD9A8594E_m8561EDDD3DE6BE26A21808309CAE59B2661D4F95 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisAdditionalMeshRendererEntity_tB01CF1C46D3E56F39956D314D696850AD9A8594E_m8561EDDD3DE6BE26A21808309CAE59B2661D4F95_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_mB5769CCD719C54614BA29E1901759254C3F301C4 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_mB5769CCD719C54614BA29E1901759254C3F301C4_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBakeStaticRoot_t20056F2B05BA4C4704568DBD928A33F69F6795F4_m422DC35AC6B37551602E42003918A3CC45D72211 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBakeStaticRoot_t20056F2B05BA4C4704568DBD928A33F69F6795F4_m422DC35AC6B37551602E42003918A3CC45D72211_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBakedEntity_tA80601A59125E066241325C1A5191D59FAD23352_m31FAE09135CA0F29701CDE7C1901130F6F94A718 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBakedEntity_tA80601A59125E066241325C1A5191D59FAD23352_m31FAE09135CA0F29701CDE7C1901130F6F94A718_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCompanionGameObjectActiveCleanup_tE1E7380BD2CA958C6AAC9DCF6A1AE76CBD95D862_m87F3F2DE88FDBBFF35981828034E7E157B7ED7EA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisCompanionGameObjectActiveCleanup_tE1E7380BD2CA958C6AAC9DCF6A1AE76CBD95D862_m87F3F2DE88FDBBFF35981828034E7E157B7ED7EA_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m35B180D8E0FB2E919950E250BE18134F7343708A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m35B180D8E0FB2E919950E250BE18134F7343708A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mE0A816AC86861E2EE6B0BA21209C249B38EACC3B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mE0A816AC86861E2EE6B0BA21209C249B38EACC3B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_mE9932D6D9BB9C62F7AEF531CE8BF7C2A3A4193E4 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_mE9932D6D9BB9C62F7AEF531CE8BF7C2A3A4193E4_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m76ED19F2481A5858F9D3F419A014636A3F96F372 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m76ED19F2481A5858F9D3F419A014636A3F96F372_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_m536A71CECD540E9756702882D208C8EB0E058F86 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_m536A71CECD540E9756702882D208C8EB0E058F86_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonCharacterControl_t6249D667B6C51009BC3C5AD5E0C1B1295C415FEE_m66BED0BEA8F311EF7BAC42766E32997B09379B25 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisFirstPersonCharacterControl_t6249D667B6C51009BC3C5AD5E0C1B1295C415FEE_m66BED0BEA8F311EF7BAC42766E32997B09379B25_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_m429A072DFC20903E1578F2F87BC665BF94792F73 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_m429A072DFC20903E1578F2F87BC665BF94792F73_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonPlayer_t5879DC168D819F278E90BC0417DD9E5CBD015066_m61D650C90B0442A326F3EA3EDBD504D28ADFC1D2 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisFirstPersonPlayer_t5879DC168D819F278E90BC0417DD9E5CBD015066_m61D650C90B0442A326F3EA3EDBD504D28ADFC1D2_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mBC1DF91ADAADEF83890AB26250426A79689E16A3 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mBC1DF91ADAADEF83890AB26250426A79689E16A3_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_mBD28BA67E6A7F5691191CC2BC33B8E3EB9DA59E9 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_mBD28BA67E6A7F5691191CC2BC33B8E3EB9DA59E9_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisHealth_tFB54B499DA2B21DEE147914FE3A4D44341A23456_m2D099F5817D44C4092C03CE7FEC3813DF2607246 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisHealth_tFB54B499DA2B21DEE147914FE3A4D44341A23456_m2D099F5817D44C4092C03CE7FEC3813DF2607246_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLightBakingOutputData_t9C7D694F4B60178715CA553248702C0C5603C2F2_m4991861AF58908B0D9A361026CA28BF06328195D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisLightBakingOutputData_t9C7D694F4B60178715CA553248702C0C5603C2F2_m4991861AF58908B0D9A361026CA28BF06328195D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRuntimeObject_m99918C9C8538796DF0CFF217F939FDE6F84496E4 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRuntimeObject_m99918C9C8538796DF0CFF217F939FDE6F84496E4_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCharacterInterpolation_tE8F7C8D12CC419ADFD6FE10F3D73C27B80ECC7E1_m1DA277D06C257072FE66633D3C9DA43164250005 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisCharacterInterpolation_tE8F7C8D12CC419ADFD6FE10F3D73C27B80ECC7E1_m1DA277D06C257072FE66633D3C9DA43164250005_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_mE906F6A32DF896D9054B52C72D4CFFAE0D70A494 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_mE906F6A32DF896D9054B52C72D4CFFAE0D70A494_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisParent_t473162287DAADFBE8C1A231B52DC5D0C80687304_m8B12138A3E7C48A95753F440F4414C59E885BF21 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisParent_t473162287DAADFBE8C1A231B52DC5D0C80687304_m8B12138A3E7C48A95753F440F4414C59E885BF21_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_m9FB73CA49A71611CC798F3729B6EB08530B638D6 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_m9FB73CA49A71611CC798F3729B6EB08530B638D6_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m7CD1869A1B8F96774012746387B3085F74F9F881 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m7CD1869A1B8F96774012746387B3085F74F9F881_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCommandTarget_tEA67C6BE043BB1BBC06C4561C6829C20067BCC01_m3777EB9629F5FF189A339D465A78B52501BDB692 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisCommandTarget_tEA67C6BE043BB1BBC06C4561C6829C20067BCC01_m3777EB9629F5FF189A339D465A78B52501BDB692_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_mDF41949DE496AE94DE78B9A53C7408A033EA3516 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_mDF41949DE496AE94DE78B9A53C7408A033EA3516_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsTemporalCoherenceInfo_t687207DF0B7ABEFCF3D015765DE3B943AF917FD3_mD793CCE84E010C5AB5BCE93ABA33A943469DA5B2 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsTemporalCoherenceInfo_t687207DF0B7ABEFCF3D015765DE3B943AF917FD3_mD793CCE84E010C5AB5BCE93ABA33A943469DA5B2_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_m52F6874E1B8C0B5D6C83885D95B32E602356CAD4 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_m52F6874E1B8C0B5D6C83885D95B32E602356CAD4_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m4D6D8D55D1B1E84DCB7D1EA56993A632D31BE236 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m4D6D8D55D1B1E84DCB7D1EA56993A632D31BE236_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_m7FF4F21856AA1493269912203A1CC9E042CC5324 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_m7FF4F21856AA1493269912203A1CC9E042CC5324_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m649C085CC01829AD79C40E85752CE0BF5B866E22 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m649C085CC01829AD79C40E85752CE0BF5B866E22_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPreSpawnedGhostIndex_t86F3B58DA3DA317013EC9E6BFD41DEFB2E243015_m23D5738433CC0127CEA78AA0DE8AA0576F26BF9F (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPreSpawnedGhostIndex_t86F3B58DA3DA317013EC9E6BFD41DEFB2E243015_m23D5738433CC0127CEA78AA0DE8AA0576F26BF9F_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPredictedGhostSpawnRequest_tF1875A417A0FD6CAB1170E11F1678E1764BA1539_m829F34926C0A340AC2D96739B01F218C3F84088E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPredictedGhostSpawnRequest_tF1875A417A0FD6CAB1170E11F1678E1764BA1539_m829F34926C0A340AC2D96739B01F218C3F84088E_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostType_tA0682225DDDF8FA7FA48FBFF8B051400E320CB5D_m4967700ED0F7915C03F24F49312F4B26510D4BCF (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostType_tA0682225DDDF8FA7FA48FBFF8B051400E320CB5D_m4967700ED0F7915C03F24F49312F4B26510D4BCF_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_m5230672F6FF2F02CDAB4863BBD19ECB7A8E83239 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_m5230672F6FF2F02CDAB4863BBD19ECB7A8E83239_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisDisableSceneResolveAndLoad_t4250381D87869C0AD2D831D3414EBA2C7A26B516_m82021480FD67E604C45BDDF5F6E52194A966CBDA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisDisableSceneResolveAndLoad_t4250381D87869C0AD2D831D3414EBA2C7A26B516_m82021480FD67E604C45BDDF5F6E52194A966CBDA_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_m32613B7A68993E09512739825CEBD2E50AF4201A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_m32613B7A68993E09512739825CEBD2E50AF4201A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_mF46A945D1FBC5F730FE4AB9CE92E455E9840E868 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_mF46A945D1FBC5F730FE4AB9CE92E455E9840E868_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_m657EC137B43E232DD2AD18CDB35219BCF4BDEA41 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_m657EC137B43E232DD2AD18CDB35219BCF4BDEA41_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisClientJoinRequestRpc_t6D91F8FAACB7CB9CFD19D787D15D231B53CEF81D_m59E31CE9B5F3336DD7D40B243FB40F821AE6DC5C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisClientJoinRequestRpc_t6D91F8FAACB7CB9CFD19D787D15D231B53CEF81D_m59E31CE9B5F3336DD7D40B243FB40F821AE6DC5C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisClientRequestRespawnRpc_tB0C02A3BFD936D488EFB1CEDD06CB605E94AA7EC_mE6F7AAA82E8ED7BB225D33B54F72C65C89028DF4 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisClientRequestRespawnRpc_tB0C02A3BFD936D488EFB1CEDD06CB605E94AA7EC_mE6F7AAA82E8ED7BB225D33B54F72C65C89028DF4_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSnapshotData_t6B1E9DEBD977F5E7CC7EAEA947DB0F618B972E55_m8736F800BCDEAF183953B7B8922DA04BE569102B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSnapshotData_t6B1E9DEBD977F5E7CC7EAEA947DB0F618B972E55_m8736F800BCDEAF183953B7B8922DA04BE569102B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpawnPoint_t25713D4D601F769F60F42CA7998F31B4F47BBA0A_m5565BE1830C4278A28016E46BD531CAC97CC0E44 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSpawnPoint_t25713D4D601F769F60F42CA7998F31B4F47BBA0A_m5565BE1830C4278A28016E46BD531CAC97CC0E44_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpectatorSpawnPoint_t6EF04E0AE426BB628B10394B3B228EF12B50CFFB_mC11DB120AF00584E172E6030CE70698C73007E3B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSpectatorSpawnPoint_t6EF04E0AE426BB628B10394B3B228EF12B50CFFB_mC11DB120AF00584E172E6030CE70698C73007E3B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_m7B799A963F110DAF3573E8909357B5A220139902 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_m7B799A963F110DAF3573E8909357B5A220139902_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicCharacterProperties_tCB57F0D4680F14E9194DF1035286389926EC5651_m46076054211A281BDEA3FA6036A68AD232DD3564 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisKinematicCharacterProperties_tCB57F0D4680F14E9194DF1035286389926EC5651_m46076054211A281BDEA3FA6036A68AD232DD3564_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisIsSectionLoaded_tBF08B3985E7B90393E9188BA6E4FE4B612667455_mFD8268FF9C7C966C60C10879CB3B2956E7FC6FEE (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisIsSectionLoaded_tBF08B3985E7B90393E9188BA6E4FE4B612667455_mFD8268FF9C7C966C60C10879CB3B2956E7FC6FEE_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSubScenePrespawnBaselineResolved_tB25FB1FFE6B19222EA8510EE41863D0EE300CE1F_mED674BAF8C637D42FB820B9312EE84249EC64975 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSubScenePrespawnBaselineResolved_tB25FB1FFE6B19222EA8510EE41863D0EE300CE1F_mED674BAF8C637D42FB820B9312EE84249EC64975_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRemoveUnusedEntityInBake_tD9ECD1A4695A5071B0D2316B09A8B48A3FFB4DE1_m4C57DE307DAAF466D6E263D507E046DD4C2128E3 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRemoveUnusedEntityInBake_tD9ECD1A4695A5071B0D2316B09A8B48A3FFB4DE1_m4C57DE307DAAF466D6E263D507E046DD4C2128E3_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m0E5A96385B9B87F40791B94AFA304FAF965A6694 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m0E5A96385B9B87F40791B94AFA304FAF965A6694_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostOwner_t00E10310781534F6A1E9BD56773C9BEE64046FE9_m5D55C72709635A7AC7831132DF8F2456EEDECDF3 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostOwner_t00E10310781534F6A1E9BD56773C9BEE64046FE9_m5D55C72709635A7AC7831132DF8F2456EEDECDF3_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBulletShotVisuals_t72C0C1CC6071D42CC4D0250022BABD26EAC19A3B_mCAA13361E2CD04F0D84CECCDB3CFB761B8C37354 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBulletShotVisuals_t72C0C1CC6071D42CC4D0250022BABD26EAC19A3B_mCAA13361E2CD04F0D84CECCDB3CFB761B8C37354_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_m05C43686BED9C6169B0C2C3E8CA39B192DE24A4D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_m05C43686BED9C6169B0C2C3E8CA39B192DE24A4D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCompanionLinkTransform_tBCA469674FB09DE2A20CC9E6A9B26B92462A7F11_m167A714D37B6E2167FA0AAF692B3A25A8C22F852 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisCompanionLinkTransform_tBCA469674FB09DE2A20CC9E6A9B26B92462A7F11_m167A714D37B6E2167FA0AAF692B3A25A8C22F852_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostDistancePartitionShared_t2A64D9C74B21E979B0B3AD3C5D8DBE31102CC92F_m4DB2E2D0B2E1ECA6C888F68BE3E2BBDBFED82D05 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostDistancePartitionShared_t2A64D9C74B21E979B0B3AD3C5D8DBE31102CC92F_m4DB2E2D0B2E1ECA6C888F68BE3E2BBDBFED82D05_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPrefabMetaData_tCF69584BEDF11A9D0486F3C9211F045B8C0B9544_mF0E9F2FD37BD5E7FE640240461B1A5724D1EC64C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostPrefabMetaData_tCF69584BEDF11A9D0486F3C9211F045B8C0B9544_mF0E9F2FD37BD5E7FE640240461B1A5724D1EC64C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPrefabRuntimeStrip_t7F62492831ECDA11D63D2F4792B1CB5FB10E5654_m8262AFA119F9096D0239E841F1CEE0E2AD2D90DF (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostPrefabRuntimeStrip_t7F62492831ECDA11D63D2F4792B1CB5FB10E5654_m8262AFA119F9096D0239E841F1CEE0E2AD2D90DF_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicCharacterBody_t4FE38C7EDB4FCCDB531BFB4B0E69B0E7AC809584_mD2678DE926E354680199F48784E8A6ED1E237A68 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisKinematicCharacterBody_t4FE38C7EDB4FCCDB531BFB4B0E69B0E7AC809584_mD2678DE926E354680199F48784E8A6ED1E237A68_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_m7E3D5387743B797F3102A04A73201B028796B8EF (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_m7E3D5387743B797F3102A04A73201B028796B8EF_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisIncomingCommandDataStreamBuffer_t2976645F480CEBDE41DA0C7C7087249B04E21C4D_m537342EAA4D2B3FE8B8C6180362468A4FA0F19EA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisIncomingCommandDataStreamBuffer_t2976645F480CEBDE41DA0C7C7087249B04E21C4D_m537342EAA4D2B3FE8B8C6180362468A4FA0F19EA_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsConstrainedBodyPair_t11C5D7FDF2C7D1E0AC01DD9AA0E95492E8C14728_m9D1B79B617CE177B561F6A0BDCB036BAB1372BF6 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsConstrainedBodyPair_t11C5D7FDF2C7D1E0AC01DD9AA0E95492E8C14728_m9D1B79B617CE177B561F6A0BDCB036BAB1372BF6_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsJoint_t7E81076F134608B1FDEA0070C11135E9B30A0897_mEE2012D86F5668FDA5C8C1FCCBB4EC0F7313D50B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsJoint_t7E81076F134608B1FDEA0070C11135E9B30A0897_mEE2012D86F5668FDA5C8C1FCCBB4EC0F7313D50B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_m31F3748EDFD132CF6325D066FBBB03817FD96582 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_m31F3748EDFD132CF6325D066FBBB03817FD96582_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCustomPhysicsProxyDriver_tA12A54FDC4F2780192F2BCB674A38F48A584F225_m6E5167680CB403CE5BCEFBD109A722100C4FC127 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisCustomPhysicsProxyDriver_tA12A54FDC4F2780192F2BCB674A38F48A584F225_m6E5167680CB403CE5BCEFBD109A722100C4FC127_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicCharacterHit_t864D62E27E83DA16D4B4B0C09A7BB167D7A77628_m06E3BDE3F9571A993185B10265373685A6D2EFB9 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisKinematicCharacterHit_t864D62E27E83DA16D4B4B0C09A7BB167D7A77628_m06E3BDE3F9571A993185B10265373685A6D2EFB9_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStatefulKinematicCharacterHit_tC62C9D1712BE538FCB2CA9845130D4C305D2AAB8_m3770D75B77F64F59425DDDD4D922320FE0F9C01C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisStatefulKinematicCharacterHit_tC62C9D1712BE538FCB2CA9845130D4C305D2AAB8_m3770D75B77F64F59425DDDD4D922320FE0F9C01C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicCharacterDeferredImpulse_t86E4A087729C97348568B71E272A60F00CCD548C_mDD69E00B6F5151F2304CB42219FC8557AA123422 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisKinematicCharacterDeferredImpulse_t86E4A087729C97348568B71E272A60F00CCD548C_mDD69E00B6F5151F2304CB42219FC8557AA123422_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisKinematicVelocityProjectionHit_t4C4BA3B45EB433F6A4245F023D5533DEE19B7F0B_m1CEA3D45C024DAD92A4AE49F58E48BEE08F69F6C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisKinematicVelocityProjectionHit_t4C4BA3B45EB433F6A4245F023D5533DEE19B7F0B_m1CEA3D45C024DAD92A4AE49F58E48BEE08F69F6C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsGraphicalSmoothing_t9C3A887741C265D0E64E04E05F9FB8DA8B2716A4_m4A43FA491A0AE43E872830E9A1C18021D64990E0 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsGraphicalSmoothing_t9C3A887741C265D0E64E04E05F9FB8DA8B2716A4_m4A43FA491A0AE43E872830E9A1C18021D64990E0_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRocketShotVisual_t0153CB43E9B61E7338B583C3D0A57FB6E46B7CA9_mBED3DF66E0D00D8A29DF3E3B57D27C0AD7F9EFEC (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRocketShotVisual_t0153CB43E9B61E7338B583C3D0A57FB6E46B7CA9_mBED3DF66E0D00D8A29DF3E3B57D27C0AD7F9EFEC_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisAutoCommandTarget_t2DDAA53D1DF20CAAD90902389BEF5E6088EFC191_mFE5BD238935245103669D542C46955C97945BA4F (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisAutoCommandTarget_t2DDAA53D1DF20CAAD90902389BEF5E6088EFC191_mFE5BD238935245103669D542C46955C97945BA4F_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisLaserShotVisuals_t19AA7C016DE761566EE1CD14B3B0CB35EB2B5B14_m1CA75A2D101420294DBBDD63D77B56918921AAA5 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisLaserShotVisuals_t19AA7C016DE761566EE1CD14B3B0CB35EB2B5B14_m1CA75A2D101420294DBBDD63D77B56918921AAA5_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisActiveWeapon_t34043214BE9DC5C194F0C8AFD2449E4F8383B849_m440AA166DEF4EA71EA990B64B18F506845AD6F3E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisActiveWeapon_t34043214BE9DC5C194F0C8AFD2449E4F8383B849_m440AA166DEF4EA71EA990B64B18F506845AD6F3E_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisAdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1_m6DCEFDA00308D5CF93ACF4FF75A1E5B207B212D1 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisAdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1_m6DCEFDA00308D5CF93ACF4FF75A1E5B207B212D1_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBaseWeapon_tC216A83AE78BB8EC23049B07598B598BA353B335_m7F21E1087C149D4779E371A01C1D12AAC1A7938F (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBaseWeapon_tC216A83AE78BB8EC23049B07598B598BA353B335_m7F21E1087C149D4779E371A01C1D12AAC1A7938F_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD_m0F23A448C61CCF70DF9C04FC86EB10D61DDC3A72 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD_m0F23A448C61CCF70DF9C04FC86EB10D61DDC3A72_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBroadphaseData_t283ED0771F35DEB34BC13ED55C73772D7CD154A3_m231A9F12C94DCC196177B0153F47393B403460E7 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBroadphaseData_t283ED0771F35DEB34BC13ED55C73772D7CD154A3_m231A9F12C94DCC196177B0153F47393B403460E7_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBuildPhysicsWorldData_t2B48F1A635280E8C32969EF1108844731186F1B2_m11C0F36734285030D82A9424C569C0F21C28DD8D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBuildPhysicsWorldData_t2B48F1A635280E8C32969EF1108844731186F1B2_m11C0F36734285030D82A9424C569C0F21C28DD8D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77_m7842F319E5F79C371C19D99A3BDABAB48983A50E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77_m7842F319E5F79C371C19D99A3BDABAB48983A50E_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E_m0D48267FE6D42C6E933EBC874096C29538382795 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E_m0D48267FE6D42C6E933EBC874096C29538382795_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCharacterWeaponVisualFeedback_t796AA9CD94EC7DB2D0B0C006C2DEAADE6FDEC750_m4AE5C68F4A467732D0AFD9DECF44BBFC484EBFBA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisCharacterWeaponVisualFeedback_t796AA9CD94EC7DB2D0B0C006C2DEAADE6FDEC750_m4AE5C68F4A467732D0AFD9DECF44BBFC484EBFBA_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisClientServerTickRate_t16FDBD0A027833FD92846C5F6B046820DE125602_m253E94A751C8AAD2F9AE71E695614F8BBC0DD5B0 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisClientServerTickRate_t16FDBD0A027833FD92846C5F6B046820DE125602_m253E94A751C8AAD2F9AE71E695614F8BBC0DD5B0_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisClientTickRate_t0E92DBFF5847A71B95752CF3292FD2FC140495C9_m390277FD3E8D44958907E1768F3B9908034DE49C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisClientTickRate_t0E92DBFF5847A71B95752CF3292FD2FC140495C9_m390277FD3E8D44958907E1768F3B9908034DE49C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisColliderBlobCleanupData_tFEC8BF2F69AE15547D452B79FACB5A3A88064E32_mF56C17C837A47992FA0744957F8F579F05DA3C27 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisColliderBlobCleanupData_tFEC8BF2F69AE15547D452B79FACB5A3A88064E32_mF56C17C837A47992FA0744957F8F579F05DA3C27_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFirstPersonPlayerNetworkInput_t65C76C5DDF988140A9498C5400E0B40B3943307A_mD7931B74D500178D9E7E0972A29B4A9F4B1B1E06 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisFirstPersonPlayerNetworkInput_t65C76C5DDF988140A9498C5400E0B40B3943307A_mD7931B74D500178D9E7E0972A29B4A9F4B1B1E06_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisFixedRandom_t4D3428C8755DB2D3C6F470BF229B1EF04C1A5655_mF223DD5574F361468D84CB538B36183595EF8676 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisFixedRandom_t4D3428C8755DB2D3C6F470BF229B1EF04C1A5655_mF223DD5574F361468D84CB538B36183595EF8676_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGameResourcesWeapon_t33BACCEA8139E13C955BD58FBDF6E9AE03BF9BA2_mFA8BBE19B141BA5E0069FD1F0D5321FCB0415B35 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGameResourcesWeapon_t33BACCEA8139E13C955BD58FBDF6E9AE03BF9BA2_mFA8BBE19B141BA5E0069FD1F0D5321FCB0415B35_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGameplayMaps_tBCB9867630673AB8E660939CDACCFBB4A4726ACA_mA3A956490C18C8E46D84F782E615A673E57628DE (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGameplayMaps_tBCB9867630673AB8E660939CDACCFBB4A4726ACA_mA3A956490C18C8E46D84F782E615A673E57628DE_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostCleanup_tE96F7C9F4DC59AEB2C9996CBA308E8A0603F6BBC_m78442F5D825A49D22A62F85A2BC9478AB4370516 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostCleanup_tE96F7C9F4DC59AEB2C9996CBA308E8A0603F6BBC_m78442F5D825A49D22A62F85A2BC9478AB4370516_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostCollection_t13EDF41F2078D02C47FB76ED953412292F745219_mB84A324CCF547FBD67690E998133E3316B02262D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostCollection_t13EDF41F2078D02C47FB76ED953412292F745219_mB84A324CCF547FBD67690E998133E3316B02262D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostCollectionPrefab_t8AF4B66BAD32F1BF1FD8A7E9B236EEBDFBC81D60_m61CC8A58EF4C6E694005B54187F76C650A450856 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostCollectionPrefab_t8AF4B66BAD32F1BF1FD8A7E9B236EEBDFBC81D60_m61CC8A58EF4C6E694005B54187F76C650A450856_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostComponentSerializerCollectionData_tBA662EAD4B94AC75D75278CE1D22A56621C92191_mC7BF4B5DAF5CE5F55E0D9958CA2C1FEB85D76CD5 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostComponentSerializerCollectionData_tBA662EAD4B94AC75D75278CE1D22A56621C92191_mC7BF4B5DAF5CE5F55E0D9958CA2C1FEB85D76CD5_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostCount_t28FC783F6F6AEE97C5F7B67CA58CA6652CFC1083_m276861C40F10051DE071E11EEAE9E22E85F6BA5F (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostCount_t28FC783F6F6AEE97C5F7B67CA58CA6652CFC1083_m276861C40F10051DE071E11EEAE9E22E85F6BA5F_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostDespawnQueues_tFCC28D3C6222373756344D11F4950B1CEF4E1B5B_mAA9E66F0BC0A862293B28E564D5D202BB83FEFD8 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostDespawnQueues_tFCC28D3C6222373756344D11F4950B1CEF4E1B5B_mAA9E66F0BC0A862293B28E564D5D202BB83FEFD8_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostOwnerPredictedSwitchingQueue_tC005A4D4732805D5D7C6FB393E20241F47551491_mC966ED9D00528305CFDB87205580567B9300B224 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostOwnerPredictedSwitchingQueue_tC005A4D4732805D5D7C6FB393E20241F47551491_mC966ED9D00528305CFDB87205580567B9300B224_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPredictionGroupTickState_tB8F7B7A4ADC6DDAD8291FA77A797B6BFF50BF0A2_m4DEFA234023B38F121CE84B02E5B962A0F23256A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostPredictionGroupTickState_tB8F7B7A4ADC6DDAD8291FA77A797B6BFF50BF0A2_m4DEFA234023B38F121CE84B02E5B962A0F23256A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPredictionHistoryState_tD55DF52D9563D83B55FA94B94BBF30A0D9F9DC28_m050C814D3893DBF216CD02CBA893469EFFBFE59A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostPredictionHistoryState_tD55DF52D9563D83B55FA94B94BBF30A0D9F9DC28_m050C814D3893DBF216CD02CBA893469EFFBFE59A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPredictionSmoothing_tB6587249ECA5A9C2182026512CFF914FF75B37E0_mE52515741C176ED61587830941DF3C059A16C7B5 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostPredictionSmoothing_tB6587249ECA5A9C2182026512CFF914FF75B37E0_mE52515741C176ED61587830941DF3C059A16C7B5_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostPredictionSwitchingQueues_t766AA5F381338A4D531193C3CBFFFE35055BA661_m10AA7712D2825A6D27DDFDE11E6B105635F9B4D1 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostPredictionSwitchingQueues_t766AA5F381338A4D531193C3CBFFFE35055BA661_m10AA7712D2825A6D27DDFDE11E6B105635F9B4D1_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostRelevancy_t24C834524E3673B5061DBA61F39D29751B32D659_m989972E6870512C5B294502FAE3E2D3F932271D6 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostRelevancy_t24C834524E3673B5061DBA61F39D29751B32D659_m989972E6870512C5B294502FAE3E2D3F932271D6_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostSendSystemData_tAD3978C66B82BC5C4FFB9470AD3CBF2B7B2EFC84_m8C2570044726DBC4BAFFAFB783DE81D0613B8C7D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostSendSystemData_tAD3978C66B82BC5C4FFB9470AD3CBF2B7B2EFC84_m8C2570044726DBC4BAFFAFB783DE81D0613B8C7D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostSnapshotLastBackupTick_tDE3EE53D10E5A0F839C2BD162E0F100B1C0E3C43_m47664754B590B07BBBBE9EFA0EE7BA4601B9147F (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostSnapshotLastBackupTick_tDE3EE53D10E5A0F839C2BD162E0F100B1C0E3C43_m47664754B590B07BBBBE9EFA0EE7BA4601B9147F_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostSpawnBuffer_t1197943A694681C3FAC0C0F3C2C09D0F6DA9A1E7_m852EAF6FE241869B308E43BF6541FE2BB5F5F88A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostSpawnBuffer_t1197943A694681C3FAC0C0F3C2C09D0F6DA9A1E7_m852EAF6FE241869B308E43BF6541FE2BB5F5F88A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostUpdateVersion_t74F31010DC4C97BC537DDF95D069CCE7A8EE6F3B_m0B697ADDA809280663E0CADAA267473B14029797 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostUpdateVersion_t74F31010DC4C97BC537DDF95D069CCE7A8EE6F3B_m0B697ADDA809280663E0CADAA267473B14029797_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisMachineGunBarrelVisual_tEAD5AC48DABC351CDD9818CD9809EAEFE100E88C_mC03CF7BF6A59C6F5F0426D543A15297DD455B7EE (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisMachineGunBarrelVisual_tEAD5AC48DABC351CDD9818CD9809EAEFE100E88C_mC03CF7BF6A59C6F5F0426D543A15297DD455B7EE_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetDebug_t04383CA2B98C846A55C5A8960A6CCA2F84B8AEB8_m7AA2E5CD9D1A2AA84EFF2A267ABD87574F67FC25 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisNetDebug_t04383CA2B98C846A55C5A8960A6CCA2F84B8AEB8_m7AA2E5CD9D1A2AA84EFF2A267ABD87574F67FC25_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkStreamDriver_t09BCA975B6457E5C7517A235088519050F9952B6_mC4F0E45FECBE15839CEA93350F6A697E227595F0 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisNetworkStreamDriver_t09BCA975B6457E5C7517A235088519050F9952B6_mC4F0E45FECBE15839CEA93350F6A697E227595F0_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisNetworkTimeSystemData_t6CF678998DCD95CDA09785B46DED450CD8874A53_mA61D7AB2E054347C602039E12980BC2CB36D3603 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisNetworkTimeSystemData_t6CF678998DCD95CDA09785B46DED450CD8874A53_mA61D7AB2E054347C602039E12980BC2CB36D3603_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisOutgoingCommandDataStreamBuffer_t74C9B36A80DF8A270BE763F2EBA733C6FC5E0A70_m42F3C278B4CAA92D678E4C3C7F09F8A04DEB0A24 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisOutgoingCommandDataStreamBuffer_t74C9B36A80DF8A270BE763F2EBA733C6FC5E0A70_m42F3C278B4CAA92D678E4C3C7F09F8A04DEB0A24_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsColliderKeyEntityPair_tAEF837B39E3949BB41536084707EE655C69D40FE_mC5A4A8875E6EF47D1F65327252F076A9BB3B9F3B (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsColliderKeyEntityPair_tAEF837B39E3949BB41536084707EE655C69D40FE_mC5A4A8875E6EF47D1F65327252F076A9BB3B9F3B_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsCompoundData_t25E7A437D24DFE2C810FCF3B2B950BB889513648_m34960BFF4B1D94D25519D3B5FDC4A8C6A0476CD6 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsCompoundData_t25E7A437D24DFE2C810FCF3B2B950BB889513648_m34960BFF4B1D94D25519D3B5FDC4A8C6A0476CD6_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsGraphicalInterpolationBuffer_t4425E9311BC421D1E03F6699B1CEDACD6598D8E9_mEBAE7050FABF64F14D7C29810C05D5EA822A917D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsGraphicalInterpolationBuffer_t4425E9311BC421D1E03F6699B1CEDACD6598D8E9_mEBAE7050FABF64F14D7C29810C05D5EA822A917D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsTemporalCoherenceTag_t36AD20C7CC2757DD29698462895002BF0911B2B4_mD1C40FAD70ED135D27F57C7BD54FEE4A3C144429 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsTemporalCoherenceTag_t36AD20C7CC2757DD29698462895002BF0911B2B4_mD1C40FAD70ED135D27F57C7BD54FEE4A3C144429_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsWorldHistorySingleton_tAB64E013DD6A12815A31F2B5432265555C160209_m2239A2238DEDB2342B2CF2977D35648403D3425C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsWorldHistorySingleton_tAB64E013DD6A12815A31F2B5432265555C160209_m2239A2238DEDB2342B2CF2977D35648403D3425C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPhysicsWorldSingleton_t378ADEC7BEB4615C6B7972AB0EC26DF2BD864AFA_m0E191D35FB6B760FEFDFCC07AB95174523A5A10E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPhysicsWorldSingleton_t378ADEC7BEB4615C6B7972AB0EC26DF2BD864AFA_m0E191D35FB6B760FEFDFCC07AB95174523A5A10E_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPrespawnGhostBaseline_tA12CE09F9336397F5AAC7F1F995F70002471CCE7_m1CB9F69046CFEDA6400C6A7A5298BB0B701149F3 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPrespawnGhostBaseline_tA12CE09F9336397F5AAC7F1F995F70002471CCE7_m1CB9F69046CFEDA6400C6A7A5298BB0B701149F3_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD_mEF28DFCAD423E26B81F10A8CB792E628B9553C50 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD_mEF28DFCAD423E26B81F10A8CB792E628B9553C50_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRaycastWeaponVisualProjectileEvent_t49590D2F126AACDE2D98554AD781D3BFF3D975D8_m07A4DA71264FCC770084D1BD7A2C06FAA8234FB2 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRaycastWeaponVisualProjectileEvent_t49590D2F126AACDE2D98554AD781D3BFF3D975D8_m07A4DA71264FCC770084D1BD7A2C06FAA8234FB2_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_mCA5211449B686BA7B83148CDFC9095DC7360FB21 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_mCA5211449B686BA7B83148CDFC9095DC7360FB21_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20_mDA9DDA0556CCFFE8D45941BA53503BA2812E2CBD (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20_mDA9DDA0556CCFFE8D45941BA53503BA2812E2CBD_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D_mC379C8817A25B9D2B39DB4B07A96533E4686D41D (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D_mC379C8817A25B9D2B39DB4B07A96533E4686D41D_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306_mBB6E1A3B821CE326AED3045B286B16AAA2243D30 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306_mBB6E1A3B821CE326AED3045B286B16AAA2243D30_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F_mBB5DB3E42C1BDDB96F2A8AA88913165166EDDE5A (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F_mBB5DB3E42C1BDDB96F2A8AA88913165166EDDE5A_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisRetainBlobAssets_t190E68112895048346A189ADC59FD9CCAE9C73B3_m6F8DA48C67546418A606D3F2DF3EE2345F91C7C4 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisRetainBlobAssets_t190E68112895048346A189ADC59FD9CCAE9C73B3_m6F8DA48C67546418A606D3F2DF3EE2345F91C7C4_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSpectatorController_tFD98B743B9E30BECE6DDAA391B154479623B2D3B_m267861A5BFA4BB9F7ED85900D0612B839ACC3AFD (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSpectatorController_tFD98B743B9E30BECE6DDAA391B154479623B2D3B_m267861A5BFA4BB9F7ED85900D0612B839ACC3AFD_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStepInputSingleton_tF8533E0D6AACD3BB57B6641B05F78A5C48F3A92E_m9E5B4EA89C750E36B3353073165EB59FBFEB9851 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisStepInputSingleton_tF8533E0D6AACD3BB57B6641B05F78A5C48F3A92E_m9E5B4EA89C750E36B3353073165EB59FBFEB9851_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisTrackedTransform_t26337E726D9F91AC61CABEB748253360539B0F83_mD9C18543D5E0BBFCECCA509F92D0B1E9FA5DE8DE (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisTrackedTransform_t26337E726D9F91AC61CABEB748253360539B0F83_mD9C18543D5E0BBFCECCA509F92D0B1E9FA5DE8DE_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisUniqueInputTickMap_tD54F27A8967281B8FC4FCD0D0113C3B1A5F5D436_m3B11CD86D34C535158387E8B8EDB356FDD3D4D8E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisUniqueInputTickMap_tD54F27A8967281B8FC4FCD0D0113C3B1A5F5D436_m3B11CD86D34C535158387E8B8EDB356FDD3D4D8E_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisVfxHitResources_tE16DC53D1C6D58EF0BA97CF6D4045B7B943BC80C_m3C96266D8EE985EEC05CCB21ED3A2142B8D095A3 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisVfxHitResources_tE16DC53D1C6D58EF0BA97CF6D4045B7B943BC80C_m3C96266D8EE985EEC05CCB21ED3A2142B8D095A3_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponControl_t5AB0EB825E7C3CD5A28E96E8E1950245F08B331B_mE2FEA37619E214F1A82E772BD99D8AE7DBEFC45C (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisWeaponControl_t5AB0EB825E7C3CD5A28E96E8E1950245F08B331B_mE2FEA37619E214F1A82E772BD99D8AE7DBEFC45C_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponOwner_t25A7D7472E25F4C948CF47A8CE4FAB9EC4402F2D_m44A9521B38ECB979AB30F421612E4719F22268C2 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisWeaponOwner_t25A7D7472E25F4C948CF47A8CE4FAB9EC4402F2D_m44A9521B38ECB979AB30F421612E4719F22268C2_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisWeaponVisualFeedback_t00933BB2414618F56FF791E1ECC17381C3018DE1_m467531E1DEC089A9A13E6E9860A1C75A596345E0 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisWeaponVisualFeedback_t00933BB2414618F56FF791E1ECC17381C3018DE1_m467531E1DEC089A9A13E6E9860A1C75A596345E0_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t3C4D290E03B1550607585431A91F6254C68B5D91_mF4039B4DA6EE4DE3F43D34D2026BAC6B6F05497E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t3C4D290E03B1550607585431A91F6254C68B5D91_mF4039B4DA6EE4DE3F43D34D2026BAC6B6F05497E_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_tCAA7B5B53C65D96E834EED2D2BF2AB5506867D26_m3A1D7602D30967D8B78AE0633F0CD129C726A0DD (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_tCAA7B5B53C65D96E834EED2D2BF2AB5506867D26_m3A1D7602D30967D8B78AE0633F0CD129C726A0DD_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t1651082D66AC0E8FDCC10F98F216B9BF100ED8C4_m2AF1E6707AEBF72608178F8898735EB50A2E0533 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t1651082D66AC0E8FDCC10F98F216B9BF100ED8C4_m2AF1E6707AEBF72608178F8898735EB50A2E0533_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t54EEAD2311CF856F94003347B6A21A186E71D0FE_m06161074DD15FC218661E5CFDA183CEDD7F30B44 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t54EEAD2311CF856F94003347B6A21A186E71D0FE_m06161074DD15FC218661E5CFDA183CEDD7F30B44_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t98A3C260D7EC2417778B2B6B5C85A94CB302CEDE_mD858397FD2BEA5A31DEF9087B588F06FAF3A7315 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t98A3C260D7EC2417778B2B6B5C85A94CB302CEDE_mD858397FD2BEA5A31DEF9087B588F06FAF3A7315_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSingleton_t374672F8E4A603D633C5ABEBA6FB5F00833D1A2D_m79F42C098FD5196D1B6B493E240BDDD32869E340 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSingleton_t374672F8E4A603D633C5ABEBA6FB5F00833D1A2D_m79F42C098FD5196D1B6B493E240BDDD32869E340_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisState_t583D7FAB6D38B74AF495A7205BBCEBEADCBAC09A_m4AA6770C3F7E3C446E8E3165C39B10C8058C7013 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisState_t583D7FAB6D38B74AF495A7205BBCEBEADCBAC09A_m4AA6770C3F7E3C446E8E3165C39B10C8058C7013_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisMaterialReferenceElement_t92B9C280FA5368F6A6C297561C172FA97EFBECAC_m034B261205C75B76955DD2B074998C7708E87E84 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisMaterialReferenceElement_t92B9C280FA5368F6A6C297561C172FA97EFBECAC_m034B261205C75B76955DD2B074998C7708E87E84_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisStreamingState_t26FE12C040BCF324059A9D9487A142D51678EBB7_mEF6863C1F6A7D2877D414B4EB0215D36635861C0 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisStreamingState_t26FE12C040BCF324059A9D9487A142D51678EBB7_mEF6863C1F6A7D2877D414B4EB0215D36635861C0_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisPublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634_mF018CFE927579488AF20C4292FBA364866BBC730 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisPublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634_mF018CFE927579488AF20C4292FBA364866BBC730_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSwitchPredictionSmoothing_t77F66A976B2B8967484C1CDF987CA6EB0CA27D54_m72FD8CC28BD7A6680CD1A129DE5F652A3F96FC90 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSwitchPredictionSmoothing_t77F66A976B2B8967484C1CDF987CA6EB0CA27D54_m72FD8CC28BD7A6680CD1A129DE5F652A3F96FC90_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisGhostChildEntity_tBA1424BC5FFA91C3F17C633F75AD7C26078F59C2_m70CA927E5514BC3451D74FF75207BCE63FD818DC (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisGhostChildEntity_tBA1424BC5FFA91C3F17C633F75AD7C26078F59C2_m70CA927E5514BC3451D74FF75207BCE63FD818DC_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisMeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E_m8C1E7F147ECEEBD946BA39F37EC7D07FF8E76769 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisMeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E_m8C1E7F147ECEEBD946BA39F37EC7D07FF8E76769_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisSkinnedMeshRendererBakingData_t150FE20D34A6D7BBE2D3F0BB6029B3588DA7FA36_m53301195B532F30D951D795C0A1962C762DF29EC (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisSkinnedMeshRendererBakingData_t150FE20D34A6D7BBE2D3F0BB6029B3588DA7FA36_m53301195B532F30D951D795C0A1962C762DF29EC_gshared)(method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisBakingOnlyEntity_tBDD362F696A87274ED664FDE5FD13A74CFA7A2CE_m96B9401FC8FD0B04F55F3BC782166E5FD434CB6E (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisBakingOnlyEntity_tBDD362F696A87274ED664FDE5FD13A74CFA7A2CE_m96B9401FC8FD0B04F55F3BC782166E5FD434CB6E_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonCharacterAspect_AddComponentRequirementsTo_mAC99F40332F508B3584E375E3C0E5E4F0BDA215E (FirstPersonCharacterAspect_t08A07A31494695EF4D31A81F804ABCA1F8DBA280* __this, UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* ___0_all, const RuntimeMethod* method) ;
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C TypeManager_GetTypeIndex_TisCharacterInitialized_tDD35F02EA206A49804244EC27197F074A3A7ABD0_m0095DF6BAADAB1903C91AB9C689AD359171CE887 (const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))TypeManager_GetTypeIndex_TisCharacterInitialized_tDD35F02EA206A49804244EC27197F074A3A7ABD0_m0095DF6BAADAB1903C91AB9C689AD359171CE887_gshared)(method);
}
inline void UnsafeList_1_Resize_m62AE410F7B9BB1F934C33AB8E6E65198CF695A1F (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_Resize_m62AE410F7B9BB1F934C33AB8E6E65198CF695A1F_gshared)(__this, ___0_length, ___1_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPrefabWeapon_tE3DBA6E146BE2D64F6D46FA062ABFDF0EF6EBC34_mA968750DC2EE0036352EEF5EC55C3F862E1DF375_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPrefabWeapon_tE3DBA6E146BE2D64F6D46FA062ABFDF0EF6EBC34_mB34796CFA52B6074461EE0C27F327D7DD4DCBB2B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPrespawnGhostIdRange_tA869F9D0F6CB1DD79ABF8E1923B07C6D295EC734_m68989B42CBBAC993DB4367C48C0457908F00C901_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPrespawnGhostIdRange_tA869F9D0F6CB1DD79ABF8E1923B07C6D295EC734_mD7417A0D218F851EDD3EAABFF156B0D38C305B3B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_m534AE7E191A59775E270FCD9F6417A09D34A3C76_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_mA7AB7109BC1FF4B68186F1B9F6619E57CC52565B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_mDF2061476D960F52B37E355592FFF744704D0162_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_m605A0E93F835EC920221AA8D27576992F9E9BA37(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRaycastWeapon_t8BA7B9255E74C830BF7C6DE64E611ACC94E4B279_m2118BB7665D6A3C1DBA7F2F7B1368FBF9A2E402D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRaycastWeapon_t8BA7B9255E74C830BF7C6DE64E611ACC94E4B279_m6D5ECF156F05C29C4A54C84B5A3CAA8868D7E78B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisReceiveRpcCommandRequest_tF93887C57B00FDD627E07116C2537835A453DC35_m14155B2D328FDABF6904AFE7AA932EFCDA8DD5F1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisReceiveRpcCommandRequest_tF93887C57B00FDD627E07116C2537835A453DC35_mFED375CB629262C7092D7BD9A30839372C7576BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRenderMesh_t6B129D69D8E39AC5B2425F2CC9735C845FEA360D_m4BF1DE02BB8870F067ACCB07F51FA06AB10ABD67_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRenderMesh_t6B129D69D8E39AC5B2425F2CC9735C845FEA360D_m0DF4CFA0156F001BC67B2ADFB19C86EDD09A7199(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m4EA139C4B52758B7F845FB793DFFFEEF4998E59E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m315BBB7014A48D6EA91CE5F41D270F8D90D3F6C1(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_mBB4D910E56C0BAF8001727952A550EF58E29B082_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRequestEntityPrefabLoaded_t7619E45BAFEDDF1F5FAD060DFD61BBB7080A8FE7_m9280A0A88A6F0BBF7615664B2772B9148992F094(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m6A137B8CE3F28AE1480B087D940AD7512497AB76_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m489D25E73D17754E1617D080BC4D80F47732BC69(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRigidbodyBakingData_t8EB12AE048EE91B3F926F0B18055B96754194AE1_m36E78AFCDE83836AD2C832C5DBE0A461DD38814A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRigidbodyBakingData_t8EB12AE048EE91B3F926F0B18055B96754194AE1_mC4B4C9CA27F39CFF2390389C0D80EB5ED281055F(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRpcCollection_tF5A8386ADA59B8E4787F09F2F82406BFEECBDA11_m346809AF887EADBBD35D673B6CC0A816628C0ED3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRpcCollection_tF5A8386ADA59B8E4787F09F2F82406BFEECBDA11_mB21B699AA298587C6AB3C2A46115850046E36B0B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_mFE26F02B7936185531C57F3E7A3BC1F4A49CDA1C_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_mE63D71E60B319B3370A91FD5A60641283BFBEAD6(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSectionMetadataSetup_tAA4925FBDF24CDE3AC041BF2F3682116EE780CF3_m93D0B477AA7766C16B8D65C8FC0AC5A173D6ED6E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSectionMetadataSetup_tAA4925FBDF24CDE3AC041BF2F3682116EE780CF3_mCC3183AA55D2733CF075B0BA420B2631E5F1A67C(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSetPlayerToDebugColor_t7EDD7200C1A3E2455E5ACCD2D12C1193149BBCF0_m95F7BF5BC0E220775A4814ABD993662A4D9ECD5E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSetPlayerToDebugColor_t7EDD7200C1A3E2455E5ACCD2D12C1193149BBCF0_m99DE2F642FDCA6C0DE58D89750518A903444CFBF(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSharedMeshTracker_t32B97BE3ACFA13F4D721D6B3B1D5AF089C22FA90_mF0DD713EE41FE510F92CC0D39B26D1421B6B5920_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSharedMeshTracker_t32B97BE3ACFA13F4D721D6B3B1D5AF089C22FA90_m01226CD6DE3BA04F680042132A26BBF196F9A135(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_mC0271AEBB2C6E58F7E88AF3D271EE5F8D28FE7B5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_m30F2158F2643D7C9BEB0138EF959CC01FE2F2F70(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSimulationSingleton_tC8F3A5395E08472F6FDD1EFF8D449D42732BBE52_mD76574302538D4482AC63D26A272EBEC33ED86A4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSimulationSingleton_tC8F3A5395E08472F6FDD1EFF8D449D42732BBE52_m3C2CD339E07C033F82072E5E639868FA26EE8580(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69_m9EE6BC0CCE44CE8B22887BB4692F78FDDADE6809_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69_m1850FFB696EC3FE7A02AB3F0FF3DDAC3D74FE7BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E_m4A251FD09943537248ED34EB2658310A0A38EBA8_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E_m453BADF9860D8CC3501EC8C3FD4BADF1BDB4A15B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_mF9E2CFC78876B09507A856FF4D422631CB78EE28_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_m7A56721F25F4850E27698151B4BD87DF85028EE5(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSpawnCharacter_t3C65F711548ADBD912FFD08EC7D8DFE2329EAA3B_mCC334B16F29DCDB284A10D7CC4A7A04510357E76_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSpawnCharacter_t3C65F711548ADBD912FFD08EC7D8DFE2329EAA3B_mFCE1798327C8D98A79B3D31CDBD68460682C7EFB(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSpawnedGhostEntityMap_t0BCFA4A062202D8F78450F55D68776FF38A95807_m6CF6DF4D8405D0C2FF7176D5E9F7EFAB5BEA4BFE_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSpawnedGhostEntityMap_t0BCFA4A062202D8F78450F55D68776FF38A95807_m68A55004084BB1E962BEAB28B359FD2D8D6BDC7A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m95BB06F09C6E6EB285500EA65E2170268C58E7C0_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m47BA8188DCB537ED8911366260DDD9054B00BE49(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisStatic_tFEF5CDCD173067402E86BD8086EC0DF54C812AE9_m0CDEC1A5848F6A0CB6D50563D1306BE27E846F8B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStatic_tFEF5CDCD173067402E86BD8086EC0DF54C812AE9_mFA3A0D7957DE28F08C82A57D15D27C3124E5F0DA(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisStaticOptimizePhysicsBaking_tE69BF2D3D1E838B1FB9C736A3E947603DB18BA2F_m0625067A9CD7F05232BD87D37D73573E669095FB_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStaticOptimizePhysicsBaking_tE69BF2D3D1E838B1FB9C736A3E947603DB18BA2F_m78D3CEF866866ECC168DACC118D429A5AD2BFD86(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_mDF7F289A76D29372F6E56ABF2B028D948EFEE81D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_mF32B07397F399C3B9C5DE1C1AED74B5FA0F0B29E(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_m1A6FCB7658D32F46A6CFC632C66AE75829245C55_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_m864F382F53065240543247AE0DBD61F9B70B7618(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSubSceneWithGhostCleanup_t687703217183BD3C6CC5D419F1157A4886DC0A9E_m8F532E981B8F92B7E62E563FA47EEA384D0267B5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSubSceneWithGhostCleanup_t687703217183BD3C6CC5D419F1157A4886DC0A9E_mD2695FD6A566AD86B765890CA29454ED2249CDEF(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_mDFB32EC33BC302678B211BBCB5C71EA4BBBA7AED_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_mC24E02DAF5E12147F17D481ACCBDDCE4BF105358(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSystemInstance_tBBEC8F4B93D1778490129996C36585CD5A20DCDC_m68D658C01697B78A05690FB2581FE9F852F8B4DD_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSystemInstance_tBBEC8F4B93D1778490129996C36585CD5A20DCDC_m908F96D1C3D2827FEC48B4C31041888BAB7B6A5C(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m1406EF0E01861D8D879D79860B4526BE71F12CFD_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m1A81156C63974EA84F0A4643642D358A715B6A6D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisVfxHitRequest_t21FBE6A1B00EEFF3C82000AA561D43C0F7A1575C_m546B222BCC4EBB387E44C8E846AF2DCABC665B8B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisVfxHitRequest_t21FBE6A1B00EEFF3C82000AA561D43C0F7A1575C_m64001F534A07FC6B37A536E298D39A9F55226AB1(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisWeaponProjectileEvent_t29E0C0B748270F64BFF89EEAE6228BFB9B40C491_mA7BCF99CFA18A5B55344807582BFF51439E6A8EF_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisWeaponProjectileEvent_t29E0C0B748270F64BFF89EEAE6228BFB9B40C491_m3B7450257E170280E7B2F628EF68FB3A427810A2(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisWeaponShotIgnoredEntity_tF580C95D32EABA91865AE3753267064FC0BEB7C4_mF997C4528D6C3D909D32D95A06EC99FC5AB20A78_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisWeaponShotIgnoredEntity_tF580C95D32EABA91865AE3753267064FC0BEB7C4_m1E94D8B2EF41E7F54FCC0BBF06B05C55815879D9(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisWeaponShotSimulationOriginOverride_tC522BE40B385B76197F2412721C824B5572B1434_m885EAD3F78B0D8CC13BDFFFF619443B2488E8902_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisWeaponShotSimulationOriginOverride_tC522BE40B385B76197F2412721C824B5572B1434_mD17EE52E8EED481F46604D94C0BAE8C6345C8CD7(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIl2CppFullySharedGenericAny_m63B9B564B056686E27B15DAF24D90ADC02ABCF1E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisBakingOnlyChildren_t4847B0A4EC56721DCE2D2CC3D930842C23A32DE9_m6DB5308FF3E3BFB99433A2D8ABBCE8416DFF7F75_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBakingOnlyChildren_t4847B0A4EC56721DCE2D2CC3D930842C23A32DE9_mC2E6E55E56F2D63CDC4EE071AABBC834D8CA25CB(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSingleton_t3BE4D7DACA33583BBE2C8373A5C47EFC4B20049F_mDC7EA5BBB8DEAC5760AC5DD20517DE90D48B6302_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t3BE4D7DACA33583BBE2C8373A5C47EFC4B20049F_m1289448A6EDDF07B5229C7FBFCC9F48B79E319D7(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSingleton_t26DC1AF10CA15B26730980E6E27C1EF0C2BE9477_m303248EA59BA58B94011BF4AD029399FBE3B1BA2_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t26DC1AF10CA15B26730980E6E27C1EF0C2BE9477_mAB99D63691B68A0CFA1C1C9DE78049F54DD82BB3(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSingleton_t64065E6CEC923A03666B8AB0360CC5BEBD4584C3_mE0C4EE7E0A15801E2470D363375473AC03F8F474_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t64065E6CEC923A03666B8AB0360CC5BEBD4584C3_m1C299D989AA51186FDE6E61D2AAA9B8A7167C48D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSingleton_t7B01EB05343F6EBACE8022A40F0E4ADE261DE7BF_m198333D7909C59C9D399BA7196F3F4F8C5A6820A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t7B01EB05343F6EBACE8022A40F0E4ADE261DE7BF_m939EDDD6784881C87ED4781C84DA6202FF5C5761(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIsolateCopiedEntities_t76F1AC3E4C27284515CD2F8BE4BFDA7DE3BCC034_mD953FC1483BD5554EFA284AE4D58141C01514CC4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisIsolateCopiedEntities_t76F1AC3E4C27284515CD2F8BE4BFDA7DE3BCC034_mE48D3C1B72CE88B90D132F8055BE861B120D059B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSmoothingAction_tAD30188B5CD91A350BF147E6BB72F3746EF0CE86_mBB679331F442EB28AF04675F22A8D1D68A667ED3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSmoothingAction_tAD30188B5CD91A350BF147E6BB72F3746EF0CE86_m1869A4B1A6583576C8829039FB41E36170FD8346(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLiveConvertedSceneCleanup_t85C67009D442CFA09978ED3D50351A95747B261E_m6086B2F6500ADDAD8B2BE8DCBF485815E40449A0_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLiveConvertedSceneCleanup_t85C67009D442CFA09978ED3D50351A95747B261E_m1DCD1CE15031D829F3A29AF81EB0CBE997B5C90A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSingleton_t5DD8E367CBD667FFC7D1AB73A7A2E2977008D79E_m533C864498994E39991CFF1BBB95F38A33EC5055_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t5DD8E367CBD667FFC7D1AB73A7A2E2977008D79E_m88F5E0CF21829DAD6CDAA92C035B35E13D78E6F9(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisProtocolVersionError_tF742C6BE56698243ADE2AE22E9091F317D105AEB_m6014E4F2E60978FD493761F221358C337E3EC969_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisProtocolVersionError_tF742C6BE56698243ADE2AE22E9091F317D105AEB_m3E9A758C51C7620D7CB5A9C38E7F200246A6190D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisAdditionalMeshRendererEntity_tB01CF1C46D3E56F39956D314D696850AD9A8594E_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_m7E1A56B341F7299E2971FEC62FED2AA834497008_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisAdditionalMeshRendererEntity_tB01CF1C46D3E56F39956D314D696850AD9A8594E_m8561EDDD3DE6BE26A21808309CAE59B2661D4F95(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_mB5769CCD719C54614BA29E1901759254C3F301C4(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisBakeStaticRoot_t20056F2B05BA4C4704568DBD928A33F69F6795F4_TisBakedEntity_tA80601A59125E066241325C1A5191D59FAD23352_mB796065FC690233CE4BACA03EF30D654F25DF5F9_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBakeStaticRoot_t20056F2B05BA4C4704568DBD928A33F69F6795F4_m422DC35AC6B37551602E42003918A3CC45D72211(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisBakedEntity_tA80601A59125E066241325C1A5191D59FAD23352_m31FAE09135CA0F29701CDE7C1901130F6F94A718(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisCompanionGameObjectActiveCleanup_tE1E7380BD2CA958C6AAC9DCF6A1AE76CBD95D862_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m9FE98542B3356D67B65594ACA7234770B291BD3D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisCompanionGameObjectActiveCleanup_tE1E7380BD2CA958C6AAC9DCF6A1AE76CBD95D862_m87F3F2DE88FDBBFF35981828034E7E157B7ED7EA(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m35B180D8E0FB2E919950E250BE18134F7343708A(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_m2F95D9CE8AC1BDEF8FAD646481C94C5F63EB62FB_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mE0A816AC86861E2EE6B0BA21209C249B38EACC3B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_mE9932D6D9BB9C62F7AEF531CE8BF7C2A3A4193E4(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m9CBC1531292CB1634F093BAD2BCC7BCC9D5ABF0C_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mE0A816AC86861E2EE6B0BA21209C249B38EACC3B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m76ED19F2481A5858F9D3F419A014636A3F96F372(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_m48192E75C546743BF0CA4C4C658E1495581D6E45_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_m536A71CECD540E9756702882D208C8EB0E058F86(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_TisFirstPersonCharacterControl_t6249D667B6C51009BC3C5AD5E0C1B1295C415FEE_mBDC973A6D359A97AB8D77AAEF390CDA1DE313BB7_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisFirstPersonCharacterControl_t6249D667B6C51009BC3C5AD5E0C1B1295C415FEE_m66BED0BEA8F311EF7BAC42766E32997B09379B25(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_m7CC679F9BE60A02319671ED89B17DEA9F561004F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_m429A072DFC20903E1578F2F87BC665BF94792F73(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisFirstPersonPlayer_t5879DC168D819F278E90BC0417DD9E5CBD015066_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mACFA115FFC15D93C7331B4B31A1523A01C695A1E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisFirstPersonPlayer_t5879DC168D819F278E90BC0417DD9E5CBD015066_m61D650C90B0442A326F3EA3EDBD504D28ADFC1D2(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mBC1DF91ADAADEF83890AB26250426A79689E16A3(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_m928FC71A263F75A0E3ABC89AA07D76B038AF38A9_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_mBD28BA67E6A7F5691191CC2BC33B8E3EB9DA59E9(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisHealth_tFB54B499DA2B21DEE147914FE3A4D44341A23456_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m2F8EBB3B624952341E650CCAC7814766CA153C6F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisHealth_tFB54B499DA2B21DEE147914FE3A4D44341A23456_m2D099F5817D44C4092C03CE7FEC3813DF2607246(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLightBakingOutputData_t9C7D694F4B60178715CA553248702C0C5603C2F2_TisRuntimeObject_m24A900C54D4EB6CE26DEB02671E40F4B1D5A3D20_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLightBakingOutputData_t9C7D694F4B60178715CA553248702C0C5603C2F2_m4991861AF58908B0D9A361026CA28BF06328195D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisRuntimeObject_m99918C9C8538796DF0CFF217F939FDE6F84496E4(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisCharacterInterpolation_tE8F7C8D12CC419ADFD6FE10F3D73C27B80ECC7E1_mF0AA9D17854C8ED27D6FB31D9100F0CF8E5AC10A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisCharacterInterpolation_tE8F7C8D12CC419ADFD6FE10F3D73C27B80ECC7E1_m1DA277D06C257072FE66633D3C9DA43164250005(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_m061EE5DA61A71D0D0D7E17C6BCBE8FFA6A725220_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_mE906F6A32DF896D9054B52C72D4CFFAE0D70A494(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_mFDC7967ED39CD53157440A2B5CE2C89820E689CA_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisParent_t473162287DAADFBE8C1A231B52DC5D0C80687304_m4312A25DA0B99ADE1DEB4C556CD0DE407C67175F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisParent_t473162287DAADFBE8C1A231B52DC5D0C80687304_m8B12138A3E7C48A95753F440F4414C59E885BF21(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m1415FD61399797FBF4FB7293D1D8D729E8C9ACBD_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_m9FB73CA49A71611CC798F3729B6EB08530B638D6(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m7CD1869A1B8F96774012746387B3085F74F9F881(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_TisCommandTarget_tEA67C6BE043BB1BBC06C4561C6829C20067BCC01_mE06512460E79A616DF4734EECB7C7A45B084BDF5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m7CD1869A1B8F96774012746387B3085F74F9F881(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisCommandTarget_tEA67C6BE043BB1BBC06C4561C6829C20067BCC01_m3777EB9629F5FF189A339D465A78B52501BDB692(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_m284B70325593779E6E98333AC0D6BCDAF2D0B60C_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_mDF41949DE496AE94DE78B9A53C7408A033EA3516(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPhysicsTemporalCoherenceInfo_t687207DF0B7ABEFCF3D015765DE3B943AF917FD3_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_mC95E31CA0E8C1117778F8237448FD491F47A86EF_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsTemporalCoherenceInfo_t687207DF0B7ABEFCF3D015765DE3B943AF917FD3_mD793CCE84E010C5AB5BCE93ABA33A943469DA5B2(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_m52F6874E1B8C0B5D6C83885D95B32E602356CAD4(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mDB9B8BD56C504FAD6A4267ED0251CC1DFC2EF5D1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m4D6D8D55D1B1E84DCB7D1EA56993A632D31BE236(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_mC8DFAFDA24702B50D03AE0A2106D1CD71A636BB5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_m7FF4F21856AA1493269912203A1CC9E042CC5324(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m649C085CC01829AD79C40E85752CE0BF5B866E22(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPreSpawnedGhostIndex_t86F3B58DA3DA317013EC9E6BFD41DEFB2E243015_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_m51977CC36EA5776B9BA7B07702CCFE8E196E9D7E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPreSpawnedGhostIndex_t86F3B58DA3DA317013EC9E6BFD41DEFB2E243015_m23D5738433CC0127CEA78AA0DE8AA0576F26BF9F(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_m864F382F53065240543247AE0DBD61F9B70B7618(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m0AA8419AF90A25EE3DC8D8500AD78E9486A74AD7_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_mBD28BA67E6A7F5691191CC2BC33B8E3EB9DA59E9(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPredictedGhostSpawnRequest_tF1875A417A0FD6CAB1170E11F1678E1764BA1539_TisGhostType_tA0682225DDDF8FA7FA48FBFF8B051400E320CB5D_m47C1D470880F4810A04FF634CA8601E3DA58F72E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPredictedGhostSpawnRequest_tF1875A417A0FD6CAB1170E11F1678E1764BA1539_m829F34926C0A340AC2D96739B01F218C3F84088E(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisGhostType_tA0682225DDDF8FA7FA48FBFF8B051400E320CB5D_m4967700ED0F7915C03F24F49312F4B26510D4BCF(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m2DF468E612E4DEC5B4982FD2028A4A27F63E509E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_mA7AB7109BC1FF4B68186F1B9F6619E57CC52565B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m76ED19F2481A5858F9D3F419A014636A3F96F372(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_m65ACFD0098267A860A84B96DB10B9283734CCB0B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m315BBB7014A48D6EA91CE5F41D270F8D90D3F6C1(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_m5230672F6FF2F02CDAB4863BBD19ECB7A8E83239(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_TisDisableSceneResolveAndLoad_t4250381D87869C0AD2D831D3414EBA2C7A26B516_mD92EA86D4031613C6E58658BB2D5C6EB5F5B3BBB_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m489D25E73D17754E1617D080BC4D80F47732BC69(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisDisableSceneResolveAndLoad_t4250381D87869C0AD2D831D3414EBA2C7A26B516_m82021480FD67E604C45BDDF5F6E52194A966CBDA(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_m9F904D18C61815042E145F95AF0344BF4E3E00C2_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m489D25E73D17754E1617D080BC4D80F47732BC69(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_m52F6874E1B8C0B5D6C83885D95B32E602356CAD4(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_m1240A852D137F59B93A85AB2EB57F57DB1DA8CC5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_m32613B7A68993E09512739825CEBD2E50AF4201A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_mF46A945D1FBC5F730FE4AB9CE92E455E9840E868(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_TisClientJoinRequestRpc_t6D91F8FAACB7CB9CFD19D787D15D231B53CEF81D_m1CC0114F5E2BF7B700674E83BDA6DDE60C752635_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_m657EC137B43E232DD2AD18CDB35219BCF4BDEA41(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisClientJoinRequestRpc_t6D91F8FAACB7CB9CFD19D787D15D231B53CEF81D_m59E31CE9B5F3336DD7D40B243FB40F821AE6DC5C(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_TisClientRequestRespawnRpc_tB0C02A3BFD936D488EFB1CEDD06CB605E94AA7EC_m0A255ED061F10A58B92D499E0813BDFD60420FCF_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_m657EC137B43E232DD2AD18CDB35219BCF4BDEA41(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisClientRequestRespawnRpc_tB0C02A3BFD936D488EFB1CEDD06CB605E94AA7EC_mE6F7AAA82E8ED7BB225D33B54F72C65C89028DF4(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m9C6033A2C94987141FE7897163B185750463C8A7_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_m657EC137B43E232DD2AD18CDB35219BCF4BDEA41(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m47BA8188DCB537ED8911366260DDD9054B00BE49(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_m659566A890776772467D4FE50FC2CAC469AA9BFB_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSendRpcCommandRequest_t04BAEEA519602F115089FD9526C06660D2AF702E_m657EC137B43E232DD2AD18CDB35219BCF4BDEA41(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_mF32B07397F399C3B9C5DE1C1AED74B5FA0F0B29E(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSnapshotData_t6B1E9DEBD977F5E7CC7EAEA947DB0F618B972E55_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_mD1E5AC48461F24D9A20A96313D7C68245CB88C7E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSnapshotData_t6B1E9DEBD977F5E7CC7EAEA947DB0F618B972E55_m8736F800BCDEAF183953B7B8922DA04BE569102B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSpawnPoint_t25713D4D601F769F60F42CA7998F31B4F47BBA0A_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m83E2469FAA7980BDCA15C2F2780B26546A376FEF_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSpawnPoint_t25713D4D601F769F60F42CA7998F31B4F47BBA0A_m5565BE1830C4278A28016E46BD531CAC97CC0E44(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSpectatorSpawnPoint_t6EF04E0AE426BB628B10394B3B228EF12B50CFFB_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m419319EE6095A700F8DAAF22A2F4BE779ECF6A62_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSpectatorSpawnPoint_t6EF04E0AE426BB628B10394B3B228EF12B50CFFB_mC11DB120AF00584E172E6030CE70698C73007E3B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_TisKinematicCharacterProperties_tCB57F0D4680F14E9194DF1035286389926EC5651_m1D1E7C8E2D42546D7CDBB02535C27709C96DDF4A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_m7B799A963F110DAF3573E8909357B5A220139902(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisKinematicCharacterProperties_tCB57F0D4680F14E9194DF1035286389926EC5651_m46076054211A281BDEA3FA6036A68AD232DD3564(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_TisGhostType_tA0682225DDDF8FA7FA48FBFF8B051400E320CB5D_m92E519F4516B76CB195B36F35079C798897EBC5E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSubSceneGhostComponentHash_t198FDA3A491AFEAF7307DA027529936DDE4D730E_m864F382F53065240543247AE0DBD61F9B70B7618(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisGhostType_tA0682225DDDF8FA7FA48FBFF8B051400E320CB5D_m4967700ED0F7915C03F24F49312F4B26510D4BCF(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_TisIsSectionLoaded_tBF08B3985E7B90393E9188BA6E4FE4B612667455_m24D42132EF5665B6156F5D9D94ABB8EE38CA0895_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_mC24E02DAF5E12147F17D481ACCBDDCE4BF105358(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisIsSectionLoaded_tBF08B3985E7B90393E9188BA6E4FE4B612667455_mFD8268FF9C7C966C60C10879CB3B2956E7FC6FEE(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_TisSubScenePrespawnBaselineResolved_tB25FB1FFE6B19222EA8510EE41863D0EE300CE1F_mAA08F7DFF7C2F1F1F84023858B6082226B1E07AD_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSubSceneWithPrespawnGhosts_tE41A850295EB89C7FBDC9199273A3D423FFF34F4_mC24E02DAF5E12147F17D481ACCBDDCE4BF105358(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisSubScenePrespawnBaselineResolved_tB25FB1FFE6B19222EA8510EE41863D0EE300CE1F_mED674BAF8C637D42FB820B9312EE84249EC64975(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_TisRemoveUnusedEntityInBake_tD9ECD1A4695A5071B0D2316B09A8B48A3FFB4DE1_m9FD0AD7978FDCA8D1BB9480F789E8131BF55E1F4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m1A81156C63974EA84F0A4643642D358A715B6A6D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisRemoveUnusedEntityInBake_tD9ECD1A4695A5071B0D2316B09A8B48A3FFB4DE1_m4C57DE307DAAF466D6E263D507E046DD4C2128E3(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m7BF8F79FE755556BAEF48214551F07B86D841850_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_TisGhostOwner_t00E10310781534F6A1E9BD56773C9BEE64046FE9_m711A2512366D093B78C489365C5F79FD570455B6_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m0E5A96385B9B87F40791B94AFA304FAF965A6694(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mBC1DF91ADAADEF83890AB26250426A79689E16A3(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisGhostOwner_t00E10310781534F6A1E9BD56773C9BEE64046FE9_m5D55C72709635A7AC7831132DF8F2456EEDECDF3(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_m50EEA1865F8CBB33CC578F8B0D125C5A3CC2DF16_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m0E5A96385B9B87F40791B94AFA304FAF965A6694(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mBC1DF91ADAADEF83890AB26250426A79689E16A3(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_mBD28BA67E6A7F5691191CC2BC33B8E3EB9DA59E9(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisBulletShotVisuals_t72C0C1CC6071D42CC4D0250022BABD26EAC19A3B_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_m662C2D8E6471372C9AF111C634B87A661C2AF640_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBulletShotVisuals_t72C0C1CC6071D42CC4D0250022BABD26EAC19A3B_mCAA13361E2CD04F0D84CECCDB3CFB761B8C37354(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_m05C43686BED9C6169B0C2C3E8CA39B192DE24A4D(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_m605A0E93F835EC920221AA8D27576992F9E9BA37(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_TisCompanionLinkTransform_tBCA469674FB09DE2A20CC9E6A9B26B92462A7F11_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m7861724F0FB868C7401FEBD2317A8FCAC18DA474_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m35B180D8E0FB2E919950E250BE18134F7343708A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisCompanionLinkTransform_tBCA469674FB09DE2A20CC9E6A9B26B92462A7F11_m167A714D37B6E2167FA0AAF692B3A25A8C22F852(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisGhostDistancePartitionShared_t2A64D9C74B21E979B0B3AD3C5D8DBE31102CC92F_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_mBB22630549EAEA83660DE0EE3FD4B70377A23A2B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostDistancePartitionShared_t2A64D9C74B21E979B0B3AD3C5D8DBE31102CC92F_m4DB2E2D0B2E1ECA6C888F68BE3E2BBDBFED82D05(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisGhostPrefabMetaData_tCF69584BEDF11A9D0486F3C9211F045B8C0B9544_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_TisGhostPrefabRuntimeStrip_t7F62492831ECDA11D63D2F4792B1CB5FB10E5654_m166583B1D4E26F77FBC40E3E7F79B7B6DDB96069_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostPrefabMetaData_tCF69584BEDF11A9D0486F3C9211F045B8C0B9544_mF0E9F2FD37BD5E7FE640240461B1A5724D1EC64C(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m76ED19F2481A5858F9D3F419A014636A3F96F372(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisGhostPrefabRuntimeStrip_t7F62492831ECDA11D63D2F4792B1CB5FB10E5654_m8262AFA119F9096D0239E841F1CEE0E2AD2D90DF(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisKinematicCharacterProperties_tCB57F0D4680F14E9194DF1035286389926EC5651_TisKinematicCharacterBody_t4FE38C7EDB4FCCDB531BFB4B0E69B0E7AC809584_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_mD7774B65FFE82E533083E9661ADE7994297037E9_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisKinematicCharacterProperties_tCB57F0D4680F14E9194DF1035286389926EC5651_m46076054211A281BDEA3FA6036A68AD232DD3564(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisKinematicCharacterBody_t4FE38C7EDB4FCCDB531BFB4B0E69B0E7AC809584_mD2678DE926E354680199F48784E8A6ED1E237A68(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_m7B799A963F110DAF3573E8909357B5A220139902(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_mE3A45EB08F84EFCFC3364DF78B2BD167A415CE4C_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_m9FB73CA49A71611CC798F3729B6EB08530B638D6(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m7CD1869A1B8F96774012746387B3085F74F9F881(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_m7E3D5387743B797F3102A04A73201B028796B8EF(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_TisIncomingCommandDataStreamBuffer_t2976645F480CEBDE41DA0C7C7087249B04E21C4D_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_mA7ED3A98EE122A3F2C02A5CBD8D230F6606F7A82_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetworkStreamInGame_t0201368261216D0E58A4F1A8F6DF30F2987D4F0B_m7CD1869A1B8F96774012746387B3085F74F9F881(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisIncomingCommandDataStreamBuffer_t2976645F480CEBDE41DA0C7C7087249B04E21C4D_m537342EAA4D2B3FE8B8C6180362468A4FA0F19EA(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_m7E3D5387743B797F3102A04A73201B028796B8EF(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPhysicsConstrainedBodyPair_t11C5D7FDF2C7D1E0AC01DD9AA0E95492E8C14728_TisPhysicsJoint_t7E81076F134608B1FDEA0070C11135E9B30A0897_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_m36EDAF93F0930870769ECB1AB011408577BAB100_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsConstrainedBodyPair_t11C5D7FDF2C7D1E0AC01DD9AA0E95492E8C14728_m9D1B79B617CE177B561F6A0BDCB036BAB1372BF6(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPhysicsJoint_t7E81076F134608B1FDEA0070C11135E9B30A0897_mEE2012D86F5668FDA5C8C1FCCBB4EC0F7313D50B(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_TisCustomPhysicsProxyDriver_tA12A54FDC4F2780192F2BCB674A38F48A584F225_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mE3856C666E4026D5A034F02CFF8B41F06D418F5C_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_m31F3748EDFD132CF6325D066FBBB03817FD96582(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisCustomPhysicsProxyDriver_tA12A54FDC4F2780192F2BCB674A38F48A584F225_m6E5167680CB403CE5BCEFBD109A722100C4FC127(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_m953C8B22F5D56EA56EFB86171C2AC4E14D9743BE_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m4D6D8D55D1B1E84DCB7D1EA56993A632D31BE236(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_TisSnapshotData_t6B1E9DEBD977F5E7CC7EAEA947DB0F618B972E55_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_mF2B55DA1FA9C1149F13297C0B9CABABE8063F6D1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPredictedGhost_t56170BD20B02F39FBC5BEC0E00EC85521F7DC713_mBD28BA67E6A7F5691191CC2BC33B8E3EB9DA59E9(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisSnapshotData_t6B1E9DEBD977F5E7CC7EAEA947DB0F618B972E55_m8736F800BCDEAF183953B7B8922DA04BE569102B(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_m7A56721F25F4850E27698151B4BD87DF85028EE5(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAA83E7EEE19BAE62152885822A2EC4208D73614B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisKinematicCharacterHit_t864D62E27E83DA16D4B4B0C09A7BB167D7A77628_TisStatefulKinematicCharacterHit_tC62C9D1712BE538FCB2CA9845130D4C305D2AAB8_TisKinematicCharacterDeferredImpulse_t86E4A087729C97348568B71E272A60F00CCD548C_TisKinematicVelocityProjectionHit_t4C4BA3B45EB433F6A4245F023D5533DEE19B7F0B_mC12D47836C78A5C402E936C5C7C38C7CC337424D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisKinematicCharacterHit_t864D62E27E83DA16D4B4B0C09A7BB167D7A77628_m06E3BDE3F9571A993185B10265373685A6D2EFB9(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisStatefulKinematicCharacterHit_tC62C9D1712BE538FCB2CA9845130D4C305D2AAB8_m3770D75B77F64F59425DDDD4D922320FE0F9C01C(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisKinematicCharacterDeferredImpulse_t86E4A087729C97348568B71E272A60F00CCD548C_mDD69E00B6F5151F2304CB42219FC8557AA123422(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = TypeManager_GetTypeIndex_TisKinematicVelocityProjectionHit_t4C4BA3B45EB433F6A4245F023D5533DEE19B7F0B_m1CEA3D45C024DAD92A4AE49F58E48BEE08F69F6C(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		L_12->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_13 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_TisPhysicsGraphicalSmoothing_t9C3A887741C265D0E64E04E05F9FB8DA8B2716A4_m90909D010E9AADD6871F610AC41B49FF6138B727_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = TypeManager_GetTypeIndex_TisPhysicsGraphicalSmoothing_t9C3A887741C265D0E64E04E05F9FB8DA8B2716A4_m4A43FA491A0AE43E872830E9A1C18021D64990E0(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		L_12->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_13 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisRocketShotVisual_t0153CB43E9B61E7338B583C3D0A57FB6E46B7CA9_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_mC506F60A22F723BB5476C1F3C8EBD2E56D1DA601_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisRocketShotVisual_t0153CB43E9B61E7338B583C3D0A57FB6E46B7CA9_mBED3DF66E0D00D8A29DF3E3B57D27C0AD7F9EFEC(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_m05C43686BED9C6169B0C2C3E8CA39B192DE24A4D(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = TypeManager_GetTypeIndex_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m649C085CC01829AD79C40E85752CE0BF5B866E22(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		L_12->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_13 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_mF5F15012EF2F8584318C66401B16DC862B6CD738_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_m7FF4F21856AA1493269912203A1CC9E042CC5324(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_m05C43686BED9C6169B0C2C3E8CA39B192DE24A4D(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = TypeManager_GetTypeIndex_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m649C085CC01829AD79C40E85752CE0BF5B866E22(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		L_12->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_13 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m80DAD71557A1F1732E54B3263278CA268BB76BCC_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		L_12->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_13 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_TisGhostOwner_t00E10310781534F6A1E9BD56773C9BEE64046FE9_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_TisAutoCommandTarget_t2DDAA53D1DF20CAAD90902389BEF5E6088EFC191_m0C26415B5DBAEAA21651231F9A04BC6CCA8FAF59_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisGhostOwner_t00E10310781534F6A1E9BD56773C9BEE64046FE9_m5D55C72709635A7AC7831132DF8F2456EEDECDF3(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_m429A072DFC20903E1578F2F87BC665BF94792F73(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = TypeManager_GetTypeIndex_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m0E5A96385B9B87F40791B94AFA304FAF965A6694(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = TypeManager_GetTypeIndex_TisAutoCommandTarget_t2DDAA53D1DF20CAAD90902389BEF5E6088EFC191_mFE5BD238935245103669D542C46955C97945BA4F(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		L_15->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_16 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLaserShotVisuals_t19AA7C016DE761566EE1CD14B3B0CB35EB2B5B14_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_mBC6ABCC63DA32FE6455F478F83232AA30AD15ED9_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLaserShotVisuals_t19AA7C016DE761566EE1CD14B3B0CB35EB2B5B14_m1CA75A2D101420294DBBDD63D77B56918921AAA5(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_mB5769CCD719C54614BA29E1901759254C3F301C4(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = TypeManager_GetTypeIndex_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_m05C43686BED9C6169B0C2C3E8CA39B192DE24A4D(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = TypeManager_GetTypeIndex_TisRaycastVisualProjectile_t1DFD91766A9C0CBDB6DFDDED966B36A674552A4C_m605A0E93F835EC920221AA8D27576992F9E9BA37(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		L_15->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_16 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_m76AC4A14FD250304856A5341AB76E3CC92331F05_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_mDF41949DE496AE94DE78B9A53C7408A033EA3516(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = TypeManager_GetTypeIndex_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m4D6D8D55D1B1E84DCB7D1EA56993A632D31BE236(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = TypeManager_GetTypeIndex_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_m31F3748EDFD132CF6325D066FBBB03817FD96582(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = TypeManager_GetTypeIndex_TisPhysicsWorldIndex_t0854846356C37045E9B11936A6949B1A14704F09_mFEBF6B22ED4CEA161CF6464761F9755851CD7E6A(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		L_15->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_16 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m146B3D708331CF42A3CE7FC9CA1DA3D4AE0AE166_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		L_15->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_16 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m89472431128FE99492111181D36CBB1C6D18CBAE_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_16 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_15->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_17;
		L_17 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_0)->___TypeIndex = L_17;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_16, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_18 = __this->____builderDataPtr;
		NullCheck(L_18);
		L_18->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_19 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m683C5806E4BEA7CA74F0B58DA7F52F7A3F8CF393_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_16 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_15->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_17;
		L_17 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_0)->___TypeIndex = L_17;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_16, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_18 = __this->____builderDataPtr;
		NullCheck(L_18);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_19 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_18->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_20;
		L_20 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_0)->___TypeIndex = L_20;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_19, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_21 = __this->____builderDataPtr;
		NullCheck(L_21);
		L_21->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_22 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAll_TisIl2CppFullySharedGenericAny_m0F97DF3E84CAD7F2CC1E8D6BCC5D7DED59D2FE10_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, Il2CppFullySharedGenericAny* ___0_componentTypes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	int32_t V_0 = 0;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		Il2CppFullySharedGenericAny* L_2 = ___0_componentTypes;
		int32_t L_3 = V_0;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_5;
		L_5 = ConstrainedFuncInvoker1< ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (void*)L_2, L_3);
		V_1 = L_5;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_1), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		Il2CppFullySharedGenericAny* L_8 = ___0_componentTypes;
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_9, (void*)L_8);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_11 = __this->____builderDataPtr;
		NullCheck(L_11);
		L_11->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_12 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllChunkComponent_TisIl2CppFullySharedGenericAny_mB7B541E89CDEC4148A6DF23106B0D38F86ED8DAB_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_runtime_class_init_inline(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_2;
		L_2 = ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllChunkComponentRW_TisIl2CppFullySharedGenericAny_m22E9FE998E260FDD6F797AB8E6F383EF256498FF_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_runtime_class_init_inline(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_2;
		L_2 = ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m16A7BD7290E5575FF74931831ACD5412D23029A8_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisInputBufferData_1_tE2261E88852E0F621A090EDF9D91CE3FA1D2F4BF_m0E5A96385B9B87F40791B94AFA304FAF965A6694(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisActiveWeapon_t34043214BE9DC5C194F0C8AFD2449E4F8383B849_mE59DA2FDF9420FB2CC4C4D8F7720FEA75557540B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisActiveWeapon_t34043214BE9DC5C194F0C8AFD2449E4F8383B849_m440AA166DEF4EA71EA990B64B18F506845AD6F3E(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisAdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1_mD0DEC2F8E756128EDCBC725A3F061D8E5FA66E64_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisAdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1_m6DCEFDA00308D5CF93ACF4FF75A1E5B207B212D1(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisBaseWeapon_tC216A83AE78BB8EC23049B07598B598BA353B335_m9A66D715A0BD756BFE06B60894AD1E633F3EDCC7_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBaseWeapon_tC216A83AE78BB8EC23049B07598B598BA353B335_m7F21E1087C149D4779E371A01C1D12AAC1A7938F(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisBlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD_m616C15DEFB625DB9ED372B07E7FA363BE48BE75E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD_m0F23A448C61CCF70DF9C04FC86EB10D61DDC3A72(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisBroadphaseData_t283ED0771F35DEB34BC13ED55C73772D7CD154A3_m4D7E4DFEF071DFA94C0530498B601CBD4297C111_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBroadphaseData_t283ED0771F35DEB34BC13ED55C73772D7CD154A3_m231A9F12C94DCC196177B0153F47393B403460E7(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisBuildPhysicsWorldData_t2B48F1A635280E8C32969EF1108844731186F1B2_m99487B4552A1A5DE3DA3171784BF27A950E71B3E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBuildPhysicsWorldData_t2B48F1A635280E8C32969EF1108844731186F1B2_m11C0F36734285030D82A9424C569C0F21C28DD8D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisBuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77_m079C73D791E515EED35D8147B80DEE6F126D24C8_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77_m7842F319E5F79C371C19D99A3BDABAB48983A50E(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisBuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E_mCB3008EE6288956E7D6DD78EC9BAC7FE2DAA1783_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E_m0D48267FE6D42C6E933EBC874096C29538382795(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisBulletShotVisuals_t72C0C1CC6071D42CC4D0250022BABD26EAC19A3B_mDBB959F819A5BCFCF520F90B3DEAEF0D927E3889_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBulletShotVisuals_t72C0C1CC6071D42CC4D0250022BABD26EAC19A3B_mCAA13361E2CD04F0D84CECCDB3CFB761B8C37354(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisCharacterInterpolation_tE8F7C8D12CC419ADFD6FE10F3D73C27B80ECC7E1_mB46D6CAE5E0FD1845F4BECB7B216AB06545093A3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisCharacterInterpolation_tE8F7C8D12CC419ADFD6FE10F3D73C27B80ECC7E1_m1DA277D06C257072FE66633D3C9DA43164250005(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisCharacterWeaponVisualFeedback_t796AA9CD94EC7DB2D0B0C006C2DEAADE6FDEC750_mC57D4B74099A493CDCB2CF32C005866708B8AAC0_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisCharacterWeaponVisualFeedback_t796AA9CD94EC7DB2D0B0C006C2DEAADE6FDEC750_m4AE5C68F4A467732D0AFD9DECF44BBFC484EBFBA(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_mD5AEDD52728F75584FD93285FD48111FA7EDC0C3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_mE906F6A32DF896D9054B52C72D4CFFAE0D70A494(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisClientServerTickRate_t16FDBD0A027833FD92846C5F6B046820DE125602_m2823A0F7F190FFD77F62E6E7EB59BE8BCC647BCC_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisClientServerTickRate_t16FDBD0A027833FD92846C5F6B046820DE125602_m253E94A751C8AAD2F9AE71E695614F8BBC0DD5B0(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisClientTickRate_t0E92DBFF5847A71B95752CF3292FD2FC140495C9_m6E8A27BF6D6B06694C6C5B2B521286371A802964_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisClientTickRate_t0E92DBFF5847A71B95752CF3292FD2FC140495C9_m390277FD3E8D44958907E1768F3B9908034DE49C(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisColliderBlobCleanupData_tFEC8BF2F69AE15547D452B79FACB5A3A88064E32_m859B5CCF9115839A625B737B4D81C38A1A79901C_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisColliderBlobCleanupData_tFEC8BF2F69AE15547D452B79FACB5A3A88064E32_mF56C17C837A47992FA0744957F8F579F05DA3C27(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisCommandTarget_tEA67C6BE043BB1BBC06C4561C6829C20067BCC01_m56D9EAB88C7C153E870764BD0AA70922C5F586AD_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisCommandTarget_tEA67C6BE043BB1BBC06C4561C6829C20067BCC01_m3777EB9629F5FF189A339D465A78B52501BDB692(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisCustomPhysicsProxyDriver_tA12A54FDC4F2780192F2BCB674A38F48A584F225_m73C640DD9418380E702D6FD80520B4A466A7D561_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisCustomPhysicsProxyDriver_tA12A54FDC4F2780192F2BCB674A38F48A584F225_m6E5167680CB403CE5BCEFBD109A722100C4FC127(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_mBFD0E24BE4157F59457D003B9D2CA625957866E6_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_m536A71CECD540E9756702882D208C8EB0E058F86(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m7BFCD18EA172D94B92AE04D64C7B99D926B0E905_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisFirstPersonCharacterComponent_t5B59F5D13E9596965152D6809CC5E5483E6A58B0_m95C5BA97C6D6FB1E65E14B6033B0AE4305226A12(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_m94799A308996CD93B8861F0D560C582FF63BC78A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisFirstPersonPlayerCommands_t8091CDDE5A903F2BC8593B930D1ECCE45F2EACAB_mBC1DF91ADAADEF83890AB26250426A79689E16A3(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisFirstPersonPlayerNetworkInput_t65C76C5DDF988140A9498C5400E0B40B3943307A_m9478A7AC63235648C271B67EB437C974D6D08721_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisFirstPersonPlayerNetworkInput_t65C76C5DDF988140A9498C5400E0B40B3943307A_mD7931B74D500178D9E7E0972A29B4A9F4B1B1E06(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisFixedRandom_t4D3428C8755DB2D3C6F470BF229B1EF04C1A5655_mC3454B9C2E08CE383AA0ADE71688BDAD1BFD1966_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisFixedRandom_t4D3428C8755DB2D3C6F470BF229B1EF04C1A5655_mF223DD5574F361468D84CB538B36183595EF8676(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGameResourcesWeapon_t33BACCEA8139E13C955BD58FBDF6E9AE03BF9BA2_m59495AEA83040D217F2BC92567E3A4CC546E837B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGameResourcesWeapon_t33BACCEA8139E13C955BD58FBDF6E9AE03BF9BA2_mFA8BBE19B141BA5E0069FD1F0D5321FCB0415B35(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGameplayMaps_tBCB9867630673AB8E660939CDACCFBB4A4726ACA_mE2901E020C1B015286ABC39658282A7D3B0BDDCD_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGameplayMaps_tBCB9867630673AB8E660939CDACCFBB4A4726ACA_mA3A956490C18C8E46D84F782E615A673E57628DE(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostCleanup_tE96F7C9F4DC59AEB2C9996CBA308E8A0603F6BBC_m2413EF02990143CAC4277A8A25181558833B702B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostCleanup_tE96F7C9F4DC59AEB2C9996CBA308E8A0603F6BBC_m78442F5D825A49D22A62F85A2BC9478AB4370516(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostCollection_t13EDF41F2078D02C47FB76ED953412292F745219_mF8223B1DAFD329920197BF87E6DC379E0EC767B4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostCollection_t13EDF41F2078D02C47FB76ED953412292F745219_mB84A324CCF547FBD67690E998133E3316B02262D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostCollectionPrefab_t8AF4B66BAD32F1BF1FD8A7E9B236EEBDFBC81D60_m3A6E9554EF5B4FED3B098EBE2C1531268EB28BE3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostCollectionPrefab_t8AF4B66BAD32F1BF1FD8A7E9B236EEBDFBC81D60_m61CC8A58EF4C6E694005B54187F76C650A450856(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostComponentSerializerCollectionData_tBA662EAD4B94AC75D75278CE1D22A56621C92191_mFEACF51B45C11D4A27C06FC7DB339234FA519ADE_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostComponentSerializerCollectionData_tBA662EAD4B94AC75D75278CE1D22A56621C92191_mC7BF4B5DAF5CE5F55E0D9958CA2C1FEB85D76CD5(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostCount_t28FC783F6F6AEE97C5F7B67CA58CA6652CFC1083_m3980C3C9F97F69852364E2CB850777B2D4B7A043_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostCount_t28FC783F6F6AEE97C5F7B67CA58CA6652CFC1083_m276861C40F10051DE071E11EEAE9E22E85F6BA5F(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostDespawnQueues_tFCC28D3C6222373756344D11F4950B1CEF4E1B5B_m586622557C2B64894E49C5F76B9DE3F0ACEE34CA_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostDespawnQueues_tFCC28D3C6222373756344D11F4950B1CEF4E1B5B_mAA9E66F0BC0A862293B28E564D5D202BB83FEFD8(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m5112E4E2C76386DCAA26C8FE17FC2CD2C28CDE87_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_m940ADCC288B6533F03C274777D94FB9E57212BB4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostOwnerIsLocal_t4E499D03832B8417A5F683345468DBF00BED0D9F_m429A072DFC20903E1578F2F87BC665BF94792F73(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostOwnerPredictedSwitchingQueue_tC005A4D4732805D5D7C6FB393E20241F47551491_mE8F560924388F4294879ED413D907C87241A1F11_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostOwnerPredictedSwitchingQueue_tC005A4D4732805D5D7C6FB393E20241F47551491_mC966ED9D00528305CFDB87205580567B9300B224(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostPredictionGroupTickState_tB8F7B7A4ADC6DDAD8291FA77A797B6BFF50BF0A2_m1F71014C37C4F3C8D2F9B76FD6928726E36848AA_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostPredictionGroupTickState_tB8F7B7A4ADC6DDAD8291FA77A797B6BFF50BF0A2_m4DEFA234023B38F121CE84B02E5B962A0F23256A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostPredictionHistoryState_tD55DF52D9563D83B55FA94B94BBF30A0D9F9DC28_m6CD7FAA994D683D00D8FD586D3F2CDB3911916D1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostPredictionHistoryState_tD55DF52D9563D83B55FA94B94BBF30A0D9F9DC28_m050C814D3893DBF216CD02CBA893469EFFBFE59A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostPredictionSmoothing_tB6587249ECA5A9C2182026512CFF914FF75B37E0_mA8FE019A6784D436D7803978F05CEE475378C83E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostPredictionSmoothing_tB6587249ECA5A9C2182026512CFF914FF75B37E0_mE52515741C176ED61587830941DF3C059A16C7B5(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostPredictionSwitchingQueues_t766AA5F381338A4D531193C3CBFFFE35055BA661_m52DF1B8B1B3CC903EFBA6F7BE5FFC42114ABD95A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostPredictionSwitchingQueues_t766AA5F381338A4D531193C3CBFFFE35055BA661_m10AA7712D2825A6D27DDFDE11E6B105635F9B4D1(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostRelevancy_t24C834524E3673B5061DBA61F39D29751B32D659_m249C615CC73092381A60078AC935EFA21065F260_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostRelevancy_t24C834524E3673B5061DBA61F39D29751B32D659_m989972E6870512C5B294502FAE3E2D3F932271D6(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostSendSystemData_tAD3978C66B82BC5C4FFB9470AD3CBF2B7B2EFC84_m77E294D71ECD1C6E33CDB8A80B0E5E8F091504CD_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostSendSystemData_tAD3978C66B82BC5C4FFB9470AD3CBF2B7B2EFC84_m8C2570044726DBC4BAFFAFB783DE81D0613B8C7D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostSnapshotLastBackupTick_tDE3EE53D10E5A0F839C2BD162E0F100B1C0E3C43_m93B1F9A6F1414CC96E46BBF37DA292645CB3BCDA_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostSnapshotLastBackupTick_tDE3EE53D10E5A0F839C2BD162E0F100B1C0E3C43_m47664754B590B07BBBBE9EFA0EE7BA4601B9147F(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostSpawnBuffer_t1197943A694681C3FAC0C0F3C2C09D0F6DA9A1E7_m478A7AE41638D07EEC5B8017C2D19BA4442F9B46_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostSpawnBuffer_t1197943A694681C3FAC0C0F3C2C09D0F6DA9A1E7_m852EAF6FE241869B308E43BF6541FE2BB5F5F88A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisGhostUpdateVersion_t74F31010DC4C97BC537DDF95D069CCE7A8EE6F3B_m6D930086D19C00FE18D2D8A52DD5B8BA6FD29705_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostUpdateVersion_t74F31010DC4C97BC537DDF95D069CCE7A8EE6F3B_m0B697ADDA809280663E0CADAA267473B14029797(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisIncomingCommandDataStreamBuffer_t2976645F480CEBDE41DA0C7C7087249B04E21C4D_m03370A92101F2FBD95360F7830AA09EA4F212F85_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisIncomingCommandDataStreamBuffer_t2976645F480CEBDE41DA0C7C7087249B04E21C4D_m537342EAA4D2B3FE8B8C6180362468A4FA0F19EA(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisLaserShotVisuals_t19AA7C016DE761566EE1CD14B3B0CB35EB2B5B14_mE2AD4D68E72509B12C385BE46A866FBA96DB1821_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLaserShotVisuals_t19AA7C016DE761566EE1CD14B3B0CB35EB2B5B14_m1CA75A2D101420294DBBDD63D77B56918921AAA5(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_mA5CF82C359967973C01E99A9BC60630DA43E8D85_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_mE9932D6D9BB9C62F7AEF531CE8BF7C2A3A4193E4(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m98542EA7EC88AA51489DDDC32C086CCD52AE7DE2_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m055C2BA2CCC85BCD4A93D2A460E1A287AB9AD04D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisMachineGunBarrelVisual_tEAD5AC48DABC351CDD9818CD9809EAEFE100E88C_mC14EF21DC3B5D218F31FE32CC726EFFC60792C21_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisMachineGunBarrelVisual_tEAD5AC48DABC351CDD9818CD9809EAEFE100E88C_mC03CF7BF6A59C6F5F0426D543A15297DD455B7EE(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_m6AED80343ABB141B685C7C3913B8F225C9456B09_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_m5230672F6FF2F02CDAB4863BBD19ECB7A8E83239(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisNetDebug_t04383CA2B98C846A55C5A8960A6CCA2F84B8AEB8_m7376A10E3794852CB27E4996996062146581724A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetDebug_t04383CA2B98C846A55C5A8960A6CCA2F84B8AEB8_m7AA2E5CD9D1A2AA84EFF2A267ABD87574F67FC25(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_mD623EBE43C1FE3BAC752DD097922B636B803E985_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetworkSnapshotAck_tEBFBE4349E543087DE15E67A67024EF80A8D1C51_m7E3D5387743B797F3102A04A73201B028796B8EF(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_m5744ED98B3CDEEE0E3E122EB4F456A68FB112CD4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetworkStreamConnection_t98A98017358147EFE1F0C4FEB79C8CF376E44620_m9FB73CA49A71611CC798F3729B6EB08530B638D6(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisNetworkStreamDriver_t09BCA975B6457E5C7517A235088519050F9952B6_m2D3A61869DE4C2D75ABFEC21372A2CF6F9DFAD85_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetworkStreamDriver_t09BCA975B6457E5C7517A235088519050F9952B6_mC4F0E45FECBE15839CEA93350F6A697E227595F0(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisNetworkTimeSystemData_t6CF678998DCD95CDA09785B46DED450CD8874A53_m1287C06194A3755AAEBB883F9FD3CA97F6F85F9F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisNetworkTimeSystemData_t6CF678998DCD95CDA09785B46DED450CD8874A53_mA61D7AB2E054347C602039E12980BC2CB36D3603(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRuntimeObject_m71DAA4CAED68A9CD86A15F97A1513D902DDD0848_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRuntimeObject_m99918C9C8538796DF0CFF217F939FDE6F84496E4(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisOutgoingCommandDataStreamBuffer_t74C9B36A80DF8A270BE763F2EBA733C6FC5E0A70_m10194C626F0A62A3B334EDEF3CB7D4CE62F39E0A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisOutgoingCommandDataStreamBuffer_t74C9B36A80DF8A270BE763F2EBA733C6FC5E0A70_m42F3C278B4CAA92D678E4C3C7F09F8A04DEB0A24(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_mAB7B83060DCFD112081C37C353958C5C0DC7EC3D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsCollider_t26A94D6ECCA8ECDCAEA83F12DEA8ADC15153DCDA_mDF41949DE496AE94DE78B9A53C7408A033EA3516(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsColliderKeyEntityPair_tAEF837B39E3949BB41536084707EE655C69D40FE_m5A416A228D4A6F4E22D12D09A0296B40D16ACB6D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsColliderKeyEntityPair_tAEF837B39E3949BB41536084707EE655C69D40FE_mC5A4A8875E6EF47D1F65327252F076A9BB3B9F3B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsCompoundData_t25E7A437D24DFE2C810FCF3B2B950BB889513648_m08FA3D0CB15E785F9ADAB2F988466D830C809F00_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsCompoundData_t25E7A437D24DFE2C810FCF3B2B950BB889513648_m34960BFF4B1D94D25519D3B5FDC4A8C6A0476CD6(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsGraphicalInterpolationBuffer_t4425E9311BC421D1E03F6699B1CEDACD6598D8E9_m83EE4DA23C86F535DA3C7AF3090DBC4F84CB0871_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsGraphicalInterpolationBuffer_t4425E9311BC421D1E03F6699B1CEDACD6598D8E9_mEBAE7050FABF64F14D7C29810C05D5EA822A917D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsGraphicalSmoothing_t9C3A887741C265D0E64E04E05F9FB8DA8B2716A4_mD984FE7022B77F398BC7F185B0D394358579491B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsGraphicalSmoothing_t9C3A887741C265D0E64E04E05F9FB8DA8B2716A4_m4A43FA491A0AE43E872830E9A1C18021D64990E0(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_mA868FAF0D4A24331236385BB816AC423EA0E5E3E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsMass_t89D2497E5A7CAD756D1DCA9A91394F291AB191A2_m31F3748EDFD132CF6325D066FBBB03817FD96582(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsTemporalCoherenceTag_t36AD20C7CC2757DD29698462895002BF0911B2B4_m60C54AD16F7EFCB7B38FCD14F6F7F3E636E66475_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsTemporalCoherenceTag_t36AD20C7CC2757DD29698462895002BF0911B2B4_mD1C40FAD70ED135D27F57C7BD54FEE4A3C144429(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m5B8326A57AD9CCE8DA15DFAF2189BADA241923AE_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsVelocity_tD8FD9AE4143DA8547016CDB52234BDF420F14DD2_m4D6D8D55D1B1E84DCB7D1EA56993A632D31BE236(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsWorldHistorySingleton_tAB64E013DD6A12815A31F2B5432265555C160209_m87F632FC63D050589125B98F327B200F98DF5DE6_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsWorldHistorySingleton_tAB64E013DD6A12815A31F2B5432265555C160209_m2239A2238DEDB2342B2CF2977D35648403D3425C(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPhysicsWorldSingleton_t378ADEC7BEB4615C6B7972AB0EC26DF2BD864AFA_m49D1645D8CABAE811836AEBD2985ACBC305340E5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPhysicsWorldSingleton_t378ADEC7BEB4615C6B7972AB0EC26DF2BD864AFA_m0E191D35FB6B760FEFDFCC07AB95174523A5A10E(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_m9A02F085A5F6974F334BFFD948CCD397BA1F52E3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPlasmaShotVisual_tA746FF6345E433D9BB98938389AC9EAB049B5D93_m7FF4F21856AA1493269912203A1CC9E042CC5324(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_m92C20A2063D16CC89B6A86C667875E5BA3D5EBA5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_mB5769CCD719C54614BA29E1901759254C3F301C4(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPreSpawnedGhostIndex_t86F3B58DA3DA317013EC9E6BFD41DEFB2E243015_m9A1762856FAAFD39D26AABDEE16B576C8919B280_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPreSpawnedGhostIndex_t86F3B58DA3DA317013EC9E6BFD41DEFB2E243015_m23D5738433CC0127CEA78AA0DE8AA0576F26BF9F(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m6A8B1CD0632D9A2DCAB9F863056F3EC236116297_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPrefabProjectile_t25A36F83B488D94F8081B5DCEF274ECC3176725B_m649C085CC01829AD79C40E85752CE0BF5B866E22(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPrespawnGhostBaseline_tA12CE09F9336397F5AAC7F1F995F70002471CCE7_m171E6F1AA2D7C02F50D44314D3D0F3C7387506E1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPrespawnGhostBaseline_tA12CE09F9336397F5AAC7F1F995F70002471CCE7_m1CB9F69046CFEDA6400C6A7A5298BB0B701149F3(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPrespawnGhostIdRange_tA869F9D0F6CB1DD79ABF8E1923B07C6D295EC734_m0FEA981BA3D35C614A5B92EB473A753CEE3F691C_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPrespawnGhostIdRange_tA869F9D0F6CB1DD79ABF8E1923B07C6D295EC734_mD7417A0D218F851EDD3EAABFF156B0D38C305B3B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_m14BE50C77D1A6ABB6D1B3267B76F1CC2E3F589F3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPrespawnSceneLoaded_t93BAB26B3D178EBACA87F7E8978635032B016F3C_mA7AB7109BC1FF4B68186F1B9F6619E57CC52565B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisPreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD_mE9B7505E51FF4C462AB5337A979BCB4D0F3B34F4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisPreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD_mEF28DFCAD423E26B81F10A8CB792E628B9553C50(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRaycastWeapon_t8BA7B9255E74C830BF7C6DE64E611ACC94E4B279_m0E6E3EF61C9B1658805E27020CF125ABC8E07D10_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRaycastWeapon_t8BA7B9255E74C830BF7C6DE64E611ACC94E4B279_m6D5ECF156F05C29C4A54C84B5A3CAA8868D7E78B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRaycastWeaponVisualProjectileEvent_t49590D2F126AACDE2D98554AD781D3BFF3D975D8_m02DCFF96BC82737330E41BCF1055BCDC17FD5E91_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRaycastWeaponVisualProjectileEvent_t49590D2F126AACDE2D98554AD781D3BFF3D975D8_m07A4DA71264FCC770084D1BD7A2C06FAA8234FB2(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_mDE12B542DF5364E743F4A0751D360E66F611736B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m315BBB7014A48D6EA91CE5F41D270F8D90D3F6C1(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_mA2AD43A8ED9DD5E85244461C553382BED36716AA_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m489D25E73D17754E1617D080BC4D80F47732BC69(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_m0F4EF20C6ABB1C1F2F32DBFC82E2006ECF667AE9_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_mCA5211449B686BA7B83148CDFC9095DC7360FB21(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20_m4615EAD4118CFB0A0BD88AC6747A09C23FBEB095_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20_mDA9DDA0556CCFFE8D45941BA53503BA2812E2CBD(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D_m9B2F497C06397E5818C8B4CB0C029FF911A60296_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D_mC379C8817A25B9D2B39DB4B07A96533E4686D41D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306_m42875AD3DFEC7289BF888FF25031F05E8224FBC9_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306_mBB6E1A3B821CE326AED3045B286B16AAA2243D30(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F_m09EAA76B9F83FC79897B7C8316349A35F7A6550F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F_mBB5DB3E42C1BDDB96F2A8AA88913165166EDDE5A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRetainBlobAssets_t190E68112895048346A189ADC59FD9CCAE9C73B3_m8959F9FD2FD208152E82D3CE880267FC5EBD094F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRetainBlobAssets_t190E68112895048346A189ADC59FD9CCAE9C73B3_m6F8DA48C67546418A606D3F2DF3EE2345F91C7C4(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRocketShotVisual_t0153CB43E9B61E7338B583C3D0A57FB6E46B7CA9_mD2D1CA4D15705784D7C4DA9462D9FD5178E82171_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRocketShotVisual_t0153CB43E9B61E7338B583C3D0A57FB6E46B7CA9_mBED3DF66E0D00D8A29DF3E3B57D27C0AD7F9EFEC(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRpcCollection_tF5A8386ADA59B8E4787F09F2F82406BFEECBDA11_m2240DBC4FF3A836519D761DF6223E1ED7186B7A1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRpcCollection_tF5A8386ADA59B8E4787F09F2F82406BFEECBDA11_mB21B699AA298587C6AB3C2A46115850046E36B0B(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_mA543A8CAAF1836E0B8E5689EC77CAF2E9A199F46_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_mE63D71E60B319B3370A91FD5A60641283BFBEAD6(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_m4BD016AA95EAAFB445F04F1ECD21583E98A373FC_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_mA985C56A3FE45954A36D711D83966027E0688F5F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_m30F2158F2643D7C9BEB0138EF959CC01FE2F2F70(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSimulationSingleton_tC8F3A5395E08472F6FDD1EFF8D449D42732BBE52_m5B5870AD2E182A530DB1AAC609C38E6D6F4C77EE_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSimulationSingleton_tC8F3A5395E08472F6FDD1EFF8D449D42732BBE52_m3C2CD339E07C033F82072E5E639868FA26EE8580(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_mBEF6C43F2CF868D29433717A062AEC5F7412242E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSnapshotDataBuffer_tBA1761F30A19383F777879F53C1C3FE2528CACE3_m7A56721F25F4850E27698151B4BD87DF85028EE5(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSpawnCharacter_t3C65F711548ADBD912FFD08EC7D8DFE2329EAA3B_m484F67FFD3D103441CE272519DC0DE610DEDBB23_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSpawnCharacter_t3C65F711548ADBD912FFD08EC7D8DFE2329EAA3B_mFCE1798327C8D98A79B3D31CDBD68460682C7EFB(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSpawnedGhostEntityMap_t0BCFA4A062202D8F78450F55D68776FF38A95807_m44AAC146C69093D594EE3FFB3488DCCA2B9EF4C6_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSpawnedGhostEntityMap_t0BCFA4A062202D8F78450F55D68776FF38A95807_m68A55004084BB1E962BEAB28B359FD2D8D6BDC7A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSpectatorController_tFD98B743B9E30BECE6DDAA391B154479623B2D3B_m54247990837C18ECC42CEDB2ECCEA305D65D767E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSpectatorController_tFD98B743B9E30BECE6DDAA391B154479623B2D3B_m267861A5BFA4BB9F7ED85900D0612B839ACC3AFD(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisStepInputSingleton_tF8533E0D6AACD3BB57B6641B05F78A5C48F3A92E_m48F2A43D6BB342C2E20F293BEED732D50620716D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStepInputSingleton_tF8533E0D6AACD3BB57B6641B05F78A5C48F3A92E_m9E5B4EA89C750E36B3353073165EB59FBFEB9851(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_mB9D04A3A187BC226FA3B5FA4E8B6757AB698A0F1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStoredKinematicCharacterData_tA980030BB3B0A53B3E13896A84489C9F6032CF13_m7B799A963F110DAF3573E8909357B5A220139902(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSubSceneWithGhostCleanup_t687703217183BD3C6CC5D419F1157A4886DC0A9E_m07035C69EFE4762093D12CE671E78872FC3D2FA7_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSubSceneWithGhostCleanup_t687703217183BD3C6CC5D419F1157A4886DC0A9E_mD2695FD6A566AD86B765890CA29454ED2249CDEF(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisTrackedTransform_t26337E726D9F91AC61CABEB748253360539B0F83_mF2AEE9EE5AB3D9459EA7D82A4A95D93B1B13B9BB_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisTrackedTransform_t26337E726D9F91AC61CABEB748253360539B0F83_mD9C18543D5E0BBFCECCA509F92D0B1E9FA5DE8DE(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m3AB760048DEEF52E3D785C2F2EA3D148204ACDA8_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m1A81156C63974EA84F0A4643642D358A715B6A6D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisUniqueInputTickMap_tD54F27A8967281B8FC4FCD0D0113C3B1A5F5D436_mDD970BF6F21A7CC10226C20A274E9337CDF880EC_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisUniqueInputTickMap_tD54F27A8967281B8FC4FCD0D0113C3B1A5F5D436_m3B11CD86D34C535158387E8B8EDB356FDD3D4D8E(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_mE2E00E11607940C81F64AAA95991DEDA0C4E6901_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisVfxAttributeSettings_t2B7AC476C157D049D9E35A8A758A836861A1BCA9_m05C43686BED9C6169B0C2C3E8CA39B192DE24A4D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisVfxHitResources_tE16DC53D1C6D58EF0BA97CF6D4045B7B943BC80C_m84A66040E0CCD55FFCAF806AFD825B4EFE331FB4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisVfxHitResources_tE16DC53D1C6D58EF0BA97CF6D4045B7B943BC80C_m3C96266D8EE985EEC05CCB21ED3A2142B8D095A3(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisWeaponControl_t5AB0EB825E7C3CD5A28E96E8E1950245F08B331B_mB54574F33ECA1892F6566E0D48F266E7D5BB57BB_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisWeaponControl_t5AB0EB825E7C3CD5A28E96E8E1950245F08B331B_mE2FEA37619E214F1A82E772BD99D8AE7DBEFC45C(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisWeaponOwner_t25A7D7472E25F4C948CF47A8CE4FAB9EC4402F2D_m17C522D03ADD11C164BAEF5810B9AA80343C7D59_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisWeaponOwner_t25A7D7472E25F4C948CF47A8CE4FAB9EC4402F2D_m44A9521B38ECB979AB30F421612E4719F22268C2(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisWeaponProjectileEvent_t29E0C0B748270F64BFF89EEAE6228BFB9B40C491_m473C92820ED3350DF6A406F41A2D68649D2F2754_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisWeaponProjectileEvent_t29E0C0B748270F64BFF89EEAE6228BFB9B40C491_m3B7450257E170280E7B2F628EF68FB3A427810A2(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisWeaponVisualFeedback_t00933BB2414618F56FF791E1ECC17381C3018DE1_mE75C6C97B2969911C1FF641FD51A151789788A08_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisWeaponVisualFeedback_t00933BB2414618F56FF791E1ECC17381C3018DE1_m467531E1DEC089A9A13E6E9860A1C75A596345E0(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisIl2CppFullySharedGenericAny_mA75DEEF98BD920A35760228D3F0D7BFFF68CD491_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t3BE4D7DACA33583BBE2C8373A5C47EFC4B20049F_mB73C3CAE2E00987974D038533A36E842733F9C37_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t3BE4D7DACA33583BBE2C8373A5C47EFC4B20049F_m1289448A6EDDF07B5229C7FBFCC9F48B79E319D7(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t3C4D290E03B1550607585431A91F6254C68B5D91_m57BA15078FFE58664A8AB15D25E3ADD005D4BAB1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t3C4D290E03B1550607585431A91F6254C68B5D91_mF4039B4DA6EE4DE3F43D34D2026BAC6B6F05497E(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_tCAA7B5B53C65D96E834EED2D2BF2AB5506867D26_mC2B966A36EA577C50EF211CEFAA25872A830667D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_tCAA7B5B53C65D96E834EED2D2BF2AB5506867D26_m3A1D7602D30967D8B78AE0633F0CD129C726A0DD(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t26DC1AF10CA15B26730980E6E27C1EF0C2BE9477_mCA9C612EF463CFD4AF5FA244F83D6C245E43F66A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t26DC1AF10CA15B26730980E6E27C1EF0C2BE9477_mAB99D63691B68A0CFA1C1C9DE78049F54DD82BB3(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t1651082D66AC0E8FDCC10F98F216B9BF100ED8C4_mD4683C3D6FDB575E98AD8D35101C2B0473B3C787_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t1651082D66AC0E8FDCC10F98F216B9BF100ED8C4_m2AF1E6707AEBF72608178F8898735EB50A2E0533(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t54EEAD2311CF856F94003347B6A21A186E71D0FE_m5E56DD91CBA7084FD063BBD9BBD8188B6D04F0FC_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t54EEAD2311CF856F94003347B6A21A186E71D0FE_m06161074DD15FC218661E5CFDA183CEDD7F30B44(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t64065E6CEC923A03666B8AB0360CC5BEBD4584C3_m071C6BC4468E1C23C2055F6259A550E7859401E6_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t64065E6CEC923A03666B8AB0360CC5BEBD4584C3_m1C299D989AA51186FDE6E61D2AAA9B8A7167C48D(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t98A3C260D7EC2417778B2B6B5C85A94CB302CEDE_m1B57D3CD98E909454692F5F66BD4E041311F3D2A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t98A3C260D7EC2417778B2B6B5C85A94CB302CEDE_mD858397FD2BEA5A31DEF9087B588F06FAF3A7315(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t7B01EB05343F6EBACE8022A40F0E4ADE261DE7BF_m8A223D109796C7159DD503DD5BAFECDD5B571F0B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t7B01EB05343F6EBACE8022A40F0E4ADE261DE7BF_m939EDDD6784881C87ED4781C84DA6202FF5C5761(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t374672F8E4A603D633C5ABEBA6FB5F00833D1A2D_m66EF2571BE85077AE3D2D4CCABAF06F5AAE19A67_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t374672F8E4A603D633C5ABEBA6FB5F00833D1A2D_m79F42C098FD5196D1B6B493E240BDDD32869E340(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisState_t583D7FAB6D38B74AF495A7205BBCEBEADCBAC09A_m62917A7A063CBD97903B3EC0776173AC15057FE4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisState_t583D7FAB6D38B74AF495A7205BBCEBEADCBAC09A_m4AA6770C3F7E3C446E8E3165C39B10C8058C7013(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisMaterialReferenceElement_t92B9C280FA5368F6A6C297561C172FA97EFBECAC_m978A145D7DBA0E5E7FF961C782789C68B95D5488_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisMaterialReferenceElement_t92B9C280FA5368F6A6C297561C172FA97EFBECAC_m034B261205C75B76955DD2B074998C7708E87E84(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSingleton_t5DD8E367CBD667FFC7D1AB73A7A2E2977008D79E_m7E298D7E7977DDD724BF44AD2FF267DB9D749979_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSingleton_t5DD8E367CBD667FFC7D1AB73A7A2E2977008D79E_m88F5E0CF21829DAD6CDAA92C035B35E13D78E6F9(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisStreamingState_t26FE12C040BCF324059A9D9487A142D51678EBB7_m13D83DF381584E888DD3A5A8F74772CED512DC6A_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStreamingState_t26FE12C040BCF324059A9D9487A142D51678EBB7_mEF6863C1F6A7D2877D414B4EB0215D36635861C0(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_m13FD6F350C528CDF131F389D51DA3A825A33E53F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_mCA5211449B686BA7B83148CDFC9095DC7360FB21(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_m32613B7A68993E09512739825CEBD2E50AF4201A(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_m02D0F446F06923EB56202D8B2481E3E56CDB8A02_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_mCA5211449B686BA7B83148CDFC9095DC7360FB21(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_mE3F306C9F75E3655785EAF36C6F85D9E46A2EBBF_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_m32613B7A68993E09512739825CEBD2E50AF4201A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_mF46A945D1FBC5F730FE4AB9CE92E455E9840E868(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_TisPublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634_mCAF730B6322207A1E1BB1A437BB84417966A9EE2_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSceneTag_tB221EEA403DB2442BE5A335F4D6CF932E44A6265_mC76A7CC02C34296E51EAFFB2A94EA1BF05629CEA(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634_mF018CFE927579488AF20C4292FBA364866BBC730(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisSwitchPredictionSmoothing_t77F66A976B2B8967484C1CDF987CA6EB0CA27D54_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m2817B309CE789515EA3C4A82BBA3FDEFF6AA082E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSwitchPredictionSmoothing_t77F66A976B2B8967484C1CDF987CA6EB0CA27D54_m72FD8CC28BD7A6680CD1A129DE5F652A3F96FC90(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAllRW_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0238E9ABC1B2FF8201356D746D764EF18BD5308B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____all);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisIl2CppFullySharedGenericAny_m3C46DEC610F7A882A97B1838653EE28CA78D75D3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_mD8A139D2A3BD0AAFAA25E169F7D8D9228435D674_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisDisabled_t1C72FE38756BF6A95146AFE331F04FC71B3A79A6_m52F6874E1B8C0B5D6C83885D95B32E602356CAD4(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisPrefab_tB7A76B34FB77A40D8ED20199BACEC0A6BE189B1F_m76ED19F2481A5858F9D3F419A014636A3F96F372(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_TisGhostChildEntity_tBA1424BC5FFA91C3F17C633F75AD7C26078F59C2_m35E7B6F60A902A2903BFC3E00A91C571783552A7_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisGhostInstance_t30DDDB852D6EAB696456DCCC3008DE30823D5C56_m69243FA53C01E6A04D62F7D4FE19FA0F5E9D3A6A(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisGhostChildEntity_tBA1424BC5FFA91C3F17C633F75AD7C26078F59C2_m70CA927E5514BC3451D74FF75207BCE63FD818DC(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_mEBF9B95CA3778A5E4C5EAD3AAED41D8A3D746DD0_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_m1EC12243DF81B126C8C9E933280E1FA79A7F07F8(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m58AEA1DED6EDF65EDA210250777DEECF91753995(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisMeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E_TisSkinnedMeshRendererBakingData_t150FE20D34A6D7BBE2D3F0BB6029B3588DA7FA36_m043A408231FADACB4DED30960C14309651B34663_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisMeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E_m8C1E7F147ECEEBD946BA39F37EC7D07FF8E76769(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisSkinnedMeshRendererBakingData_t150FE20D34A6D7BBE2D3F0BB6029B3588DA7FA36_m53301195B532F30D951D795C0A1962C762DF29EC(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisRemoveUnusedEntityInBake_tD9ECD1A4695A5071B0D2316B09A8B48A3FFB4DE1_TisBakingOnlyEntity_tBDD362F696A87274ED664FDE5FD13A74CFA7A2CE_m8C5B3D045C6A6BC250557CA83069E2D450D77CEE_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisRemoveUnusedEntityInBake_tD9ECD1A4695A5071B0D2316B09A8B48A3FFB4DE1_m4C57DE307DAAF466D6E263D507E046DD4C2128E3(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisBakingOnlyEntity_tBDD362F696A87274ED664FDE5FD13A74CFA7A2CE_m96B9401FC8FD0B04F55F3BC782166E5FD434CB6E(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_mC950D4B0470475CAE0A45F0776341628D7717043_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisStartStreamingSceneGhosts_t1E0DFE2559BA591C2891A3767A75CD40C599ED14_m47BA8188DCB537ED8911366260DDD9054B00BE49(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = TypeManager_GetTypeIndex_TisStopStreamingSceneGhosts_tDBBF4164BBE2BCF060A8E33708FDAC668B6CF578_mF32B07397F399C3B9C5DE1C1AED74B5FA0F0B29E(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0CBAA410E7CFEC03ADA8624D7E88D991B513E8E5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3CDFD7A832B9AA70DB23EEE152E30300A7BA5D7B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mC2296A4725ED0BD79237CE9D81ADD6067579EAB7_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		L_12->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_13 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE9EE97E634773D380B740EE07E31FDB028FC9CC7_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		L_15->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_16 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m107B896A232B8067040F42532061191AB9DFCBD4_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_16 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_15->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_17;
		L_17 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_0)->___TypeIndex = L_17;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_16, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_18 = __this->____builderDataPtr;
		NullCheck(L_18);
		L_18->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_19 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9DB4E22D46753F9610EA72A84AE46755960D578D_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_16 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_15->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_17;
		L_17 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_0)->___TypeIndex = L_17;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_16, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_18 = __this->____builderDataPtr;
		NullCheck(L_18);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_19 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_18->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_20;
		L_20 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_0)->___TypeIndex = L_20;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_19, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_21 = __this->____builderDataPtr;
		NullCheck(L_21);
		L_21->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_22 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAny_TisIl2CppFullySharedGenericAny_m8F53C341EC7C5DE3722349BBD799965BFB6A4183_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, Il2CppFullySharedGenericAny* ___0_componentTypes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	int32_t V_0 = 0;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		Il2CppFullySharedGenericAny* L_2 = ___0_componentTypes;
		int32_t L_3 = V_0;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_5;
		L_5 = ConstrainedFuncInvoker1< ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (void*)L_2, L_3);
		V_1 = L_5;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_1), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		Il2CppFullySharedGenericAny* L_8 = ___0_componentTypes;
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_9, (void*)L_8);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_11 = __this->____builderDataPtr;
		NullCheck(L_11);
		L_11->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_12 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAnyChunkComponent_TisIl2CppFullySharedGenericAny_m2BD9449AB44E2FBC29BBA6812929859AFC58EA1B_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_runtime_class_init_inline(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_2;
		L_2 = ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAnyChunkComponentRW_TisIl2CppFullySharedGenericAny_m742EED0862D799A42ECCF17DC29B3BF701A66E69_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_runtime_class_init_inline(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_il2cpp_TypeInfo_var);
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_2;
		L_2 = ((  ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAnyRW_TisIl2CppFullySharedGenericAny_m982C350CB8A145E63AA93253CEA4ED744BE4AE66_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAnyRW_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m21201A4FBF5744D556D9DB774C4352682D3EAED3_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____any);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAspect_TisFirstPersonCharacterAspect_t08A07A31494695EF4D31A81F804ABCA1F8DBA280_m3FDE0FAE05FB75F387714A42F0F7C0C5722A5F60_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	FirstPersonCharacterAspect_t08A07A31494695EF4D31A81F804ABCA1F8DBA280 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirstPersonCharacterAspect_t08A07A31494695EF4D31A81F804ABCA1F8DBA280* L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(FirstPersonCharacterAspect_t08A07A31494695EF4D31A81F804ABCA1F8DBA280));
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_1 = __this->____builderDataPtr;
		NullCheck(L_1);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_2 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_1->____all);
		FirstPersonCharacterAspect_AddComponentRequirementsTo_mAC99F40332F508B3584E375E3C0E5E4F0BDA215E(L_0, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithAspect_TisIl2CppFullySharedGenericStruct_mCCD8BF07F94E0EF3BB3853DE67FAC1CEAFFBC441_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TAspect_t03D4D5D28513BB8E05E9E4CC3E73FDBDA0294AB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TAspect_t03D4D5D28513BB8E05E9E4CC3E73FDBDA0294AB5);
	memset(V_0, 0, SizeOf_TAspect_t03D4D5D28513BB8E05E9E4CC3E73FDBDA0294AB5);
	{
		Il2CppFullySharedGenericStruct* L_0 = (Il2CppFullySharedGenericStruct*)V_0;
		il2cpp_codegen_initobj(L_0, SizeOf_TAspect_t03D4D5D28513BB8E05E9E4CC3E73FDBDA0294AB5);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_1 = __this->____builderDataPtr;
		NullCheck(L_1);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_2 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_1->____all);
		ConstrainedActionInvoker1< UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 2), L_3, (void*)L_0, L_2);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_4 = __this->____builderDataPtr;
		NullCheck(L_4);
		L_4->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_5 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisCharacterInitialized_tDD35F02EA206A49804244EC27197F074A3A7ABD0_m20D92456D67CA23DA3574ABFD130809974130B22_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisCharacterInitialized_tDD35F02EA206A49804244EC27197F074A3A7ABD0_m0095DF6BAADAB1903C91AB9C689AD359171CE887(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_mAE75B922478D048C32FA730B2C8BFCAFC30B6875_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisDelayedDespawn_tA190CDBE6E6AAC136DB46EF8AF9E02185E616C4B_m536A71CECD540E9756702882D208C8EB0E058F86(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_mD8A016ED6D2A2FF8616434FC9592209E36ACD4E8_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisSimulate_t838A3C68E54E617018D34FCE95DCFF8F2F942127_m30F2158F2643D7C9BEB0138EF959CC01FE2F2F70(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisIl2CppFullySharedGenericAny_m034C7B3CBDB15CEF2D3B15D970E53EBD49A056F1_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9EC931D466AA39A894EB3A8F2D12B2A6EB7EFC14_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mC8DDBD5D8F903642B23A579B9E2411D49209106E_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		L_9->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_10 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mABA79A4ECF78BDD62CC8034E61A17C5C2DD5E9B5_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		L_12->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_13 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA22860C11CE9DC980CE51AE31A87F508E19FCB79_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		L_15->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_16 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m64D6F6ABE88E96E69BDDACF6DD2E8364CC592038_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_16 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_15->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_17;
		L_17 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_0)->___TypeIndex = L_17;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_16, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_18 = __this->____builderDataPtr;
		NullCheck(L_18);
		L_18->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_19 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m68A868928F52BA0185E263100455D485C13C2F91_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_7 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_6->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_8;
		L_8 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		(&V_0)->___TypeIndex = L_8;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_7, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_9 = __this->____builderDataPtr;
		NullCheck(L_9);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_10 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_9->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11;
		L_11 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		(&V_0)->___TypeIndex = L_11;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_10, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_12 = __this->____builderDataPtr;
		NullCheck(L_12);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_13 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_12->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14;
		L_14 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		(&V_0)->___TypeIndex = L_14;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_13, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_15 = __this->____builderDataPtr;
		NullCheck(L_15);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_16 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_15->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_17;
		L_17 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_0)->___TypeIndex = L_17;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_16, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_18 = __this->____builderDataPtr;
		NullCheck(L_18);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_19 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_18->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_20;
		L_20 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_0)->___TypeIndex = L_20;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_19, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_21 = __this->____builderDataPtr;
		NullCheck(L_21);
		L_21->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_22 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabled_TisIl2CppFullySharedGenericAny_m9BF7D25E9DB1859F8F6F4D534215FB6500B75FE9_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, Il2CppFullySharedGenericAny* ___0_componentTypes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	int32_t V_0 = 0;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		Il2CppFullySharedGenericAny* L_2 = ___0_componentTypes;
		int32_t L_3 = V_0;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_5;
		L_5 = ConstrainedFuncInvoker1< ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (void*)L_2, L_3);
		V_1 = L_5;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_1), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		Il2CppFullySharedGenericAny* L_8 = ___0_componentTypes;
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_9, (void*)L_8);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_11 = __this->____builderDataPtr;
		NullCheck(L_11);
		L_11->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_12 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabledRW_TisCharacterInitialized_tDD35F02EA206A49804244EC27197F074A3A7ABD0_m4087819A0783F489429F662255CF978808EB7171_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisCharacterInitialized_tDD35F02EA206A49804244EC27197F074A3A7ABD0_m0095DF6BAADAB1903C91AB9C689AD359171CE887(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabledRW_TisIl2CppFullySharedGenericAny_mE3DF734FACDB8636282F5AF70208184AD14C537F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithDisabledRW_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6C27504A4541EE8793A096DD63293651EB8FEB66_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_4 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_3->____disabled);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5;
		L_5 = ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___TypeIndex = L_5;
		(&V_0)->___AccessModeType = (int32_t)0;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_4, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_6 = __this->____builderDataPtr;
		NullCheck(L_6);
		L_6->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_7 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithNone_TisBakedEntity_tA80601A59125E066241325C1A5191D59FAD23352_m29A6BEFC760546DF0ED53B7DDC326AD697005AAA_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____none);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBakedEntity_tA80601A59125E066241325C1A5191D59FAD23352_m31FAE09135CA0F29701CDE7C1901130F6F94A718(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D EntityQueryBuilder_WithNone_TisBakingOnlyEntity_tBDD362F696A87274ED664FDE5FD13A74CFA7A2CE_m303E4ECF9CF1B06E5EAD36E663B5641F1FF5CB1F_gshared (EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_0 = __this->____builderDataPtr;
		NullCheck(L_0);
		UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* L_1 = (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674*)(&L_0->____none);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_2;
		L_2 = TypeManager_GetTypeIndex_TisBakingOnlyEntity_tBDD362F696A87274ED664FDE5FD13A74CFA7A2CE_m96B9401FC8FD0B04F55F3BC782166E5FD434CB6E(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___TypeIndex = L_2;
		(&V_0)->___AccessModeType = (int32_t)1;
		UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_inline(L_1, (&V_0), UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_RuntimeMethod_var);
		BuilderData_tF9D92CF095D83A4BA431DD170F268AA60A29B3B5* L_3 = __this->____builderDataPtr;
		NullCheck(L_3);
		L_3->____isFinalized = (uint8_t)0;
		EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D L_4 = (*(EntityQueryBuilder_t7CADF5AE1875E4EFA9968A992B7367F79E45419D*)__this);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeList_1_Add_m5F84A82FA4F996EC7C26858636817A67765BA83E_gshared_inline (UnsafeList_1_tF6E128EA51C65242C59010B65BDAD99951E1A674* __this, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_length;
		V_0 = L_0;
		int32_t L_1 = __this->___m_length;
		int32_t L_2 = __this->___m_capacity;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}
	{
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_3 = __this->___Ptr;
		int32_t L_4 = V_0;
		uint32_t L_5 = sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA);
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_6 = ___0_value;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_7 = (*(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)L_6);
		*(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)((ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))) = L_7;
		int32_t L_8 = __this->___m_length;
		__this->___m_length = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		UnsafeList_1_Resize_m62AE410F7B9BB1F934C33AB8E6E65198CF695A1F(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_10 = __this->___Ptr;
		int32_t L_11 = V_0;
		uint32_t L_12 = sizeof(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA);
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_13 = ___0_value;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA L_14 = (*(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)L_13);
		*(ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)((ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))) = L_14;
		return;
	}
}
