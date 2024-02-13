#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
196,
208,
209,
210,
211,
212,
213,
214,
215,
216,
219,
220,
221,
384,
385,
386,
415,
416,
417,
437,
438,
439,
440,
538,
539,
540,
543,
578,
579,
581,
583,
585,
587,
592,
600,
601,
602,
603,
604,
605,
606,
607,
608,
702,
703,
769,
775,
778,
780,
785,
786,
788,
789,
793,
794,
796,
798,
799,
802,
803,
804,
807,
809,
812,
814,
816,
825,
890,
892,
894,
904,
905,
906,
907,
909,
916,
917,
918,
919,
920,
928,
929,
930,
934,
935,
937,
941,
942,
943,
1222,
1401,
1402,
7124,
7125,
7127,
7128,
7129,
7130,
7131,
7133,
7135,
7137,
7147,
7149,
7154,
7156,
7158,
7160,
7211,
7212,
7214,
7215,
7216,
7217,
7218,
7220,
7222,
8106,
8110,
8112,
8113,
8114,
8115,
8364,
8365,
8366,
8367,
8385,
8386,
8387,
8389,
8429,
8488,
8490,
8492,
8500,
8501,
8502,
8503,
8883,
8887,
8888,
8915,
8933,
8940,
8947,
8958,
8961,
8981,
9055,
9057,
9066,
9068,
9069,
9076,
9090,
9110,
9111,
9119,
9121,
9128,
9129,
9132,
9134,
9139,
9145,
9146,
9153,
9155,
9167,
9170,
9171,
9172,
9183,
9192,
9198,
9199,
9200,
9202,
9203,
9220,
9222,
9236,
9253,
9280,
9310,
9311,
9751,
9843,
9844,
10046,
10047,
10054,
10055,
10056,
10061,
10136,
10517,
10518,
10729,
10739,
11503,
11524,
11526,
11528,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 196,
ves_icall_System_Array_InternalCreate,
// token 208,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 209,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 210,
ves_icall_System_Array_CanChangePrimitive,
// token 211,
ves_icall_System_Array_FastCopy,
// token 212,
ves_icall_System_Array_GetLengthInternal_raw,
// token 213,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 214,
ves_icall_System_Array_GetGenericValue_icall,
// token 215,
ves_icall_System_Array_GetValueImpl_raw,
// token 216,
ves_icall_System_Array_SetGenericValue_icall,
// token 219,
ves_icall_System_Array_SetValueImpl_raw,
// token 220,
ves_icall_System_Array_InitializeInternal_raw,
// token 221,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 384,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 385,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 386,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 415,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 416,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 417,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 437,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 438,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 439,
ves_icall_System_Enum_InternalGetCorElementType,
// token 440,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 538,
ves_icall_System_Environment_get_ProcessorCount,
// token 539,
ves_icall_System_Environment_get_TickCount,
// token 540,
ves_icall_System_Environment_get_TickCount64,
// token 543,
ves_icall_System_Environment_FailFast_raw,
// token 578,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 579,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 581,
ves_icall_System_GC_SuppressFinalize_raw,
// token 583,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 585,
ves_icall_System_GC_GetGCMemoryInfo,
// token 587,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 592,
ves_icall_System_Object_MemberwiseClone_raw,
// token 600,
ves_icall_System_Math_Ceiling,
// token 601,
ves_icall_System_Math_Cos,
// token 602,
ves_icall_System_Math_Floor,
// token 603,
ves_icall_System_Math_Log10,
// token 604,
ves_icall_System_Math_Pow,
// token 605,
ves_icall_System_Math_Sin,
// token 606,
ves_icall_System_Math_Sqrt,
// token 607,
ves_icall_System_Math_Tan,
// token 608,
ves_icall_System_Math_ModF,
// token 702,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 703,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 769,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 775,
ves_icall_RuntimeType_make_array_type_raw,
// token 778,
ves_icall_RuntimeType_make_byref_type_raw,
// token 780,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 785,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 786,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 788,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 789,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 793,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 794,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 796,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 798,
ves_icall_System_RuntimeType_getFullName_raw,
// token 799,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 802,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 803,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 804,
ves_icall_RuntimeType_GetFields_native_raw,
// token 807,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 809,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 812,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 814,
ves_icall_RuntimeType_GetName_raw,
// token 816,
ves_icall_RuntimeType_GetNamespace_raw,
// token 825,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 890,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 892,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 894,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 904,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 905,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 906,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 907,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 909,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 916,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 917,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 918,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 919,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 920,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 928,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 929,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 930,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 934,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 935,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 937,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 941,
ves_icall_System_String_FastAllocateString_raw,
// token 942,
ves_icall_System_String_InternalIsInterned_raw,
// token 943,
ves_icall_System_String_InternalIntern_raw,
// token 1222,
ves_icall_System_Type_internal_from_handle_raw,
// token 1401,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1402,
ves_icall_System_ValueType_Equals_raw,
// token 7124,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7125,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7127,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7128,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7129,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7130,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7131,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7133,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7135,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7137,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7147,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7149,
mono_monitor_exit_icall_raw,
// token 7154,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7156,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7158,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7160,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7211,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7212,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7214,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7215,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7216,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7217,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7218,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7220,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7222,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8106,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8110,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8112,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8113,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8114,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8115,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8364,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8365,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8366,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8367,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8385,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8386,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8387,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8389,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8429,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8488,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8490,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8492,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8500,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8501,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8502,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8503,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8883,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8887,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8888,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8915,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8933,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8940,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8947,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8958,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8961,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8981,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9055,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9057,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9066,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9068,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9069,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9076,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9090,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9110,
ves_icall_reflection_get_token_raw,
// token 9111,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9119,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9121,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9128,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9129,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9132,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9134,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9139,
ves_icall_reflection_get_token_raw,
// token 9145,
ves_icall_get_method_info_raw,
// token 9146,
ves_icall_get_method_attributes,
// token 9153,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9155,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9167,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9170,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9171,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9172,
ves_icall_reflection_get_token_raw,
// token 9183,
ves_icall_InternalInvoke_raw,
// token 9192,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9198,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9199,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9200,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9202,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9203,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9220,
ves_icall_InvokeClassConstructor_raw,
// token 9222,
ves_icall_InternalInvoke_raw,
// token 9236,
ves_icall_reflection_get_token_raw,
// token 9253,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9280,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9310,
ves_icall_reflection_get_token_raw,
// token 9311,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9751,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9843,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9844,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10046,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10047,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10054,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10055,
ves_icall_ModuleBuilder_getToken_raw,
// token 10056,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10061,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10136,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10517,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10518,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10729,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10739,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11503,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11524,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11526,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11528,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
