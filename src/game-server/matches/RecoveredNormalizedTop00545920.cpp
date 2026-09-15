extern "C" void Call0053AF32();
extern "C" void *Data00584944;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00545920()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0053AF32
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00584944
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
