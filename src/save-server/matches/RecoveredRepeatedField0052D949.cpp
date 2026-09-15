// Exact recovered repeated field/value leaf helper.
extern "C" __declspec(naked) void Recovered0052D949()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+184]
    __asm or ecx, 2
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+184], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
