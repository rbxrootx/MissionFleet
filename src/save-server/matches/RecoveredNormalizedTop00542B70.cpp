extern "C" void Call0053733F();
extern "C" void *Data00638E3C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00542B70()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0053733F
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00638E3C
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
