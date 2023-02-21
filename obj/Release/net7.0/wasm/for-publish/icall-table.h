#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
177,
182,
183,
184,
185,
186,
187,
188,
190,
191,
238,
239,
241,
263,
264,
265,
275,
276,
277,
278,
351,
352,
353,
356,
385,
386,
388,
390,
392,
394,
399,
407,
408,
409,
410,
411,
412,
413,
414,
415,
517,
525,
528,
530,
535,
536,
538,
539,
543,
544,
546,
547,
550,
551,
552,
555,
558,
560,
562,
623,
625,
627,
636,
637,
638,
640,
646,
647,
648,
649,
650,
658,
659,
660,
664,
665,
667,
669,
850,
991,
992,
4974,
4975,
4977,
4978,
4979,
4980,
4981,
4983,
4985,
4987,
4993,
4995,
4999,
5000,
5002,
5004,
5006,
5017,
5026,
5027,
5029,
5030,
5031,
5032,
5033,
5035,
5037,
5886,
5890,
5892,
5893,
5894,
5895,
6000,
6001,
6002,
6003,
6021,
6022,
6023,
6025,
6065,
6114,
6125,
6126,
6127,
6368,
6370,
6371,
6397,
6415,
6421,
6428,
6438,
6441,
6515,
6525,
6527,
6528,
6534,
6547,
6567,
6568,
6576,
6578,
6585,
6586,
6589,
6591,
6596,
6602,
6603,
6610,
6612,
6624,
6627,
6628,
6629,
6640,
6649,
6655,
6656,
6657,
6659,
6660,
6678,
6680,
6694,
6717,
6718,
6738,
6762,
6763,
7122,
7123,
7254,
7429,
7430,
7433,
7436,
7486,
7745,
7746,
8382,
8403,
8410,
8412,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
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
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
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
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
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
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
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
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
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
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 177,
ves_icall_System_Array_InternalCreate,
// token 182,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 183,
ves_icall_System_Array_CanChangePrimitive,
// token 184,
ves_icall_System_Array_FastCopy_raw,
// token 185,
ves_icall_System_Array_GetLength_raw,
// token 186,
ves_icall_System_Array_GetLowerBound_raw,
// token 187,
ves_icall_System_Array_GetGenericValue_icall,
// token 188,
ves_icall_System_Array_GetValueImpl_raw,
// token 190,
ves_icall_System_Array_SetValueImpl_raw,
// token 191,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 238,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 239,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 241,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 263,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 264,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 265,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 275,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 276,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 277,
ves_icall_System_Enum_InternalGetCorElementType,
// token 278,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 351,
ves_icall_System_Environment_get_ProcessorCount,
// token 352,
ves_icall_System_Environment_get_TickCount,
// token 353,
ves_icall_System_Environment_get_TickCount64,
// token 356,
ves_icall_System_Environment_FailFast_raw,
// token 385,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 386,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 388,
ves_icall_System_GC_SuppressFinalize_raw,
// token 390,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 392,
ves_icall_System_GC_GetGCMemoryInfo,
// token 394,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 399,
ves_icall_System_Object_MemberwiseClone_raw,
// token 407,
ves_icall_System_Math_Ceiling,
// token 408,
ves_icall_System_Math_Cos,
// token 409,
ves_icall_System_Math_Floor,
// token 410,
ves_icall_System_Math_Log10,
// token 411,
ves_icall_System_Math_Pow,
// token 412,
ves_icall_System_Math_Sin,
// token 413,
ves_icall_System_Math_Sqrt,
// token 414,
ves_icall_System_Math_Tan,
// token 415,
ves_icall_System_Math_ModF,
// token 517,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 525,
ves_icall_RuntimeType_make_array_type_raw,
// token 528,
ves_icall_RuntimeType_make_byref_type_raw,
// token 530,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 535,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 536,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 538,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 539,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 543,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 544,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 546,
ves_icall_System_RuntimeType_getFullName_raw,
// token 547,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 550,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 551,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 552,
ves_icall_RuntimeType_GetFields_native_raw,
// token 555,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 558,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 560,
ves_icall_RuntimeType_GetName_raw,
// token 562,
ves_icall_RuntimeType_GetNamespace_raw,
// token 623,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 625,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 627,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 636,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 637,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 638,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 640,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 646,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 647,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 648,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 649,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 650,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 658,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 659,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 660,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 664,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 665,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 667,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 669,
ves_icall_System_String_FastAllocateString_raw,
// token 850,
ves_icall_System_Type_internal_from_handle_raw,
// token 991,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 992,
ves_icall_System_ValueType_Equals_raw,
// token 4974,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 4975,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 4977,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 4978,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 4979,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 4980,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 4981,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 4983,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 4985,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 4987,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 4993,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 4995,
mono_monitor_exit_icall_raw,
// token 4999,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5000,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5002,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5004,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5006,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5017,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5026,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5027,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5029,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5030,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5031,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5032,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5033,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5035,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5037,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5886,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5890,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5892,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5893,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5894,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 5895,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6000,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6001,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6002,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6003,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6021,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6022,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6023,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6025,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 6065,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6114,
mono_object_hash_icall_raw,
// token 6125,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6126,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6127,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6368,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6370,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6371,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6397,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6415,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6421,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6428,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6438,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6441,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6515,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6525,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 6527,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6528,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 6534,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6547,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6567,
ves_icall_reflection_get_token_raw,
// token 6568,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6576,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6578,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6585,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6586,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6589,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6591,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6596,
ves_icall_reflection_get_token_raw,
// token 6602,
ves_icall_get_method_info_raw,
// token 6603,
ves_icall_get_method_attributes,
// token 6610,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6612,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6624,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6627,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6628,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6629,
ves_icall_reflection_get_token_raw,
// token 6640,
ves_icall_InternalInvoke_raw,
// token 6649,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6655,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6656,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6657,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6659,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6660,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6678,
ves_icall_InvokeClassConstructor_raw,
// token 6680,
ves_icall_InternalInvoke_raw,
// token 6694,
ves_icall_reflection_get_token_raw,
// token 6717,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 6718,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6738,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6762,
ves_icall_reflection_get_token_raw,
// token 6763,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7122,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7123,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7254,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7429,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7430,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7433,
ves_icall_ModuleBuilder_getToken_raw,
// token 7436,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7486,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7745,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7746,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8382,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8403,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8410,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8412,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
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
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
