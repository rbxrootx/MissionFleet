// Exact recovered repeated field/value leaf helper.
extern "C" __declspec(naked) void Recovered00533FBE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+140]
    __asm or ecx, 32
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+140], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
