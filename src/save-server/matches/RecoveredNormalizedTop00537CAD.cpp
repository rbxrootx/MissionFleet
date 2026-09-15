extern "C" void Call004DC67A();
extern "C" void *Data0068BC7C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00537CAD()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call dword ptr [Data0068BC7C]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004DC67A
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
