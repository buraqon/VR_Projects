#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>
struct Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344;
// Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>
struct Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623;
// Zinnia.Action.Action`3<System.Object,System.Boolean,System.Object>
struct Action_3_t78E3C1C038B259D2B0FC078000DA74292F7CF0DB;
// Zinnia.Action.Action`3<System.Object,System.Single,System.Object>
struct Action_3_t495F18D14335CEFDB39761D66DC1E2C5DC12DCC6;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioClip,System.String>
struct Dictionary_2_t4E29435C6C5EA7294DABA6D78116AD8D2CDB01E4;
// System.Collections.Generic.Dictionary`2<Axis,Zinnia.Action.FloatAction>
struct Dictionary_2_t8B03F647DFA54ACE6B215A990096D7D93D82A626;
// System.Collections.Generic.Dictionary`2<System.Char,System.Int32>
struct Dictionary_2_t63C09FF55518C7D6184D63646025DC0B7B1785D0;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.String>
struct Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF;
// System.Collections.Generic.Dictionary`2<UnityEngine.Gradient,System.Int32>
struct Dictionary_2_t16D21746986E8A3AC5F9DB06F4088C8A37B62521;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,RotaryHeart.Lib.NestedExample>
struct Dictionary_2_tFCA3A8C1C6B4C2A08DE6D729474929797D873FB5;
// System.Collections.Generic.Dictionary`2<System.Int32,RotaryHeart.Lib.DataBaseExample/ArrayTest>
struct Dictionary_2_t8D33BE7FB8B6995A4C7B634E6E883EEE73A97335;
// System.Collections.Generic.Dictionary`2<System.Int32,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct Dictionary_2_t79AE10E43111CB7CF37964EF8BE2A7BDD459ABC4;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.String>
struct Dictionary_2_t13CDBDC70BB519923DB3C56C5C37FCB405FF0BBA;
// System.Collections.Generic.Dictionary`2<Pressed,Zinnia.Action.BooleanAction>
struct Dictionary_2_tAED8C80E385544F39745625F7AF82633D73FE2C5;
// System.Collections.Generic.Dictionary`2<UnityEngine.Quaternion,UnityEngine.Vector3>
struct Dictionary_2_t1D51FA2ED4073FE046CDFE0F486A97FE3BD30CF5;
// System.Collections.Generic.Dictionary`2<UnityEngine.QueryTriggerInteraction,System.String>
struct Dictionary_2_tF6A95B7DE47FBC883BEAAF5ADA3862496C53CDB7;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t3F562E9148A8E8AA20BC15F94541BEA78590DD24;
// System.Collections.Generic.Dictionary`2<System.String,RotaryHeart.Lib.Example>
struct Dictionary_2_tC6EE7B91818A31662FCF8523326967D967300D2D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516;
// System.Collections.Generic.Dictionary`2<System.String,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct Dictionary_2_tB8F100E7B60B4EF77FAE6112547B1AD3BC9911F3;
// System.Collections.Generic.Dictionary`2<Touched,Zinnia.Action.BooleanAction>
struct Dictionary_2_t904A4BB782E000CE166E5CB43A5E322B8E665A38;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,UnityEngine.Quaternion>
struct Dictionary_2_t8FCF4F7E5B32A60EF092FA286529972C01DF2ABD;
// System.Collections.Generic.Dictionary`2<RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass,System.String>
struct Dictionary_2_tC3A6CBB2E2510BAF5DDB7D2BAFB56EBE7EDBD325;
// System.Collections.Generic.Dictionary`2<RotaryHeart.Lib.DataBaseExample/ClassTest,System.String>
struct Dictionary_2_tB774CE0F401AC52105D14E16BC7512981A16CF03;
// System.Collections.Generic.Dictionary`2<RotaryHeart.Lib.DataBaseExample/ClassTest,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct Dictionary_2_t2EC1D3F2A70E88C0FACA398C57192BF15B48E8EF;
// System.Collections.Generic.Dictionary`2<RotaryHeart.Lib.DataBaseExample/EnumExample,System.String>
struct Dictionary_2_t75D603A6146316D103D12E47178EDF72FC53F9B5;
// System.Func`2<Wand_LineComparer/Segment,System.Single>
struct Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEnumerable`1<Wand_LineComparer/Segment>
struct IEnumerable_1_tC04D34392954ABCD783B8BFF3C2F6737CBBE9337;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
// System.Collections.Generic.IEnumerator`1<Wand_LineComparer/Segment>
struct IEnumerator_1_t8F56A0815A7C29AA1E53FCFA34A15E3870DDE24F;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F;
// System.Collections.Generic.List`1<Axis>
struct List_1_t2C44D8F057B47B428F462B5EACB345B24F8D2876;
// System.Collections.Generic.List`1<Zinnia.Action.BooleanAction>
struct List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<RotaryHeart.Lib.Example>
struct List_1_t246BBCBB479E886AE89EA122DD961D9CFAFEAF2A;
// System.Collections.Generic.List`1<Zinnia.Action.FloatAction>
struct List_1_t686AACF1B4C121C206A9741317007D2B6DD9F689;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.Gradient>
struct List_1_t44E2CFF22DAB286B26A73E224CF32B6E62372DE4;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<RotaryHeart.Lib.NestedExample>
struct List_1_tEF3CD6CFDB928C29449F6B7C0C8EBEF9F535E078;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Pressed>
struct List_1_t31122A09F6E65336A91C6D0F6E88D9DF58946512;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523;
// System.Collections.Generic.List`1<UnityEngine.QueryTriggerInteraction>
struct List_1_tFDFA4AC6CC07E0A6F1A72FB4FDA847A8D08F700C;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Touched>
struct List_1_t0714D40E2298A3556E887B08CA1AF831987FB893;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<HippoGamez.Wand_Spell_Data>
struct List_1_tAB303B47BE7C059E9B40A5E7BED2F174031D7B9C;
// System.Collections.Generic.List`1<RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass>
struct List_1_t92159215FC1E86857847624039CD0898395034CC;
// System.Collections.Generic.List`1<RotaryHeart.Lib.DataBaseExample/ArrayTest>
struct List_1_tA0C907B0445098CDB96FA6C11B1D74F9EFD3189F;
// System.Collections.Generic.List`1<RotaryHeart.Lib.DataBaseExample/ClassTest>
struct List_1_t326E0475EFBA4E2A9FA4C005246100A86A912EEF;
// System.Collections.Generic.List`1<RotaryHeart.Lib.DataBaseExample/EnumExample>
struct List_1_t34BE2BE621007F8FB66D2756CD789D77A36E677C;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.AudioClip,System.String>
struct SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Axis,Zinnia.Action.FloatAction>
struct SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Char,System.Int32>
struct SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.GameObject,System.Int32>
struct SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.GameObject,System.String>
struct SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Gradient,System.Int32>
struct SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,UnityEngine.GameObject>
struct SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.NestedExample>
struct SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,System.Object>
struct SerializableDictionaryBase_2_t4D9FE4E3E06AB905064BF421765CD63F2FF8332E;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.DataBaseExample/ArrayTest>
struct SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32Enum,System.Object>
struct SerializableDictionaryBase_2_tFD5409215BD28E7BDA14F557A9985AD27499285F;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Material,System.String>
struct SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Object,System.Int32>
struct SerializableDictionaryBase_2_t413CCA8AABA321D3F39A18742F5490C87C1B1E37;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Object,System.Object>
struct SerializableDictionaryBase_2_t62F22C7A3D06E9337C547541550E2353BF519EE7;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Pressed,Zinnia.Action.BooleanAction>
struct SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Quaternion,UnityEngine.Vector3>
struct SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.QueryTriggerInteraction,System.String>
struct SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.AudioClip>
struct SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,RotaryHeart.Lib.Example>
struct SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.GameObject>
struct SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.Material>
struct SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.Sprite>
struct SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Touched,Zinnia.Action.BooleanAction>
struct SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Vector3,UnityEngine.Quaternion>
struct SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass,System.String>
struct SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/ClassTest,System.String>
struct SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/ClassTest,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E;
// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/EnumExample,System.String>
struct SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// HippoGamez.Wand_Spell_Data[]
struct Wand_Spell_DataU5BU5D_t51589FC57A4623D0B85EBB7507237F05F87B024E;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// RotaryHeart.Lib.DataBaseExample/ChildTest[]
struct ChildTestU5BU5D_tAE813140F1FDEF875FD153B09E1538FA7989B8B8;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Avatar_IK
struct Avatar_IK_t953B0564472F2E82ADA24AC10F745AA0FEB22218;
// AxisDictionary
struct AxisDictionary_t3295F725C89679A9C1132617CBF51111AD73637E;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// HippoGamez.Controller_InputHandler
struct Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F;
// HippoGamez.Controller_Manager
struct Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// RotaryHeart.Lib.DataBaseExample
struct DataBaseExample_t7A4C16AAED16F3872341CA295CBD2FDE392AD71A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DigitalRuby.PyroParticles.DemoScript
struct DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4;
// RotaryHeart.Lib.SerializableDictionary.DrawKeyAsPropertyAttribute
struct DrawKeyAsPropertyAttribute_t33E1C19EBFFB3F0A97508AA07E081EA8540977AD;
// RotaryHeart.Lib.SerializableDictionary.DrawableDictionary
struct DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// RotaryHeart.Lib.Example
struct Example_tEDD34DA5C53315AEC26F86D1F38DBA082E8D8FB6;
// DigitalRuby.PyroParticles.FireBaseScript
struct FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA;
// DigitalRuby.PyroParticles.FireCollisionForwardScript
struct FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F;
// DigitalRuby.PyroParticles.FireConstantBaseScript
struct FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F;
// DigitalRuby.PyroParticles.FireLightScript
struct FireLightScript_tA16C4F8534DE564413CEC3592EF2C3F44342BA66;
// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate
struct FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D;
// DigitalRuby.PyroParticles.FireProjectileScript
struct FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D;
// Zinnia.Action.FloatAction
struct FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// DigitalRuby.PyroParticles.ICollisionHandler
struct ICollisionHandler_tC60762A35C66A1E13BB3F83513F0483DB05AECFA;
// RotaryHeart.Lib.SerializableDictionary.IDAttribute
struct IDAttribute_t4D30F6CCBF386F778D12F1F914C2A8FB39032FF0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Iphone_Cameras
struct Iphone_Cameras_tDAE98F67D8AEA6BEC5D0448A941E2F408039F81D;
// Iphone_Main
struct Iphone_Main_t78D5F47AD1640E10FA93D4F349F8B5750902F3B0;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// DigitalRuby.PyroParticles.LoopingAudioSource
struct LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082;
// RotaryHeart.Lib.MainDict
struct MainDict_tAD488DB322F47FFDE577430CAD18D3C1C4F28BAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate
struct MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F;
// DigitalRuby.PyroParticles.MeteorSwarmScript
struct MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// RotaryHeart.Lib.Nested2Dict
struct Nested2Dict_t081CC73F8064AC01C8ACC78FD5A41402BFEDD43A;
// RotaryHeart.Lib.NestedDB
struct NestedDB_t4DF32B83AC7A5D48247128D52FD39A8289D78883;
// RotaryHeart.Lib.NestedDict
struct NestedDict_t716D44958B471F8E720A8855883D9F10448D275B;
// RotaryHeart.Lib.NestedExample
struct NestedExample_t3D1CC70A3949B9F1674C0FA236834FF17600F4AE;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PressedDictionary
struct PressedDictionary_t02FB23427C40371AB0EAEA98D081F3BF7C52B717;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RotaryHeart.Lib.SerializableDictionary.ReorderableList
struct ReorderableList_tCC3940A688A7EA9ED7B7BDBE5259111B02586356;
// RotaryHeart.Lib.SerializableDictionary.RequiredReferences
struct RequiredReferences_tD5108FC3712926BDFE0E8346C499B6B1E98B49A9;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DigitalRuby.PyroParticles.SingleLineAttribute
struct SingleLineAttribute_t13F8F42D28C340C6FBFF21E3E726CE1E1F1FF6EF;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// HippoGamez.Testing_Controls
struct Testing_Controls_t4A14CEBD910D44AAEC0046CD0776799D6ABF571F;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// TouchedDictionary
struct TouchedDictionary_t1BE185AF3B3BA9311328DEA86523B7EF70DBB622;
// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Wand_LineComparer
struct Wand_LineComparer_t2A2A8708FFD30FF805DA0750BA37C19427C0F86C;
// HippoGamez.Wand_LineDrawer
struct Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08;
// HippoGamez.Wand_LineSaver
struct Wand_LineSaver_t60B98B9295B56D9FDC46FE90DFCE36D8B3DF6DB0;
// HippoGamez.Wand_Spell_Data
struct Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B;
// Zinnia.Action.Action/BooleanUnityEvent
struct BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Zinnia.Action.BooleanAction/UnityEvent
struct UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// RotaryHeart.Lib.DataBaseExample/AC_S
struct AC_S_t10D18F8E63B0C30C3E681DC3F517857F1B3DE3B0;
// RotaryHeart.Lib.DataBaseExample/AdvanGeneric_String
struct AdvanGeneric_String_t764F537F5D271CDA41CB8B687E7A376D52A8B234;
// RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass
struct AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8;
// RotaryHeart.Lib.DataBaseExample/ArrayTest
struct ArrayTest_t62CBF96B23D57B3A55B73E6C59F4A52A0EAAD0C9;
// RotaryHeart.Lib.DataBaseExample/C_Int
struct C_Int_tFF9DCC017612B1974C79128888BB0B4157BD2136;
// RotaryHeart.Lib.DataBaseExample/ChildTest
struct ChildTest_t1877D57D37B93C618D99C38C7B7038AA0539F513;
// RotaryHeart.Lib.DataBaseExample/ClassTest
struct ClassTest_tD42ACF8027A4B6673EBC1416538C11C432126FC8;
// RotaryHeart.Lib.DataBaseExample/Enum_String
struct Enum_String_t19E95F171D577147A376C14215928926762DAF8B;
// RotaryHeart.Lib.DataBaseExample/GO_I
struct GO_I_tC9780EFC2870FC49D75F198A7B4FE7700A69535E;
// RotaryHeart.Lib.DataBaseExample/GO_S
struct GO_S_tE24369AA562CDE70E9B7F375BB7438FFC805255F;
// RotaryHeart.Lib.DataBaseExample/G_Int
struct G_Int_t77F24BB7D96D4DF71CF71D2B5E1ABB501E6F8664;
// RotaryHeart.Lib.DataBaseExample/Generic_Generic
struct Generic_Generic_tB1F03B51C267DB4C7A9E26FF63F7968F7B08A1BF;
// RotaryHeart.Lib.DataBaseExample/Generic_String
struct Generic_String_t2234285FF3DD0045F70BB0D8E44510799176671D;
// RotaryHeart.Lib.DataBaseExample/I_GO
struct I_GO_t7C29E0EBAC722236FDD99C51948BD0BD73AD1823;
// RotaryHeart.Lib.DataBaseExample/I_GenericDictionary
struct I_GenericDictionary_t86E2E60AAD364035640F35F6CC2B506E23FFADD4;
// RotaryHeart.Lib.DataBaseExample/Int_IntArray
struct Int_IntArray_tCA02FE89D18AFDDB451DAC944CA794EEB3DB709B;
// RotaryHeart.Lib.DataBaseExample/Mat_S
struct Mat_S_tEC995C514A1AA1D071B9A010F4AE1696D9A92BF2;
// RotaryHeart.Lib.DataBaseExample/Q_V3
struct Q_V3_t5BFCD4612600D3C64FA0F778F0BB8DCD3B866BB3;
// RotaryHeart.Lib.DataBaseExample/S_AC
struct S_AC_tED99629B7EE1A081768E144F52EB42FF7027A3AF;
// RotaryHeart.Lib.DataBaseExample/S_GO
struct S_GO_t9CC5BA3CE53956A968CBCBF4D6627527FCBE49E3;
// RotaryHeart.Lib.DataBaseExample/S_GenericDictionary
struct S_GenericDictionary_tEC88A15AA034F3A437E51164ED24E0BEC610BAA3;
// RotaryHeart.Lib.DataBaseExample/S_Mat
struct S_Mat_t1667342C2C0221F2B2E415570E6484B4276D1A51;
// RotaryHeart.Lib.DataBaseExample/S_Sprite
struct S_Sprite_t5F54C467068B7533EEEAE816B2E60DE43E31A100;
// RotaryHeart.Lib.DataBaseExample/V3_Q
struct V3_Q_t3E98CE3EF32328BB160DD9A514214ACA51DBAF34;
// DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12
struct U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19;
// DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12
struct U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35;
// Zinnia.Action.FloatAction/UnityEvent
struct UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22
struct U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6;
// DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18
struct U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// Wand_LineComparer/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB;
// Wand_LineComparer/<ListSegments>d__7
struct U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E;
// Wand_LineComparer/<WalkAlongLine>d__4
struct U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C;

IL2CPP_EXTERN_C RuntimeClass* AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollisionHandler_tC60762A35C66A1E13BB3F83513F0483DB05AECFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral246D45F0E95F368D6AC3C588DA6A511225EA31E3;
IL2CPP_EXTERN_C String_t* _stringLiteral3297D7F872B0B6B3647656A13A2D7B41215309E9;
IL2CPP_EXTERN_C String_t* _stringLiteral42A81C7648296D8C125770F34A698F0B875DE341;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96;
IL2CPP_EXTERN_C String_t* _stringLiteral87CE70F53A88E15B02D332E2E101B2F5F767C7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral91F16FB86D1D05608AABE279F084CFC279773C14;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_get_Value_m0549FD302B64DDC652237EC80150446CE3F63AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_get_Value_m6F9BDD5B1ED341789850F50A3AED1F79C3C32621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mB79B3B2B2F8008770413B79335C256A448BA6E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m48C9AEBA24E05215F763E9FAEE1F7D72E500DB30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisSegment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA34B22D87FA09E68D9940ADF4F0B560DA927FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m251071555886405496EFB79059552922EBF92D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE2C1B7C4018B3B1EC621DA5686682AC9CFC9D43D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE7CC713093F09975C835E945325BE6894D430168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisFireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D_m772DD29650BCBA16D8782C851D55F0352D2980B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA_mA2973D48B4E721392510B3B1B80B1E77F4A3FE3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m6F22622E0D063D8A1083175EAEF4236C8F164F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F_mB6B6267CC2E9EDDBA06742641FBF9F120C4C81A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA97EB0EEBAD537616578832E89EF24F89A08902B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2_ContainsKey_m22FEDFB5EC34233F6A87DD1B0B1371202435C999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2_ContainsKey_m81729DC7A0B3702E73565C001628BC6999B5B969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2_ContainsKey_m9E3103D80B750291CAED69BE8306F28FCC8E7E35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m05B2CB515AC1B1CA1E0BABBF783BC9F8C28E8BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m0616CA32A3F78EDFAE56196566C5B5004E792191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m079FF38429225C8FA576951A9C43CFA8ED3744F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m1580EC95BD547106BAF190D852445D6B64E5C50A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m205792B75CF21B5FE3C96466D1FE8D905622029F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m38B5E0368DD84C9557CBB03167609E82FF87A87D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m3B93FA3EC99D99D646DB8096383FCDAC4DA88AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m456F702469F49C42B0D467DBE28B2B1EB2E0D7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m49F2F599156D6E39076FA33B338CECAA3CA0CA9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m533EF54A5605862010AD147FAD45F2C35D8CDB05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m537E286071018D8015FF58E6E1476891B3189BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m630CD0A30091E0E690F9BA232799904E2A6CE09F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m6953F1B459B4A4CC98BDD79DD4CF9760B3A31E74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m76CE5A307320065BEA78715868F2E90AC77D6D2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m86A1AEBB9197D31B5DC481BAE2F19185CD844844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m8B1AE0AC5C2B827EF9D4C4CA45518DC974691C3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_m9CACD18445AA3F07EB36B0E6BF42247CF4BC43B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mABFBD5EAC965AF71DFE8A1BD166DDF188F3B3995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mB491E5CFA6C03DA0155F54C417B74A3CF5CD7AC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mB533A587D149BFE81E55309ED24E6EF22EF437A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mB6F532F0265BDD305727B82ACCE79E070B1A66A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mB94B145453FCD5D7A4446E637993A56E9E882135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mC6344D14CD6733E5F14776EA4E328DD981D1225C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mE0768488EECC889A9D8CAA79EE14583C9A3856FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mE391E92B13E922D250B185E31474803A7735795C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2__ctor_mFE621481CCA0CB0B01061F07977C956890BBB563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2_get_Item_m0685ADF395D9BCF47C3B3D0F19913217FF7FF8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2_get_Item_m7D19BDD1F71DBFFA4EBE9BDBF2132C3918778D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionaryBase_2_get_Item_mFAA59C8A7875C915FE421B2DD8885C1E5208F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_IEnumerator_Reset_m89B4EEBA42A912D5A2FEBB8E090E5314F32F4EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCleanupMeteorU3Ed__22_System_Collections_IEnumerator_Reset_m43DCBF111F3586BBA0DDA2103E2F3ECCA8CA1120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CListSegmentsU3Ed__7_System_Collections_IEnumerator_Reset_m001656A8F049F983995F6288566BA0A5FBCEA47E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendCollisionAfterDelayU3Ed__12_System_Collections_IEnumerator_Reset_mB2F476C0BCD8234755BE9C8CB7145E577CA25E14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnMeteorU3Ed__18_System_Collections_IEnumerator_Reset_m9C987B9DADC6641B63CE792920CE520DB9136A4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CSqrDistanceToLineU3Eb__0_mE8652C6B81C1A953F05C0467376C42706002C202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWalkAlongLineU3Ed__4_System_Collections_IEnumerator_Reset_m9678854713ED14041155AE71747AD1AD2983A9A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wand_LineSaver_DeserializeVector3Array_mB69336ED8B5CFAD2C0944B8BA9826A84AD53F458_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8_0_0_0_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.List`1<HippoGamez.Wand_Spell_Data>
struct List_1_tAB303B47BE7C059E9B40A5E7BED2F174031D7B9C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Wand_Spell_DataU5BU5D_t51589FC57A4623D0B85EBB7507237F05F87B024E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAB303B47BE7C059E9B40A5E7BED2F174031D7B9C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Wand_Spell_DataU5BU5D_t51589FC57A4623D0B85EBB7507237F05F87B024E* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// RotaryHeart.Lib.SerializableDictionary.DrawableDictionary
struct DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2  : public RuntimeObject
{
	// RotaryHeart.Lib.SerializableDictionary.ReorderableList RotaryHeart.Lib.SerializableDictionary.DrawableDictionary::reorderableList
	ReorderableList_tCC3940A688A7EA9ED7B7BDBE5259111B02586356* ___reorderableList_0;
	// RotaryHeart.Lib.SerializableDictionary.RequiredReferences RotaryHeart.Lib.SerializableDictionary.DrawableDictionary::reqReferences
	RequiredReferences_tD5108FC3712926BDFE0E8346C499B6B1E98B49A9* ___reqReferences_1;
	// System.Boolean RotaryHeart.Lib.SerializableDictionary.DrawableDictionary::isExpanded
	bool ___isExpanded_2;
};

// RotaryHeart.Lib.Example
struct Example_tEDD34DA5C53315AEC26F86D1F38DBA082E8D8FB6  : public RuntimeObject
{
	// System.String RotaryHeart.Lib.Example::id
	String_t* ___id_0;
	// UnityEngine.QueryTriggerInteraction RotaryHeart.Lib.Example::enumVal
	int32_t ___enumVal_1;
	// RotaryHeart.Lib.NestedDict RotaryHeart.Lib.Example::nestedData
	NestedDict_t716D44958B471F8E720A8855883D9F10448D275B* ___nestedData_2;
};

// DigitalRuby.PyroParticles.LoopingAudioSource
struct LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082  : public RuntimeObject
{
	// UnityEngine.AudioSource DigitalRuby.PyroParticles.LoopingAudioSource::<AudioSource>k__BackingField
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___U3CAudioSourceU3Ek__BackingField_0;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::<TargetVolume>k__BackingField
	float ___U3CTargetVolumeU3Ek__BackingField_1;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::startMultiplier
	float ___startMultiplier_2;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::stopMultiplier
	float ___stopMultiplier_3;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::currentMultiplier
	float ___currentMultiplier_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// RotaryHeart.Lib.SerializableDictionary.ReorderableList
struct ReorderableList_tCC3940A688A7EA9ED7B7BDBE5259111B02586356  : public RuntimeObject
{
};

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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// Wand_LineComparer
struct Wand_LineComparer_t2A2A8708FFD30FF805DA0750BA37C19427C0F86C  : public RuntimeObject
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

// RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass
struct AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8  : public RuntimeObject
{
	// System.Single RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass::value
	float ___value_0;
};

// RotaryHeart.Lib.DataBaseExample/ArrayTest
struct ArrayTest_t62CBF96B23D57B3A55B73E6C59F4A52A0EAAD0C9  : public RuntimeObject
{
	// System.Int32[] RotaryHeart.Lib.DataBaseExample/ArrayTest::myArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___myArray_0;
};

// DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12
struct U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19  : public RuntimeObject
{
	// System.Int32 DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DigitalRuby.PyroParticles.FireBaseScript DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::<>4__this
	FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* ___U3CU3E4__this_2;
};

// DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12
struct U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35  : public RuntimeObject
{
	// System.Int32 DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DigitalRuby.PyroParticles.FireProjectileScript DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::<>4__this
	FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___U3CU3E4__this_2;
};

// DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22
struct U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6  : public RuntimeObject
{
	// System.Int32 DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::delay
	float ___delay_2;
	// UnityEngine.GameObject DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj_3;
};

// DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18
struct U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341  : public RuntimeObject
{
	// System.Int32 DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DigitalRuby.PyroParticles.MeteorSwarmScript DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::<>4__this
	MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<HippoGamez.Wand_Spell_Data>
struct Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tAB303B47BE7C059E9B40A5E7BED2F174031D7B9C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* ____current_3;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.AudioClip,System.String>
struct SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t4E29435C6C5EA7294DABA6D78116AD8D2CDB01E4* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____values_7;
};

struct SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t4E29435C6C5EA7294DABA6D78116AD8D2CDB01E4* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Axis,Zinnia.Action.FloatAction>
struct SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t8B03F647DFA54ACE6B215A990096D7D93D82A626* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t2C44D8F057B47B428F462B5EACB345B24F8D2876* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t2C44D8F057B47B428F462B5EACB345B24F8D2876* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t686AACF1B4C121C206A9741317007D2B6DD9F689* ____values_7;
};

struct SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t8B03F647DFA54ACE6B215A990096D7D93D82A626* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Char,System.Int32>
struct SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t63C09FF55518C7D6184D63646025DC0B7B1785D0* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____values_7;
};

struct SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t63C09FF55518C7D6184D63646025DC0B7B1785D0* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.GameObject,System.Int32>
struct SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____values_7;
};

struct SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.GameObject,System.String>
struct SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____values_7;
};

struct SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Gradient,System.Int32>
struct SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t16D21746986E8A3AC5F9DB06F4088C8A37B62521* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t44E2CFF22DAB286B26A73E224CF32B6E62372DE4* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t44E2CFF22DAB286B26A73E224CF32B6E62372DE4* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____values_7;
};

struct SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t16D21746986E8A3AC5F9DB06F4088C8A37B62521* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,UnityEngine.GameObject>
struct SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____values_7;
};

struct SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.NestedExample>
struct SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tFCA3A8C1C6B4C2A08DE6D729474929797D873FB5* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tEF3CD6CFDB928C29449F6B7C0C8EBEF9F535E078* ____values_7;
};

struct SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tFCA3A8C1C6B4C2A08DE6D729474929797D873FB5* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.DataBaseExample/ArrayTest>
struct SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t8D33BE7FB8B6995A4C7B634E6E883EEE73A97335* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tA0C907B0445098CDB96FA6C11B1D74F9EFD3189F* ____values_7;
};

struct SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t8D33BE7FB8B6995A4C7B634E6E883EEE73A97335* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t79AE10E43111CB7CF37964EF8BE2A7BDD459ABC4* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t326E0475EFBA4E2A9FA4C005246100A86A912EEF* ____values_7;
};

struct SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t79AE10E43111CB7CF37964EF8BE2A7BDD459ABC4* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Material,System.String>
struct SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t13CDBDC70BB519923DB3C56C5C37FCB405FF0BBA* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____values_7;
};

struct SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t13CDBDC70BB519923DB3C56C5C37FCB405FF0BBA* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Pressed,Zinnia.Action.BooleanAction>
struct SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tAED8C80E385544F39745625F7AF82633D73FE2C5* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t31122A09F6E65336A91C6D0F6E88D9DF58946512* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t31122A09F6E65336A91C6D0F6E88D9DF58946512* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71* ____values_7;
};

struct SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tAED8C80E385544F39745625F7AF82633D73FE2C5* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Quaternion,UnityEngine.Vector3>
struct SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t1D51FA2ED4073FE046CDFE0F486A97FE3BD30CF5* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____values_7;
};

struct SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t1D51FA2ED4073FE046CDFE0F486A97FE3BD30CF5* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.QueryTriggerInteraction,System.String>
struct SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tF6A95B7DE47FBC883BEAAF5ADA3862496C53CDB7* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tFDFA4AC6CC07E0A6F1A72FB4FDA847A8D08F700C* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tFDFA4AC6CC07E0A6F1A72FB4FDA847A8D08F700C* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____values_7;
};

struct SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tF6A95B7DE47FBC883BEAAF5ADA3862496C53CDB7* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.AudioClip>
struct SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t3F562E9148A8E8AA20BC15F94541BEA78590DD24* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ____values_7;
};

struct SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t3F562E9148A8E8AA20BC15F94541BEA78590DD24* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,RotaryHeart.Lib.Example>
struct SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tC6EE7B91818A31662FCF8523326967D967300D2D* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t246BBCBB479E886AE89EA122DD961D9CFAFEAF2A* ____values_7;
};

struct SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tC6EE7B91818A31662FCF8523326967D967300D2D* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.GameObject>
struct SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____values_7;
};

struct SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.Material>
struct SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ____values_7;
};

struct SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t5B255487AF84FB5AB3382296BC4C30734ADE141F* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.Sprite>
struct SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____values_7;
};

struct SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tC7B9BD0CA755DD1E643DB18A74765E15DC3D9516* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tB8F100E7B60B4EF77FAE6112547B1AD3BC9911F3* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t326E0475EFBA4E2A9FA4C005246100A86A912EEF* ____values_7;
};

struct SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tB8F100E7B60B4EF77FAE6112547B1AD3BC9911F3* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Touched,Zinnia.Action.BooleanAction>
struct SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t904A4BB782E000CE166E5CB43A5E322B8E665A38* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t0714D40E2298A3556E887B08CA1AF831987FB893* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t0714D40E2298A3556E887B08CA1AF831987FB893* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71* ____values_7;
};

struct SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t904A4BB782E000CE166E5CB43A5E322B8E665A38* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Vector3,UnityEngine.Quaternion>
struct SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t8FCF4F7E5B32A60EF092FA286529972C01DF2ABD* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* ____values_7;
};

struct SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t8FCF4F7E5B32A60EF092FA286529972C01DF2ABD* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass,System.String>
struct SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tC3A6CBB2E2510BAF5DDB7D2BAFB56EBE7EDBD325* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t92159215FC1E86857847624039CD0898395034CC* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t92159215FC1E86857847624039CD0898395034CC* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____values_7;
};

struct SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tC3A6CBB2E2510BAF5DDB7D2BAFB56EBE7EDBD325* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/ClassTest,System.String>
struct SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_tB774CE0F401AC52105D14E16BC7512981A16CF03* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t326E0475EFBA4E2A9FA4C005246100A86A912EEF* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t326E0475EFBA4E2A9FA4C005246100A86A912EEF* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____values_7;
};

struct SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_tB774CE0F401AC52105D14E16BC7512981A16CF03* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/ClassTest,RotaryHeart.Lib.DataBaseExample/ClassTest>
struct SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t2EC1D3F2A70E88C0FACA398C57192BF15B48E8EF* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t326E0475EFBA4E2A9FA4C005246100A86A912EEF* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t326E0475EFBA4E2A9FA4C005246100A86A912EEF* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_t326E0475EFBA4E2A9FA4C005246100A86A912EEF* ____values_7;
};

struct SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t2EC1D3F2A70E88C0FACA398C57192BF15B48E8EF* ____staticEmptyDict_4;
};

// RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/EnumExample,System.String>
struct SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725  : public DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_dict
	Dictionary_2_t75D603A6146316D103D12E47178EDF72FC53F9B5* ____dict_3;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keyValues
	List_1_t34BE2BE621007F8FB66D2756CD789D77A36E677C* ____keyValues_5;
	// System.Collections.Generic.List`1<TKey> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_keys
	List_1_t34BE2BE621007F8FB66D2756CD789D77A36E677C* ____keys_6;
	// System.Collections.Generic.List`1<TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_values
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____values_7;
};

struct SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2::_staticEmptyDict
	Dictionary_2_t75D603A6146316D103D12E47178EDF72FC53F9B5* ____staticEmptyDict_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// RotaryHeart.Lib.SerializableDictionary.DrawKeyAsPropertyAttribute
struct DrawKeyAsPropertyAttribute_t33E1C19EBFFB3F0A97508AA07E081EA8540977AD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// RotaryHeart.Lib.SerializableDictionary.IDAttribute
struct IDAttribute_t4D30F6CCBF386F778D12F1F914C2A8FB39032FF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String RotaryHeart.Lib.SerializableDictionary.IDAttribute::_id
	String_t* ____id_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// DigitalRuby.PyroParticles.RangeOfFloats
struct RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F 
{
	// System.Single DigitalRuby.PyroParticles.RangeOfFloats::Minimum
	float ___Minimum_0;
	// System.Single DigitalRuby.PyroParticles.RangeOfFloats::Maximum
	float ___Maximum_1;
};

// DigitalRuby.PyroParticles.RangeOfIntegers
struct RangeOfIntegers_t2B1CBD17A8EB3CE2902B2B130ABDEBFCF686316F 
{
	// System.Int32 DigitalRuby.PyroParticles.RangeOfIntegers::Minimum
	int32_t ___Minimum_0;
	// System.Int32 DigitalRuby.PyroParticles.RangeOfIntegers::Maximum
	int32_t ___Maximum_1;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// AxisDictionary
struct AxisDictionary_t3295F725C89679A9C1132617CBF51111AD73637E  : public SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69
{
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// RotaryHeart.Lib.MainDict
struct MainDict_tAD488DB322F47FFDE577430CAD18D3C1C4F28BAA  : public SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4
{
};

// RotaryHeart.Lib.Nested2Dict
struct Nested2Dict_t081CC73F8064AC01C8ACC78FD5A41402BFEDD43A  : public SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923
{
};

// RotaryHeart.Lib.NestedDict
struct NestedDict_t716D44958B471F8E720A8855883D9F10448D275B  : public SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6
{
};

// RotaryHeart.Lib.NestedExample
struct NestedExample_t3D1CC70A3949B9F1674C0FA236834FF17600F4AE  : public RuntimeObject
{
	// UnityEngine.GameObject RotaryHeart.Lib.NestedExample::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_0;
	// System.Single RotaryHeart.Lib.NestedExample::speed
	float ___speed_1;
	// UnityEngine.Color RotaryHeart.Lib.NestedExample::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
	// RotaryHeart.Lib.Nested2Dict RotaryHeart.Lib.NestedExample::deepNested
	Nested2Dict_t081CC73F8064AC01C8ACC78FD5A41402BFEDD43A* ___deepNested_3;
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

// PressedDictionary
struct PressedDictionary_t02FB23427C40371AB0EAEA98D081F3BF7C52B717  : public SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90
{
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DigitalRuby.PyroParticles.SingleLineAttribute
struct SingleLineAttribute_t13F8F42D28C340C6FBFF21E3E726CE1E1F1FF6EF  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String DigitalRuby.PyroParticles.SingleLineAttribute::<Tooltip>k__BackingField
	String_t* ___U3CTooltipU3Ek__BackingField_0;
};

// TouchedDictionary
struct TouchedDictionary_t1BE185AF3B3BA9311328DEA86523B7EF70DBB622  : public SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E
{
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// RotaryHeart.Lib.DataBaseExample/AC_S
struct AC_S_t10D18F8E63B0C30C3E681DC3F517857F1B3DE3B0  : public SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66
{
};

// RotaryHeart.Lib.DataBaseExample/AdvanGeneric_String
struct AdvanGeneric_String_t764F537F5D271CDA41CB8B687E7A376D52A8B234  : public SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C
{
};

// RotaryHeart.Lib.DataBaseExample/C_Int
struct C_Int_tFF9DCC017612B1974C79128888BB0B4157BD2136  : public SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443
{
};

// RotaryHeart.Lib.DataBaseExample/ChildTest
struct ChildTest_t1877D57D37B93C618D99C38C7B7038AA0539F513  : public RuntimeObject
{
	// UnityEngine.Color RotaryHeart.Lib.DataBaseExample/ChildTest::myChildColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___myChildColor_0;
	// System.Boolean RotaryHeart.Lib.DataBaseExample/ChildTest::myChildBool
	bool ___myChildBool_1;
	// UnityEngine.Gradient RotaryHeart.Lib.DataBaseExample/ChildTest::test
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___test_2;
};

// RotaryHeart.Lib.DataBaseExample/ClassTest
struct ClassTest_tD42ACF8027A4B6673EBC1416538C11C432126FC8  : public RuntimeObject
{
	// System.String RotaryHeart.Lib.DataBaseExample/ClassTest::id
	String_t* ___id_0;
	// System.Single RotaryHeart.Lib.DataBaseExample/ClassTest::test
	float ___test_1;
	// System.String RotaryHeart.Lib.DataBaseExample/ClassTest::test2
	String_t* ___test2_2;
	// UnityEngine.Quaternion RotaryHeart.Lib.DataBaseExample/ClassTest::quat
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quat_3;
	// RotaryHeart.Lib.DataBaseExample/ChildTest[] RotaryHeart.Lib.DataBaseExample/ClassTest::childTest
	ChildTestU5BU5D_tAE813140F1FDEF875FD153B09E1538FA7989B8B8* ___childTest_4;
};

// RotaryHeart.Lib.DataBaseExample/Enum_String
struct Enum_String_t19E95F171D577147A376C14215928926762DAF8B  : public SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725
{
};

// RotaryHeart.Lib.DataBaseExample/GO_I
struct GO_I_tC9780EFC2870FC49D75F198A7B4FE7700A69535E  : public SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404
{
};

// RotaryHeart.Lib.DataBaseExample/GO_S
struct GO_S_tE24369AA562CDE70E9B7F375BB7438FFC805255F  : public SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F
{
};

// RotaryHeart.Lib.DataBaseExample/G_Int
struct G_Int_t77F24BB7D96D4DF71CF71D2B5E1ABB501E6F8664  : public SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D
{
};

// RotaryHeart.Lib.DataBaseExample/Generic_Generic
struct Generic_Generic_tB1F03B51C267DB4C7A9E26FF63F7968F7B08A1BF  : public SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E
{
};

// RotaryHeart.Lib.DataBaseExample/Generic_String
struct Generic_String_t2234285FF3DD0045F70BB0D8E44510799176671D  : public SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A
{
};

// RotaryHeart.Lib.DataBaseExample/I_GO
struct I_GO_t7C29E0EBAC722236FDD99C51948BD0BD73AD1823  : public SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F
{
};

// RotaryHeart.Lib.DataBaseExample/I_GenericDictionary
struct I_GenericDictionary_t86E2E60AAD364035640F35F6CC2B506E23FFADD4  : public SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D
{
};

// RotaryHeart.Lib.DataBaseExample/Int_IntArray
struct Int_IntArray_tCA02FE89D18AFDDB451DAC944CA794EEB3DB709B  : public SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC
{
};

// RotaryHeart.Lib.DataBaseExample/Mat_S
struct Mat_S_tEC995C514A1AA1D071B9A010F4AE1696D9A92BF2  : public SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B
{
};

// RotaryHeart.Lib.DataBaseExample/Q_V3
struct Q_V3_t5BFCD4612600D3C64FA0F778F0BB8DCD3B866BB3  : public SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6
{
};

// RotaryHeart.Lib.DataBaseExample/S_AC
struct S_AC_tED99629B7EE1A081768E144F52EB42FF7027A3AF  : public SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657
{
};

// RotaryHeart.Lib.DataBaseExample/S_GO
struct S_GO_t9CC5BA3CE53956A968CBCBF4D6627527FCBE49E3  : public SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8
{
};

// RotaryHeart.Lib.DataBaseExample/S_GenericDictionary
struct S_GenericDictionary_tEC88A15AA034F3A437E51164ED24E0BEC610BAA3  : public SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B
{
};

// RotaryHeart.Lib.DataBaseExample/S_Mat
struct S_Mat_t1667342C2C0221F2B2E415570E6484B4276D1A51  : public SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18
{
};

// RotaryHeart.Lib.DataBaseExample/S_Sprite
struct S_Sprite_t5F54C467068B7533EEEAE816B2E60DE43E31A100  : public SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4
{
};

// RotaryHeart.Lib.DataBaseExample/V3_Q
struct V3_Q_t3E98CE3EF32328BB160DD9A514214ACA51DBAF34  : public SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA
{
};

// Wand_LineComparer/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB  : public RuntimeObject
{
	// UnityEngine.Vector3 Wand_LineComparer/<>c__DisplayClass5_0::point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
};

// Wand_LineComparer/<WalkAlongLine>d__4
struct U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C  : public RuntimeObject
{
	// System.Int32 Wand_LineComparer/<WalkAlongLine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Vector3 Wand_LineComparer/<WalkAlongLine>d__4::<>2__current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CU3E2__current_1;
	// System.Int32 Wand_LineComparer/<WalkAlongLine>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Wand_LineComparer/<WalkAlongLine>d__4::line
	RuntimeObject* ___line_3;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Wand_LineComparer/<WalkAlongLine>d__4::<>3__line
	RuntimeObject* ___U3CU3E3__line_4;
	// System.Single Wand_LineComparer/<WalkAlongLine>d__4::maxStep
	float ___maxStep_5;
	// System.Single Wand_LineComparer/<WalkAlongLine>d__4::<>3__maxStep
	float ___U3CU3E3__maxStep_6;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3> Wand_LineComparer/<WalkAlongLine>d__4::<lineEnum>5__2
	RuntimeObject* ___U3ClineEnumU3E5__2_7;
	// UnityEngine.Vector3 Wand_LineComparer/<WalkAlongLine>d__4::<pos>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CposU3E5__3_8;
	// UnityEngine.Vector3 Wand_LineComparer/<WalkAlongLine>d__4::<target>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtargetU3E5__4_9;
};

// Wand_LineComparer/Segment
struct Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 
{
	// UnityEngine.Vector3 Wand_LineComparer/Segment::a
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a_0;
	// UnityEngine.Vector3 Wand_LineComparer/Segment::b
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Wand_LineComparer/<ListSegments>d__7
struct U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E  : public RuntimeObject
{
	// System.Int32 Wand_LineComparer/<ListSegments>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Wand_LineComparer/Segment Wand_LineComparer/<ListSegments>d__7::<>2__current
	Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 ___U3CU3E2__current_1;
	// System.Int32 Wand_LineComparer/<ListSegments>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Wand_LineComparer/<ListSegments>d__7::line
	RuntimeObject* ___line_3;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Wand_LineComparer/<ListSegments>d__7::<>3__line
	RuntimeObject* ___U3CU3E3__line_4;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3> Wand_LineComparer/<ListSegments>d__7::<pt1>5__2
	RuntimeObject* ___U3Cpt1U3E5__2_5;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3> Wand_LineComparer/<ListSegments>d__7::<pt2>5__3
	RuntimeObject* ___U3Cpt2U3E5__3_6;
};

// System.Func`2<Wand_LineComparer/Segment,System.Single>
struct Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// RotaryHeart.Lib.DataBaseExample
struct DataBaseExample_t7A4C16AAED16F3872341CA295CBD2FDE392AD71A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// RotaryHeart.Lib.DataBaseExample/Generic_String RotaryHeart.Lib.DataBaseExample::_genericString
	Generic_String_t2234285FF3DD0045F70BB0D8E44510799176671D* ____genericString_4;
	// RotaryHeart.Lib.DataBaseExample/Generic_Generic RotaryHeart.Lib.DataBaseExample::_genericGeneric
	Generic_Generic_tB1F03B51C267DB4C7A9E26FF63F7968F7B08A1BF* ____genericGeneric_5;
	// RotaryHeart.Lib.DataBaseExample/S_GenericDictionary RotaryHeart.Lib.DataBaseExample::_stringGeneric
	S_GenericDictionary_tEC88A15AA034F3A437E51164ED24E0BEC610BAA3* ____stringGeneric_6;
	// RotaryHeart.Lib.DataBaseExample/I_GenericDictionary RotaryHeart.Lib.DataBaseExample::_intGeneric
	I_GenericDictionary_t86E2E60AAD364035640F35F6CC2B506E23FFADD4* ____intGeneric_7;
	// RotaryHeart.Lib.DataBaseExample/I_GO RotaryHeart.Lib.DataBaseExample::_intGameobject
	I_GO_t7C29E0EBAC722236FDD99C51948BD0BD73AD1823* ____intGameobject_8;
	// RotaryHeart.Lib.DataBaseExample/GO_I RotaryHeart.Lib.DataBaseExample::_gameobjectInt
	GO_I_tC9780EFC2870FC49D75F198A7B4FE7700A69535E* ____gameobjectInt_9;
	// RotaryHeart.Lib.DataBaseExample/S_GO RotaryHeart.Lib.DataBaseExample::_stringGameobject
	S_GO_t9CC5BA3CE53956A968CBCBF4D6627527FCBE49E3* ____stringGameobject_10;
	// RotaryHeart.Lib.DataBaseExample/GO_S RotaryHeart.Lib.DataBaseExample::_gameobjectString
	GO_S_tE24369AA562CDE70E9B7F375BB7438FFC805255F* ____gameobjectString_11;
	// RotaryHeart.Lib.DataBaseExample/S_Mat RotaryHeart.Lib.DataBaseExample::_stringMaterial
	S_Mat_t1667342C2C0221F2B2E415570E6484B4276D1A51* ____stringMaterial_12;
	// RotaryHeart.Lib.DataBaseExample/Mat_S RotaryHeart.Lib.DataBaseExample::_materialString
	Mat_S_tEC995C514A1AA1D071B9A010F4AE1696D9A92BF2* ____materialString_13;
	// RotaryHeart.Lib.DataBaseExample/V3_Q RotaryHeart.Lib.DataBaseExample::_vector3Quaternion
	V3_Q_t3E98CE3EF32328BB160DD9A514214ACA51DBAF34* ____vector3Quaternion_14;
	// RotaryHeart.Lib.DataBaseExample/Q_V3 RotaryHeart.Lib.DataBaseExample::_quaternionVector3
	Q_V3_t5BFCD4612600D3C64FA0F778F0BB8DCD3B866BB3* ____quaternionVector3_15;
	// RotaryHeart.Lib.DataBaseExample/S_AC RotaryHeart.Lib.DataBaseExample::_stringAudioClip
	S_AC_tED99629B7EE1A081768E144F52EB42FF7027A3AF* ____stringAudioClip_16;
	// RotaryHeart.Lib.DataBaseExample/AC_S RotaryHeart.Lib.DataBaseExample::_audioClipString
	AC_S_t10D18F8E63B0C30C3E681DC3F517857F1B3DE3B0* ____audioClipString_17;
	// RotaryHeart.Lib.DataBaseExample/C_Int RotaryHeart.Lib.DataBaseExample::_charInt
	C_Int_tFF9DCC017612B1974C79128888BB0B4157BD2136* ____charInt_18;
	// RotaryHeart.Lib.DataBaseExample/G_Int RotaryHeart.Lib.DataBaseExample::_gradientInt
	G_Int_t77F24BB7D96D4DF71CF71D2B5E1ABB501E6F8664* ____gradientInt_19;
	// RotaryHeart.Lib.DataBaseExample/Int_IntArray RotaryHeart.Lib.DataBaseExample::_intArray
	Int_IntArray_tCA02FE89D18AFDDB451DAC944CA794EEB3DB709B* ____intArray_20;
	// RotaryHeart.Lib.DataBaseExample/Enum_String RotaryHeart.Lib.DataBaseExample::_enumString
	Enum_String_t19E95F171D577147A376C14215928926762DAF8B* ____enumString_21;
	// RotaryHeart.Lib.DataBaseExample/AdvanGeneric_String RotaryHeart.Lib.DataBaseExample::_advancedGenericKey
	AdvanGeneric_String_t764F537F5D271CDA41CB8B687E7A376D52A8B234* ____advancedGenericKey_22;
};

// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate
struct FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D  : public MulticastDelegate_t
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate
struct MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F  : public MulticastDelegate_t
{
};

// RotaryHeart.Lib.NestedDB
struct NestedDB_t4DF32B83AC7A5D48247128D52FD39A8289D78883  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// RotaryHeart.Lib.MainDict RotaryHeart.Lib.NestedDB::nested
	MainDict_tAD488DB322F47FFDE577430CAD18D3C1C4F28BAA* ___nested_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// RotaryHeart.Lib.SerializableDictionary.RequiredReferences
struct RequiredReferences_tD5108FC3712926BDFE0E8346C499B6B1E98B49A9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.GameObject RotaryHeart.Lib.SerializableDictionary.RequiredReferences::_gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObject_4;
	// UnityEngine.Material RotaryHeart.Lib.SerializableDictionary.RequiredReferences::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_5;
	// UnityEngine.AudioClip RotaryHeart.Lib.SerializableDictionary.RequiredReferences::_audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____audioClip_6;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// HippoGamez.Wand_Spell_Data
struct Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.GameObject HippoGamez.Wand_Spell_Data::Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab_4;
	// UnityEngine.TextAsset HippoGamez.Wand_Spell_Data::recordedPoints
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___recordedPoints_5;
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// Zinnia.Action.Action
struct Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zinnia.Action.Action/BooleanUnityEvent Zinnia.Action.Action::ActivationStateChanged
	BooleanUnityEvent_t88DFD031AB6B49F4F56CEE582BEBD380DBA655E8* ___ActivationStateChanged_4;
	// System.Boolean Zinnia.Action.Action::isActivated
	bool ___isActivated_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Avatar_IK
struct Avatar_IK_t953B0564472F2E82ADA24AC10F745AA0FEB22218  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Avatar_IK::LeftHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___LeftHand_4;
	// UnityEngine.Transform Avatar_IK::RightHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___RightHand_5;
	// UnityEngine.Transform Avatar_IK::HeadTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___HeadTarget_6;
	// UnityEngine.Animator Avatar_IK::Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___Animator_7;
};

// HippoGamez.Controller_InputHandler
struct Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PressedDictionary HippoGamez.Controller_InputHandler::PressedDict
	PressedDictionary_t02FB23427C40371AB0EAEA98D081F3BF7C52B717* ___PressedDict_4;
	// TouchedDictionary HippoGamez.Controller_InputHandler::TouchedDict
	TouchedDictionary_t1BE185AF3B3BA9311328DEA86523B7EF70DBB622* ___TouchedDict_5;
	// AxisDictionary HippoGamez.Controller_InputHandler::AxisDict
	AxisDictionary_t3295F725C89679A9C1132617CBF51111AD73637E* ___AxisDict_6;
};

// HippoGamez.Controller_Manager
struct Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HippoGamez.Controller_InputHandler HippoGamez.Controller_Manager::leftController
	Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* ___leftController_5;
	// HippoGamez.Controller_InputHandler HippoGamez.Controller_Manager::rightController
	Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* ___rightController_6;
};

struct Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_StaticFields
{
	// HippoGamez.Controller_Manager HippoGamez.Controller_Manager::instance
	Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38* ___instance_4;
};

// DigitalRuby.PyroParticles.DemoScript
struct DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] DigitalRuby.PyroParticles.DemoScript::Prefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Prefabs_4;
	// UnityEngine.Light DigitalRuby.PyroParticles.DemoScript::Sun
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___Sun_5;
	// UnityEngine.Camera DigitalRuby.PyroParticles.DemoScript::SideCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___SideCamera_6;
	// UnityEngine.UI.Slider DigitalRuby.PyroParticles.DemoScript::TimeOfDaySlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___TimeOfDaySlider_7;
	// UnityEngine.UI.Toggle DigitalRuby.PyroParticles.DemoScript::MouseLookToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___MouseLookToggle_8;
	// UnityEngine.UI.Text DigitalRuby.PyroParticles.DemoScript::CurrentItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CurrentItemText_9;
	// UnityEngine.GameObject DigitalRuby.PyroParticles.DemoScript::currentPrefabObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentPrefabObject_10;
	// DigitalRuby.PyroParticles.FireBaseScript DigitalRuby.PyroParticles.DemoScript::currentPrefabScript
	FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* ___currentPrefabScript_11;
	// System.Int32 DigitalRuby.PyroParticles.DemoScript::currentPrefabIndex
	int32_t ___currentPrefabIndex_12;
	// DigitalRuby.PyroParticles.DemoScript/RotationAxes DigitalRuby.PyroParticles.DemoScript::axes
	int32_t ___axes_13;
	// System.Single DigitalRuby.PyroParticles.DemoScript::sensitivityX
	float ___sensitivityX_14;
	// System.Single DigitalRuby.PyroParticles.DemoScript::sensitivityY
	float ___sensitivityY_15;
	// System.Single DigitalRuby.PyroParticles.DemoScript::minimumX
	float ___minimumX_16;
	// System.Single DigitalRuby.PyroParticles.DemoScript::maximumX
	float ___maximumX_17;
	// System.Single DigitalRuby.PyroParticles.DemoScript::minimumY
	float ___minimumY_18;
	// System.Single DigitalRuby.PyroParticles.DemoScript::maximumY
	float ___maximumY_19;
	// System.Single DigitalRuby.PyroParticles.DemoScript::rotationX
	float ___rotationX_20;
	// System.Single DigitalRuby.PyroParticles.DemoScript::rotationY
	float ___rotationY_21;
	// UnityEngine.Quaternion DigitalRuby.PyroParticles.DemoScript::originalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___originalRotation_22;
};

// DigitalRuby.PyroParticles.FireBaseScript
struct FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource DigitalRuby.PyroParticles.FireBaseScript::AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___AudioSource_4;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::StartTime
	float ___StartTime_5;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::StopTime
	float ___StopTime_6;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::Duration
	float ___Duration_7;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::ForceAmount
	float ___ForceAmount_8;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::ForceRadius
	float ___ForceRadius_9;
	// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::IsProjectile
	bool ___IsProjectile_10;
	// UnityEngine.ParticleSystem[] DigitalRuby.PyroParticles.FireBaseScript::ManualParticleSystems
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___ManualParticleSystems_11;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::startTimeMultiplier
	float ___startTimeMultiplier_12;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::startTimeIncrement
	float ___startTimeIncrement_13;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::stopTimeMultiplier
	float ___stopTimeMultiplier_14;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::stopTimeIncrement
	float ___stopTimeIncrement_15;
	// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::<Starting>k__BackingField
	bool ___U3CStartingU3Ek__BackingField_16;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::<StartPercent>k__BackingField
	float ___U3CStartPercentU3Ek__BackingField_17;
	// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::<Stopping>k__BackingField
	bool ___U3CStoppingU3Ek__BackingField_18;
	// System.Single DigitalRuby.PyroParticles.FireBaseScript::<StopPercent>k__BackingField
	float ___U3CStopPercentU3Ek__BackingField_19;
};

// DigitalRuby.PyroParticles.FireCollisionForwardScript
struct FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DigitalRuby.PyroParticles.ICollisionHandler DigitalRuby.PyroParticles.FireCollisionForwardScript::CollisionHandler
	RuntimeObject* ___CollisionHandler_4;
};

// DigitalRuby.PyroParticles.FireLightScript
struct FireLightScript_tA16C4F8534DE564413CEC3592EF2C3F44342BA66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DigitalRuby.PyroParticles.FireLightScript::Seed
	float ___Seed_4;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::IntensityModifier
	float ___IntensityModifier_5;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.FireLightScript::IntensityMaxRange
	RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F ___IntensityMaxRange_6;
	// UnityEngine.Light DigitalRuby.PyroParticles.FireLightScript::firePointLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___firePointLight_7;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::lightIntensity
	float ___lightIntensity_8;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::seed
	float ___seed_9;
	// DigitalRuby.PyroParticles.FireBaseScript DigitalRuby.PyroParticles.FireLightScript::fireBaseScript
	FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* ___fireBaseScript_10;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::baseY
	float ___baseY_11;
};

// Iphone_Cameras
struct Iphone_Cameras_tDAE98F67D8AEA6BEC5D0448A941E2F408039F81D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer Iphone_Cameras::ScreenRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___ScreenRenderer_4;
	// UnityEngine.Camera[] Iphone_Cameras::Cameras
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___Cameras_5;
	// System.Int32 Iphone_Cameras::currentCamIndex
	int32_t ___currentCamIndex_6;
};

// Iphone_Main
struct Iphone_Main_t78D5F47AD1640E10FA93D4F349F8B5750902F3B0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HippoGamez.Testing_Controls
struct Testing_Controls_t4A14CEBD910D44AAEC0046CD0776799D6ABF571F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer HippoGamez.Testing_Controls::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HippoGamez.Wand_LineDrawer
struct Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI HippoGamez.Wand_LineDrawer::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_5;
	// UnityEngine.Transform HippoGamez.Wand_LineDrawer::FollowObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___FollowObject_6;
	// System.Collections.Generic.List`1<HippoGamez.Wand_Spell_Data> HippoGamez.Wand_LineDrawer::SpellList
	List_1_tAB303B47BE7C059E9B40A5E7BED2F174031D7B9C* ___SpellList_7;
	// System.Boolean HippoGamez.Wand_LineDrawer::isRecording
	bool ___isRecording_8;
	// UnityEngine.Vector3 HippoGamez.Wand_LineDrawer::oldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldPosition_9;
	// UnityEngine.LineRenderer HippoGamez.Wand_LineDrawer::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_10;
	// UnityEngine.Vector3 HippoGamez.Wand_LineDrawer::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_11;
};

// HippoGamez.Wand_LineSaver
struct Wand_LineSaver_t60B98B9295B56D9FDC46FE90DFCE36D8B3DF6DB0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HippoGamez.Wand_LineDrawer HippoGamez.Wand_LineSaver::LineDrawer
	Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* ___LineDrawer_4;
	// TMPro.TMP_InputField HippoGamez.Wand_LineSaver::SaveName
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___SaveName_5;
	// UnityEngine.Vector3[] HippoGamez.Wand_LineSaver::savedPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___savedPoints_6;
};

// Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>
struct Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	bool ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	bool ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_t12235B29D25E521224D1B3E7E775EBD17D5BFA71* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_tD80FF57F1E745668ED4120F4957F626D0602D776* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	bool ___value_13;
};

// Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>
struct Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	float ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	float ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_t686AACF1B4C121C206A9741317007D2B6DD9F689* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	UnityEvent_t6490727483865FDE17B834CA7CE45D8B1F8E8452* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	float ___value_13;
};

// Zinnia.Action.Action`3<System.Object,System.Boolean,System.Object>
struct Action_3_t78E3C1C038B259D2B0FC078000DA74292F7CF0DB  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	bool ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	bool ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	RuntimeObject* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	RuntimeObject* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	RuntimeObject* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	RuntimeObject* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	bool ___value_13;
};

// Zinnia.Action.Action`3<System.Object,System.Single,System.Object>
struct Action_3_t495F18D14335CEFDB39761D66DC1E2C5DC12DCC6  : public Action_t1E748374AFC2E556FD182756180DEC3D5BA6CC70
{
	// TValue Zinnia.Action.Action`3::initialValue
	float ___initialValue_6;
	// TValue Zinnia.Action.Action`3::defaultValue
	float ___defaultValue_7;
	// System.Collections.Generic.List`1<TSelf> Zinnia.Action.Action`3::sources
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___sources_8;
	// TEvent Zinnia.Action.Action`3::Activated
	RuntimeObject* ___Activated_9;
	// TEvent Zinnia.Action.Action`3::ValueChanged
	RuntimeObject* ___ValueChanged_10;
	// TEvent Zinnia.Action.Action`3::ValueUnchanged
	RuntimeObject* ___ValueUnchanged_11;
	// TEvent Zinnia.Action.Action`3::Deactivated
	RuntimeObject* ___Deactivated_12;
	// TValue Zinnia.Action.Action`3::value
	float ___value_13;
};

// DigitalRuby.PyroParticles.FireConstantBaseScript
struct FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F  : public FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA
{
	// DigitalRuby.PyroParticles.LoopingAudioSource DigitalRuby.PyroParticles.FireConstantBaseScript::LoopingAudioSource
	LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* ___LoopingAudioSource_20;
};

// DigitalRuby.PyroParticles.FireProjectileScript
struct FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D  : public FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA
{
	// UnityEngine.GameObject DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ProjectileColliderObject_20;
	// UnityEngine.AudioSource DigitalRuby.PyroParticles.FireProjectileScript::ProjectileCollisionSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ProjectileCollisionSound_21;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ProjectileExplosionParticleSystem_22;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionRadius
	float ___ProjectileExplosionRadius_23;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionForce
	float ___ProjectileExplosionForce_24;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderDelay
	float ___ProjectileColliderDelay_25;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderSpeed
	float ___ProjectileColliderSpeed_26;
	// UnityEngine.Vector3 DigitalRuby.PyroParticles.FireProjectileScript::ProjectileDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ProjectileDirection_27;
	// UnityEngine.LayerMask DigitalRuby.PyroParticles.FireProjectileScript::ProjectileCollisionLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ProjectileCollisionLayers_28;
	// UnityEngine.ParticleSystem[] DigitalRuby.PyroParticles.FireProjectileScript::ProjectileDestroyParticleSystemsOnCollision
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___ProjectileDestroyParticleSystemsOnCollision_29;
	// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate DigitalRuby.PyroParticles.FireProjectileScript::CollisionDelegate
	FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* ___CollisionDelegate_30;
	// System.Boolean DigitalRuby.PyroParticles.FireProjectileScript::collided
	bool ___collided_31;
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

// DigitalRuby.PyroParticles.MeteorSwarmScript
struct MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC  : public FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA
{
	// UnityEngine.GameObject DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MeteorPrefab_20;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorExplosionParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___MeteorExplosionParticleSystem_21;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorShrapnelParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___MeteorShrapnelParticleSystem_22;
	// UnityEngine.Material[] DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___MeteorMaterials_23;
	// UnityEngine.Mesh[] DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorMeshes
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___MeteorMeshes_24;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::DestinationRadius
	float ___DestinationRadius_25;
	// UnityEngine.Vector3 DigitalRuby.PyroParticles.MeteorSwarmScript::Source
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Source_26;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::SourceRadius
	float ___SourceRadius_27;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::TimeToImpact
	float ___TimeToImpact_28;
	// DigitalRuby.PyroParticles.RangeOfIntegers DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorsPerSecondRange
	RangeOfIntegers_t2B1CBD17A8EB3CE2902B2B130ABDEBFCF686316F ___MeteorsPerSecondRange_29;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.MeteorSwarmScript::ScaleRange
	RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F ___ScaleRange_30;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorLifeTimeRange
	RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F ___MeteorLifeTimeRange_31;
	// UnityEngine.AudioClip[] DigitalRuby.PyroParticles.MeteorSwarmScript::EmissionSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___EmissionSounds_32;
	// UnityEngine.AudioClip[] DigitalRuby.PyroParticles.MeteorSwarmScript::ExplosionSounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___ExplosionSounds_33;
	// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate DigitalRuby.PyroParticles.MeteorSwarmScript::CollisionDelegate
	MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* ___CollisionDelegate_34;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::elapsedSecond
	float ___elapsedSecond_35;
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

// Zinnia.Action.BooleanAction
struct BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E  : public Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344
{
};

// Zinnia.Action.FloatAction
struct FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62  : public Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623
{
	// System.Single Zinnia.Action.FloatAction::equalityTolerance
	float ___equalityTolerance_14;
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

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
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

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 m_Items[1];

	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689  : public RuntimeArray
{
	ALIGN_FIELD (8) Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* m_Items[1];

	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
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


// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionaryBase_2__ctor_mE19364172A0963092CEFD221C9889DA3472E1C3D_gshared (SerializableDictionaryBase_2_tFD5409215BD28E7BDA14F557A9985AD27499285F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Wand_LineComparer/Segment,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFFC2E1EAB1D9099348ED7563B9D8A41F5899CEC8_gshared (Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Wand_LineComparer/Segment,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisSegment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA34B22D87FA09E68D9940ADF4F0B560DA927FB67_gshared (RuntimeObject* ___source0, Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533* ___selector1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4202FD457BB995E8553D010D1E861B7BD2F60BB0_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableDictionaryBase_2_ContainsKey_mE51675D8CAAC306434DB21CF6E7F18A910B4B689_gshared (SerializableDictionaryBase_2_tFD5409215BD28E7BDA14F557A9985AD27499285F* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializableDictionaryBase_2_get_Item_m095BBA95057A2AE0E180C192BA1E797AECD559D3_gshared (SerializableDictionaryBase_2_tFD5409215BD28E7BDA14F557A9985AD27499285F* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue Zinnia.Action.Action`3<System.Object,System.Boolean,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Action_3_get_Value_m5CC34C4B0E587E7F21B4D327E5FDF89EF8E1C0A0_gshared_inline (Action_3_t78E3C1C038B259D2B0FC078000DA74292F7CF0DB* __this, const RuntimeMethod* method) ;
// TValue Zinnia.Action.Action`3<System.Object,System.Single,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Action_3_get_Value_m9ACA42E3B7A6CF3BB56366CF51908C3CF2B46704_gshared_inline (Action_3_t495F18D14335CEFDB39761D66DC1E2C5DC12DCC6* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.Vector3>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared (SerializableDictionaryBase_2_t62F22C7A3D06E9337C547541550E2353BF519EE7* __this, const RuntimeMethod* method) ;
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Char,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionaryBase_2__ctor_m1580EC95BD547106BAF190D852445D6B64E5C50A_gshared (SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443* __this, const RuntimeMethod* method) ;
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionaryBase_2__ctor_m98C2017BF61BA95551F0563DF32C29BEFF508D09_gshared (SerializableDictionaryBase_2_t413CCA8AABA321D3F39A18742F5490C87C1B1E37* __this, const RuntimeMethod* method) ;
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionaryBase_2__ctor_mBBA2DCF09B9698C49062FE25E6DBBA50B5003A37_gshared (SerializableDictionaryBase_2_t4D9FE4E3E06AB905064BF421765CD63F2FF8332E* __this, const RuntimeMethod* method) ;
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Vector3,UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionaryBase_2__ctor_m38B5E0368DD84C9557CBB03167609E82FF87A87D_gshared (SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA* __this, const RuntimeMethod* method) ;
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Quaternion,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionaryBase_2__ctor_m76CE5A307320065BEA78715868F2E90AC77D6D2D_gshared (SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6* __this, const RuntimeMethod* method) ;

// System.Void Avatar_IK::IKFollow(UnityEngine.AvatarIKGoal,UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_IK_IKFollow_m24E77705A34497260EAF79298FF6EE6C5A0D54FE (Avatar_IK_t953B0564472F2E82ADA24AC10F745AA0FEB22218* __this, int32_t ___limb0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target1, float ___weight2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mDCC8C8792E2E23C133AF3D91A96C49BEBC828F79 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___weight0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPosition_m39A2C326BDE156360972C5EEDA1F9ACEBE34A8A6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m8C707F505FFE2A6F36BE81ED12786B941D3B990C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_mB7BE88C93990186D94AF75439E2F216D6ECBCDEE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goalPosition1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m5F0F5BD5A9A85912EA1CDF32917FE483E849978D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotation_m328A64AD20922F0F2A1D0CD5DBB9F01FE7675DF6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goalRotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Pressed,Zinnia.Action.BooleanAction>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m0616CA32A3F78EDFAE56196566C5B5004E792191 (SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mE19364172A0963092CEFD221C9889DA3472E1C3D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Touched,Zinnia.Action.BooleanAction>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mABFBD5EAC965AF71DFE8A1BD166DDF188F3B3995 (SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mE19364172A0963092CEFD221C9889DA3472E1C3D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Axis,Zinnia.Action.FloatAction>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mB94B145453FCD5D7A4446E637993A56E9E882135 (SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mE19364172A0963092CEFD221C9889DA3472E1C3D_gshared)(__this, method);
}
// System.String HippoGamez.Wand_LineSaver::SerializeVector3Array(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Wand_LineSaver_SerializeVector3Array_m15A891C4AB29BAF49B6B1CC2E091809A0B0C4765 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___aVectors0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single Wand_LineComparer::DifferenceBetweenLines(UnityEngine.Vector3[],UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wand_LineComparer_DifferenceBetweenLines_mC4CF62B624345155514FBA3EF6FB1FC6AFC8AEA8 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___drawn0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___toMatch1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Wand_LineComparer::WalkAlongLine(System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Wand_LineComparer_WalkAlongLine_m8E270129A57C25870FBB9DF6B44729B241946C9D (RuntimeObject* ___line0, float ___maxStep1, const RuntimeMethod* method) ;
// System.Single Wand_LineComparer::SqrDistanceToLine(UnityEngine.Vector3[],UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wand_LineComparer_SqrDistanceToLine_mA9CB73F21F4BFFD60E1F9F432EB6D44A7A9B76CA (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___line0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Wand_LineComparer/<WalkAlongLine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkAlongLineU3Ed__4__ctor_m770DA470D165F90DE5F8E8EFEAF9AD091BE9636C (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Wand_LineComparer/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mEA2ABAE2FF6CFB8C207991DB63136C5022D964A1 (U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Wand_LineComparer/Segment> Wand_LineComparer::ListSegments(System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Wand_LineComparer_ListSegments_mE4FC239385F0A2C8C66C49B071258B1712288F22 (RuntimeObject* ___line0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Wand_LineComparer/Segment,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFFC2E1EAB1D9099348ED7563B9D8A41F5899CEC8 (Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mFFC2E1EAB1D9099348ED7563B9D8A41F5899CEC8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Wand_LineComparer/Segment,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisSegment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA34B22D87FA09E68D9940ADF4F0B560DA927FB67 (RuntimeObject* ___source0, Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533*, const RuntimeMethod*))Enumerable_Select_TisSegment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA34B22D87FA09E68D9940ADF4F0B560DA927FB67_gshared)(___source0, ___selector1, method);
}
// System.Single System.Linq.Enumerable::Min(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Min_mAD5CE1B44AFFA09AEDCC1F32CE0C00ADAA445D3F (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Wand_LineComparer::ProjectPointOnLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Wand_LineComparer_ProjectPointOnLineSegment_m97F94388C51ECE811495B4D07D5926EE027BD26A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Wand_LineComparer/<ListSegments>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7__ctor_mB74B9E55DD9AEA12D56AC9B8252241E34E1E8CCD (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Wand_LineComparer::ProjectPointOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Wand_LineComparer_ProjectPointOnLine_m9B31F1CD3226380876EE7A3F52C700B209039BBB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lineVec1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) ;
// System.Int32 Wand_LineComparer::PointOnWhichSideOfLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wand_LineComparer_PointOnWhichSideOfLineSegment_m39B9421E10D1F608ABFC2F013A53FFBC52E72913 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2 (const RuntimeMethod* method) ;
// System.Void Wand_LineComparer/<WalkAlongLine>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkAlongLineU3Ed__4_U3CU3Em__Finally1_m86B4BA3DD9FFA609562B265E8FD941C9F76D14A1 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) ;
// System.Void Wand_LineComparer/<WalkAlongLine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkAlongLineU3Ed__4_System_IDisposable_Dispose_mDD0E991C237EB1805AFFE7E9F3BDBD1628792655 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3> Wand_LineComparer/<WalkAlongLine>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWalkAlongLineU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_Vector3U3E_GetEnumerator_m434C1CC5B68216B45FC172C0FCFC15228F7C01BA (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) ;
// System.Single Wand_LineComparer::SqrDistanceToSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wand_LineComparer_SqrDistanceToSegment_mE148C188CE8BF07520A76F05CE865FDF8C826DFF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) ;
// System.Void Wand_LineComparer/<ListSegments>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7_U3CU3Em__Finally1_mE9DDBC4FBE22DBD3E2408DDF289FC90F4241C5B2 (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) ;
// System.Void Wand_LineComparer/<ListSegments>d__7::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7_U3CU3Em__Finally2_mD6C76B5C6B4B029792CF6DC5703C2BE647929B91 (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) ;
// System.Void Wand_LineComparer/<ListSegments>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7_System_IDisposable_Dispose_m0E6744E1D2F2B3D4CB68FEB7F81039E9310FE6F2 (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Wand_LineComparer/Segment> Wand_LineComparer/<ListSegments>d__7::System.Collections.Generic.IEnumerable<Wand_LineComparer.Segment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CListSegmentsU3Ed__7_System_Collections_Generic_IEnumerableU3CWand_LineComparer_SegmentU3E_GetEnumerator_m69BF795B21F398055ACDD4F8ED8C7BA562A633AD (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single DigitalRuby.PyroParticles.DemoScript::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DemoScript_ClampAngle_m6601DD21F3F22176804C09BC8EC67A4A9D5EDB8B (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::StartCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_StartCurrent_mF55945B9D5411844726303946FFC5DCA3BB73F62 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::NextPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_NextPrefab_m2C96C81AFEF54B638E6AE4D7A0A575B1A267C180 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::PreviousPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_PreviousPrefab_mC13434ABDE1211304228D57B812711F9FF99EB6A (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<DigitalRuby.PyroParticles.FireConstantBaseScript>()
inline FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F* GameObject_GetComponent_TisFireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F_mB6B6267CC2E9EDDBA06742641FBF9F120C4C81A8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DigitalRuby.PyroParticles.FireBaseScript>()
inline FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* GameObject_GetComponent_TisFireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA_mA2973D48B4E721392510B3B1B80B1E77F4A3FE3C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<DigitalRuby.PyroParticles.FireProjectileScript>()
inline FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* GameObject_GetComponentInChildren_TisFireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D_m772DD29650BCBA16D8782C851D55F0352D2980B6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B (String_t* ___layerName0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::StopCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_StopCurrent_m48FBCE59BBB624909D57EC1378A2360B4553E5A5 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::BeginEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_BeginEffect_m1417FD8AA1B0845B746E835E02BF4FC33934BECF (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_UpdateUI_m30C2E670F78EBD9A10869829BE473228558EB61C (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::UpdateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_UpdateMovement_m31DCB99F031CF726EBD7C86A75DE4B186811862A (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::UpdateMouseLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_UpdateMouseLook_m8287DD553C748523F62731E35C861B73B0B54D69 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.DemoScript::UpdateEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_UpdateEffect_m854534AA349BEF8127F7519079070AE89E71A08E (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupEverythingCoRoutineU3Ed__12__ctor_m1F5977C9D2842DE4E7480DB3A7BC0F831E8D421D (U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Int32 System.Array::IndexOf<UnityEngine.ParticleSystem>(T[],T)
inline int32_t Array_IndexOf_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mB79B3B2B2F8008770413B79335C256A448BA6E4F (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___array0, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4202FD457BB995E8553D010D1E861B7BD2F60BB0_gshared)(___array0, ___value1, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startDelay_m548FABFC02F1542B2B84EB3EBD9148C7CEB5DB6D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constant(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startDelay(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_Starting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_Starting_m27A8262E14AD197A3D5CE0284E9E20C2EF9002B4_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m23BAD9245C3D950AEF3FA7D8F65A95FA65564E01 (int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::CreateExplosion(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_CreateExplosion_m02C4734B17572809135CBDC9CB1A87B7A4B4DDA4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___radius1, float ___force2, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::StartParticleSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_StartParticleSystems_mB1F61707495084C8F6E957FEDAFA6BEEBDA03EF4 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<DigitalRuby.PyroParticles.FireCollisionForwardScript>()
inline FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* Component_GetComponentInChildren_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m48C9AEBA24E05215F763E9FAEE1F7D72E500DB30 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::get_Stopping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FireBaseScript_get_Stopping_m46A8786A7F92D219062A52CA1DBC4F8E0E2666C3_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_StopPercent(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_StopPercent_m2E32FC2291DC949593750986944F17AAB1C4AC62_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::get_Starting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FireBaseScript_get_Starting_mC8C91AABB0DCB029D6440C6CF4EC4DED9A422227_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_StartPercent(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_StartPercent_mCC105A212924F673CFF75FFF91F09A369D0901A9_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___explosionForce0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___explosionPosition1, float ___explosionRadius2, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_Stopping(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_Stopping_mB4BAB9FC89301491B7D5CD0B02D8D6534DAE8C04_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DigitalRuby.PyroParticles.FireBaseScript::CleanupEverythingCoRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireBaseScript_CleanupEverythingCoRoutine_m76D44CD85791345C0F08BE94F15A7FD8A5A9B28C (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::set_AudioSource(UnityEngine.AudioSource)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m439AD9812112D322BB4C41C368D03C9312DB6734_inline (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AudioSource DigitalRuby.PyroParticles.LoopingAudioSource::get_AudioSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::set_TargetVolume(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_m975CF4B21304A1085A6879A7CB25B78811B6434D_inline (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::get_TargetVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_mC3CB5787BFF7E38C4E78600E167110FE22DDEE0D_inline (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_m17B0282DD31BDE189F89745BD8253BE5CE78AD7E (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, float ___targetVolume0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Awake_m13BE4C5D1133DBCD241E82404CCB7A08203613A7 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::.ctor(UnityEngine.MonoBehaviour,UnityEngine.AudioSource,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource__ctor_m6365AC8B3A553F5C9F972C2F5656D46298E5B5CB (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___script0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource1, float ___startMultiplier2, float ___stopMultiplier3, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Update_m6DC4C16380E2C9E80B027129B386353CC2E632EA (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Update_m83C94D0F79026407910AD03D1F6BEC43E92D9B49 (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Start_m784DEE09C71CE4F64187E59480DEB6717B7D76C6 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_m6FAA719DEFBAF291DBA56622EEF8B327AD172F8B (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Stop_m2A966C14063180C7ACC8FEC27EFF6F9B422C02B4 (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Stop_mDF9DD9CB9ED6F4FFB053CCEB3DE22280FD8716D6 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireBaseScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript__ctor_m46C036B7EBCE1C61A8F51E7B0B8AD050B0C9B4E5 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43 (const RuntimeMethod* method) ;
// System.Single DigitalRuby.PyroParticles.FireBaseScript::get_StopPercent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FireBaseScript_get_StopPercent_m11AFFC7C92709E3FB28A5D114B45BEBA578CA425_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// System.Single DigitalRuby.PyroParticles.FireBaseScript::get_StartPercent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FireBaseScript_get_StartPercent_m86D7B0BBBA3E9D1F0E3D61A88147C7367EAEEE45_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCollisionAfterDelayU3Ed__12__ctor_m82AA041B895FFBA530F5CC612575CB1E5D836D9A (U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DigitalRuby.PyroParticles.FireProjectileScript::SendCollisionAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireProjectileScript_SendCollisionAfterDelay_m753C79A855C1AC51CBC5EFAFEDED18CC025BBB43 (FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::Invoke(DigitalRuby.PyroParticles.FireProjectileScript,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_inline (FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnMeteorU3Ed__18__ctor_m21B07FDCC5E4271176365AB4C3A879FC344E9172 (U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DigitalRuby.PyroParticles.MeteorSwarmScript::SpawnMeteor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmScript_SpawnMeteor_m525EE44CE87BC8BF4B5073DCBB8CB9634F6A1684 (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::SpawnMeteors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_SpawnMeteors_mB7B8033AB21186B7F26E9CACDA706C85F0AF0BB5 (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volumeScale1, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupMeteorU3Ed__22__ctor_m1C03E818D1B4984EB0AF976270398A002500704A (U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::Invoke(DigitalRuby.PyroParticles.MeteorSwarmScript,UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_inline (MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::PlayCollisionSound(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_PlayCollisionSound_m40C26728C4065A4C3483D87F5CD7805C61F1D083 (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DigitalRuby.PyroParticles.MeteorSwarmScript::CleanupMeteor(System.Single,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmScript_CleanupMeteor_m9B7F87700A482924A0BF012767E2072167A1292F (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, float ___delay0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rigidbody::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_mass_m09DDDDC437499B83B3BD0D77C134BFDC3E667054 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DigitalRuby.PyroParticles.FireCollisionForwardScript>()
inline FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* GameObject_GetComponent_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m6F22622E0D063D8A1083175EAEF4236C8F164F86 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.TrailRenderer>()
inline TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.TrailRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_startWidth_m63B133730FF263B3E8153DDCD095194202F820AC (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_endWidth_mCB89A9AEFE6B16FAA2AF9BA9570399C908477578 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrailRenderer::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_time_mD4760D84A531B310E2A4069F87B4E2EF2FEF4C23 (TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.PyroParticles.SingleLineAttribute::set_Tooltip(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SingleLineAttribute_set_Tooltip_mD5866418BA4960E9E4C470A7999E663FD1772629_inline (SingleLineAttribute_t13F8F42D28C340C6FBFF21E3E726CE1E1F1FF6EF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// HippoGamez.Controller_InputHandler HippoGamez.Controller_Manager::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* Controller_Manager_get_Right_mF3FB5D6E65BE4060AF6E3433678BD907FDE0A2E4 (const RuntimeMethod* method) ;
// System.Boolean HippoGamez.Controller_InputHandler::GetValue(Pressed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_InputHandler_GetValue_mCE56592DB7325E9CC2F855E7F7FB82A7D7B05293 (Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* __this, int32_t ___pressed0, const RuntimeMethod* method) ;
// System.Boolean HippoGamez.Controller_InputHandler::GetValue(Touched)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_InputHandler_GetValue_mB20EC8E740148588CA0286FDF88BDFEE10C9CE13 (Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* __this, int32_t ___touched0, const RuntimeMethod* method) ;
// System.Single HippoGamez.Controller_InputHandler::GetValue(Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Controller_InputHandler_GetValue_m5407C667CC8783F7A87734AF10572C29450CBF04 (Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* __this, int32_t ___axis0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD16970C5EE189AB763DADA2434A719FDB3FBF542 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Pressed,Zinnia.Action.BooleanAction>::ContainsKey(TKey)
inline bool SerializableDictionaryBase_2_ContainsKey_m81729DC7A0B3702E73565C001628BC6999B5B969 (SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90*, int32_t, const RuntimeMethod*))SerializableDictionaryBase_2_ContainsKey_mE51675D8CAAC306434DB21CF6E7F18A910B4B689_gshared)(__this, ___key0, method);
}
// TValue RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Pressed,Zinnia.Action.BooleanAction>::get_Item(TKey)
inline BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* SerializableDictionaryBase_2_get_Item_m0685ADF395D9BCF47C3B3D0F19913217FF7FF8FB (SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* (*) (SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90*, int32_t, const RuntimeMethod*))SerializableDictionaryBase_2_get_Item_m095BBA95057A2AE0E180C192BA1E797AECD559D3_gshared)(__this, ___key0, method);
}
// TValue Zinnia.Action.Action`3<Zinnia.Action.BooleanAction,System.Boolean,Zinnia.Action.BooleanAction/UnityEvent>::get_Value()
inline bool Action_3_get_Value_m0549FD302B64DDC652237EC80150446CE3F63AFB_inline (Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Action_3_tAB0B844DB62E1DB5EABF32957B0CBE95441E7344*, const RuntimeMethod*))Action_3_get_Value_m5CC34C4B0E587E7F21B4D327E5FDF89EF8E1C0A0_gshared_inline)(__this, method);
}
// System.Boolean RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Touched,Zinnia.Action.BooleanAction>::ContainsKey(TKey)
inline bool SerializableDictionaryBase_2_ContainsKey_m9E3103D80B750291CAED69BE8306F28FCC8E7E35 (SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E*, int32_t, const RuntimeMethod*))SerializableDictionaryBase_2_ContainsKey_mE51675D8CAAC306434DB21CF6E7F18A910B4B689_gshared)(__this, ___key0, method);
}
// TValue RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Touched,Zinnia.Action.BooleanAction>::get_Item(TKey)
inline BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* SerializableDictionaryBase_2_get_Item_m7D19BDD1F71DBFFA4EBE9BDBF2132C3918778D6A (SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* (*) (SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E*, int32_t, const RuntimeMethod*))SerializableDictionaryBase_2_get_Item_m095BBA95057A2AE0E180C192BA1E797AECD559D3_gshared)(__this, ___key0, method);
}
// System.Boolean RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Axis,Zinnia.Action.FloatAction>::ContainsKey(TKey)
inline bool SerializableDictionaryBase_2_ContainsKey_m22FEDFB5EC34233F6A87DD1B0B1371202435C999 (SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69*, int32_t, const RuntimeMethod*))SerializableDictionaryBase_2_ContainsKey_mE51675D8CAAC306434DB21CF6E7F18A910B4B689_gshared)(__this, ___key0, method);
}
// TValue RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<Axis,Zinnia.Action.FloatAction>::get_Item(TKey)
inline FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* SerializableDictionaryBase_2_get_Item_mFAA59C8A7875C915FE421B2DD8885C1E5208F96E (SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* (*) (SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69*, int32_t, const RuntimeMethod*))SerializableDictionaryBase_2_get_Item_m095BBA95057A2AE0E180C192BA1E797AECD559D3_gshared)(__this, ___key0, method);
}
// TValue Zinnia.Action.Action`3<Zinnia.Action.FloatAction,System.Single,Zinnia.Action.FloatAction/UnityEvent>::get_Value()
inline float Action_3_get_Value_m6F9BDD5B1ED341789850F50A3AED1F79C3C32621_inline (Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Action_3_tF46623224A87298328D210CF1DC16D68CAD7C623*, const RuntimeMethod*))Action_3_get_Value_m9ACA42E3B7A6CF3BB56366CF51908C3CF2B46704_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void HippoGamez.Wand_LineDrawer::Record()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_Record_m7C12A42C941235543BFB46245A29D949E367B41E (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) ;
// System.Void HippoGamez.Wand_LineDrawer::CheckRecordingPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_CheckRecordingPoints_m21B09CCC30F9A1782862DDBA9EC059EE94D8B9C4 (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void HippoGamez.Wand_LineDrawer::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_CreateLine_m29F972C0AA57F719D5097DAC8DD8D3FC4F81ED15 (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void HippoGamez.Wand_LineDrawer::UpdateLine(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_UpdateLine_m7D3A5A7A56B36E855CE82C1116D96EF6DA8531B3 (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LineRenderer::get_positionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.Vector3>(T[]&,System.Int32)
inline void Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**, int32_t, const RuntimeMethod*))Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_gshared)(___array0, ___newSize1, method);
}
// System.Int32 UnityEngine.LineRenderer::GetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_GetPositions_m22BED8498DA2527EC806F389B82EFD0E2574C840 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<HippoGamez.Wand_Spell_Data>::GetEnumerator()
inline Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C List_1_GetEnumerator_mA97EB0EEBAD537616578832E89EF24F89A08902B (List_1_tAB303B47BE7C059E9B40A5E7BED2F174031D7B9C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C (*) (List_1_tAB303B47BE7C059E9B40A5E7BED2F174031D7B9C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<HippoGamez.Wand_Spell_Data>::Dispose()
inline void Enumerator_Dispose_m251071555886405496EFB79059552922EBF92D4E (Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<HippoGamez.Wand_Spell_Data>::get_Current()
inline Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* Enumerator_get_Current_mE7CC713093F09975C835E945325BE6894D430168_inline (Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C* __this, const RuntimeMethod* method)
{
	return ((  Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* (*) (Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Vector3[] HippoGamez.Wand_Spell_Data::GetRecordedPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Wand_Spell_Data_GetRecordedPoints_m293B02EAF408DBF927B3D4F2642FD8752BDBAACF (Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* __this, const RuntimeMethod* method) ;
// System.Boolean Wand_LineComparer::CompareLines(UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Wand_LineComparer_CompareLines_m12A7FD7595CFAFDB4E4C550331E9802BFFB90D4A (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___drawn0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___toMatch1, float ___threshold2, const RuntimeMethod* method) ;
// System.Single Wand_LineComparer::CompareLines(UnityEngine.Vector3[],UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wand_LineComparer_CompareLines_m3A3F12A02CE4113F0091EFD5804945C7459585A3 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___drawn0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___toMatch1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void HippoGamez.Wand_LineDrawer::ActivateSpell(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_ActivateSpell_m3099D91FF5994F4C5DE877114165C10D82708A4D (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SpellPrefab0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<HippoGamez.Wand_Spell_Data>::MoveNext()
inline bool Enumerator_MoveNext_mE2C1B7C4018B3B1EC621DA5686682AC9CFC9D43D (Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void HippoGamez.Wand_LineSaver::Save(UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineSaver_Save_mD1783130AEB9795FCD433D43413BE6A838E3F4EC (Wand_LineSaver_t60B98B9295B56D9FDC46FE90DFCE36D8B3DF6DB0* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9 (const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E (StringBuilder_t* __this, float ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] HippoGamez.Wand_LineSaver::DeserializeVector3Array(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Wand_LineSaver_DeserializeVector3Array_mB69336ED8B5CFAD2C0944B8BA9826A84AD53F458 (String_t* ___aData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass::Equals(RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancedGenericClass_Equals_mAA940C368AD8933F9D055D26C5D96B837F4CF59C (AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* __this, AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* ___other0, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/ClassTest,System.String>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m537E286071018D8015FF58E6E1476891B3189BCA (SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/ClassTest,RotaryHeart.Lib.DataBaseExample/ClassTest>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mB533A587D149BFE81E55309ED24E6EF22EF437A7 (SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Char,System.Int32>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m1580EC95BD547106BAF190D852445D6B64E5C50A (SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m1580EC95BD547106BAF190D852445D6B64E5C50A_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Gradient,System.Int32>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m6953F1B459B4A4CC98BDD79DD4CF9760B3A31E74 (SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m98C2017BF61BA95551F0563DF32C29BEFF508D09_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,UnityEngine.GameObject>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m8B1AE0AC5C2B827EF9D4C4CA45518DC974691C3D (SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mBBA2DCF09B9698C49062FE25E6DBBA50B5003A37_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.GameObject,System.Int32>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m3B93FA3EC99D99D646DB8096383FCDAC4DA88AAB (SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m98C2017BF61BA95551F0563DF32C29BEFF508D09_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.GameObject>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mC6344D14CD6733E5F14776EA4E328DD981D1225C (SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.GameObject,System.String>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mB6F532F0265BDD305727B82ACCE79E070B1A66A5 (SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.Material>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m456F702469F49C42B0D467DBE28B2B1EB2E0D7B7 (SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Material,System.String>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m49F2F599156D6E39076FA33B338CECAA3CA0CA9F (SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.AudioClip>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m079FF38429225C8FA576951A9C43CFA8ED3744F0 (SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.AudioClip,System.String>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mE0768488EECC889A9D8CAA79EE14583C9A3856FF (SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,UnityEngine.Sprite>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m05B2CB515AC1B1CA1E0BABBF783BC9F8C28E8BEE (SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Vector3,UnityEngine.Quaternion>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m38B5E0368DD84C9557CBB03167609E82FF87A87D (SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m38B5E0368DD84C9557CBB03167609E82FF87A87D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.Quaternion,UnityEngine.Vector3>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m76CE5A307320065BEA78715868F2E90AC77D6D2D (SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m76CE5A307320065BEA78715868F2E90AC77D6D2D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,RotaryHeart.Lib.DataBaseExample/ClassTest>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m630CD0A30091E0E690F9BA232799904E2A6CE09F (SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.DataBaseExample/ClassTest>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m9CACD18445AA3F07EB36B0E6BF42247CF4BC43B4 (SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mBBA2DCF09B9698C49062FE25E6DBBA50B5003A37_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.DataBaseExample/ArrayTest>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m205792B75CF21B5FE3C96466D1FE8D905622029F (SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mBBA2DCF09B9698C49062FE25E6DBBA50B5003A37_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/EnumExample,System.String>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mB491E5CFA6C03DA0155F54C417B74A3CF5CD7AC1 (SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mE19364172A0963092CEFD221C9889DA3472E1C3D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass,System.String>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mFE621481CCA0CB0B01061F07977C956890BBB563 (SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.String,RotaryHeart.Lib.Example>::.ctor()
inline void SerializableDictionaryBase_2__ctor_mE391E92B13E922D250B185E31474803A7735795C (SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_m749D34C8B3FE64E4E51C7EF4F385EFCFBA021B5D_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<System.Int32,RotaryHeart.Lib.NestedExample>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m533EF54A5605862010AD147FAD45F2C35D8CDB05 (SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mBBA2DCF09B9698C49062FE25E6DBBA50B5003A37_gshared)(__this, method);
}
// System.Void RotaryHeart.Lib.SerializableDictionary.SerializableDictionaryBase`2<UnityEngine.QueryTriggerInteraction,System.String>::.ctor()
inline void SerializableDictionaryBase_2__ctor_m86A1AEBB9197D31B5DC481BAE2F19185CD844844 (SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923*, const RuntimeMethod*))SerializableDictionaryBase_2__ctor_mE19364172A0963092CEFD221C9889DA3472E1C3D_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
// System.Void Avatar_IK::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_IK_Update_m11F77EB9F53B039806D2F9ECE0C5BFC4642CC413 (Avatar_IK_t953B0564472F2E82ADA24AC10F745AA0FEB22218* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Avatar_IK::OnAnimatorIK(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_IK_OnAnimatorIK_mAAE86F323254B3E19820DED76D787567455942C6 (Avatar_IK_t953B0564472F2E82ADA24AC10F745AA0FEB22218* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	{
		// IKFollow(AvatarIKGoal.LeftHand, LeftHand, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___LeftHand_4;
		Avatar_IK_IKFollow_m24E77705A34497260EAF79298FF6EE6C5A0D54FE(__this, 2, L_0, (1.0f), NULL);
		// IKFollow(AvatarIKGoal.RightHand, RightHand, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___RightHand_5;
		Avatar_IK_IKFollow_m24E77705A34497260EAF79298FF6EE6C5A0D54FE(__this, 3, L_1, (1.0f), NULL);
		// Animator.SetLookAtWeight(1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___Animator_7;
		NullCheck(L_2);
		Animator_SetLookAtWeight_mDCC8C8792E2E23C133AF3D91A96C49BEBC828F79(L_2, (1.0f), NULL);
		// Animator.SetLookAtPosition(HeadTarget.position);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___Animator_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___HeadTarget_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		Animator_SetLookAtPosition_m39A2C326BDE156360972C5EEDA1F9ACEBE34A8A6(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Avatar_IK::IKFollow(UnityEngine.AvatarIKGoal,UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_IK_IKFollow_m24E77705A34497260EAF79298FF6EE6C5A0D54FE (Avatar_IK_t953B0564472F2E82ADA24AC10F745AA0FEB22218* __this, int32_t ___limb0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target1, float ___weight2, const RuntimeMethod* method) 
{
	{
		// Animator.SetIKPositionWeight(limb, weight);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___Animator_7;
		int32_t L_1 = ___limb0;
		float L_2 = ___weight2;
		NullCheck(L_0);
		Animator_SetIKPositionWeight_m8C707F505FFE2A6F36BE81ED12786B941D3B990C(L_0, L_1, L_2, NULL);
		// Animator.SetIKPosition(limb, target.position);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___Animator_7;
		int32_t L_4 = ___limb0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___target1;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_3);
		Animator_SetIKPosition_mB7BE88C93990186D94AF75439E2F216D6ECBCDEE(L_3, L_4, L_6, NULL);
		// Animator.SetIKRotationWeight(limb, weight);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___Animator_7;
		int32_t L_8 = ___limb0;
		float L_9 = ___weight2;
		NullCheck(L_7);
		Animator_SetIKRotationWeight_m5F0F5BD5A9A85912EA1CDF32917FE483E849978D(L_7, L_8, L_9, NULL);
		// Animator.SetIKRotation(limb, target.rotation);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___Animator_7;
		int32_t L_11 = ___limb0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___target1;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		NullCheck(L_10);
		Animator_SetIKRotation_m328A64AD20922F0F2A1D0CD5DBB9F01FE7675DF6(L_10, L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Avatar_IK::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_IK__ctor_mA6CE1556D10B64D9A99E948593285A499F285C8E (Avatar_IK_t953B0564472F2E82ADA24AC10F745AA0FEB22218* __this, const RuntimeMethod* method) 
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
// System.Void PressedDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedDictionary__ctor_mE3A44A2BD3E078FC3AA36E7B24DB79269696D912 (PressedDictionary_t02FB23427C40371AB0EAEA98D081F3BF7C52B717* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m0616CA32A3F78EDFAE56196566C5B5004E792191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t84F80609E677BE9EA6F29F1EEDA32362C2F55A90_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m0616CA32A3F78EDFAE56196566C5B5004E792191(__this, SerializableDictionaryBase_2__ctor_m0616CA32A3F78EDFAE56196566C5B5004E792191_RuntimeMethod_var);
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
// System.Void TouchedDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchedDictionary__ctor_m6DF1DC3CDFDFCD136886BB2BE8FEF676E1EC3183 (TouchedDictionary_t1BE185AF3B3BA9311328DEA86523B7EF70DBB622* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mABFBD5EAC965AF71DFE8A1BD166DDF188F3B3995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t482141AE767CB8B17A55A250A0572BC7DD99AD4E_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mABFBD5EAC965AF71DFE8A1BD166DDF188F3B3995(__this, SerializableDictionaryBase_2__ctor_mABFBD5EAC965AF71DFE8A1BD166DDF188F3B3995_RuntimeMethod_var);
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
// System.Void AxisDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisDictionary__ctor_m2D66A53196C1EEB1426E2CD0532ADEA2C9B79C2D (AxisDictionary_t3295F725C89679A9C1132617CBF51111AD73637E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mB94B145453FCD5D7A4446E637993A56E9E882135_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t744C261C93C496E60F5949138E453F8453519E69_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mB94B145453FCD5D7A4446E637993A56E9E882135(__this, SerializableDictionaryBase_2__ctor_mB94B145453FCD5D7A4446E637993A56E9E882135_RuntimeMethod_var);
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
// System.Boolean Wand_LineComparer::CompareLines(UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Wand_LineComparer_CompareLines_m12A7FD7595CFAFDB4E4C550331E9802BFFB90D4A (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___drawn0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___toMatch1, float ___threshold2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A81C7648296D8C125770F34A698F0B875DE341);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(Wand_LineSaver.SerializeVector3Array(drawn) + " \n" + Wand_LineSaver.SerializeVector3Array(toMatch));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___drawn0;
		String_t* L_1;
		L_1 = Wand_LineSaver_SerializeVector3Array_m15A891C4AB29BAF49B6B1CC2E091809A0B0C4765(L_0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___toMatch1;
		String_t* L_3;
		L_3 = Wand_LineSaver_SerializeVector3Array_m15A891C4AB29BAF49B6B1CC2E091809A0B0C4765(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_1, _stringLiteral42A81C7648296D8C125770F34A698F0B875DE341, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// float diff = DifferenceBetweenLines(drawn, toMatch);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___drawn0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___toMatch1;
		float L_7;
		L_7 = Wand_LineComparer_DifferenceBetweenLines_mC4CF62B624345155514FBA3EF6FB1FC6AFC8AEA8(L_5, L_6, NULL);
		// Debug.Log(diff);
		float L_8 = L_7;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// return diff < threshold;
		float L_11 = ___threshold2;
		return (bool)((((float)L_8) < ((float)L_11))? 1 : 0);
	}
}
// System.Single Wand_LineComparer::CompareLines(UnityEngine.Vector3[],UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wand_LineComparer_CompareLines_m3A3F12A02CE4113F0091EFD5804945C7459585A3 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___drawn0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___toMatch1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A81C7648296D8C125770F34A698F0B875DE341);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(Wand_LineSaver.SerializeVector3Array(drawn) + " \n" + Wand_LineSaver.SerializeVector3Array(toMatch));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___drawn0;
		String_t* L_1;
		L_1 = Wand_LineSaver_SerializeVector3Array_m15A891C4AB29BAF49B6B1CC2E091809A0B0C4765(L_0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___toMatch1;
		String_t* L_3;
		L_3 = Wand_LineSaver_SerializeVector3Array_m15A891C4AB29BAF49B6B1CC2E091809A0B0C4765(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_1, _stringLiteral42A81C7648296D8C125770F34A698F0B875DE341, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// float diff = DifferenceBetweenLines(drawn, toMatch);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___drawn0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___toMatch1;
		float L_7;
		L_7 = Wand_LineComparer_DifferenceBetweenLines_mC4CF62B624345155514FBA3EF6FB1FC6AFC8AEA8(L_5, L_6, NULL);
		// Debug.Log(diff);
		float L_8 = L_7;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// return diff;
		return L_8;
	}
}
// System.Void Wand_LineComparer::Normalize(UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineComparer_Normalize_m78C87944D53F96B4A6082ACC5001AA9BCE1FB8F4 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___points0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var offset = points[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_0 = ___points0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_0);
		NullCheck(L_1);
		int32_t L_2 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// for (int i = 0; i < points.Length; i++)
		V_1 = 0;
		goto IL_002a;
	}

IL_000d:
	{
		// points[i] -= offset;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_4 = ___points0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_4);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_9, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_7 = L_10;
		// for (int i = 0; i < points.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < points.Length; i++)
		int32_t L_12 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_13 = ___points0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_13);
		NullCheck(L_14);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Single Wand_LineComparer::DifferenceBetweenLines(UnityEngine.Vector3[],UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wand_LineComparer_DifferenceBetweenLines_mC4CF62B624345155514FBA3EF6FB1FC6AFC8AEA8 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___drawn0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___toMatch1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// float sqrDistAcc = 0f;
		V_0 = (0.0f);
		// float length = 0f;
		V_1 = (0.0f);
		// Vector3 prevPoint = toMatch[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___toMatch1;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_2 = L_2;
		// foreach (var toMatchPoint in WalkAlongLine(toMatch))
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___toMatch1;
		RuntimeObject* L_4;
		L_4 = Wand_LineComparer_WalkAlongLine_m8E270129A57C25870FBB9DF6B44729B241946C9D((RuntimeObject*)L_3, (0.100000001f), NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788_il2cpp_TypeInfo_var, L_4);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0027_1:
			{
				// foreach (var toMatchPoint in WalkAlongLine(toMatch))
				RuntimeObject* L_8 = V_3;
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var, L_8);
				V_4 = L_9;
				// sqrDistAcc += SqrDistanceToLine(drawn, toMatchPoint);
				float L_10 = V_0;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = ___drawn0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_4;
				float L_13;
				L_13 = Wand_LineComparer_SqrDistanceToLine_mA9CB73F21F4BFFD60E1F9F432EB6D44A7A9B76CA(L_11, L_12, NULL);
				V_0 = ((float)il2cpp_codegen_add(L_10, L_13));
				// length += Vector3.Distance(toMatchPoint, prevPoint);
				float L_14 = V_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
				float L_17;
				L_17 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_15, L_16, NULL);
				V_1 = ((float)il2cpp_codegen_add(L_14, L_17));
				// prevPoint = toMatchPoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
				V_2 = L_18;
			}

IL_0048_1:
			{
				// foreach (var toMatchPoint in WalkAlongLine(toMatch))
				RuntimeObject* L_19 = V_3;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// return sqrDistAcc / length;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)(L_21/L_22));
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Wand_LineComparer::WalkAlongLine(System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Wand_LineComparer_WalkAlongLine_m8E270129A57C25870FBB9DF6B44729B241946C9D (RuntimeObject* ___line0, float ___maxStep1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* L_0 = (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C*)il2cpp_codegen_object_new(U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWalkAlongLineU3Ed__4__ctor_m770DA470D165F90DE5F8E8EFEAF9AD091BE9636C(L_0, ((int32_t)-2), NULL);
		U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* L_1 = L_0;
		RuntimeObject* L_2 = ___line0;
		NullCheck(L_1);
		L_1->___U3CU3E3__line_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__line_4), (void*)L_2);
		U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* L_3 = L_1;
		float L_4 = ___maxStep1;
		NullCheck(L_3);
		L_3->___U3CU3E3__maxStep_6 = L_4;
		return L_3;
	}
}
// System.Single Wand_LineComparer::SqrDistanceToLine(UnityEngine.Vector3[],UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wand_LineComparer_SqrDistanceToLine_mA9CB73F21F4BFFD60E1F9F432EB6D44A7A9B76CA (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___line0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisSegment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA34B22D87FA09E68D9940ADF4F0B560DA927FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CSqrDistanceToLineU3Eb__0_mE8652C6B81C1A953F05C0467376C42706002C202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB* L_0 = (U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_mEA2ABAE2FF6CFB8C207991DB63136C5022D964A1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB* L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___point1;
		NullCheck(L_1);
		L_1->___point_0 = L_2;
		// return ListSegments(line)
		//     .Select(seg => SqrDistanceToSegment(seg.a, seg.b, point))
		//     .Min();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___line0;
		RuntimeObject* L_4;
		L_4 = Wand_LineComparer_ListSegments_mE4FC239385F0A2C8C66C49B071258B1712288F22((RuntimeObject*)L_3, NULL);
		U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB* L_5 = V_0;
		Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533* L_6 = (Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533*)il2cpp_codegen_object_new(Func_2_t9AB43D3D76E994489B9A2CC6476A3EC7D0BE0533_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mFFC2E1EAB1D9099348ED7563B9D8A41F5899CEC8(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CSqrDistanceToLineU3Eb__0_mE8652C6B81C1A953F05C0467376C42706002C202_RuntimeMethod_var), NULL);
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisSegment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA34B22D87FA09E68D9940ADF4F0B560DA927FB67(L_4, L_6, Enumerable_Select_TisSegment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA34B22D87FA09E68D9940ADF4F0B560DA927FB67_RuntimeMethod_var);
		float L_8;
		L_8 = Enumerable_Min_mAD5CE1B44AFFA09AEDCC1F32CE0C00ADAA445D3F(L_7, NULL);
		return L_8;
	}
}
// System.Single Wand_LineComparer::SqrDistanceToSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Wand_LineComparer_SqrDistanceToSegment_mE148C188CE8BF07520A76F05CE865FDF8C826DFF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var projected = ProjectPointOnLineSegment(linePoint1, linePoint1, point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___linePoint10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___linePoint10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Wand_LineComparer_ProjectPointOnLineSegment_m97F94388C51ECE811495B4D07D5926EE027BD26A(L_0, L_1, L_2, NULL);
		// return (projected - point).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		return L_6;
	}
}
// System.Collections.Generic.IEnumerable`1<Wand_LineComparer/Segment> Wand_LineComparer::ListSegments(System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Wand_LineComparer_ListSegments_mE4FC239385F0A2C8C66C49B071258B1712288F22 (RuntimeObject* ___line0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* L_0 = (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E*)il2cpp_codegen_object_new(U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CListSegmentsU3Ed__7__ctor_mB74B9E55DD9AEA12D56AC9B8252241E34E1E8CCD(L_0, ((int32_t)-2), NULL);
		U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* L_1 = L_0;
		RuntimeObject* L_2 = ___line0;
		NullCheck(L_1);
		L_1->___U3CU3E3__line_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__line_4), (void*)L_2);
		return L_1;
	}
}
// System.Int32 Wand_LineComparer::PointOnWhichSideOfLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wand_LineComparer_PointOnWhichSideOfLineSegment_m39B9421E10D1F608ABFC2F013A53FFBC52E72913 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 lineVec = linePoint2 - linePoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___linePoint21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___linePoint10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 pointVec = point - linePoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___linePoint10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// if (Vector3.Dot(pointVec, lineVec) > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8;
		L_8 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_6, L_7, NULL);
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// return pointVec.magnitude <= lineVec.magnitude ? 0 : 2;
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((((float)L_9) <= ((float)L_10)))
		{
			goto IL_0030;
		}
	}
	{
		return 2;
	}

IL_0030:
	{
		return 0;
	}

IL_0032:
	{
		// return 1;
		return 1;
	}
}
// UnityEngine.Vector3 Wand_LineComparer::ProjectPointOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Wand_LineComparer_ProjectPointOnLine_m9B31F1CD3226380876EE7A3F52C700B209039BBB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lineVec1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// Vector3 linePointToPoint = point - linePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___linePoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		// float t = Vector3.Dot(linePointToPoint, lineVec);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___lineVec1;
		float L_4;
		L_4 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// return linePoint + lineVec * t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___linePoint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___lineVec1;
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_8, NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 Wand_LineComparer::ProjectPointOnLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Wand_LineComparer_ProjectPointOnLineSegment_m97F94388C51ECE811495B4D07D5926EE027BD26A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linePoint21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Vector3 vector = linePoint2 - linePoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___linePoint21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___linePoint10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 projectedPoint = ProjectPointOnLine(linePoint1, vector.normalized, point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___linePoint10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Wand_LineComparer_ProjectPointOnLine_m9B31F1CD3226380876EE7A3F52C700B209039BBB(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		// switch (PointOnWhichSideOfLineSegment(linePoint1, linePoint2, projectedPoint))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___linePoint10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___linePoint21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		int32_t L_10;
		L_10 = Wand_LineComparer_PointOnWhichSideOfLineSegment_m39B9421E10D1F608ABFC2F013A53FFBC52E72913(L_7, L_8, L_9, NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0034:
	{
		// return projectedPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		return L_12;
	}

IL_0036:
	{
		// return linePoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___linePoint10;
		return L_13;
	}

IL_0038:
	{
		// return linePoint2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___linePoint21;
		return L_14;
	}

IL_003a:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_15;
	}
}
// System.Void Wand_LineComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineComparer__ctor_m093A787F6EE0515F7FA717D78EC3B0667150961E (Wand_LineComparer_t2A2A8708FFD30FF805DA0750BA37C19427C0F86C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wand_LineComparer/<WalkAlongLine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkAlongLineU3Ed__4__ctor_m770DA470D165F90DE5F8E8EFEAF9AD091BE9636C (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Wand_LineComparer/<WalkAlongLine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkAlongLineU3Ed__4_System_IDisposable_Dispose_mDD0E991C237EB1805AFFE7E9F3BDBD1628792655 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CWalkAlongLineU3Ed__4_U3CU3Em__Finally1_m86B4BA3DD9FFA609562B265E8FD941C9F76D14A1(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Wand_LineComparer/<WalkAlongLine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWalkAlongLineU3Ed__4_MoveNext_mA60AC2DB21FA69AEFA043200B7E21A532F20A7D3 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00fe:
			{// begin fault (depth: 1)
				U3CWalkAlongLineU3Ed__4_System_IDisposable_Dispose_mDD0E991C237EB1805AFFE7E9F3BDBD1628792655(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0018_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_00a3_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0105;
			}

IL_0018_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (var lineEnum = line.GetEnumerator())
				RuntimeObject* L_3 = __this->___line_3;
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788_il2cpp_TypeInfo_var, L_3);
				__this->___U3ClineEnumU3E5__2_7 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClineEnumU3E5__2_7), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if (!lineEnum.MoveNext())
				RuntimeObject* L_5 = __this->___U3ClineEnumU3E5__2_7;
				NullCheck(L_5);
				bool L_6;
				L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				if (L_6)
				{
					goto IL_004c_1;
				}
			}
			{
				// yield break;
				V_0 = (bool)0;
				goto IL_00eb_1;
			}

IL_004c_1:
			{
				// var pos = lineEnum.Current;
				RuntimeObject* L_7 = __this->___U3ClineEnumU3E5__2_7;
				NullCheck(L_7);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
				L_8 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var, L_7);
				__this->___U3CposU3E5__3_8 = L_8;
				goto IL_00ca_1;
			}

IL_005f_1:
			{
				// var target = lineEnum.Current;
				RuntimeObject* L_9 = __this->___U3ClineEnumU3E5__2_7;
				NullCheck(L_9);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
				L_10 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var, L_9);
				__this->___U3CtargetU3E5__4_9 = L_10;
				goto IL_00ab_1;
			}

IL_0072_1:
			{
				// yield return pos = Vector3.MoveTowards(pos, target, maxStep);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___U3CposU3E5__3_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___U3CtargetU3E5__4_9;
				float L_13 = __this->___maxStep_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_11, L_12, L_13, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14;
				V_2 = L_15;
				__this->___U3CposU3E5__3_8 = L_15;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
				__this->___U3CU3E2__current_1 = L_16;
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0105;
			}

IL_00a3_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00ab_1:
			{
				// while (pos != target)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___U3CposU3E5__3_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___U3CtargetU3E5__4_9;
				bool L_19;
				L_19 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_17, L_18, NULL);
				if (L_19)
				{
					goto IL_0072_1;
				}
			}
			{
				// }
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___U3CtargetU3E5__4_9);
				il2cpp_codegen_initobj(L_20, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
			}

IL_00ca_1:
			{
				// while (lineEnum.MoveNext())
				RuntimeObject* L_21 = __this->___U3ClineEnumU3E5__2_7;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_005f_1;
				}
			}
			{
				// }
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___U3CposU3E5__3_8);
				il2cpp_codegen_initobj(L_23, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
				U3CWalkAlongLineU3Ed__4_U3CU3Em__Finally1_m86B4BA3DD9FFA609562B265E8FD941C9F76D14A1(__this, NULL);
				goto IL_00f3_1;
			}

IL_00eb_1:
			{
				U3CWalkAlongLineU3Ed__4_U3CU3Em__Finally1_m86B4BA3DD9FFA609562B265E8FD941C9F76D14A1(__this, NULL);
				goto IL_0105;
			}

IL_00f3_1:
			{
				__this->___U3ClineEnumU3E5__2_7 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClineEnumU3E5__2_7), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0105;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0105:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Void Wand_LineComparer/<WalkAlongLine>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkAlongLineU3Ed__4_U3CU3Em__Finally1_m86B4BA3DD9FFA609562B265E8FD941C9F76D14A1 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3ClineEnumU3E5__2_7;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3ClineEnumU3E5__2_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// UnityEngine.Vector3 Wand_LineComparer/<WalkAlongLine>d__4::System.Collections.Generic.IEnumerator<UnityEngine.Vector3>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CWalkAlongLineU3Ed__4_System_Collections_Generic_IEnumeratorU3CUnityEngine_Vector3U3E_get_Current_m7FA4A57C4BBADE3A1F74D8D19CCF2C940FD62DC5 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Wand_LineComparer/<WalkAlongLine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkAlongLineU3Ed__4_System_Collections_IEnumerator_Reset_m9678854713ED14041155AE71747AD1AD2983A9A2 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWalkAlongLineU3Ed__4_System_Collections_IEnumerator_Reset_m9678854713ED14041155AE71747AD1AD2983A9A2_RuntimeMethod_var)));
	}
}
// System.Object Wand_LineComparer/<WalkAlongLine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWalkAlongLineU3Ed__4_System_Collections_IEnumerator_get_Current_m8C77A60AABD22CBD74287611C4AC1FDACD638278 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CU3E2__current_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3> Wand_LineComparer/<WalkAlongLine>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Vector3>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWalkAlongLineU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_Vector3U3E_GetEnumerator_m434C1CC5B68216B45FC172C0FCFC15228F7C01BA (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* L_3 = (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C*)il2cpp_codegen_object_new(U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CWalkAlongLineU3Ed__4__ctor_m770DA470D165F90DE5F8E8EFEAF9AD091BE9636C(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__line_4;
		NullCheck(L_4);
		L_4->___line_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___line_3), (void*)L_5);
		U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* L_6 = V_0;
		float L_7 = __this->___U3CU3E3__maxStep_6;
		NullCheck(L_6);
		L_6->___maxStep_5 = L_7;
		U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Wand_LineComparer/<WalkAlongLine>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWalkAlongLineU3Ed__4_System_Collections_IEnumerable_GetEnumerator_mAA6799E448AE5C0C3C4E7DB6355D57A6DB848203 (U3CWalkAlongLineU3Ed__4_tA3948D9549DA925CE86D2BCE783E983BE557006C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CWalkAlongLineU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_Vector3U3E_GetEnumerator_m434C1CC5B68216B45FC172C0FCFC15228F7C01BA(__this, NULL);
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
// System.Void Wand_LineComparer/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mEA2ABAE2FF6CFB8C207991DB63136C5022D964A1 (U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single Wand_LineComparer/<>c__DisplayClass5_0::<SqrDistanceToLine>b__0(Wand_LineComparer/Segment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass5_0_U3CSqrDistanceToLineU3Eb__0_mE8652C6B81C1A953F05C0467376C42706002C202 (U3CU3Ec__DisplayClass5_0_t6C883ECE0AAF5ABDE51309CB2AD23A94C0F755DB* __this, Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 ___seg0, const RuntimeMethod* method) 
{
	{
		// .Select(seg => SqrDistanceToSegment(seg.a, seg.b, point))
		Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 L_0 = ___seg0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___a_0;
		Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 L_2 = ___seg0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___b_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___point_0;
		float L_5;
		L_5 = Wand_LineComparer_SqrDistanceToSegment_mE148C188CE8BF07520A76F05CE865FDF8C826DFF(L_1, L_3, L_4, NULL);
		return L_5;
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
// System.Void Wand_LineComparer/<ListSegments>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7__ctor_mB74B9E55DD9AEA12D56AC9B8252241E34E1E8CCD (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Wand_LineComparer/<ListSegments>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7_System_IDisposable_Dispose_m0E6744E1D2F2B3D4CB68FEB7F81039E9310FE6F2 (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				U3CListSegmentsU3Ed__7_U3CU3Em__Finally1_mE9DDBC4FBE22DBD3E2408DDF289FC90F4241C5B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
				{
					goto IL_001e_1;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_002f;
			}

IL_001e_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{// begin finally (depth: 2)
						U3CListSegmentsU3Ed__7_U3CU3Em__Finally2_mD6C76B5C6B4B029792CF6DC5703C2BE647929B91(__this, NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					goto IL_002f;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Wand_LineComparer/<ListSegments>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CListSegmentsU3Ed__7_MoveNext_m09664424CFC75CA9B5251F8E3323BAD16476BD9F (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00dc:
			{// begin fault (depth: 1)
				U3CListSegmentsU3Ed__7_System_IDisposable_Dispose_m0E6744E1D2F2B3D4CB68FEB7F81039E9310FE6F2(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0018_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_00a9_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00e3;
			}

IL_0018_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (var pt1 = line.GetEnumerator())
				RuntimeObject* L_3 = __this->___line_3;
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788_il2cpp_TypeInfo_var, L_3);
				__this->___U3Cpt1U3E5__2_5 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cpt1U3E5__2_5), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// using (var pt2 = line.GetEnumerator())
				RuntimeObject* L_5 = __this->___line_3;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788_il2cpp_TypeInfo_var, L_5);
				__this->___U3Cpt2U3E5__3_6 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cpt2U3E5__3_6), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				// pt2.MoveNext();
				RuntimeObject* L_7 = __this->___U3Cpt2U3E5__3_6;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				goto IL_00b1_1;
			}

IL_005f_1:
			{
				// pt1.MoveNext();
				RuntimeObject* L_9 = __this->___U3Cpt1U3E5__2_5;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				// yield return new Segment { a = pt1.Current, b = pt2.Current };
				il2cpp_codegen_initobj((&V_2), sizeof(Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4));
				RuntimeObject* L_11 = __this->___U3Cpt1U3E5__2_5;
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var, L_11);
				(&V_2)->___a_0 = L_12;
				RuntimeObject* L_13 = __this->___U3Cpt2U3E5__3_6;
				NullCheck(L_13);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E_il2cpp_TypeInfo_var, L_13);
				(&V_2)->___b_1 = L_14;
				Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 L_15 = V_2;
				__this->___U3CU3E2__current_1 = L_15;
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00e3;
			}

IL_00a9_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
			}

IL_00b1_1:
			{
				// while (pt2.MoveNext())
				RuntimeObject* L_16 = __this->___U3Cpt2U3E5__3_6;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_005f_1;
				}
			}
			{
				// }
				U3CListSegmentsU3Ed__7_U3CU3Em__Finally2_mD6C76B5C6B4B029792CF6DC5703C2BE647929B91(__this, NULL);
				__this->___U3Cpt2U3E5__3_6 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cpt2U3E5__3_6), (void*)(RuntimeObject*)NULL);
				U3CListSegmentsU3Ed__7_U3CU3Em__Finally1_mE9DDBC4FBE22DBD3E2408DDF289FC90F4241C5B2(__this, NULL);
				__this->___U3Cpt1U3E5__2_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cpt1U3E5__2_5), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00e3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e3:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
// System.Void Wand_LineComparer/<ListSegments>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7_U3CU3Em__Finally1_mE9DDBC4FBE22DBD3E2408DDF289FC90F4241C5B2 (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3Cpt1U3E5__2_5;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3Cpt1U3E5__2_5;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Wand_LineComparer/<ListSegments>d__7::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7_U3CU3Em__Finally2_mD6C76B5C6B4B029792CF6DC5703C2BE647929B91 (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-3);
		RuntimeObject* L_0 = __this->___U3Cpt2U3E5__3_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3Cpt2U3E5__3_6;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Wand_LineComparer/Segment Wand_LineComparer/<ListSegments>d__7::System.Collections.Generic.IEnumerator<Wand_LineComparer.Segment>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 U3CListSegmentsU3Ed__7_System_Collections_Generic_IEnumeratorU3CWand_LineComparer_SegmentU3E_get_Current_mDDADAE2378690F50D26AA71D6CB3C67D2AD3AF6C (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	{
		Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Wand_LineComparer/<ListSegments>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListSegmentsU3Ed__7_System_Collections_IEnumerator_Reset_m001656A8F049F983995F6288566BA0A5FBCEA47E (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CListSegmentsU3Ed__7_System_Collections_IEnumerator_Reset_m001656A8F049F983995F6288566BA0A5FBCEA47E_RuntimeMethod_var)));
	}
}
// System.Object Wand_LineComparer/<ListSegments>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CListSegmentsU3Ed__7_System_Collections_IEnumerator_get_Current_m8270B6FA97EE9C790CCE2686E10EBF6B6E46C478 (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 L_0 = __this->___U3CU3E2__current_1;
		Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4 L_1 = L_0;
		RuntimeObject* L_2 = Box(Segment_t30C255AB1E91D8DF5298031FDDD8EA07595594F4_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Wand_LineComparer/Segment> Wand_LineComparer/<ListSegments>d__7::System.Collections.Generic.IEnumerable<Wand_LineComparer.Segment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CListSegmentsU3Ed__7_System_Collections_Generic_IEnumerableU3CWand_LineComparer_SegmentU3E_GetEnumerator_m69BF795B21F398055ACDD4F8ED8C7BA562A633AD (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* L_3 = (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E*)il2cpp_codegen_object_new(U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CListSegmentsU3Ed__7__ctor_mB74B9E55DD9AEA12D56AC9B8252241E34E1E8CCD(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__line_4;
		NullCheck(L_4);
		L_4->___line_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___line_3), (void*)L_5);
		U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Wand_LineComparer/<ListSegments>d__7::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CListSegmentsU3Ed__7_System_Collections_IEnumerable_GetEnumerator_m702C282DF27FF756C3325EC986EBE46C47B26ADA (U3CListSegmentsU3Ed__7_t5DA33834FB0541830354E92CA0DBD049131F2B0E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CListSegmentsU3Ed__7_System_Collections_Generic_IEnumerableU3CWand_LineComparer_SegmentU3E_GetEnumerator_m69BF795B21F398055ACDD4F8ED8C7BA562A633AD(__this, NULL);
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
// System.Void Iphone_Cameras::SwichCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iphone_Cameras_SwichCamera_m8C04631FB4204D92CBFB870FF7A3EEE40759C183 (Iphone_Cameras_tDAE98F67D8AEA6BEC5D0448A941E2F408039F81D* __this, const RuntimeMethod* method) 
{
	{
		// currentCamIndex = (currentCamIndex + 1) % Cameras.Length;
		int32_t L_0 = __this->___currentCamIndex_6;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_1 = __this->___Cameras_5;
		NullCheck(L_1);
		__this->___currentCamIndex_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		// ScreenRenderer.materials[0].mainTexture = Cameras[currentCamIndex].targetTexture;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___ScreenRenderer_4;
		NullCheck(L_2);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3;
		L_3 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_6 = __this->___Cameras_5;
		int32_t L_7 = __this->___currentCamIndex_6;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10;
		L_10 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_9, NULL);
		NullCheck(L_5);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_5, L_10, NULL);
		// }
		return;
	}
}
// System.Void Iphone_Cameras::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iphone_Cameras__ctor_mA76E8736F4F27E1AA52522E7FD75940FE25FA673 (Iphone_Cameras_tDAE98F67D8AEA6BEC5D0448A941E2F408039F81D* __this, const RuntimeMethod* method) 
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
// System.Void Iphone_Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iphone_Main__ctor_mADD1BFBD743A926B14591EA95AAF6F1201B9707A (Iphone_Main_t78D5F47AD1640E10FA93D4F349F8B5750902F3B0* __this, const RuntimeMethod* method) 
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
// System.Void DigitalRuby.PyroParticles.DemoScript::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_UpdateUI_m30C2E670F78EBD9A10869829BE473228558EB61C (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	{
		// Sun.transform.rotation = Quaternion.Euler(TimeOfDaySlider.value, 60.0f, 0.0f);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___Sun_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___TimeOfDaySlider_7;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_3, (60.0f), (0.0f), NULL);
		NullCheck(L_1);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_1, L_4, NULL);
		// CurrentItemText.text = Prefabs[currentPrefabIndex].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___CurrentItemText_9;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___Prefabs_4;
		int32_t L_7 = __this->___currentPrefabIndex_12;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_10);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::UpdateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_UpdateMovement_m31DCB99F031CF726EBD7C86A75DE4B186811862A (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// float speed = 5.0f * Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply((5.0f), L_0));
		// if (Input.GetKey(KeyCode.W))
		bool L_1;
		L_1 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)119), NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// transform.Translate(0.0f, 0.0f, speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_3 = V_0;
		NullCheck(L_2);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_2, (0.0f), (0.0f), L_3, NULL);
	}

IL_002b:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4;
		L_4 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)115), NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// transform.Translate(0.0f, 0.0f, -speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_6 = V_0;
		NullCheck(L_5);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_5, (0.0f), (0.0f), ((-L_6)), NULL);
	}

IL_004b:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_7;
		L_7 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)97), NULL);
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// transform.Translate(-speed, 0.0f, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = V_0;
		NullCheck(L_8);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_8, ((-L_9)), (0.0f), (0.0f), NULL);
	}

IL_006b:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_10;
		L_10 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)100), NULL);
		if (!L_10)
		{
			goto IL_008a;
		}
	}
	{
		// transform.Translate(speed, 0.0f, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_12 = V_0;
		NullCheck(L_11);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_11, L_12, (0.0f), (0.0f), NULL);
	}

IL_008a:
	{
		// if (Input.GetKeyDown(KeyCode.M))
		bool L_13;
		L_13 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)109), NULL);
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		// MouseLookToggle.isOn = !MouseLookToggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_14 = __this->___MouseLookToggle_8;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_15 = __this->___MouseLookToggle_8;
		NullCheck(L_15);
		bool L_16;
		L_16 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_15, NULL);
		NullCheck(L_14);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_14, (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}

IL_00ad:
	{
		// else if (Input.GetKeyDown(KeyCode.R))
		bool L_17;
		L_17 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)114), NULL);
		if (!L_17)
		{
			goto IL_00c9;
		}
	}
	{
		// UnityEngine.SceneManagement.SceneManager.LoadScene(UnityEngine.SceneManagement.SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_18;
		L_18 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_1 = L_18;
		int32_t L_19;
		L_19 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_19, NULL);
		return;
	}

IL_00c9:
	{
		// else if (Input.GetKeyDown(KeyCode.O))
		bool L_20;
		L_20 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)111), NULL);
		if (!L_20)
		{
			goto IL_0137;
		}
	}
	{
		// if (SideCamera.enabled = !SideCamera.enabled)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___SideCamera_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___SideCamera_6;
		NullCheck(L_22);
		bool L_23;
		L_23 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_22, NULL);
		int32_t L_24 = ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		V_2 = (bool)L_24;
		NullCheck(L_21);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)L_24, NULL);
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0114;
		}
	}
	{
		// Camera.main.rect = new Rect(0.0f, 0.0f, 0.5f, 1.0f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26;
		L_26 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		memset((&L_27), 0, sizeof(L_27));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_27), (0.0f), (0.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_26, L_27, NULL);
		return;
	}

IL_0114:
	{
		// Camera.main.rect = new Rect(0.0f, 0.0f, 1.0f, 1.0f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28;
		L_28 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_29;
		memset((&L_29), 0, sizeof(L_29));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_29), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_28, L_29, NULL);
	}

IL_0137:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::UpdateMouseLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_UpdateMouseLook_m8287DD553C748523F62731E35C861B73B0B54D69 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!MouseLookToggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___MouseLookToggle_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// else if (axes == RotationAxes.MouseXAndY)
		int32_t L_2 = __this->___axes_13;
		if (L_2)
		{
			goto IL_00d4;
		}
	}
	{
		// rotationX += Input.GetAxis("Mouse X") * sensitivityX;
		float L_3 = __this->___rotationX_20;
		float L_4;
		L_4 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_5 = __this->___sensitivityX_14;
		__this->___rotationX_20 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// rotationY += Input.GetAxis("Mouse Y") * sensitivityY;
		float L_6 = __this->___rotationY_21;
		float L_7;
		L_7 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_8 = __this->___sensitivityY_15;
		__this->___rotationY_21 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8))));
		// rotationX = ClampAngle(rotationX, minimumX, maximumX);
		float L_9 = __this->___rotationX_20;
		float L_10 = __this->___minimumX_16;
		float L_11 = __this->___maximumX_17;
		float L_12;
		L_12 = DemoScript_ClampAngle_m6601DD21F3F22176804C09BC8EC67A4A9D5EDB8B(L_9, L_10, L_11, NULL);
		__this->___rotationX_20 = L_12;
		// rotationY = ClampAngle(rotationY, minimumY, maximumY);
		float L_13 = __this->___rotationY_21;
		float L_14 = __this->___minimumY_18;
		float L_15 = __this->___maximumY_19;
		float L_16;
		L_16 = DemoScript_ClampAngle_m6601DD21F3F22176804C09BC8EC67A4A9D5EDB8B(L_13, L_14, L_15, NULL);
		__this->___rotationY_21 = L_16;
		// Quaternion xQuaternion = Quaternion.AngleAxis(rotationX, Vector3.up);
		float L_17 = __this->___rotationX_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_17, L_18, NULL);
		V_0 = L_19;
		// Quaternion yQuaternion = Quaternion.AngleAxis(rotationY, -Vector3.right);
		float L_20 = __this->___rotationY_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_20, L_22, NULL);
		V_1 = L_23;
		// transform.localRotation = originalRotation * xQuaternion * yQuaternion;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = __this->___originalRotation_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_25, L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_27, L_28, NULL);
		NullCheck(L_24);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_24, L_29, NULL);
		return;
	}

IL_00d4:
	{
		// else if (axes == RotationAxes.MouseX)
		int32_t L_30 = __this->___axes_13;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_0141;
		}
	}
	{
		// rotationX += Input.GetAxis("Mouse X") * sensitivityX;
		float L_31 = __this->___rotationX_20;
		float L_32;
		L_32 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_33 = __this->___sensitivityX_14;
		__this->___rotationX_20 = ((float)il2cpp_codegen_add(L_31, ((float)il2cpp_codegen_multiply(L_32, L_33))));
		// rotationX = ClampAngle(rotationX, minimumX, maximumX);
		float L_34 = __this->___rotationX_20;
		float L_35 = __this->___minimumX_16;
		float L_36 = __this->___maximumX_17;
		float L_37;
		L_37 = DemoScript_ClampAngle_m6601DD21F3F22176804C09BC8EC67A4A9D5EDB8B(L_34, L_35, L_36, NULL);
		__this->___rotationX_20 = L_37;
		// Quaternion xQuaternion = Quaternion.AngleAxis(rotationX, Vector3.up);
		float L_38 = __this->___rotationX_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_38, L_39, NULL);
		V_2 = L_40;
		// transform.localRotation = originalRotation * xQuaternion;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = __this->___originalRotation_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_42, L_43, NULL);
		NullCheck(L_41);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_41, L_44, NULL);
		return;
	}

IL_0141:
	{
		// rotationY += Input.GetAxis("Mouse Y") * sensitivityY;
		float L_45 = __this->___rotationY_21;
		float L_46;
		L_46 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_47 = __this->___sensitivityY_15;
		__this->___rotationY_21 = ((float)il2cpp_codegen_add(L_45, ((float)il2cpp_codegen_multiply(L_46, L_47))));
		// rotationY = ClampAngle(rotationY, minimumY, maximumY);
		float L_48 = __this->___rotationY_21;
		float L_49 = __this->___minimumY_18;
		float L_50 = __this->___maximumY_19;
		float L_51;
		L_51 = DemoScript_ClampAngle_m6601DD21F3F22176804C09BC8EC67A4A9D5EDB8B(L_48, L_49, L_50, NULL);
		__this->___rotationY_21 = L_51;
		// Quaternion yQuaternion = Quaternion.AngleAxis(-rotationY, Vector3.right);
		float L_52 = __this->___rotationY_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((-L_52)), L_53, NULL);
		V_3 = L_54;
		// transform.localRotation = originalRotation * yQuaternion;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = __this->___originalRotation_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_56, L_57, NULL);
		NullCheck(L_55);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_55, L_58, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::UpdateEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_UpdateEffect_m854534AA349BEF8127F7519079070AE89E71A08E (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// StartCurrent();
		DemoScript_StartCurrent_mF55945B9D5411844726303946FFC5DCA3BB73F62(__this, NULL);
		return;
	}

IL_0010:
	{
		// else if (Input.GetKeyDown(KeyCode.Plus) || Input.GetKeyDown(KeyCode.KeypadPlus))
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)43), NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)270), NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		// NextPrefab();
		DemoScript_NextPrefab_m2C96C81AFEF54B638E6AE4D7A0A575B1A267C180(__this, NULL);
		return;
	}

IL_002c:
	{
		// else if (Input.GetKeyDown(KeyCode.Minus) || Input.GetKeyDown(KeyCode.KeypadMinus))
		bool L_3;
		L_3 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)45), NULL);
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)269), NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}

IL_0041:
	{
		// PreviousPrefab();
		DemoScript_PreviousPrefab_mC13434ABDE1211304228D57B812711F9FF99EB6A(__this, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Single DigitalRuby.PyroParticles.DemoScript::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DemoScript_ClampAngle_m6601DD21F3F22176804C09BC8EC67A4A9D5EDB8B (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// if (angle < -360F)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360F;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (angle > 360F)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360F;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::BeginEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_BeginEffect_m1417FD8AA1B0845B746E835E02BF4FC33934BECF (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisFireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D_m772DD29650BCBA16D8782C851D55F0352D2980B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA_mA2973D48B4E721392510B3B1B80B1E77F4A3FE3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F_mB6B6267CC2E9EDDBA06742641FBF9F120C4C81A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3297D7F872B0B6B3647656A13A2D7B41215309E9);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* V_7 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// float yRot = transform.rotation.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_8 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_8), NULL);
		float L_3 = L_2.___y_3;
		V_1 = L_3;
		// Vector3 forwardY = Quaternion.Euler(0.0f, yRot, 0.0f) * Vector3.forward;
		float L_4 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_4, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_5, L_6, NULL);
		V_2 = L_7;
		// Vector3 forward = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		V_3 = L_9;
		// Vector3 right = transform.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_10, NULL);
		V_4 = L_11;
		// Vector3 up = transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_12, NULL);
		V_5 = L_13;
		// Quaternion rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		V_6 = L_14;
		// currentPrefabObject = GameObject.Instantiate(Prefabs[currentPrefabIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___Prefabs_4;
		int32_t L_16 = __this->___currentPrefabIndex_12;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		__this->___currentPrefabObject_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPrefabObject_10), (void*)L_19);
		// currentPrefabScript = currentPrefabObject.GetComponent<FireConstantBaseScript>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___currentPrefabObject_10;
		NullCheck(L_20);
		FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F* L_21;
		L_21 = GameObject_GetComponent_TisFireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F_mB6B6267CC2E9EDDBA06742641FBF9F120C4C81A8(L_20, GameObject_GetComponent_TisFireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F_mB6B6267CC2E9EDDBA06742641FBF9F120C4C81A8_RuntimeMethod_var);
		__this->___currentPrefabScript_11 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPrefabScript_11), (void*)L_21);
		// if (currentPrefabScript == null)
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_22 = __this->___currentPrefabScript_11;
		bool L_23;
		L_23 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0104;
		}
	}
	{
		// currentPrefabScript = currentPrefabObject.GetComponent<FireBaseScript>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___currentPrefabObject_10;
		NullCheck(L_24);
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_25;
		L_25 = GameObject_GetComponent_TisFireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA_mA2973D48B4E721392510B3B1B80B1E77F4A3FE3C(L_24, GameObject_GetComponent_TisFireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA_mA2973D48B4E721392510B3B1B80B1E77F4A3FE3C_RuntimeMethod_var);
		__this->___currentPrefabScript_11 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPrefabScript_11), (void*)L_25);
		// if (currentPrefabScript.IsProjectile)
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_26 = __this->___currentPrefabScript_11;
		NullCheck(L_26);
		bool L_27 = L_26->___IsProjectile_10;
		if (!L_27)
		{
			goto IL_00e6;
		}
	}
	{
		// rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_28, NULL);
		V_6 = L_29;
		// pos = transform.position + forward + right + up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_35, L_36, NULL);
		V_0 = L_37;
		goto IL_0139;
	}

IL_00e6:
	{
		// pos = transform.position + (forwardY * 10.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, (10.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_41, NULL);
		V_0 = L_42;
		goto IL_0139;
	}

IL_0104:
	{
		// pos = transform.position + (forwardY * 5.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_45, (5.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_44, L_46, NULL);
		V_0 = L_47;
		// rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_48, NULL);
		V_6 = L_49;
		// pos.y = 0.0f;
		(&V_0)->___y_3 = (0.0f);
	}

IL_0139:
	{
		// FireProjectileScript projectileScript = currentPrefabObject.GetComponentInChildren<FireProjectileScript>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___currentPrefabObject_10;
		NullCheck(L_50);
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_51;
		L_51 = GameObject_GetComponentInChildren_TisFireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D_m772DD29650BCBA16D8782C851D55F0352D2980B6(L_50, GameObject_GetComponentInChildren_TisFireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D_m772DD29650BCBA16D8782C851D55F0352D2980B6_RuntimeMethod_var);
		V_7 = L_51;
		// if (projectileScript != null)
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_52 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_52, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_53)
		{
			goto IL_0173;
		}
	}
	{
		// projectileScript.ProjectileCollisionLayers &= (~UnityEngine.LayerMask.NameToLayer("FireLayer"));
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_54 = V_7;
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_55 = L_54;
		NullCheck(L_55);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_56 = L_55->___ProjectileCollisionLayers_28;
		int32_t L_57;
		L_57 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_56, NULL);
		int32_t L_58;
		L_58 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral3297D7F872B0B6B3647656A13A2D7B41215309E9, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_59;
		L_59 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922(((int32_t)(L_57&((~L_58)))), NULL);
		NullCheck(L_55);
		L_55->___ProjectileCollisionLayers_28 = L_59;
	}

IL_0173:
	{
		// currentPrefabObject.transform.position = pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___currentPrefabObject_10;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_0;
		NullCheck(L_61);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_61, L_62, NULL);
		// currentPrefabObject.transform.rotation = rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___currentPrefabObject_10;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_6;
		NullCheck(L_64);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_64, L_65, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::StartCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_StartCurrent_mF55945B9D5411844726303946FFC5DCA3BB73F62 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	{
		// StopCurrent();
		DemoScript_StopCurrent_m48FBCE59BBB624909D57EC1378A2360B4553E5A5(__this, NULL);
		// BeginEffect();
		DemoScript_BeginEffect_m1417FD8AA1B0845B746E835E02BF4FC33934BECF(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::StopCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_StopCurrent_m48FBCE59BBB624909D57EC1378A2360B4553E5A5 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentPrefabScript != null && currentPrefabScript.Duration > 10000)
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_0 = __this->___currentPrefabScript_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_2 = __this->___currentPrefabScript_11;
		NullCheck(L_2);
		float L_3 = L_2->___Duration_7;
		if ((!(((float)L_3) > ((float)(10000.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// currentPrefabScript.Stop();
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_4 = __this->___currentPrefabScript_11;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(7 /* System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop() */, L_4);
	}

IL_002b:
	{
		// currentPrefabObject = null;
		__this->___currentPrefabObject_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPrefabObject_10), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// currentPrefabScript = null;
		__this->___currentPrefabScript_11 = (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPrefabScript_11), (void*)(FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA*)NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::NextPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_NextPrefab_m2C96C81AFEF54B638E6AE4D7A0A575B1A267C180 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	{
		// currentPrefabIndex++;
		int32_t L_0 = __this->___currentPrefabIndex_12;
		__this->___currentPrefabIndex_12 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (currentPrefabIndex == Prefabs.Length)
		int32_t L_1 = __this->___currentPrefabIndex_12;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___Prefabs_4;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// currentPrefabIndex = 0;
		__this->___currentPrefabIndex_12 = 0;
	}

IL_0025:
	{
		// UpdateUI();
		DemoScript_UpdateUI_m30C2E670F78EBD9A10869829BE473228558EB61C(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::PreviousPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_PreviousPrefab_mC13434ABDE1211304228D57B812711F9FF99EB6A (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	{
		// currentPrefabIndex--;
		int32_t L_0 = __this->___currentPrefabIndex_12;
		__this->___currentPrefabIndex_12 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (currentPrefabIndex == -1)
		int32_t L_1 = __this->___currentPrefabIndex_12;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		// currentPrefabIndex = Prefabs.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___Prefabs_4;
		NullCheck(L_2);
		__this->___currentPrefabIndex_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0027:
	{
		// UpdateUI();
		DemoScript_UpdateUI_m30C2E670F78EBD9A10869829BE473228558EB61C(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_Start_mF3B907446811969979BD163DA3C935B7DE658658 (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	{
		// originalRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		__this->___originalRotation_22 = L_1;
		// UpdateUI();
		DemoScript_UpdateUI_m30C2E670F78EBD9A10869829BE473228558EB61C(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_Update_m01BCA83F0C7DF977C0189B129891E89B4F68345D (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	{
		// UpdateMovement();
		DemoScript_UpdateMovement_m31DCB99F031CF726EBD7C86A75DE4B186811862A(__this, NULL);
		// UpdateMouseLook();
		DemoScript_UpdateMouseLook_m8287DD553C748523F62731E35C861B73B0B54D69(__this, NULL);
		// UpdateEffect();
		DemoScript_UpdateEffect_m854534AA349BEF8127F7519079070AE89E71A08E(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::SliderChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript_SliderChanged_mB193D3BD1B3A53429D645F61662CA8EBE542C36D (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// UpdateUI();
		DemoScript_UpdateUI_m30C2E670F78EBD9A10869829BE473228558EB61C(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.DemoScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoScript__ctor_mE349A94FEAA9D6D4F095726331CF16A9FB8F9B6F (DemoScript_t4D01BB0CB0352781F0E57F4935D16C1506F168D4* __this, const RuntimeMethod* method) 
{
	{
		// private float sensitivityX = 15F;
		__this->___sensitivityX_14 = (15.0f);
		// private float sensitivityY = 15F;
		__this->___sensitivityY_15 = (15.0f);
		// private float minimumX = -360F;
		__this->___minimumX_16 = (-360.0f);
		// private float maximumX = 360F;
		__this->___maximumX_17 = (360.0f);
		// private float minimumY = -60F;
		__this->___minimumY_18 = (-60.0f);
		// private float maximumY = 60F;
		__this->___maximumY_19 = (60.0f);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Collections.IEnumerator DigitalRuby.PyroParticles.FireBaseScript::CleanupEverythingCoRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireBaseScript_CleanupEverythingCoRoutine_m76D44CD85791345C0F08BE94F15A7FD8A5A9B28C (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* L_0 = (U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19*)il2cpp_codegen_object_new(U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCleanupEverythingCoRoutineU3Ed__12__ctor_m1F5977C9D2842DE4E7480DB3A7BC0F831E8D421D(L_0, 0, NULL);
		U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::StartParticleSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_StartParticleSystems_mB1F61707495084C8F6E957FEDAFA6BEEBDA03EF4 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mB79B3B2B2F8008770413B79335C256A448BA6E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_0 = NULL;
	int32_t V_1 = 0;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_2 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_4;
	memset((&V_4), 0, sizeof(V_4));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409(L_0, GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0089;
	}

IL_0010:
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (ManualParticleSystems == null || ManualParticleSystems.Length == 0 ||
		//     System.Array.IndexOf(ManualParticleSystems, p) < 0)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_6 = __this->___ManualParticleSystems_11;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_7 = __this->___ManualParticleSystems_11;
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0034;
		}
	}
	{
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_8 = __this->___ManualParticleSystems_11;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = V_2;
		int32_t L_10;
		L_10 = Array_IndexOf_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mB79B3B2B2F8008770413B79335C256A448BA6E4F(L_8, L_9, Array_IndexOf_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mB79B3B2B2F8008770413B79335C256A448BA6E4F_RuntimeMethod_var);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}

IL_0034:
	{
		// if (p.main.startDelay.constant == 0.0f)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = V_2;
		NullCheck(L_11);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_12;
		L_12 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_11, NULL);
		V_3 = L_12;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_13;
		L_13 = MainModule_get_startDelay_m548FABFC02F1542B2B84EB3EBD9148C7CEB5DB6D((&V_3), NULL);
		V_4 = L_13;
		float L_14;
		L_14 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_4), NULL);
		if ((!(((float)L_14) == ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		// var m = p.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = V_2;
		NullCheck(L_15);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_16;
		L_16 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_15, NULL);
		V_5 = L_16;
		// var d = p.main.startDelay;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = V_2;
		NullCheck(L_17);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_18;
		L_18 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_17, NULL);
		V_3 = L_18;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_19;
		L_19 = MainModule_get_startDelay_m548FABFC02F1542B2B84EB3EBD9148C7CEB5DB6D((&V_3), NULL);
		V_6 = L_19;
		// d.constant = 0.01f;
		MinMaxCurve_set_constant_mB6E4F22F67D3ED641FEBB387351F17451BB6A897((&V_6), (0.00999999978f), NULL);
		// m.startDelay = d;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_20 = V_6;
		MainModule_set_startDelay_mFE9F9E7F79978F670904789F7F55B96F42434F69((&V_5), L_20, NULL);
	}

IL_007f:
	{
		// p.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_21 = V_2;
		NullCheck(L_21);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_21, NULL);
	}

IL_0085:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0089:
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		int32_t L_23 = V_1;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Awake_m13BE4C5D1133DBCD241E82404CCB7A08203613A7 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3297D7F872B0B6B3647656A13A2D7B41215309E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Starting = true;
		FireBaseScript_set_Starting_m27A8262E14AD197A3D5CE0284E9E20C2EF9002B4_inline(__this, (bool)1, NULL);
		// int fireLayer = UnityEngine.LayerMask.NameToLayer("FireLayer");
		int32_t L_0;
		L_0 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral3297D7F872B0B6B3647656A13A2D7B41215309E9, NULL);
		// UnityEngine.Physics.IgnoreLayerCollision(fireLayer, fireLayer);
		int32_t L_1 = L_0;
		Physics_IgnoreLayerCollision_m23BAD9245C3D950AEF3FA7D8F65A95FA65564E01(L_1, L_1, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Start_m784DEE09C71CE4F64187E59480DEB6717B7D76C6 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m48C9AEBA24E05215F763E9FAEE1F7D72E500DB30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollisionHandler_tC60762A35C66A1E13BB3F83513F0483DB05AECFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* V_1 = NULL;
	{
		// if (AudioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___AudioSource_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___AudioSource_4;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
	}

IL_0019:
	{
		// stopTimeMultiplier = 1.0f / StopTime;
		float L_3 = __this->___StopTime_6;
		__this->___stopTimeMultiplier_14 = ((float)((1.0f)/L_3));
		// startTimeMultiplier = 1.0f / StartTime;
		float L_4 = __this->___StartTime_5;
		__this->___startTimeMultiplier_12 = ((float)((1.0f)/L_4));
		// CreateExplosion(gameObject.transform.position, ForceRadius, ForceAmount);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = __this->___ForceRadius_9;
		float L_9 = __this->___ForceAmount_8;
		FireBaseScript_CreateExplosion_m02C4734B17572809135CBDC9CB1A87B7A4B4DDA4(L_7, L_8, L_9, NULL);
		// StartParticleSystems();
		FireBaseScript_StartParticleSystems_mB1F61707495084C8F6E957FEDAFA6BEEBDA03EF4(__this, NULL);
		// ICollisionHandler handler = (this as ICollisionHandler);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)__this, ICollisionHandler_tC60762A35C66A1E13BB3F83513F0483DB05AECFA_il2cpp_TypeInfo_var));
		// if (handler != null)
		RuntimeObject* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0085;
		}
	}
	{
		// FireCollisionForwardScript collisionForwarder = GetComponentInChildren<FireCollisionForwardScript>();
		FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* L_11;
		L_11 = Component_GetComponentInChildren_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m48C9AEBA24E05215F763E9FAEE1F7D72E500DB30(__this, Component_GetComponentInChildren_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m48C9AEBA24E05215F763E9FAEE1F7D72E500DB30_RuntimeMethod_var);
		V_1 = L_11;
		// if (collisionForwarder != null)
		FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		// collisionForwarder.CollisionHandler = handler;
		FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* L_14 = V_1;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_14);
		L_14->___CollisionHandler_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___CollisionHandler_4), (void*)L_15);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Update_m6DC4C16380E2C9E80B027129B386353CC2E632EA (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// Duration -= Time.deltaTime;
		float L_0 = __this->___Duration_7;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___Duration_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (Stopping)
		bool L_2;
		L_2 = FireBaseScript_get_Stopping_m46A8786A7F92D219062A52CA1DBC4F8E0E2666C3_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		// stopTimeIncrement += Time.deltaTime;
		float L_3 = __this->___stopTimeIncrement_15;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___stopTimeIncrement_15 = ((float)il2cpp_codegen_add(L_3, L_4));
		// if (stopTimeIncrement < StopTime)
		float L_5 = __this->___stopTimeIncrement_15;
		float L_6 = __this->___StopTime_6;
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_00a5;
		}
	}
	{
		// StopPercent = stopTimeIncrement * stopTimeMultiplier;
		float L_7 = __this->___stopTimeIncrement_15;
		float L_8 = __this->___stopTimeMultiplier_14;
		FireBaseScript_set_StopPercent_m2E32FC2291DC949593750986944F17AAB1C4AC62_inline(__this, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		return;
	}

IL_004e:
	{
		// else if (Starting)
		bool L_9;
		L_9 = FireBaseScript_get_Starting_mC8C91AABB0DCB029D6440C6CF4EC4DED9A422227_inline(__this, NULL);
		if (!L_9)
		{
			goto IL_0092;
		}
	}
	{
		// startTimeIncrement += Time.deltaTime;
		float L_10 = __this->___startTimeIncrement_13;
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___startTimeIncrement_13 = ((float)il2cpp_codegen_add(L_10, L_11));
		// if (startTimeIncrement < StartTime)
		float L_12 = __this->___startTimeIncrement_13;
		float L_13 = __this->___StartTime_5;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_008a;
		}
	}
	{
		// StartPercent = startTimeIncrement * startTimeMultiplier;
		float L_14 = __this->___startTimeIncrement_13;
		float L_15 = __this->___startTimeMultiplier_12;
		FireBaseScript_set_StartPercent_mCC105A212924F673CFF75FFF91F09A369D0901A9_inline(__this, ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		return;
	}

IL_008a:
	{
		// Starting = false;
		FireBaseScript_set_Starting_m27A8262E14AD197A3D5CE0284E9E20C2EF9002B4_inline(__this, (bool)0, NULL);
		return;
	}

IL_0092:
	{
		// else if (Duration <= 0.0f)
		float L_16 = __this->___Duration_7;
		if ((!(((float)L_16) <= ((float)(0.0f)))))
		{
			goto IL_00a5;
		}
	}
	{
		// Stop();
		VirtualActionInvoker0::Invoke(7 /* System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop() */, __this);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::CreateExplosion(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_CreateExplosion_m02C4734B17572809135CBDC9CB1A87B7A4B4DDA4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___radius1, float ___force2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	int32_t V_1 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_2 = NULL;
	{
		// if (force <= 0.0f || radius <= 0.0f)
		float L_0 = ___force2;
		if ((((float)L_0) <= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___radius1;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// Collider[] objects = UnityEngine.Physics.OverlapSphere(pos, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		float L_3 = ___radius1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4;
		L_4 = Physics_OverlapSphere_m91C80EEBDE4096D5648F78E48772E44474CD62F2(L_2, L_3, NULL);
		// foreach (Collider h in objects)
		V_0 = L_4;
		V_1 = 0;
		goto IL_003c;
	}

IL_001d:
	{
		// foreach (Collider h in objects)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// Rigidbody r = h.GetComponent<Rigidbody>();
		NullCheck(L_8);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_8, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_2 = L_9;
		// if (r != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0038;
		}
	}
	{
		// r.AddExplosionForce(force, pos, radius);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = V_2;
		float L_13 = ___force2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___pos0;
		float L_15 = ___radius1;
		NullCheck(L_12);
		Rigidbody_AddExplosionForce_mD36F7D864F32F22DA1783D20F6E9563A9C51DFA1(L_12, L_13, L_14, L_15, NULL);
	}

IL_0038:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003c:
	{
		// foreach (Collider h in objects)
		int32_t L_17 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_Stop_mDF9DD9CB9ED6F4FFB053CCEB3DE22280FD8716D6 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (Stopping)
		bool L_0;
		L_0 = FireBaseScript_get_Stopping_m46A8786A7F92D219062A52CA1DBC4F8E0E2666C3_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Stopping = true;
		FireBaseScript_set_Stopping_mB4BAB9FC89301491B7D5CD0B02D8D6534DAE8C04_inline(__this, (bool)1, NULL);
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_2;
		L_2 = GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409(L_1, GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mDB24DFE03C9A09070D0C489886ABCC49959AB409_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002c;
	}

IL_0020:
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// p.Stop();
		NullCheck(L_6);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// foreach (ParticleSystem p in gameObject.GetComponentsInChildren<ParticleSystem>())
		int32_t L_8 = V_1;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// StartCoroutine(CleanupEverythingCoRoutine());
		RuntimeObject* L_10;
		L_10 = FireBaseScript_CleanupEverythingCoRoutine_m76D44CD85791345C0F08BE94F15A7FD8A5A9B28C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::get_Starting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FireBaseScript_get_Starting_mC8C91AABB0DCB029D6440C6CF4EC4DED9A422227 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CStartingU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_Starting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_set_Starting_m27A8262E14AD197A3D5CE0284E9E20C2EF9002B4 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->___U3CStartingU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Single DigitalRuby.PyroParticles.FireBaseScript::get_StartPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FireBaseScript_get_StartPercent_m86D7B0BBBA3E9D1F0E3D61A88147C7367EAEEE45 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		float L_0 = __this->___U3CStartPercentU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_StartPercent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_set_StartPercent_mCC105A212924F673CFF75FFF91F09A369D0901A9 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		float L_0 = ___value0;
		__this->___U3CStartPercentU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript::get_Stopping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FireBaseScript_get_Stopping_m46A8786A7F92D219062A52CA1DBC4F8E0E2666C3 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CStoppingU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_Stopping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_set_Stopping_mB4BAB9FC89301491B7D5CD0B02D8D6534DAE8C04 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->___U3CStoppingU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Single DigitalRuby.PyroParticles.FireBaseScript::get_StopPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FireBaseScript_get_StopPercent_m11AFFC7C92709E3FB28A5D114B45BEBA578CA425 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		float L_0 = __this->___U3CStopPercentU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::set_StopPercent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript_set_StopPercent_m2E32FC2291DC949593750986944F17AAB1C4AC62 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		float L_0 = ___value0;
		__this->___U3CStopPercentU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseScript__ctor_m46C036B7EBCE1C61A8F51E7B0B8AD050B0C9B4E5 (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// public float StartTime = 1.0f;
		__this->___StartTime_5 = (1.0f);
		// public float StopTime = 3.0f;
		__this->___StopTime_6 = (3.0f);
		// public float Duration = 2.0f;
		__this->___Duration_7 = (2.0f);
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
// System.Void DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupEverythingCoRoutineU3Ed__12__ctor_m1F5977C9D2842DE4E7480DB3A7BC0F831E8D421D (U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupEverythingCoRoutineU3Ed__12_System_IDisposable_Dispose_m786574988F4C5AFF08AAD7B5B097F536A358F0AE (U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCleanupEverythingCoRoutineU3Ed__12_MoveNext_m24A0B524397AEB9251B239D1D4324CFC1DE26B7E (U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(StopTime + 2.0f);
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___StopTime_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, ((float)il2cpp_codegen_add(L_5, (2.0f))), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject.Destroy(gameObject);
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF2C659870E71A02EFF9396D2A7FEAFBF949961DF (U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_IEnumerator_Reset_m89B4EEBA42A912D5A2FEBB8E090E5314F32F4EC9 (U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_IEnumerator_Reset_m89B4EEBA42A912D5A2FEBB8E090E5314F32F4EC9_RuntimeMethod_var)));
	}
}
// System.Object DigitalRuby.PyroParticles.FireBaseScript/<CleanupEverythingCoRoutine>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCleanupEverythingCoRoutineU3Ed__12_System_Collections_IEnumerator_get_Current_m3312D094FDF961CD10A978BFDA15E21790B8C98B (U3CCleanupEverythingCoRoutineU3Ed__12_t27671C310A892CD562528626F2A7C13564134F19* __this, const RuntimeMethod* method) 
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
// System.Void DigitalRuby.PyroParticles.FireCollisionForwardScript::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireCollisionForwardScript_OnCollisionEnter_m6F756DE62E9C00FFC1547AF6F3CFAD6CCB2D797E (FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollisionHandler_tC60762A35C66A1E13BB3F83513F0483DB05AECFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CollisionHandler.HandleCollision(gameObject, col);
		RuntimeObject* L_0 = __this->___CollisionHandler_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_2 = ___col0;
		NullCheck(L_0);
		InterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* >::Invoke(0 /* System.Void DigitalRuby.PyroParticles.ICollisionHandler::HandleCollision(UnityEngine.GameObject,UnityEngine.Collision) */, ICollisionHandler_tC60762A35C66A1E13BB3F83513F0483DB05AECFA_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireCollisionForwardScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireCollisionForwardScript__ctor_mA38EF70C7C6683373B0B7DEE1FD2A0BACC5E2A83 (FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* __this, const RuntimeMethod* method) 
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
// UnityEngine.AudioSource DigitalRuby.PyroParticles.LoopingAudioSource::get_AudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0 (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___U3CAudioSourceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::set_AudioSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m439AD9812112D322BB4C41C368D03C9312DB6734 (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___value0;
		__this->___U3CAudioSourceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioSourceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::get_TargetVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_mC3CB5787BFF7E38C4E78600E167110FE22DDEE0D (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) 
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = __this->___U3CTargetVolumeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::set_TargetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_m975CF4B21304A1085A6879A7CB25B78811B6434D (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = ___value0;
		__this->___U3CTargetVolumeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::.ctor(UnityEngine.MonoBehaviour,UnityEngine.AudioSource,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource__ctor_m6365AC8B3A553F5C9F972C2F5656D46298E5B5CB (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___script0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource1, float ___startMultiplier2, float ___stopMultiplier3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// public LoopingAudioSource(MonoBehaviour script, AudioSource audioSource, float startMultiplier, float stopMultiplier)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AudioSource = audioSource;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___audioSource1;
		LoopingAudioSource_set_AudioSource_m439AD9812112D322BB4C41C368D03C9312DB6734_inline(__this, L_0, NULL);
		// if (audioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___audioSource1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// AudioSource.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_3);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_3, (bool)1, NULL);
		// AudioSource.volume = 0.0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_4);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, (0.0f), NULL);
		// AudioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_5);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_5, NULL);
	}

IL_003d:
	{
		// TargetVolume = 1.0f;
		LoopingAudioSource_set_TargetVolume_m975CF4B21304A1085A6879A7CB25B78811B6434D_inline(__this, (1.0f), NULL);
		// this.startMultiplier = currentMultiplier = startMultiplier;
		float L_6 = ___startMultiplier2;
		float L_7 = L_6;
		V_0 = L_7;
		__this->___currentMultiplier_4 = L_7;
		float L_8 = V_0;
		__this->___startMultiplier_2 = L_8;
		// this.stopMultiplier = stopMultiplier;
		float L_9 = ___stopMultiplier3;
		__this->___stopMultiplier_3 = L_9;
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_m6FAA719DEFBAF291DBA56622EEF8B327AD172F8B (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) 
{
	{
		// Play(TargetVolume);
		float L_0;
		L_0 = LoopingAudioSource_get_TargetVolume_mC3CB5787BFF7E38C4E78600E167110FE22DDEE0D_inline(__this, NULL);
		LoopingAudioSource_Play_m17B0282DD31BDE189F89745BD8253BE5CE78AD7E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_m17B0282DD31BDE189F89745BD8253BE5CE78AD7E (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, float ___targetVolume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AudioSource != null && !AudioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		// AudioSource.volume = 0.0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_4);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, (0.0f), NULL);
		// AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// currentMultiplier = startMultiplier;
		float L_6 = __this->___startMultiplier_2;
		__this->___currentMultiplier_4 = L_6;
	}

IL_0042:
	{
		// TargetVolume = targetVolume;
		float L_7 = ___targetVolume0;
		LoopingAudioSource_set_TargetVolume_m975CF4B21304A1085A6879A7CB25B78811B6434D_inline(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Stop_m2A966C14063180C7ACC8FEC27EFF6F9B422C02B4 (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AudioSource != null && AudioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// TargetVolume = 0.0f;
		LoopingAudioSource_set_TargetVolume_m975CF4B21304A1085A6879A7CB25B78811B6434D_inline(__this, (0.0f), NULL);
		// currentMultiplier = stopMultiplier;
		float L_4 = __this->___stopMultiplier_3;
		__this->___currentMultiplier_4 = L_4;
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.LoopingAudioSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Update_m83C94D0F79026407910AD03D1F6BEC43E92D9B49 (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (AudioSource != null && AudioSource.isPlaying &&
		//     (AudioSource.volume = Mathf.Lerp(AudioSource.volume, TargetVolume, Time.deltaTime / currentMultiplier)) == 0.0f)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (!L_3)
		{
			goto IL_005d;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_5);
		float L_6;
		L_6 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_5, NULL);
		float L_7;
		L_7 = LoopingAudioSource_get_TargetVolume_mC3CB5787BFF7E38C4E78600E167110FE22DDEE0D_inline(__this, NULL);
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_9 = __this->___currentMultiplier_4;
		float L_10;
		L_10 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_6, L_7, ((float)(L_8/L_9)), NULL);
		float L_11 = L_10;
		V_0 = L_11;
		NullCheck(L_4);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, L_11, NULL);
		float L_12 = V_0;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// AudioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13;
		L_13 = LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline(__this, NULL);
		NullCheck(L_13);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_13, NULL);
	}

IL_005d:
	{
		// }
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
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript_Awake_m154896FDD0849A2BE1BEB71D5108D1E3302E9052 (FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		FireBaseScript_Awake_m13BE4C5D1133DBCD241E82404CCB7A08203613A7(__this, NULL);
		// LoopingAudioSource = new LoopingAudioSource(this, AudioSource, StartTime, StopTime);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ((FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA*)__this)->___AudioSource_4;
		float L_1 = ((FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA*)__this)->___StartTime_5;
		float L_2 = ((FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA*)__this)->___StopTime_6;
		LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* L_3 = (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082*)il2cpp_codegen_object_new(LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoopingAudioSource__ctor_m6365AC8B3A553F5C9F972C2F5656D46298E5B5CB(L_3, __this, L_0, L_1, L_2, NULL);
		__this->___LoopingAudioSource_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LoopingAudioSource_20), (void*)L_3);
		// Duration = 999999999;
		((FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA*)__this)->___Duration_7 = (1.0E+09f);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript_Update_m2DE575F62D258FBB9BD7D28645470FB4A1EE3C50 (FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		FireBaseScript_Update_m6DC4C16380E2C9E80B027129B386353CC2E632EA(__this, NULL);
		// LoopingAudioSource.Update();
		LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* L_0 = __this->___LoopingAudioSource_20;
		NullCheck(L_0);
		LoopingAudioSource_Update_m83C94D0F79026407910AD03D1F6BEC43E92D9B49(L_0, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript_Start_m66C808ED1193A0ECCED465C7BBABFFB4D55DB9A1 (FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		FireBaseScript_Start_m784DEE09C71CE4F64187E59480DEB6717B7D76C6(__this, NULL);
		// LoopingAudioSource.Play();
		LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* L_0 = __this->___LoopingAudioSource_20;
		NullCheck(L_0);
		LoopingAudioSource_Play_m6FAA719DEFBAF291DBA56622EEF8B327AD172F8B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript_Stop_m0D0DE9DC8A0EC786990F0A7031C5D209D1B44836 (FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F* __this, const RuntimeMethod* method) 
{
	{
		// LoopingAudioSource.Stop();
		LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* L_0 = __this->___LoopingAudioSource_20;
		NullCheck(L_0);
		LoopingAudioSource_Stop_m2A966C14063180C7ACC8FEC27EFF6F9B422C02B4(L_0, NULL);
		// base.Stop();
		FireBaseScript_Stop_mDF9DD9CB9ED6F4FFB053CCEB3DE22280FD8716D6(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireConstantBaseScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireConstantBaseScript__ctor_m182693B925009E1C0A2CF4D5E71BB13068DACC37 (FireConstantBaseScript_t7E9920AA156BD4CD0AC4FFFB05254DFBF6EE1A5F* __this, const RuntimeMethod* method) 
{
	{
		FireBaseScript__ctor_m46C036B7EBCE1C61A8F51E7B0B8AD050B0C9B4E5(__this, NULL);
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
// System.Void DigitalRuby.PyroParticles.FireLightScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireLightScript_Awake_mC0579C8317460C7FB4BCBBFC72288302C91BC161 (FireLightScript_tA16C4F8534DE564413CEC3592EF2C3F44342BA66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA_mA2973D48B4E721392510B3B1B80B1E77F4A3FE3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// firePointLight = gameObject.GetComponentInChildren<Light>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1;
		L_1 = GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26(L_0, GameObject_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mD324CBA8C6EE26509DCAFB76F6D61AC484389B26_RuntimeMethod_var);
		__this->___firePointLight_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firePointLight_7), (void*)L_1);
		// if (firePointLight != null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = __this->___firePointLight_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// lightIntensity = firePointLight.intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = __this->___firePointLight_7;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_4, NULL);
		__this->___lightIntensity_8 = L_5;
		// firePointLight.intensity = 0.0f;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6 = __this->___firePointLight_7;
		NullCheck(L_6);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_6, (0.0f), NULL);
		// baseY = firePointLight.gameObject.transform.position.y;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7 = __this->___firePointLight_7;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		__this->___baseY_11 = L_11;
	}

IL_0060:
	{
		// seed = UnityEngine.Random.value * Seed;
		float L_12;
		L_12 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		float L_13 = __this->___Seed_4;
		__this->___seed_9 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		// fireBaseScript = gameObject.GetComponent<FireBaseScript>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_15;
		L_15 = GameObject_GetComponent_TisFireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA_mA2973D48B4E721392510B3B1B80B1E77F4A3FE3C(L_14, GameObject_GetComponent_TisFireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA_mA2973D48B4E721392510B3B1B80B1E77F4A3FE3C_RuntimeMethod_var);
		__this->___fireBaseScript_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fireBaseScript_10), (void*)L_15);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireLightScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireLightScript_Update_m13691C0E20331E4CCBEC219BA826CD8E13D4C7C7 (FireLightScript_tA16C4F8534DE564413CEC3592EF2C3F44342BA66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if (firePointLight == null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___firePointLight_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (seed != 0)
		float L_2 = __this->___seed_9;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_01c8;
		}
	}
	{
		// bool setIntensity = true;
		V_0 = (bool)1;
		// float intensityModifier2 = 1.0f;
		V_1 = (1.0f);
		// if (fireBaseScript != null)
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_3 = __this->___fireBaseScript_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_008a;
		}
	}
	{
		// if (fireBaseScript.Stopping)
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_5 = __this->___fireBaseScript_10;
		NullCheck(L_5);
		bool L_6;
		L_6 = FireBaseScript_get_Stopping_m46A8786A7F92D219062A52CA1DBC4F8E0E2666C3_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0071;
		}
	}
	{
		// setIntensity = false;
		V_0 = (bool)0;
		// firePointLight.intensity = Mathf.Lerp(firePointLight.intensity, 0.0f, fireBaseScript.StopPercent);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7 = __this->___firePointLight_7;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = __this->___firePointLight_7;
		NullCheck(L_8);
		float L_9;
		L_9 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_8, NULL);
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_10 = __this->___fireBaseScript_10;
		NullCheck(L_10);
		float L_11;
		L_11 = FireBaseScript_get_StopPercent_m11AFFC7C92709E3FB28A5D114B45BEBA578CA425_inline(L_10, NULL);
		float L_12;
		L_12 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_9, (0.0f), L_11, NULL);
		NullCheck(L_7);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_7, L_12, NULL);
		goto IL_008a;
	}

IL_0071:
	{
		// else if (fireBaseScript.Starting)
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_13 = __this->___fireBaseScript_10;
		NullCheck(L_13);
		bool L_14;
		L_14 = FireBaseScript_get_Starting_mC8C91AABB0DCB029D6440C6CF4EC4DED9A422227_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		// intensityModifier2 = fireBaseScript.StartPercent;
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_15 = __this->___fireBaseScript_10;
		NullCheck(L_15);
		float L_16;
		L_16 = FireBaseScript_get_StartPercent_m86D7B0BBBA3E9D1F0E3D61A88147C7367EAEEE45_inline(L_15, NULL);
		V_1 = L_16;
	}

IL_008a:
	{
		// if (setIntensity)
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_00e3;
		}
	}
	{
		// float intensity = Mathf.Clamp(IntensityModifier * intensityModifier2 * Mathf.PerlinNoise(seed + Time.time, seed + 1 + Time.time),
		//     IntensityMaxRange.Minimum, IntensityMaxRange.Maximum);
		float L_18 = __this->___IntensityModifier_5;
		float L_19 = V_1;
		float L_20 = __this->___seed_9;
		float L_21;
		L_21 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_22 = __this->___seed_9;
		float L_23;
		L_23 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_24;
		L_24 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(((float)il2cpp_codegen_add(L_20, L_21)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_22, (1.0f))), L_23)), NULL);
		RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F* L_25 = (&__this->___IntensityMaxRange_6);
		float L_26 = L_25->___Minimum_0;
		RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F* L_27 = (&__this->___IntensityMaxRange_6);
		float L_28 = L_27->___Maximum_1;
		float L_29;
		L_29 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_18, L_19)), L_24)), L_26, L_28, NULL);
		V_5 = L_29;
		// firePointLight.intensity = intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_30 = __this->___firePointLight_7;
		float L_31 = V_5;
		NullCheck(L_30);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_30, L_31, NULL);
	}

IL_00e3:
	{
		// float x = Mathf.PerlinNoise(seed + 0 + Time.time * 2, seed + 1 + Time.time * 2) - 0.5f;
		float L_32 = __this->___seed_9;
		float L_33;
		L_33 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_34 = __this->___seed_9;
		float L_35;
		L_35 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_36;
		L_36 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_32, (0.0f))), ((float)il2cpp_codegen_multiply(L_33, (2.0f))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_34, (1.0f))), ((float)il2cpp_codegen_multiply(L_35, (2.0f))))), NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_36, (0.5f)));
		// float y = baseY + Mathf.PerlinNoise(seed + 2 + Time.time * 2, seed + 3 + Time.time * 2) - 0.5f;
		float L_37 = __this->___baseY_11;
		float L_38 = __this->___seed_9;
		float L_39;
		L_39 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_40 = __this->___seed_9;
		float L_41;
		L_41 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_42;
		L_42 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_38, (2.0f))), ((float)il2cpp_codegen_multiply(L_39, (2.0f))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_40, (3.0f))), ((float)il2cpp_codegen_multiply(L_41, (2.0f))))), NULL);
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_37, L_42)), (0.5f)));
		// float z = Mathf.PerlinNoise(seed + 4 + Time.time * 2, seed + 5 + Time.time * 2) - 0.5f;
		float L_43 = __this->___seed_9;
		float L_44;
		L_44 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_45 = __this->___seed_9;
		float L_46;
		L_46 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_47;
		L_47 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_43, (4.0f))), ((float)il2cpp_codegen_multiply(L_44, (2.0f))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_45, (5.0f))), ((float)il2cpp_codegen_multiply(L_46, (2.0f))))), NULL);
		V_4 = ((float)il2cpp_codegen_subtract(L_47, (0.5f)));
		// firePointLight.gameObject.transform.localPosition = Vector3.up + new Vector3(x, y, z);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_48 = __this->___firePointLight_7;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_48, NULL);
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_52 = V_2;
		float L_53 = V_3;
		float L_54 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), L_52, L_53, L_54, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_51, L_55, NULL);
		NullCheck(L_50);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_50, L_56, NULL);
		return;
	}

IL_01c8:
	{
		// else if (fireBaseScript.Stopping)
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_57 = __this->___fireBaseScript_10;
		NullCheck(L_57);
		bool L_58;
		L_58 = FireBaseScript_get_Stopping_m46A8786A7F92D219062A52CA1DBC4F8E0E2666C3_inline(L_57, NULL);
		if (!L_58)
		{
			goto IL_0201;
		}
	}
	{
		// firePointLight.intensity = Mathf.Lerp(firePointLight.intensity, 0.0f, fireBaseScript.StopPercent);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_59 = __this->___firePointLight_7;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_60 = __this->___firePointLight_7;
		NullCheck(L_60);
		float L_61;
		L_61 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_60, NULL);
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_62 = __this->___fireBaseScript_10;
		NullCheck(L_62);
		float L_63;
		L_63 = FireBaseScript_get_StopPercent_m11AFFC7C92709E3FB28A5D114B45BEBA578CA425_inline(L_62, NULL);
		float L_64;
		L_64 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_61, (0.0f), L_63, NULL);
		NullCheck(L_59);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_59, L_64, NULL);
		return;
	}

IL_0201:
	{
		// else if (fireBaseScript.Starting)
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_65 = __this->___fireBaseScript_10;
		NullCheck(L_65);
		bool L_66;
		L_66 = FireBaseScript_get_Starting_mC8C91AABB0DCB029D6440C6CF4EC4DED9A422227_inline(L_65, NULL);
		if (!L_66)
		{
			goto IL_0234;
		}
	}
	{
		// firePointLight.intensity = Mathf.Lerp(0.0f, lightIntensity, fireBaseScript.StartPercent);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_67 = __this->___firePointLight_7;
		float L_68 = __this->___lightIntensity_8;
		FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* L_69 = __this->___fireBaseScript_10;
		NullCheck(L_69);
		float L_70;
		L_70 = FireBaseScript_get_StartPercent_m86D7B0BBBA3E9D1F0E3D61A88147C7367EAEEE45_inline(L_69, NULL);
		float L_71;
		L_71 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_68, L_70, NULL);
		NullCheck(L_67);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_67, L_71, NULL);
	}

IL_0234:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireLightScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireLightScript__ctor_m6A6E7D5EE901C42F570B87429F4B28DFEDD56E40 (FireLightScript_tA16C4F8534DE564413CEC3592EF2C3F44342BA66* __this, const RuntimeMethod* method) 
{
	RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public float Seed = 100.0f;
		__this->___Seed_4 = (100.0f);
		// public float IntensityModifier = 2.0f;
		__this->___IntensityModifier_5 = (2.0f);
		// public RangeOfFloats IntensityMaxRange = new RangeOfFloats { Minimum = 0.0f, Maximum = 8.0f };
		il2cpp_codegen_initobj((&V_0), sizeof(RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F));
		(&V_0)->___Minimum_0 = (0.0f);
		(&V_0)->___Maximum_1 = (8.0f);
		RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F L_0 = V_0;
		__this->___IntensityMaxRange_6 = L_0;
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
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_Multicast(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* currentDelegate = reinterpret_cast<FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___script0, ___pos1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenInst(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	typedef void (*FunctionPointerType) (FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___script0, ___pos1, method);
}
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenStatic(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___script0, ___pos1, method);
}
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenStaticInvoker(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___script0, ___pos1);
}
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_ClosedStaticInvoker(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___script0, ___pos1);
}
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenVirtual(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), ___script0, ___pos1);
}
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenInterface(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___script0, ___pos1);
}
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenGenericVirtual(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	GenericVirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___script0, ___pos1);
}
void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenGenericInterface(FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	GenericInterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___script0, ___pos1);
}
// System.Void DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate__ctor_m8C20D5808E579BE9595A2D1F86390C97CFB45B0C (FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_Multicast;
}
// System.Void DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::Invoke(DigitalRuby.PyroParticles.FireProjectileScript,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84 (FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___script0, ___pos1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::BeginInvoke(DigitalRuby.PyroParticles.FireProjectileScript,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireProjectileCollisionDelegate_BeginInvoke_m3CDAEF34B8FA3C112104C7C5E0E48862FC8938E1 (FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___script0;
	__d_args[1] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___pos1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DigitalRuby.PyroParticles.FireProjectileCollisionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate_EndInvoke_m12DE050F72503F82813E725DC62463910CD5B072 (FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator DigitalRuby.PyroParticles.FireProjectileScript::SendCollisionAfterDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireProjectileScript_SendCollisionAfterDelay_m753C79A855C1AC51CBC5EFAFEDED18CC025BBB43 (FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* L_0 = (U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35*)il2cpp_codegen_object_new(U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendCollisionAfterDelayU3Ed__12__ctor_m82AA041B895FFBA530F5CC612575CB1E5D836D9A(L_0, 0, NULL);
		U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileScript_Start_mB27C0F84ABC1B32EB7C8E2631198029F0BFBEAB5 (FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		FireBaseScript_Start_m784DEE09C71CE4F64187E59480DEB6717B7D76C6(__this, NULL);
		// StartCoroutine(SendCollisionAfterDelay());
		RuntimeObject* L_0;
		L_0 = FireProjectileScript_SendCollisionAfterDelay_m753C79A855C1AC51CBC5EFAFEDED18CC025BBB43(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript::HandleCollision(UnityEngine.GameObject,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileScript_HandleCollision_m52568A7E51E7F9662F5BD88BA18B276CB78B0DF4 (FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___c1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (collided)
		bool L_0 = __this->___collided_31;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// collided = true;
		__this->___collided_31 = (bool)1;
		// Stop();
		VirtualActionInvoker0::Invoke(7 /* System.Void DigitalRuby.PyroParticles.FireBaseScript::Stop() */, __this);
		// if (ProjectileDestroyParticleSystemsOnCollision != null)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_1 = __this->___ProjectileDestroyParticleSystemsOnCollision_29;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// foreach (ParticleSystem p in ProjectileDestroyParticleSystemsOnCollision)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_2 = __this->___ProjectileDestroyParticleSystemsOnCollision_29;
		V_0 = L_2;
		V_1 = 0;
		goto IL_003a;
	}

IL_0029:
	{
		// foreach (ParticleSystem p in ProjectileDestroyParticleSystemsOnCollision)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// GameObject.Destroy(p, 0.1f);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_6, (0.100000001f), NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003a:
	{
		// foreach (ParticleSystem p in ProjectileDestroyParticleSystemsOnCollision)
		int32_t L_8 = V_1;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0029;
		}
	}

IL_0040:
	{
		// if (ProjectileCollisionSound != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___ProjectileCollisionSound_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// ProjectileCollisionSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___ProjectileCollisionSound_21;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
	}

IL_0059:
	{
		// if (c.contacts.Length != 0)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_13 = ___c1;
		NullCheck(L_13);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_14;
		L_14 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_13, NULL);
		NullCheck(L_14);
		if (!(((RuntimeArray*)L_14)->max_length))
		{
			goto IL_00d5;
		}
	}
	{
		// ProjectileExplosionParticleSystem.transform.position = c.contacts[0].point;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = __this->___ProjectileExplosionParticleSystem_22;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_17 = ___c1;
		NullCheck(L_17);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_18;
		L_18 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_19, NULL);
		// ProjectileExplosionParticleSystem.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_20 = __this->___ProjectileExplosionParticleSystem_22;
		NullCheck(L_20);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_20, NULL);
		// FireBaseScript.CreateExplosion(c.contacts[0].point, ProjectileExplosionRadius, ProjectileExplosionForce);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_21 = ___c1;
		NullCheck(L_21);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_22;
		L_22 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_24 = __this->___ProjectileExplosionRadius_23;
		float L_25 = __this->___ProjectileExplosionForce_24;
		FireBaseScript_CreateExplosion_m02C4734B17572809135CBDC9CB1A87B7A4B4DDA4(L_23, L_24, L_25, NULL);
		// if (CollisionDelegate != null)
		FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* L_26 = __this->___CollisionDelegate_30;
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		// CollisionDelegate(this, c.contacts[0].point);
		FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* L_27 = __this->___CollisionDelegate_30;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_28 = ___c1;
		NullCheck(L_28);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_29;
		L_29 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208(((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_27);
		FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_inline(L_27, __this, L_30, NULL);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireProjectileScript__ctor_m807DFBF5D6FC6D388DD8C9689F2FBBB28CBC057C (FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* __this, const RuntimeMethod* method) 
{
	{
		// public float ProjectileExplosionRadius = 50.0f;
		__this->___ProjectileExplosionRadius_23 = (50.0f);
		// public float ProjectileExplosionForce = 50.0f;
		__this->___ProjectileExplosionForce_24 = (50.0f);
		// public float ProjectileColliderSpeed = 450.0f;
		__this->___ProjectileColliderSpeed_26 = (450.0f);
		// public Vector3 ProjectileDirection = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		__this->___ProjectileDirection_27 = L_0;
		// public LayerMask ProjectileCollisionLayers = Physics.AllLayers;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->___ProjectileCollisionLayers_28 = L_1;
		FireBaseScript__ctor_m46C036B7EBCE1C61A8F51E7B0B8AD050B0C9B4E5(__this, NULL);
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
// System.Void DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCollisionAfterDelayU3Ed__12__ctor_m82AA041B895FFBA530F5CC612575CB1E5D836D9A (U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCollisionAfterDelayU3Ed__12_System_IDisposable_Dispose_m28AD9119BD54E2B63E197453F08FD5CC0B1AD800 (U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendCollisionAfterDelayU3Ed__12_MoveNext_m0BF9D4434C465DA1EAD28867C176F2095A360285 (U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(ProjectileColliderDelay);
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___ProjectileColliderDelay_25;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 dir = ProjectileDirection * ProjectileColliderSpeed;
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_7 = V_1;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___ProjectileDirection_27;
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___ProjectileColliderSpeed_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_10, NULL);
		V_2 = L_11;
		// dir = ProjectileColliderObject.transform.rotation * dir;
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___ProjectileColliderObject_20;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_15, L_16, NULL);
		V_2 = L_17;
		// ProjectileColliderObject.GetComponent<Rigidbody>().velocity = dir;
		FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* L_18 = V_1;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->___ProjectileColliderObject_20;
		NullCheck(L_19);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20;
		L_20 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_19, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		NullCheck(L_20);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_20, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendCollisionAfterDelayU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEA1FBDD80C479D988869B49F22BF41A8F6630F14 (U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCollisionAfterDelayU3Ed__12_System_Collections_IEnumerator_Reset_mB2F476C0BCD8234755BE9C8CB7145E577CA25E14 (U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendCollisionAfterDelayU3Ed__12_System_Collections_IEnumerator_Reset_mB2F476C0BCD8234755BE9C8CB7145E577CA25E14_RuntimeMethod_var)));
	}
}
// System.Object DigitalRuby.PyroParticles.FireProjectileScript/<SendCollisionAfterDelay>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendCollisionAfterDelayU3Ed__12_System_Collections_IEnumerator_get_Current_mC33CB44106571A41E800FA51A898F71B3D09084A (U3CSendCollisionAfterDelayU3Ed__12_t6FA4E7F8E566FA486E933463F5DE5660A3F60F35* __this, const RuntimeMethod* method) 
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
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_Multicast(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* currentDelegate = reinterpret_cast<MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___script0, ___meteor1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenInst(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	typedef void (*FunctionPointerType) (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___script0, ___meteor1, method);
}
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenStatic(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___script0, ___meteor1, method);
}
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenStaticInvoker(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___script0, ___meteor1);
}
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_ClosedStaticInvoker(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___script0, ___meteor1);
}
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenVirtual(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	VirtualActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(il2cpp_codegen_method_get_slot(method), ___script0, ___meteor1);
}
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenInterface(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___script0, ___meteor1);
}
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenGenericVirtual(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	GenericVirtualActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(method, ___script0, ___meteor1);
}
void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenGenericInterface(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method)
{
	NullCheck(___script0);
	GenericInterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(method, ___script0, ___meteor1);
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate__ctor_m2F3C9CFA354E51A1E27B197512A2469DDC1C3937 (MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_Multicast;
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::Invoke(DigitalRuby.PyroParticles.MeteorSwarmScript,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789 (MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___script0, ___meteor1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::BeginInvoke(DigitalRuby.PyroParticles.MeteorSwarmScript,UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmCollisionDelegate_BeginInvoke_mCC821AD0D5A1F99E74EAA0EAAA98383913C37260 (MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___script0;
	__d_args[1] = ___meteor1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate_EndInvoke_mF4EC34E9228127CB7A0D2ECA219DDB65363CA0CD (MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::add_CollisionDelegate(DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_add_CollisionDelegate_m980B44655D9F65B840C094BC7660DB6D2F95C585 (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* V_0 = NULL;
	MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* V_1 = NULL;
	MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* V_2 = NULL;
	{
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_0 = __this->___CollisionDelegate_34;
		V_0 = L_0;
	}

IL_0007:
	{
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_1 = V_0;
		V_1 = L_1;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_2 = V_1;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*)CastclassSealed((RuntimeObject*)L_4, MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F_il2cpp_TypeInfo_var));
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F** L_5 = (&__this->___CollisionDelegate_34);
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_6 = V_2;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_7 = V_1;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_8;
		L_8 = InterlockedCompareExchangeImpl<MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*>(L_5, L_6, L_7);
		V_0 = L_8;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_9 = V_0;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_10 = V_1;
		if ((!(((RuntimeObject*)(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*)L_9) == ((RuntimeObject*)(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::remove_CollisionDelegate(DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_remove_CollisionDelegate_m71F08A20CED9A029DFDAE2E6635A2F7A6C73038A (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* V_0 = NULL;
	MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* V_1 = NULL;
	MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* V_2 = NULL;
	{
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_0 = __this->___CollisionDelegate_34;
		V_0 = L_0;
	}

IL_0007:
	{
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_1 = V_0;
		V_1 = L_1;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_2 = V_1;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*)CastclassSealed((RuntimeObject*)L_4, MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F_il2cpp_TypeInfo_var));
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F** L_5 = (&__this->___CollisionDelegate_34);
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_6 = V_2;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_7 = V_1;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_8;
		L_8 = InterlockedCompareExchangeImpl<MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*>(L_5, L_6, L_7);
		V_0 = L_8;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_9 = V_0;
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_10 = V_1;
		if ((!(((RuntimeObject*)(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*)L_9) == ((RuntimeObject*)(MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator DigitalRuby.PyroParticles.MeteorSwarmScript::SpawnMeteor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmScript_SpawnMeteor_m525EE44CE87BC8BF4B5073DCBB8CB9634F6A1684 (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* L_0 = (U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341*)il2cpp_codegen_object_new(U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnMeteorU3Ed__18__ctor_m21B07FDCC5E4271176365AB4C3A879FC344E9172(L_0, 0, NULL);
		U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::SpawnMeteors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_SpawnMeteors_mB7B8033AB21186B7F26E9CACDA706C85F0AF0BB5 (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int count = (int)UnityEngine.Random.Range(MeteorsPerSecondRange.Minimum, MeteorsPerSecondRange.Maximum);
		RangeOfIntegers_t2B1CBD17A8EB3CE2902B2B130ABDEBFCF686316F* L_0 = (&__this->___MeteorsPerSecondRange_29);
		int32_t L_1 = L_0->___Minimum_0;
		RangeOfIntegers_t2B1CBD17A8EB3CE2902B2B130ABDEBFCF686316F* L_2 = (&__this->___MeteorsPerSecondRange_29);
		int32_t L_3 = L_2->___Maximum_1;
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(L_1, L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0031;
	}

IL_0020:
	{
		// StartCoroutine(SpawnMeteor());
		RuntimeObject* L_5;
		L_5 = MeteorSwarmScript_SpawnMeteor_m525EE44CE87BC8BF4B5073DCBB8CB9634F6A1684(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_Update_mB08F1B607DF09FB2B467F866BD85761FDF39653E (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// base.Update();
		FireBaseScript_Update_m6DC4C16380E2C9E80B027129B386353CC2E632EA(__this, NULL);
		// if (Duration > 0.0f && (elapsedSecond += Time.deltaTime) >= 1.0f)
		float L_0 = ((FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA*)__this)->___Duration_7;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		float L_1 = __this->___elapsedSecond_35;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_3 = ((float)il2cpp_codegen_add(L_1, L_2));
		V_0 = L_3;
		__this->___elapsedSecond_35 = L_3;
		float L_4 = V_0;
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// elapsedSecond = elapsedSecond - 1.0f;
		float L_5 = __this->___elapsedSecond_35;
		__this->___elapsedSecond_35 = ((float)il2cpp_codegen_subtract(L_5, (1.0f)));
		// SpawnMeteors();
		MeteorSwarmScript_SpawnMeteors_mB7B8033AB21186B7F26E9CACDA706C85F0AF0BB5(__this, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::PlayCollisionSound(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_PlayCollisionSound_m40C26728C4065A4C3483D87F5CD7805C61F1D083 (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_0 = NULL;
	int32_t V_1 = 0;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_2 = NULL;
	{
		// if (ExplosionSounds == null || ExplosionSounds.Length == 0)
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___ExplosionSounds_33;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___ExplosionSounds_33;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// AudioSource s = obj.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___obj0;
		NullCheck(L_2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_2, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		V_0 = L_3;
		// if (s == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// int index = UnityEngine.Random.Range(0, ExplosionSounds.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_6 = __this->___ExplosionSounds_33;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		V_1 = L_7;
		// AudioClip clip = ExplosionSounds[index];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_8 = __this->___ExplosionSounds_33;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		// s.PlayOneShot(clip, obj.transform.localScale.x);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = V_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ___obj0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		float L_17 = L_16.___x_2;
		NullCheck(L_12);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_12, L_13, L_17, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DigitalRuby.PyroParticles.MeteorSwarmScript::CleanupMeteor(System.Single,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeteorSwarmScript_CleanupMeteor_m9B7F87700A482924A0BF012767E2072167A1292F (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, float ___delay0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* L_0 = (U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6*)il2cpp_codegen_object_new(U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCleanupMeteorU3Ed__22__ctor_m1C03E818D1B4984EB0AF976270398A002500704A(L_0, 0, NULL);
		U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* L_1 = L_0;
		float L_2 = ___delay0;
		NullCheck(L_1);
		L_1->___delay_2 = L_2;
		U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* L_3 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___obj1;
		NullCheck(L_3);
		L_3->___obj_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___obj_3), (void*)L_4);
		return L_3;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::HandleCollision(UnityEngine.GameObject,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript_HandleCollision_m91FA0ABBF874E0ED574EE852E45203AAB63F73ED (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___col1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Renderer r = obj.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		V_0 = L_1;
		// if (r == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// else if (CollisionDelegate != null)
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_4 = __this->___CollisionDelegate_34;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// CollisionDelegate(this, obj);
		MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* L_5 = __this->___CollisionDelegate_34;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___obj0;
		NullCheck(L_5);
		MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_inline(L_5, __this, L_6, NULL);
	}

IL_0026:
	{
		// if (col.contacts.Length == 0)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_7 = ___col1;
		NullCheck(L_7);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_8;
		L_8 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_7, NULL);
		NullCheck(L_8);
		if ((((RuntimeArray*)L_8)->max_length))
		{
			goto IL_0044;
		}
	}
	{
		// pos = obj.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___obj0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_1 = L_11;
		// normal = -pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_12, NULL);
		V_2 = L_13;
		goto IL_0068;
	}

IL_0044:
	{
		// pos = col.contacts[0].point;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_14 = ___col1;
		NullCheck(L_14);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_15;
		L_15 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		V_1 = L_16;
		// normal = col.contacts[0].normal;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_17 = ___col1;
		NullCheck(L_17);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_18;
		L_18 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		V_2 = L_19;
	}

IL_0068:
	{
		// MeteorExplosionParticleSystem.transform.position = pos;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_20 = __this->___MeteorExplosionParticleSystem_21;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		NullCheck(L_21);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_22, NULL);
		// MeteorExplosionParticleSystem.transform.rotation = Quaternion.LookRotation(normal);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_23 = __this->___MeteorExplosionParticleSystem_21;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_25, NULL);
		NullCheck(L_24);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_24, L_26, NULL);
		// MeteorExplosionParticleSystem.Emit(UnityEngine.Random.Range(10, 20));
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_27 = __this->___MeteorExplosionParticleSystem_21;
		int32_t L_28;
		L_28 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)10), ((int32_t)20), NULL);
		NullCheck(L_27);
		ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D(L_27, L_28, NULL);
		// MeteorShrapnelParticleSystem.transform.position = col.contacts[0].point;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_29 = __this->___MeteorShrapnelParticleSystem_22;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_31 = ___col1;
		NullCheck(L_31);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_32;
		L_32 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_30);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_33, NULL);
		// MeteorShrapnelParticleSystem.Emit(UnityEngine.Random.Range(10, 20));
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_34 = __this->___MeteorShrapnelParticleSystem_22;
		int32_t L_35;
		L_35 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)10), ((int32_t)20), NULL);
		NullCheck(L_34);
		ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D(L_34, L_35, NULL);
		// PlayCollisionSound(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = ___obj0;
		MeteorSwarmScript_PlayCollisionSound_m40C26728C4065A4C3483D87F5CD7805C61F1D083(__this, L_36, NULL);
		// GameObject.Destroy(r);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_37, NULL);
		// StartCoroutine(CleanupMeteor(0.1f, obj));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = ___obj0;
		RuntimeObject* L_39;
		L_39 = MeteorSwarmScript_CleanupMeteor_m9B7F87700A482924A0BF012767E2072167A1292F(__this, (0.100000001f), L_38, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_40;
		L_40 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_39, NULL);
		// GameObject.Destroy(obj, 4.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = ___obj0;
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_41, (4.0f), NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeteorSwarmScript__ctor_m8CE2BC1AF6FB036DE26A41A8B2C6F70541F55F99 (MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* __this, const RuntimeMethod* method) 
{
	RangeOfIntegers_t2B1CBD17A8EB3CE2902B2B130ABDEBFCF686316F V_0;
	memset((&V_0), 0, sizeof(V_0));
	RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public float TimeToImpact = 1.0f;
		__this->___TimeToImpact_28 = (1.0f);
		// public RangeOfIntegers MeteorsPerSecondRange = new RangeOfIntegers { Minimum = 5, Maximum = 10 };
		il2cpp_codegen_initobj((&V_0), sizeof(RangeOfIntegers_t2B1CBD17A8EB3CE2902B2B130ABDEBFCF686316F));
		(&V_0)->___Minimum_0 = 5;
		(&V_0)->___Maximum_1 = ((int32_t)10);
		RangeOfIntegers_t2B1CBD17A8EB3CE2902B2B130ABDEBFCF686316F L_0 = V_0;
		__this->___MeteorsPerSecondRange_29 = L_0;
		// public RangeOfFloats ScaleRange = new RangeOfFloats { Minimum = 0.25f, Maximum = 1.5f };
		il2cpp_codegen_initobj((&V_1), sizeof(RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F));
		(&V_1)->___Minimum_0 = (0.25f);
		(&V_1)->___Maximum_1 = (1.5f);
		RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F L_1 = V_1;
		__this->___ScaleRange_30 = L_1;
		// public RangeOfFloats MeteorLifeTimeRange = new RangeOfFloats { Minimum = 4.0f, Maximum = 8.0f };
		il2cpp_codegen_initobj((&V_1), sizeof(RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F));
		(&V_1)->___Minimum_0 = (4.0f);
		(&V_1)->___Maximum_1 = (8.0f);
		RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F L_2 = V_1;
		__this->___MeteorLifeTimeRange_31 = L_2;
		// private float elapsedSecond = 1.0f;
		__this->___elapsedSecond_35 = (1.0f);
		FireBaseScript__ctor_m46C036B7EBCE1C61A8F51E7B0B8AD050B0C9B4E5(__this, NULL);
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
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnMeteorU3Ed__18__ctor_m21B07FDCC5E4271176365AB4C3A879FC344E9172 (U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnMeteorU3Ed__18_System_IDisposable_Dispose_mB8E3EB78E4D60456B0BFB18E55D415E1BA91C184 (U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnMeteorU3Ed__18_MoveNext_mCAF29D195C9EFE9FF9732CA5DEE0DE4953C38BFF (U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m6F22622E0D063D8A1083175EAEF4236C8F164F86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_10 = NULL;
	float V_11 = 0.0f;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_12 = NULL;
	int32_t V_13 = 0;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_14 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float delay = UnityEngine.Random.Range(0.0f, 1.0f);
		float L_4;
		L_4 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (1.0f), NULL);
		V_11 = L_4;
		// yield return new WaitForSeconds(delay);
		float L_5 = V_11;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 src = Source + (UnityEngine.Random.insideUnitSphere * SourceRadius);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_7 = V_1;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___Source_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->___SourceRadius_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_12, NULL);
		V_2 = L_13;
		// GameObject meteor = GameObject.Instantiate(MeteorPrefab);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_14 = V_1;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___MeteorPrefab_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_3 = L_16;
		// float scale = UnityEngine.Random.Range(ScaleRange.Minimum, ScaleRange.Maximum);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_17 = V_1;
		NullCheck(L_17);
		RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F* L_18 = (&L_17->___ScaleRange_30);
		float L_19 = L_18->___Minimum_0;
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_20 = V_1;
		NullCheck(L_20);
		RangeOfFloats_tD144A671D1DF484C64BE80D00DC9B05D508DFA1F* L_21 = (&L_20->___ScaleRange_30);
		float L_22 = L_21->___Maximum_1;
		float L_23;
		L_23 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_19, L_22, NULL);
		V_4 = L_23;
		// meteor.transform.localScale = new Vector3(scale, scale, scale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_3;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		float L_26 = V_4;
		float L_27 = V_4;
		float L_28 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_25, L_29, NULL);
		// meteor.transform.position = src;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_3;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_2;
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_32, NULL);
		// Vector3 dest = gameObject.transform.position + (UnityEngine.Random.insideUnitSphere * DestinationRadius);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_33 = V_1;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_38 = V_1;
		NullCheck(L_38);
		float L_39 = L_38->___DestinationRadius_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_37, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_40, NULL);
		V_5 = L_41;
		// dest.y = 0.0f;
		(&V_5)->___y_3 = (0.0f);
		// Vector3 dir = (dest - src);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_42, L_43, NULL);
		// Vector3 vel = dir / TimeToImpact;
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_45 = V_1;
		NullCheck(L_45);
		float L_46 = L_45->___TimeToImpact_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_44, L_46, NULL);
		V_6 = L_47;
		// Rigidbody r = meteor.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_3;
		NullCheck(L_48);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_49;
		L_49 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_48, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// r.velocity = vel;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_50 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_6;
		NullCheck(L_50);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_50, L_51, NULL);
		// float xRot = UnityEngine.Random.Range(-90.0f, 90.0f);
		float L_52;
		L_52 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-90.0f), (90.0f), NULL);
		V_7 = L_52;
		// float yRot = UnityEngine.Random.Range(-90.0f, 90.0f);
		float L_53;
		L_53 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-90.0f), (90.0f), NULL);
		V_8 = L_53;
		// float zRot = UnityEngine.Random.Range(-90.0f, 90.0f);
		float L_54;
		L_54 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-90.0f), (90.0f), NULL);
		V_9 = L_54;
		// r.angularVelocity = new Vector3(xRot, yRot, zRot);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_55 = L_50;
		float L_56 = V_7;
		float L_57 = V_8;
		float L_58 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), L_56, L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_55);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_55, L_59, NULL);
		// r.mass *= (scale * scale);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_60 = L_55;
		NullCheck(L_60);
		float L_61;
		L_61 = Rigidbody_get_mass_m09DDDDC437499B83B3BD0D77C134BFDC3E667054(L_60, NULL);
		float L_62 = V_4;
		float L_63 = V_4;
		NullCheck(L_60);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_60, ((float)il2cpp_codegen_multiply(L_61, ((float)il2cpp_codegen_multiply(L_62, L_63)))), NULL);
		// Renderer renderer = meteor.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = V_3;
		NullCheck(L_64);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_65;
		L_65 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_64, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		// renderer.sharedMaterial = MeteorMaterials[UnityEngine.Random.Range(0, MeteorMaterials.Length)];
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_66 = V_1;
		NullCheck(L_66);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_67 = L_66->___MeteorMaterials_23;
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_68 = V_1;
		NullCheck(L_68);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_69 = L_68->___MeteorMaterials_23;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_69)->max_length)), NULL);
		NullCheck(L_67);
		int32_t L_71 = L_70;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_65);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_65, L_72, NULL);
		// meteor.transform.parent = gameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_3;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_73, NULL);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_75 = V_1;
		NullCheck(L_75);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_75, NULL);
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		NullCheck(L_74);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_74, L_77, NULL);
		// meteor.GetComponent<FireCollisionForwardScript>().CollisionHandler = this;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = V_3;
		NullCheck(L_78);
		FireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F* L_79;
		L_79 = GameObject_GetComponent_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m6F22622E0D063D8A1083175EAEF4236C8F164F86(L_78, GameObject_GetComponent_TisFireCollisionForwardScript_tC376BE73DA8E339765495505D5C03E294DFFFA8F_m6F22622E0D063D8A1083175EAEF4236C8F164F86_RuntimeMethod_var);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_80 = V_1;
		NullCheck(L_79);
		L_79->___CollisionHandler_4 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&L_79->___CollisionHandler_4), (void*)L_80);
		// Mesh mesh = MeteorMeshes[UnityEngine.Random.Range(0, MeteorMeshes.Length - 1)];
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_81 = V_1;
		NullCheck(L_81);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_82 = L_81->___MeteorMeshes_24;
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_83 = V_1;
		NullCheck(L_83);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_84 = L_83->___MeteorMeshes_24;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_84)->max_length)), 1)), NULL);
		NullCheck(L_82);
		int32_t L_86 = L_85;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_87 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_10 = L_87;
		// meteor.GetComponent<MeshFilter>().mesh = mesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_3;
		NullCheck(L_88);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_89;
		L_89 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_88, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_90 = V_10;
		NullCheck(L_89);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_89, L_90, NULL);
		// TrailRenderer t = meteor.GetComponent<TrailRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_3;
		NullCheck(L_91);
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_92;
		L_92 = GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62(L_91, GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62_RuntimeMethod_var);
		// t.startWidth = UnityEngine.Random.Range(2.0f, 3.0f) * scale;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_93 = L_92;
		float L_94;
		L_94 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((2.0f), (3.0f), NULL);
		float L_95 = V_4;
		NullCheck(L_93);
		TrailRenderer_set_startWidth_m63B133730FF263B3E8153DDCD095194202F820AC(L_93, ((float)il2cpp_codegen_multiply(L_94, L_95)), NULL);
		// t.endWidth = UnityEngine.Random.Range(0.25f, 0.5f) * scale;
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_96 = L_93;
		float L_97;
		L_97 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.25f), (0.5f), NULL);
		float L_98 = V_4;
		NullCheck(L_96);
		TrailRenderer_set_endWidth_mCB89A9AEFE6B16FAA2AF9BA9570399C908477578(L_96, ((float)il2cpp_codegen_multiply(L_97, L_98)), NULL);
		// t.time = UnityEngine.Random.Range(0.25f, 0.5f);
		float L_99;
		L_99 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.25f), (0.5f), NULL);
		NullCheck(L_96);
		TrailRenderer_set_time_mD4760D84A531B310E2A4069F87B4E2EF2FEF4C23(L_96, L_99, NULL);
		// if (EmissionSounds != null && EmissionSounds.Length != 0)
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_100 = V_1;
		NullCheck(L_100);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_101 = L_100->___EmissionSounds_32;
		if (!L_101)
		{
			goto IL_0259;
		}
	}
	{
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_102 = V_1;
		NullCheck(L_102);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_103 = L_102->___EmissionSounds_32;
		NullCheck(L_103);
		if (!(((RuntimeArray*)L_103)->max_length))
		{
			goto IL_0259;
		}
	}
	{
		// AudioSource audio = meteor.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = V_3;
		NullCheck(L_104);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_105;
		L_105 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_104, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		V_12 = L_105;
		// if (audio != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_106 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_107;
		L_107 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_106, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_107)
		{
			goto IL_0259;
		}
	}
	{
		// int index = UnityEngine.Random.Range(0, EmissionSounds.Length);
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_108 = V_1;
		NullCheck(L_108);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_109 = L_108->___EmissionSounds_32;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_109)->max_length)), NULL);
		V_13 = L_110;
		// AudioClip clip = EmissionSounds[index];
		MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* L_111 = V_1;
		NullCheck(L_111);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_112 = L_111->___EmissionSounds_32;
		int32_t L_113 = V_13;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_14 = L_115;
		// audio.PlayOneShot(clip, scale);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_116 = V_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_117 = V_14;
		float L_118 = V_4;
		NullCheck(L_116);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_116, L_117, L_118, NULL);
	}

IL_0259:
	{
		// }
		return (bool)0;
	}
}
// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnMeteorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED99C6D69F5326C23FDC97341EC6FF36E33B5B8F (U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnMeteorU3Ed__18_System_Collections_IEnumerator_Reset_m9C987B9DADC6641B63CE792920CE520DB9136A4B (U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnMeteorU3Ed__18_System_Collections_IEnumerator_Reset_m9C987B9DADC6641B63CE792920CE520DB9136A4B_RuntimeMethod_var)));
	}
}
// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<SpawnMeteor>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnMeteorU3Ed__18_System_Collections_IEnumerator_get_Current_m4C61424E216674E89AB859D404F6DA013F138294 (U3CSpawnMeteorU3Ed__18_t3EC736A0283E9E37E04E9AB06A1053503079F341* __this, const RuntimeMethod* method) 
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
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupMeteorU3Ed__22__ctor_m1C03E818D1B4984EB0AF976270398A002500704A (U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupMeteorU3Ed__22_System_IDisposable_Dispose_m2BBE07480CA81B4380D5486AA259DC2347A13294 (U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCleanupMeteorU3Ed__22_MoveNext_m78AFA7EA7FE56DF1682A3C234C626A0F9C04487B (U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->___delay_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject.Destroy(obj.GetComponent<Collider>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___obj_3;
		NullCheck(L_5);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6;
		L_6 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_5, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
		// GameObject.Destroy(obj.GetComponent<Rigidbody>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___obj_3;
		NullCheck(L_7);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8;
		L_8 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_7, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// GameObject.Destroy(obj.GetComponent<TrailRenderer>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___obj_3;
		NullCheck(L_9);
		TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* L_10;
		L_10 = GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62(L_9, GameObject_GetComponent_TisTrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39_m5581A18C6CF2E7538E8F9E58BC56C1F21064FB62_RuntimeMethod_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_10, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCleanupMeteorU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5F8F925DD54FC264EBC5508BE037AF9DD299D2A3 (U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanupMeteorU3Ed__22_System_Collections_IEnumerator_Reset_m43DCBF111F3586BBA0DDA2103E2F3ECCA8CA1120 (U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCleanupMeteorU3Ed__22_System_Collections_IEnumerator_Reset_m43DCBF111F3586BBA0DDA2103E2F3ECCA8CA1120_RuntimeMethod_var)));
	}
}
// System.Object DigitalRuby.PyroParticles.MeteorSwarmScript/<CleanupMeteor>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCleanupMeteorU3Ed__22_System_Collections_IEnumerator_get_Current_m82643928BFDF05624682F6C8938013CF72C0B4AB (U3CCleanupMeteorU3Ed__22_tA52CC17FD0D1C2F5B77E27AD20F52E6D3A23E5D6* __this, const RuntimeMethod* method) 
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
// System.Void DigitalRuby.PyroParticles.SingleLineAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleLineAttribute__ctor_m6AE699711E6639D09CA2F5AD2308F7F3F13CC7AE (SingleLineAttribute_t13F8F42D28C340C6FBFF21E3E726CE1E1F1FF6EF* __this, String_t* ___tooltip0, const RuntimeMethod* method) 
{
	{
		// public SingleLineAttribute(string tooltip) { Tooltip = tooltip; }
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// public SingleLineAttribute(string tooltip) { Tooltip = tooltip; }
		String_t* L_0 = ___tooltip0;
		SingleLineAttribute_set_Tooltip_mD5866418BA4960E9E4C470A7999E663FD1772629_inline(__this, L_0, NULL);
		// public SingleLineAttribute(string tooltip) { Tooltip = tooltip; }
		return;
	}
}
// System.String DigitalRuby.PyroParticles.SingleLineAttribute::get_Tooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SingleLineAttribute_get_Tooltip_m1C76C5D27C7617BAA02C025DAB88088F077AE475 (SingleLineAttribute_t13F8F42D28C340C6FBFF21E3E726CE1E1F1FF6EF* __this, const RuntimeMethod* method) 
{
	{
		// public string Tooltip { get; private set; }
		String_t* L_0 = __this->___U3CTooltipU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DigitalRuby.PyroParticles.SingleLineAttribute::set_Tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleLineAttribute_set_Tooltip_mD5866418BA4960E9E4C470A7999E663FD1772629 (SingleLineAttribute_t13F8F42D28C340C6FBFF21E3E726CE1E1F1FF6EF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Tooltip { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTooltipU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTooltipU3Ek__BackingField_0), (void*)L_0);
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
// System.Void HippoGamez.Testing_Controls::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_Controls_Awake_mBA95A7862A897CE7DAD3EC68ACD3F62E0E1DCB62 (Testing_Controls_t4A14CEBD910D44AAEC0046CD0776799D6ABF571F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void HippoGamez.Testing_Controls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_Controls_Update_m643A989F53536C447D276401D55835CF7C10F262 (Testing_Controls_t4A14CEBD910D44AAEC0046CD0776799D6ABF571F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var press = Controller_Manager.Right.GetValue(Pressed.Primary);
		Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* L_0;
		L_0 = Controller_Manager_get_Right_mF3FB5D6E65BE4060AF6E3433678BD907FDE0A2E4(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Controller_InputHandler_GetValue_mCE56592DB7325E9CC2F855E7F7FB82A7D7B05293(L_0, 3, NULL);
		V_0 = L_1;
		// var touch = Controller_Manager.Right.GetValue(Touched.Secondary);
		Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* L_2;
		L_2 = Controller_Manager_get_Right_mF3FB5D6E65BE4060AF6E3433678BD907FDE0A2E4(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Controller_InputHandler_GetValue_mB20EC8E740148588CA0286FDF88BDFEE10C9CE13(L_2, 1, NULL);
		V_1 = L_3;
		// var axis = Controller_Manager.Right.GetValue(Axis.ThumbstickHorizontal);
		Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* L_4;
		L_4 = Controller_Manager_get_Right_mF3FB5D6E65BE4060AF6E3433678BD907FDE0A2E4(NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = Controller_InputHandler_GetValue_m5407C667CC8783F7A87734AF10572C29450CBF04(L_4, 2, NULL);
		V_2 = L_5;
		// var Color = new Color(Convert.ToInt32(press), Convert.ToInt32(touch), axis);
		bool L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mD16970C5EE189AB763DADA2434A719FDB3FBF542(L_6, NULL);
		bool L_8 = V_1;
		int32_t L_9;
		L_9 = Convert_ToInt32_mD16970C5EE189AB763DADA2434A719FDB3FBF542(L_8, NULL);
		float L_10 = V_2;
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_3), ((float)L_7), ((float)L_9), L_10, NULL);
		// meshRenderer.materials[0].color = Color;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11 = __this->___meshRenderer_4;
		NullCheck(L_11);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_12;
		L_12 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_3;
		NullCheck(L_14);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void HippoGamez.Testing_Controls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Testing_Controls__ctor_mF1C9C74C1DDB7EDD66C200AA40CEA58C63431810 (Testing_Controls_t4A14CEBD910D44AAEC0046CD0776799D6ABF571F* __this, const RuntimeMethod* method) 
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
// System.Boolean HippoGamez.Controller_InputHandler::GetValue(Pressed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_InputHandler_GetValue_mCE56592DB7325E9CC2F855E7F7FB82A7D7B05293 (Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* __this, int32_t ___pressed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_get_Value_m0549FD302B64DDC652237EC80150446CE3F63AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_ContainsKey_m81729DC7A0B3702E73565C001628BC6999B5B969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_get_Item_m0685ADF395D9BCF47C3B3D0F19913217FF7FF8FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PressedDict.ContainsKey(pressed))
		PressedDictionary_t02FB23427C40371AB0EAEA98D081F3BF7C52B717* L_0 = __this->___PressedDict_4;
		int32_t L_1 = ___pressed0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SerializableDictionaryBase_2_ContainsKey_m81729DC7A0B3702E73565C001628BC6999B5B969(L_0, L_1, SerializableDictionaryBase_2_ContainsKey_m81729DC7A0B3702E73565C001628BC6999B5B969_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return PressedDict[pressed].Value;
		PressedDictionary_t02FB23427C40371AB0EAEA98D081F3BF7C52B717* L_3 = __this->___PressedDict_4;
		int32_t L_4 = ___pressed0;
		NullCheck(L_3);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_5;
		L_5 = SerializableDictionaryBase_2_get_Item_m0685ADF395D9BCF47C3B3D0F19913217FF7FF8FB(L_3, L_4, SerializableDictionaryBase_2_get_Item_m0685ADF395D9BCF47C3B3D0F19913217FF7FF8FB_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = Action_3_get_Value_m0549FD302B64DDC652237EC80150446CE3F63AFB_inline(L_5, Action_3_get_Value_m0549FD302B64DDC652237EC80150446CE3F63AFB_RuntimeMethod_var);
		return L_6;
	}

IL_0020:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean HippoGamez.Controller_InputHandler::GetValue(Touched)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_InputHandler_GetValue_mB20EC8E740148588CA0286FDF88BDFEE10C9CE13 (Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* __this, int32_t ___touched0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_get_Value_m0549FD302B64DDC652237EC80150446CE3F63AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_ContainsKey_m9E3103D80B750291CAED69BE8306F28FCC8E7E35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_get_Item_m7D19BDD1F71DBFFA4EBE9BDBF2132C3918778D6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TouchedDict.ContainsKey(touched))
		TouchedDictionary_t1BE185AF3B3BA9311328DEA86523B7EF70DBB622* L_0 = __this->___TouchedDict_5;
		int32_t L_1 = ___touched0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SerializableDictionaryBase_2_ContainsKey_m9E3103D80B750291CAED69BE8306F28FCC8E7E35(L_0, L_1, SerializableDictionaryBase_2_ContainsKey_m9E3103D80B750291CAED69BE8306F28FCC8E7E35_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return TouchedDict[touched].Value;
		TouchedDictionary_t1BE185AF3B3BA9311328DEA86523B7EF70DBB622* L_3 = __this->___TouchedDict_5;
		int32_t L_4 = ___touched0;
		NullCheck(L_3);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_5;
		L_5 = SerializableDictionaryBase_2_get_Item_m7D19BDD1F71DBFFA4EBE9BDBF2132C3918778D6A(L_3, L_4, SerializableDictionaryBase_2_get_Item_m7D19BDD1F71DBFFA4EBE9BDBF2132C3918778D6A_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = Action_3_get_Value_m0549FD302B64DDC652237EC80150446CE3F63AFB_inline(L_5, Action_3_get_Value_m0549FD302B64DDC652237EC80150446CE3F63AFB_RuntimeMethod_var);
		return L_6;
	}

IL_0020:
	{
		// return false;
		return (bool)0;
	}
}
// System.Single HippoGamez.Controller_InputHandler::GetValue(Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Controller_InputHandler_GetValue_m5407C667CC8783F7A87734AF10572C29450CBF04 (Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* __this, int32_t ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_get_Value_m6F9BDD5B1ED341789850F50A3AED1F79C3C32621_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_ContainsKey_m22FEDFB5EC34233F6A87DD1B0B1371202435C999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_get_Item_mFAA59C8A7875C915FE421B2DD8885C1E5208F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AxisDict.ContainsKey(axis))
		AxisDictionary_t3295F725C89679A9C1132617CBF51111AD73637E* L_0 = __this->___AxisDict_6;
		int32_t L_1 = ___axis0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SerializableDictionaryBase_2_ContainsKey_m22FEDFB5EC34233F6A87DD1B0B1371202435C999(L_0, L_1, SerializableDictionaryBase_2_ContainsKey_m22FEDFB5EC34233F6A87DD1B0B1371202435C999_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return AxisDict[axis].Value;
		AxisDictionary_t3295F725C89679A9C1132617CBF51111AD73637E* L_3 = __this->___AxisDict_6;
		int32_t L_4 = ___axis0;
		NullCheck(L_3);
		FloatAction_t8E7E11E1DE4D3D8C387831B8E3881778B04B9C62* L_5;
		L_5 = SerializableDictionaryBase_2_get_Item_mFAA59C8A7875C915FE421B2DD8885C1E5208F96E(L_3, L_4, SerializableDictionaryBase_2_get_Item_mFAA59C8A7875C915FE421B2DD8885C1E5208F96E_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = Action_3_get_Value_m6F9BDD5B1ED341789850F50A3AED1F79C3C32621_inline(L_5, Action_3_get_Value_m6F9BDD5B1ED341789850F50A3AED1F79C3C32621_RuntimeMethod_var);
		return L_6;
	}

IL_0020:
	{
		// return 0f;
		return (0.0f);
	}
}
// System.Void HippoGamez.Controller_InputHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_InputHandler__ctor_m11E17C55CA6CB926ABFFBCE6CD5E60784D3D747D (Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* __this, const RuntimeMethod* method) 
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
// System.Void HippoGamez.Controller_Manager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Manager_Awake_m348011C2B2B4FC55554D8E149D8EEFB44916C166 (Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_StaticFields*)il2cpp_codegen_static_fields_for(Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_StaticFields*)il2cpp_codegen_static_fields_for(Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// HippoGamez.Controller_InputHandler HippoGamez.Controller_Manager::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* Controller_Manager_get_Right_mF3FB5D6E65BE4060AF6E3433678BD907FDE0A2E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance.rightController;
		Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38* L_0 = ((Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_StaticFields*)il2cpp_codegen_static_fields_for(Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* L_1 = L_0->___rightController_6;
		return L_1;
	}
}
// HippoGamez.Controller_InputHandler HippoGamez.Controller_Manager::get_Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* Controller_Manager_get_Left_m4EBF71CC9422FBFBBE068EADAA5C3E4A81136D0D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance.leftController;
		Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38* L_0 = ((Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_StaticFields*)il2cpp_codegen_static_fields_for(Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* L_1 = L_0->___leftController_5;
		return L_1;
	}
}
// System.Void HippoGamez.Controller_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Manager__ctor_mE0E5764220277331D031E3BBA34F6B62E0B2AC0D (Controller_Manager_tC805D284EC7EDBA469EB18166D23E4912714EE38* __this, const RuntimeMethod* method) 
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
// System.Void HippoGamez.Wand_LineDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_Start_m23930F67630B4FD9F6B585965D3DCF32BF290FE6 (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lineRenderer = FollowObject.GetComponent<LineRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___FollowObject_6;
		NullCheck(L_0);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1;
		L_1 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_0, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___lineRenderer_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_10), (void*)L_1);
		// lineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___lineRenderer_10;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HippoGamez.Wand_LineDrawer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_Update_mFED8AA11127E40B222E68194039E2B14437DF42E (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_get_Item_m0685ADF395D9BCF47C3B3D0F19913217FF7FF8FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Controller_Manager.Right.PressedDict[Pressed.Primary].IsActivated || Input.GetKeyDown(KeyCode.A))
		Controller_InputHandler_t0DCE4D3A799970099762DE223B6CB03A4964638F* L_0;
		L_0 = Controller_Manager_get_Right_mF3FB5D6E65BE4060AF6E3433678BD907FDE0A2E4(NULL);
		NullCheck(L_0);
		PressedDictionary_t02FB23427C40371AB0EAEA98D081F3BF7C52B717* L_1 = L_0->___PressedDict_4;
		NullCheck(L_1);
		BooleanAction_tCC1DEE6FD8A0721BFDC6F3CFAEC8851587381D1E* L_2;
		L_2 = SerializableDictionaryBase_2_get_Item_m0685ADF395D9BCF47C3B3D0F19913217FF7FF8FB(L_1, 3, SerializableDictionaryBase_2_get_Item_m0685ADF395D9BCF47C3B3D0F19913217FF7FF8FB_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean Zinnia.Action.Action::get_IsActivated() */, L_2);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)97), NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}

IL_0020:
	{
		// isRecording = !isRecording;
		bool L_5 = __this->___isRecording_8;
		__this->___isRecording_8 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_002f:
	{
		// if (isRecording)
		bool L_6 = __this->___isRecording_8;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// Record();
		Wand_LineDrawer_Record_m7C12A42C941235543BFB46245A29D949E367B41E(__this, NULL);
		goto IL_0045;
	}

IL_003f:
	{
		// CheckRecordingPoints();
		Wand_LineDrawer_CheckRecordingPoints_m21B09CCC30F9A1782862DDBA9EC059EE94D8B9C4(__this, NULL);
	}

IL_0045:
	{
		// Vector3 temp = transform.rotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		V_1 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_0 = L_9;
		// temp.x = 0;
		(&V_0)->___x_2 = (0.0f);
		// transform.rotation = Quaternion.Euler(temp);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_11, NULL);
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void HippoGamez.Wand_LineDrawer::Record()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_Record_m7C12A42C941235543BFB46245A29D949E367B41E (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) 
{
	{
		// if (lineRenderer.enabled == false)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_0, NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		// lineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___lineRenderer_10;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)1, NULL);
		// CreateLine();
		Wand_LineDrawer_CreateLine_m29F972C0AA57F719D5097DAC8DD8D3FC4F81ED15(__this, NULL);
		// direction = FollowObject.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___FollowObject_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		__this->___direction_11 = L_4;
		return;
	}

IL_0031:
	{
		// else if (Vector2.Distance(FollowObject.position, oldPosition) > .1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___FollowObject_6;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___oldPosition_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_8, NULL);
		float L_10;
		L_10 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_7, L_9, NULL);
		if ((!(((float)L_10) > ((float)(0.100000001f)))))
		{
			goto IL_007a;
		}
	}
	{
		// UpdateLine(FollowObject.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___FollowObject_6;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Wand_LineDrawer_UpdateLine_m7D3A5A7A56B36E855CE82C1116D96EF6DA8531B3(__this, L_12, NULL);
		// oldPosition = FollowObject.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___FollowObject_6;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		__this->___oldPosition_9 = L_14;
	}

IL_007a:
	{
		// return;
		return;
	}
}
// System.Void HippoGamez.Wand_LineDrawer::CheckRecordingPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_CheckRecordingPoints_m21B09CCC30F9A1782862DDBA9EC059EE94D8B9C4 (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m251071555886405496EFB79059552922EBF92D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE2C1B7C4018B3B1EC621DA5686682AC9CFC9D43D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE7CC713093F09975C835E945325BE6894D430168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA97EB0EEBAD537616578832E89EF24F89A08902B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91F16FB86D1D05608AABE279F084CFC279773C14);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C V_2;
	memset((&V_2), 0, sizeof(V_2));
	Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// if (lineRenderer.positionCount > 2)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_00de;
		}
	}
	{
		// Vector3[] lineBuffer = new Vector3[] { };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_2;
		// Array.Resize(ref lineBuffer, lineRenderer.positionCount);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_10;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_3, NULL);
		Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B((&V_0), L_4, Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var);
		// lineRenderer.GetPositions(lineBuffer);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___lineRenderer_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = LineRenderer_GetPositions_m22BED8498DA2527EC806F389B82EFD0E2574C840(L_5, L_6, NULL);
		// for (int i = 0; i < lineBuffer.Length; i++)
		V_1 = 0;
		goto IL_0058;
	}

IL_003b:
	{
		// lineBuffer[i] = FollowObject.InverseTransformPoint(lineBuffer[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_0;
		int32_t L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___FollowObject_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_10, L_14, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_15);
		// for (int i = 0; i < lineBuffer.Length; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < lineBuffer.Length; i++)
		int32_t L_17 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_003b;
		}
	}
	{
		// foreach (var spell in SpellList)
		List_1_tAB303B47BE7C059E9B40A5E7BED2F174031D7B9C* L_19 = __this->___SpellList_7;
		NullCheck(L_19);
		Enumerator_t49D72FC7EF3BBB5F262DE27B9899FE89EBBF222C L_20;
		L_20 = List_1_GetEnumerator_mA97EB0EEBAD537616578832E89EF24F89A08902B(L_19, List_1_GetEnumerator_mA97EB0EEBAD537616578832E89EF24F89A08902B_RuntimeMethod_var);
		V_2 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m251071555886405496EFB79059552922EBF92D4E((&V_2), Enumerator_Dispose_m251071555886405496EFB79059552922EBF92D4E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c5_1;
			}

IL_006c_1:
			{
				// foreach (var spell in SpellList)
				Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* L_21;
				L_21 = Enumerator_get_Current_mE7CC713093F09975C835E945325BE6894D430168_inline((&V_2), Enumerator_get_Current_mE7CC713093F09975C835E945325BE6894D430168_RuntimeMethod_var);
				V_3 = L_21;
				// var isSame = Wand_LineComparer.CompareLines(lineBuffer, spell.GetRecordedPoints(), Threshold);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_0;
				Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* L_23 = V_3;
				NullCheck(L_23);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24;
				L_24 = Wand_Spell_Data_GetRecordedPoints_m293B02EAF408DBF927B3D4F2642FD8752BDBAACF(L_23, NULL);
				bool L_25;
				L_25 = Wand_LineComparer_CompareLines_m12A7FD7595CFAFDB4E4C550331E9802BFFB90D4A(L_22, L_24, (10.0f), NULL);
				// text.text = Wand_LineComparer.CompareLines(lineBuffer, spell.GetRecordedPoints()).ToString();
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = __this->___text_5;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = V_0;
				Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* L_28 = V_3;
				NullCheck(L_28);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29;
				L_29 = Wand_Spell_Data_GetRecordedPoints_m293B02EAF408DBF927B3D4F2642FD8752BDBAACF(L_28, NULL);
				float L_30;
				L_30 = Wand_LineComparer_CompareLines_m3A3F12A02CE4113F0091EFD5804945C7459585A3(L_27, L_29, NULL);
				V_4 = L_30;
				String_t* L_31;
				L_31 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
				NullCheck(L_26);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_31);
				// if (isSame)
				if (!L_25)
				{
					goto IL_00c5_1;
				}
			}
			{
				// ActivateSpell(spell.Prefab);
				Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* L_32 = V_3;
				NullCheck(L_32);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_32->___Prefab_4;
				Wand_LineDrawer_ActivateSpell_m3099D91FF5994F4C5DE877114165C10D82708A4D(__this, L_33, NULL);
				// text.text = "kaboom";
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34 = __this->___text_5;
				NullCheck(L_34);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_34, _stringLiteral91F16FB86D1D05608AABE279F084CFC279773C14);
				// break;
				goto IL_00de;
			}

IL_00c5_1:
			{
				// foreach (var spell in SpellList)
				bool L_35;
				L_35 = Enumerator_MoveNext_mE2C1B7C4018B3B1EC621DA5686682AC9CFC9D43D((&V_2), Enumerator_MoveNext_mE2C1B7C4018B3B1EC621DA5686682AC9CFC9D43D_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_006c_1;
				}
			}
			{
				goto IL_00de;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		// lineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_36 = __this->___lineRenderer_10;
		NullCheck(L_36);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_36, (bool)0, NULL);
		// lineRenderer.positionCount = 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_37 = __this->___lineRenderer_10;
		NullCheck(L_37);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_37, 2, NULL);
		// }
		return;
	}
}
// System.Void HippoGamez.Wand_LineDrawer::CreateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_CreateLine_m29F972C0AA57F719D5097DAC8DD8D3FC4F81ED15 (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.SetPosition(0, FollowObject.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___FollowObject_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_0, 0, L_2, NULL);
		// lineRenderer.SetPosition(1, FollowObject.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___FollowObject_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_3, 1, L_5, NULL);
		// oldPosition = FollowObject.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___FollowObject_6;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___oldPosition_9 = L_7;
		// }
		return;
	}
}
// System.Void HippoGamez.Wand_LineDrawer::UpdateLine(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_UpdateLine_m7D3A5A7A56B36E855CE82C1116D96EF6DA8531B3 (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// lineRenderer.positionCount++;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_10;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_1, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		// lineRenderer.SetPosition(lineRenderer.positionCount - 1, pos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->___lineRenderer_10;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___lineRenderer_10;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___pos0;
		NullCheck(L_4);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_4, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_7, NULL);
		// }
		return;
	}
}
// System.Void HippoGamez.Wand_LineDrawer::ActivateSpell(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer_ActivateSpell_m3099D91FF5994F4C5DE877114165C10D82708A4D (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SpellPrefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(SpellPrefab, FollowObject.position, FollowObject.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___SpellPrefab0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___FollowObject_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___FollowObject_6;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HippoGamez.Wand_LineDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineDrawer__ctor_mF695310938ED6C363C8159F6450F98995F9EB091 (Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* __this, const RuntimeMethod* method) 
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
// System.Void HippoGamez.Wand_LineSaver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineSaver_Start_m3CFDB596859C953C5D6C663E109B0D532C99EDE9 (Wand_LineSaver_t60B98B9295B56D9FDC46FE90DFCE36D8B3DF6DB0* __this, const RuntimeMethod* method) 
{
	{
		// SaveName.gameObject.SetActive(true);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___SaveName_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HippoGamez.Wand_LineSaver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineSaver_Update_m81267D7CEDE4A8CE27E1A9E36E60E13CD58A8ED5 (Wand_LineSaver_t60B98B9295B56D9FDC46FE90DFCE36D8B3DF6DB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.G))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)103), NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Save(LineDrawer.FollowObject.GetComponent<LineRenderer>());
		Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* L_1 = __this->___LineDrawer_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1->___FollowObject_6;
		NullCheck(L_2);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3;
		L_3 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_2, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		Wand_LineSaver_Save_mD1783130AEB9795FCD433D43413BE6A838E3F4EC(__this, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void HippoGamez.Wand_LineSaver::Save(UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineSaver_Save_mD1783130AEB9795FCD433D43413BE6A838E3F4EC (Wand_LineSaver_t60B98B9295B56D9FDC46FE90DFCE36D8B3DF6DB0* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87CE70F53A88E15B02D332E2E101B2F5F767C7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var movement = new Vector3[] { };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		// Array.Resize(ref savedPoints, lineRenderer.positionCount);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_1 = (&__this->___savedPoints_6);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = ___lineRenderer0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_2, NULL);
		Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B(L_1, L_3, Array_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4C9DF0A86CE5482324FB7A3021BFAB516723189B_RuntimeMethod_var);
		// lineRenderer.GetPositions(savedPoints);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = ___lineRenderer0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->___savedPoints_6;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = LineRenderer_GetPositions_m22BED8498DA2527EC806F389B82EFD0E2574C840(L_4, L_5, NULL);
		// for (int i = 0; i < savedPoints.Length; i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_0029:
	{
		// savedPoints[i] = LineDrawer.FollowObject.InverseTransformPoint(savedPoints[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->___savedPoints_6;
		int32_t L_8 = V_0;
		Wand_LineDrawer_t48007C7F7E534DC154B766ED5B3D561CCD31FB08* L_9 = __this->___LineDrawer_4;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->___FollowObject_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___savedPoints_6;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_10, L_14, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_15);
		// for (int i = 0; i < savedPoints.Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < savedPoints.Length; i++)
		int32_t L_17 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = __this->___savedPoints_6;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// var path = Application.dataPath + "/" + SavePath + "/Saves/Text/" + SaveName.text + ".txt";
		String_t* L_19;
		L_19 = Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9(NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_20 = __this->___SaveName_5;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_20, NULL);
		String_t* L_22;
		L_22 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_19, _stringLiteral87CE70F53A88E15B02D332E2E101B2F5F767C7CE, L_21, _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96, NULL);
		// File.WriteAllText(path, SerializeVector3Array(savedPoints));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = __this->___savedPoints_6;
		String_t* L_24;
		L_24 = Wand_LineSaver_SerializeVector3Array_m15A891C4AB29BAF49B6B1CC2E091809A0B0C4765(L_23, NULL);
		File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB(L_22, L_24, NULL);
		// SaveName.text = "";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_25 = __this->___SaveName_5;
		NullCheck(L_25);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_25, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.String HippoGamez.Wand_LineSaver::SerializeVector3Array(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Wand_LineSaver_SerializeVector3Array_m15A891C4AB29BAF49B6B1CC2E091809A0B0C4765 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___aVectors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// foreach (Vector3 v in aVectors)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___aVectors0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0059;
	}

IL_000c:
	{
		// foreach (Vector3 v in aVectors)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// sb.Append(v.x).Append(" ").Append(v.y).Append(" ").Append(v.z).Append("|");
		StringBuilder_t* L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_3;
		float L_8 = L_7.___x_2;
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_6, L_8, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_3;
		float L_12 = L_11.___y_3;
		NullCheck(L_10);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_10, L_12, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
		float L_16 = L_15.___z_4;
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_14, L_16, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0059:
	{
		// foreach (Vector3 v in aVectors)
		int32_t L_20 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// if (sb.Length > 0) // remove last "|"
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_22, NULL);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		// sb.Remove(sb.Length - 1, 1);
		StringBuilder_t* L_24 = V_0;
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_25, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_24, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), 1, NULL);
	}

IL_0078:
	{
		// return sb.ToString();
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		return L_29;
	}
}
// UnityEngine.Vector3[] HippoGamez.Wand_LineSaver::DeserializeVector3Array(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Wand_LineSaver_DeserializeVector3Array_mB69336ED8B5CFAD2C0944B8BA9826A84AD53F458 (String_t* ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// string[] vectors = aData.Split('|');
		String_t* L_0 = ___aData0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)124), 0, NULL);
		V_0 = L_1;
		// Vector3[] result = new Vector3[vectors.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < vectors.Length; i++)
		V_2 = 0;
		goto IL_006d;
	}

IL_0017:
	{
		// string[] values = vectors[i].Split(' ');
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_7, ((int32_t)32), 0, NULL);
		V_3 = L_8;
		// if (values.Length != 3)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_3;
		NullCheck(L_9);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) == ((int32_t)3)))
		{
			goto IL_0045;
		}
	}
	{
		// throw new System.FormatException("component count mismatch. Expected 3 components but got " + values.Length);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_3;
		NullCheck(L_10);
		V_4 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral246D45F0E95F368D6AC3C588DA6A511225EA31E3)), L_11, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_13 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wand_LineSaver_DeserializeVector3Array_mB69336ED8B5CFAD2C0944B8BA9826A84AD53F458_RuntimeMethod_var)));
	}

IL_0045:
	{
		// result[i] = new Vector3(float.Parse(values[0]), float.Parse(values[1]), float.Parse(values[2]));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_1;
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		float L_19;
		L_19 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_18, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		float L_23;
		L_23 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_22, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = 2;
		String_t* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		float L_27;
		L_27 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), L_19, L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_28);
		// for (int i = 0; i < vectors.Length; i++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < vectors.Length; i++)
		int32_t L_30 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// return result;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_1;
		return L_32;
	}
}
// System.Void HippoGamez.Wand_LineSaver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_LineSaver__ctor_m7D7D19A8947C1C42EC6DFA43B3C87D08EEC86689 (Wand_LineSaver_t60B98B9295B56D9FDC46FE90DFCE36D8B3DF6DB0* __this, const RuntimeMethod* method) 
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
// UnityEngine.Vector3[] HippoGamez.Wand_Spell_Data::GetRecordedPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Wand_Spell_Data_GetRecordedPoints_m293B02EAF408DBF927B3D4F2642FD8752BDBAACF (Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* __this, const RuntimeMethod* method) 
{
	{
		// return Wand_LineSaver.DeserializeVector3Array(recordedPoints.text);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___recordedPoints_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2;
		L_2 = Wand_LineSaver_DeserializeVector3Array_mB69336ED8B5CFAD2C0944B8BA9826A84AD53F458(L_1, NULL);
		return L_2;
	}
}
// System.Void HippoGamez.Wand_Spell_Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_Spell_Data__ctor_mBB42C98BE9B491753AA77305F2D6FE93AB4440AC (Wand_Spell_Data_t6F27F1F58D6F4FE1EBC440587ED4A013D910FB3B* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void RotaryHeart.Lib.DataBaseExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataBaseExample__ctor_mAE8500D2F507D3B17FDC3BC266B7BEE4B49F046B (DataBaseExample_t7A4C16AAED16F3872341CA295CBD2FDE392AD71A* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void RotaryHeart.Lib.DataBaseExample/ChildTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildTest__ctor_mA5789191220826471A8665143BC5D479E6AAAEF6 (ChildTest_t1877D57D37B93C618D99C38C7B7038AA0539F513* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RotaryHeart.Lib.DataBaseExample/ClassTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassTest__ctor_m71E94E299C74E9D44F79D52F13BF16C5AC0C5375 (ClassTest_tD42ACF8027A4B6673EBC1416538C11C432126FC8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RotaryHeart.Lib.DataBaseExample/ArrayTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayTest__ctor_m9761DD4A264377A78928280E61863C06E15253A0 (ArrayTest_t62CBF96B23D57B3A55B73E6C59F4A52A0EAAD0C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass::Equals(RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancedGenericClass_Equals_mAA940C368AD8933F9D055D26C5D96B837F4CF59C (AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* __this, AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(null, other)) return false;
		AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, other)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other)) return true;
		AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* L_1 = ___other0;
		if ((!(((RuntimeObject*)(AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8*)__this) == ((RuntimeObject*)(AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, other)) return true;
		return (bool)1;
	}

IL_000b:
	{
		// return other.value == value;
		AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* L_2 = ___other0;
		NullCheck(L_2);
		float L_3 = L_2->___value_0;
		float L_4 = __this->___value_0;
		return (bool)((((float)L_3) == ((float)L_4))? 1 : 0);
	}
}
// System.Boolean RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancedGenericClass_Equals_m58EFDCF5550E3A82947CFA4FF024121FB2680B69 (AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) return true;
		RuntimeObject* L_1 = ___obj0;
		if ((!(((RuntimeObject*)(AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != typeof(AdvancedGenericClass)) return false;
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// if (obj.GetType() != typeof(AdvancedGenericClass)) return false;
		return (bool)0;
	}

IL_0024:
	{
		// return Equals((AdvancedGenericClass)obj);
		RuntimeObject* L_7 = ___obj0;
		bool L_8;
		L_8 = AdvancedGenericClass_Equals_mAA940C368AD8933F9D055D26C5D96B837F4CF59C(__this, ((AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8*)CastclassClass((RuntimeObject*)L_7, AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8_il2cpp_TypeInfo_var)), NULL);
		return L_8;
	}
}
// System.Int32 RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvancedGenericClass_GetHashCode_m77CAEA1F904B62B7EB63FE51F8B9A1B04CB383D1 (AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* __this, const RuntimeMethod* method) 
{
	{
		// return value.GetHashCode();
		float* L_0 = (&__this->___value_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		return L_1;
	}
}
// System.Void RotaryHeart.Lib.DataBaseExample/AdvancedGenericClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedGenericClass__ctor_m5D3355F876D3875AD64CC03E83989947897DB926 (AdvancedGenericClass_t6A07D38B335065E0CF4829B9C9C0E3BF7C8C29C8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RotaryHeart.Lib.DataBaseExample/Generic_String::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generic_String__ctor_m0572D4249402B8FB881EE4414DC8B7AAAE5F4DCC (Generic_String_t2234285FF3DD0045F70BB0D8E44510799176671D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m537E286071018D8015FF58E6E1476891B3189BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t7661DF0B3121AEE25F7E3C3C3F29908225B0BD7A_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m537E286071018D8015FF58E6E1476891B3189BCA(__this, SerializableDictionaryBase_2__ctor_m537E286071018D8015FF58E6E1476891B3189BCA_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/Generic_Generic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generic_Generic__ctor_m5C60DFB7E4E9447FDB1E0B8BB74CAA84138920AC (Generic_Generic_tB1F03B51C267DB4C7A9E26FF63F7968F7B08A1BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mB533A587D149BFE81E55309ED24E6EF22EF437A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t0B5F156CD4F992E9031711B03C5FAB887A7E304E_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mB533A587D149BFE81E55309ED24E6EF22EF437A7(__this, SerializableDictionaryBase_2__ctor_mB533A587D149BFE81E55309ED24E6EF22EF437A7_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/C_Int::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Int__ctor_m6170840A8D5B516671955325295ABD2B151F72D1 (C_Int_tFF9DCC017612B1974C79128888BB0B4157BD2136* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m1580EC95BD547106BAF190D852445D6B64E5C50A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_tC7DDA6CAEA187CC26CA56A52C495D4F14E0D7443_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m1580EC95BD547106BAF190D852445D6B64E5C50A(__this, SerializableDictionaryBase_2__ctor_m1580EC95BD547106BAF190D852445D6B64E5C50A_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/G_Int::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G_Int__ctor_m8442375FBE88D32D7201F2FDC59AEDB2CF35E862 (G_Int_t77F24BB7D96D4DF71CF71D2B5E1ABB501E6F8664* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m6953F1B459B4A4CC98BDD79DD4CF9760B3A31E74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t2701267F51179D6B02FD337AC5BA1FBD864CE64D_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m6953F1B459B4A4CC98BDD79DD4CF9760B3A31E74(__this, SerializableDictionaryBase_2__ctor_m6953F1B459B4A4CC98BDD79DD4CF9760B3A31E74_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/I_GO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void I_GO__ctor_m45E12EE36B08EB4610A4404352D1120DD1EE48D8 (I_GO_t7C29E0EBAC722236FDD99C51948BD0BD73AD1823* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m8B1AE0AC5C2B827EF9D4C4CA45518DC974691C3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t3C62299EF94A9C037C7C4AFEE063CE33DA89127F_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m8B1AE0AC5C2B827EF9D4C4CA45518DC974691C3D(__this, SerializableDictionaryBase_2__ctor_m8B1AE0AC5C2B827EF9D4C4CA45518DC974691C3D_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/GO_I::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GO_I__ctor_mEBB8643C1DAB790741B6F971419D50015B0D81D7 (GO_I_tC9780EFC2870FC49D75F198A7B4FE7700A69535E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m3B93FA3EC99D99D646DB8096383FCDAC4DA88AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t6EC90538B4951BF60A3E2C190C6CB125BB9C4404_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m3B93FA3EC99D99D646DB8096383FCDAC4DA88AAB(__this, SerializableDictionaryBase_2__ctor_m3B93FA3EC99D99D646DB8096383FCDAC4DA88AAB_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/S_GO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S_GO__ctor_m5167AFD593273611E3AFB1A81F178AE99CC132EF (S_GO_t9CC5BA3CE53956A968CBCBF4D6627527FCBE49E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mC6344D14CD6733E5F14776EA4E328DD981D1225C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_tD9463B5701AF253B611963279A14F5CFB419D3E8_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mC6344D14CD6733E5F14776EA4E328DD981D1225C(__this, SerializableDictionaryBase_2__ctor_mC6344D14CD6733E5F14776EA4E328DD981D1225C_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/GO_S::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GO_S__ctor_m0CE9D90CFF39489818166504867F3CC5396F7AEC (GO_S_tE24369AA562CDE70E9B7F375BB7438FFC805255F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mB6F532F0265BDD305727B82ACCE79E070B1A66A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_tA023BC935178BC9E782E10919CACD27F63DC313F_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mB6F532F0265BDD305727B82ACCE79E070B1A66A5(__this, SerializableDictionaryBase_2__ctor_mB6F532F0265BDD305727B82ACCE79E070B1A66A5_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/S_Mat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S_Mat__ctor_mA8CC0779695BF1D6585C5B59014A1722B0376620 (S_Mat_t1667342C2C0221F2B2E415570E6484B4276D1A51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m456F702469F49C42B0D467DBE28B2B1EB2E0D7B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t143ABF7B884655958AB5B7CEEF511FB4793A0D18_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m456F702469F49C42B0D467DBE28B2B1EB2E0D7B7(__this, SerializableDictionaryBase_2__ctor_m456F702469F49C42B0D467DBE28B2B1EB2E0D7B7_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/Mat_S::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mat_S__ctor_mD721E0462FA9F45AAAF528595937FC479F31931E (Mat_S_tEC995C514A1AA1D071B9A010F4AE1696D9A92BF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m49F2F599156D6E39076FA33B338CECAA3CA0CA9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t00CAE4B863FACFFDD671D8FE9117CB0BE4886E8B_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m49F2F599156D6E39076FA33B338CECAA3CA0CA9F(__this, SerializableDictionaryBase_2__ctor_m49F2F599156D6E39076FA33B338CECAA3CA0CA9F_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/S_AC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S_AC__ctor_m470692949338BCF69EDCB5C400C5F2A0D7D50B52 (S_AC_tED99629B7EE1A081768E144F52EB42FF7027A3AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m079FF38429225C8FA576951A9C43CFA8ED3744F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_tEDE499141292B54304E4FE75C1B374EE574E5657_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m079FF38429225C8FA576951A9C43CFA8ED3744F0(__this, SerializableDictionaryBase_2__ctor_m079FF38429225C8FA576951A9C43CFA8ED3744F0_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/AC_S::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AC_S__ctor_m9510C5470A4D267199A0D88C0DC0163DE395EA23 (AC_S_t10D18F8E63B0C30C3E681DC3F517857F1B3DE3B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mE0768488EECC889A9D8CAA79EE14583C9A3856FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t5593B0F968AF2EED7BBB23846AE61C87B161BE66_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mE0768488EECC889A9D8CAA79EE14583C9A3856FF(__this, SerializableDictionaryBase_2__ctor_mE0768488EECC889A9D8CAA79EE14583C9A3856FF_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/S_Sprite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S_Sprite__ctor_m4702117B755C8210A04ACB6F46AC3BFC077E6291 (S_Sprite_t5F54C467068B7533EEEAE816B2E60DE43E31A100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m05B2CB515AC1B1CA1E0BABBF783BC9F8C28E8BEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t6668F2F3ACAC4CBE5976884F1BE56722D3F9E7F4_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m05B2CB515AC1B1CA1E0BABBF783BC9F8C28E8BEE(__this, SerializableDictionaryBase_2__ctor_m05B2CB515AC1B1CA1E0BABBF783BC9F8C28E8BEE_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/V3_Q::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V3_Q__ctor_m6C4A3DE7861026AF0F1F1C6CF9A61D1A36ADD5D6 (V3_Q_t3E98CE3EF32328BB160DD9A514214ACA51DBAF34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m38B5E0368DD84C9557CBB03167609E82FF87A87D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t80053145D2C2E137A48EABFE776974F96E99C4BA_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m38B5E0368DD84C9557CBB03167609E82FF87A87D(__this, SerializableDictionaryBase_2__ctor_m38B5E0368DD84C9557CBB03167609E82FF87A87D_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/Q_V3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Q_V3__ctor_m4F55D0A6B45C173E46261575D0FE6F9B7EC7AD42 (Q_V3_t5BFCD4612600D3C64FA0F778F0BB8DCD3B866BB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m76CE5A307320065BEA78715868F2E90AC77D6D2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t4F611225CCE8719BD1CA132D0CBCE599300D57E6_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m76CE5A307320065BEA78715868F2E90AC77D6D2D(__this, SerializableDictionaryBase_2__ctor_m76CE5A307320065BEA78715868F2E90AC77D6D2D_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/S_GenericDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S_GenericDictionary__ctor_mA7A1BEF89C13AA3CDAA8D84D6AE53B8AB4544F29 (S_GenericDictionary_tEC88A15AA034F3A437E51164ED24E0BEC610BAA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m630CD0A30091E0E690F9BA232799904E2A6CE09F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_tAA93C0A0389A82E255F8EF46B24B7FA71254EC1B_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m630CD0A30091E0E690F9BA232799904E2A6CE09F(__this, SerializableDictionaryBase_2__ctor_m630CD0A30091E0E690F9BA232799904E2A6CE09F_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/I_GenericDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void I_GenericDictionary__ctor_m7F20DC740BD2433DEC2685BE425E535D6B722C16 (I_GenericDictionary_t86E2E60AAD364035640F35F6CC2B506E23FFADD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m9CACD18445AA3F07EB36B0E6BF42247CF4BC43B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t05C97893AAB0671256FCD55DC05E16CE86EC3F9D_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m9CACD18445AA3F07EB36B0E6BF42247CF4BC43B4(__this, SerializableDictionaryBase_2__ctor_m9CACD18445AA3F07EB36B0E6BF42247CF4BC43B4_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/Int_IntArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int_IntArray__ctor_m569AC7EF9E30F9810FC68CFA578DC9F8D331136D (Int_IntArray_tCA02FE89D18AFDDB451DAC944CA794EEB3DB709B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m205792B75CF21B5FE3C96466D1FE8D905622029F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_tB49D53C936FD82E8BC1C6D339F6DC8B1B9D7CCCC_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m205792B75CF21B5FE3C96466D1FE8D905622029F(__this, SerializableDictionaryBase_2__ctor_m205792B75CF21B5FE3C96466D1FE8D905622029F_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/Enum_String::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enum_String__ctor_m431B75035DEC2A068405E2E8359B86527DE649A7 (Enum_String_t19E95F171D577147A376C14215928926762DAF8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mB491E5CFA6C03DA0155F54C417B74A3CF5CD7AC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t926B7BFDA035A4E6C83E547708908A4B5B7CB725_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mB491E5CFA6C03DA0155F54C417B74A3CF5CD7AC1(__this, SerializableDictionaryBase_2__ctor_mB491E5CFA6C03DA0155F54C417B74A3CF5CD7AC1_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.DataBaseExample/AdvanGeneric_String::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvanGeneric_String__ctor_m52447A48B56FE282E7573E132BD94856B3A73A2A (AdvanGeneric_String_t764F537F5D271CDA41CB8B687E7A376D52A8B234* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mFE621481CCA0CB0B01061F07977C956890BBB563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t8B6A5AC30EB40104B50B8673E0566D5683DF933C_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mFE621481CCA0CB0B01061F07977C956890BBB563(__this, SerializableDictionaryBase_2__ctor_mFE621481CCA0CB0B01061F07977C956890BBB563_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.NestedDB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedDB__ctor_mDAEAB419C3258C8D1D792CD338E5908665212DAE (NestedDB_t4DF32B83AC7A5D48247128D52FD39A8289D78883* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void RotaryHeart.Lib.Example::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Example__ctor_mEBB17B53C6A8DEB84043A0A986F795B5316EC709 (Example_tEDD34DA5C53315AEC26F86D1F38DBA082E8D8FB6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RotaryHeart.Lib.NestedExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedExample__ctor_mF138FB3804D51E3754C86B60A066E04986CBC014 (NestedExample_t3D1CC70A3949B9F1674C0FA236834FF17600F4AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RotaryHeart.Lib.MainDict::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainDict__ctor_m70EC696D0331072593C73B42095F255976D4C2D3 (MainDict_tAD488DB322F47FFDE577430CAD18D3C1C4F28BAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_mE391E92B13E922D250B185E31474803A7735795C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t01E2CC99F401F6825C88907A86E33CC90DA657A4_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_mE391E92B13E922D250B185E31474803A7735795C(__this, SerializableDictionaryBase_2__ctor_mE391E92B13E922D250B185E31474803A7735795C_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.NestedDict::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedDict__ctor_m8A39DEEB8D4A399A93B37484CFAD5DD0FEFAB148 (NestedDict_t716D44958B471F8E720A8855883D9F10448D275B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m533EF54A5605862010AD147FAD45F2C35D8CDB05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t809B40FDA51264938603D975F96D5FBA4F2C92E6_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m533EF54A5605862010AD147FAD45F2C35D8CDB05(__this, SerializableDictionaryBase_2__ctor_m533EF54A5605862010AD147FAD45F2C35D8CDB05_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.Nested2Dict::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nested2Dict__ctor_m7E4671F946C8C9D96143B8DA1389A2A31B3C1871 (Nested2Dict_t081CC73F8064AC01C8ACC78FD5A41402BFEDD43A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2__ctor_m86A1AEBB9197D31B5DC481BAE2F19185CD844844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerializableDictionaryBase_2_t385A278780BF13A8CA6D94CF19F12C4060E12923_il2cpp_TypeInfo_var);
		SerializableDictionaryBase_2__ctor_m86A1AEBB9197D31B5DC481BAE2F19185CD844844(__this, SerializableDictionaryBase_2__ctor_m86A1AEBB9197D31B5DC481BAE2F19185CD844844_RuntimeMethod_var);
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
// System.Void RotaryHeart.Lib.SerializableDictionary.DrawKeyAsPropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawKeyAsPropertyAttribute__ctor_m6C0A24145A6EC7D0F69C90BA0E837830BF0760AC (DrawKeyAsPropertyAttribute_t33E1C19EBFFB3F0A97508AA07E081EA8540977AD* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.String RotaryHeart.Lib.SerializableDictionary.IDAttribute::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IDAttribute_get_Id_m8C420508ADE5DB0E3A5F7F16B2724AE4D29097F4 (IDAttribute_t4D30F6CCBF386F778D12F1F914C2A8FB39032FF0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _id; }
		String_t* L_0 = __this->____id_0;
		return L_0;
	}
}
// System.Void RotaryHeart.Lib.SerializableDictionary.IDAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDAttribute__ctor_mFE72E88BF60846CB4F116DC284BA6FC38BA84F7B (IDAttribute_t4D30F6CCBF386F778D12F1F914C2A8FB39032FF0* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// public IDAttribute(string id)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// _id = id;
		String_t* L_0 = ___id0;
		__this->____id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____id_0), (void*)L_0);
		// }
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
// System.Void RotaryHeart.Lib.SerializableDictionary.RequiredReferences::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredReferences__ctor_m581E9AE121F1DCF3359E4EF1F96BBAC11745F0B0 (RequiredReferences_tD5108FC3712926BDFE0E8346C499B6B1E98B49A9* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void RotaryHeart.Lib.SerializableDictionary.ReorderableList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReorderableList__ctor_m480498869DED78754C4BA726A15C3706F7EFE5C4 (ReorderableList_tCC3940A688A7EA9ED7B7BDBE5259111B02586356* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RotaryHeart.Lib.SerializableDictionary.DrawableDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawableDictionary__ctor_m11B9870540D9D6CFA91FC7A0003D09034ED25055 (DrawableDictionary_tC3085B334020EE4867AD5F9878C44FF35F358AC2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
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
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_Starting_m27A8262E14AD197A3D5CE0284E9E20C2EF9002B4_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->___U3CStartingU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FireBaseScript_get_Stopping_m46A8786A7F92D219062A52CA1DBC4F8E0E2666C3_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CStoppingU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_StopPercent_m2E32FC2291DC949593750986944F17AAB1C4AC62_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		float L_0 = ___value0;
		__this->___U3CStopPercentU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FireBaseScript_get_Starting_mC8C91AABB0DCB029D6440C6CF4EC4DED9A422227_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CStartingU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_StartPercent_mCC105A212924F673CFF75FFF91F09A369D0901A9_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		float L_0 = ___value0;
		__this->___U3CStartPercentU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireBaseScript_set_Stopping_mB4BAB9FC89301491B7D5CD0B02D8D6534DAE8C04_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->___U3CStoppingU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m439AD9812112D322BB4C41C368D03C9312DB6734_inline (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___value0;
		__this->___U3CAudioSourceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioSourceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* LoopingAudioSource_get_AudioSource_mD7D9917AFD7B6BE7B1F951ADC270D9C91E5E40C0_inline (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___U3CAudioSourceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_m975CF4B21304A1085A6879A7CB25B78811B6434D_inline (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = ___value0;
		__this->___U3CTargetVolumeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_mC3CB5787BFF7E38C4E78600E167110FE22DDEE0D_inline (LoopingAudioSource_tCD1A80332B769C494C11E8EDC73BFFDA588E5082* __this, const RuntimeMethod* method) 
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = __this->___U3CTargetVolumeU3Ek__BackingField_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FireBaseScript_get_StopPercent_m11AFFC7C92709E3FB28A5D114B45BEBA578CA425_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		float L_0 = __this->___U3CStopPercentU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FireBaseScript_get_StartPercent_m86D7B0BBBA3E9D1F0E3D61A88147C7367EAEEE45_inline (FireBaseScript_t68C9C5C23A665C3D9FC1C1F1191E9C577882A6FA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		float L_0 = __this->___U3CStartPercentU3Ek__BackingField_17;
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FireProjectileCollisionDelegate_Invoke_mBCA3EB6FCB925B4DB908F0B8993D0D495FA33E84_inline (FireProjectileCollisionDelegate_tE792648B1366FBB5A11478A01471B82CBA63433D* __this, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D* ___script0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FireProjectileScript_tE7112A2821C6C4E62B32C00954716A0F6074384D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___script0, ___pos1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeteorSwarmCollisionDelegate_Invoke_mA0AA00F0D3466188AEC4C689469AAED2D2818789_inline (MeteorSwarmCollisionDelegate_tC5451A76E554484BB873B55E0E95ADD34630F47F* __this, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC* ___script0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meteor1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MeteorSwarmScript_t40F1F415F72F96CB72C2B11F71353608199D57AC*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___script0, ___meteor1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SingleLineAttribute_set_Tooltip_mD5866418BA4960E9E4C470A7999E663FD1772629_inline (SingleLineAttribute_t13F8F42D28C340C6FBFF21E3E726CE1E1F1FF6EF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Tooltip { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTooltipU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTooltipU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
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
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Action_3_get_Value_m5CC34C4B0E587E7F21B4D327E5FDF89EF8E1C0A0_gshared_inline (Action_3_t78E3C1C038B259D2B0FC078000DA74292F7CF0DB* __this, const RuntimeMethod* method) 
{
	{
		// return value;
		bool L_0 = (bool)__this->___value_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Action_3_get_Value_m9ACA42E3B7A6CF3BB56366CF51908C3CF2B46704_gshared_inline (Action_3_t495F18D14335CEFDB39761D66DC1E2C5DC12DCC6* __this, const RuntimeMethod* method) 
{
	{
		// return value;
		float L_0 = (float)__this->___value_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
