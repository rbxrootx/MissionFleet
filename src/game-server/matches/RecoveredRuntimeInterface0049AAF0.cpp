// Exact recovered runtime/interface helper.
extern "C" __declspec(naked) void Recovered0049AAF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [ebp+12], 0
    __asm je first
    __asm mov eax, dword ptr [ebp+12]
    __asm mov ecx, dword ptr [eax]
    __asm mov edx, dword ptr [ebp+12]
    __asm push edx
    __asm call dword ptr [ecx+4]
    __asm first:
    __asm mov eax, dword ptr [ebp+8]
    __asm cmp dword ptr [eax], 0
    __asm je store
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax]
    __asm mov eax, dword ptr [ecx]
    __asm push edx
    __asm call dword ptr [eax+8]
    __asm store:
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ebp+12]
    __asm mov dword ptr [ecx], edx
    __asm mov eax, dword ptr [ebp+12]
    __asm pop ebp
    __asm ret 8
}
