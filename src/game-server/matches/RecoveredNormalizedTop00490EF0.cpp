extern "C" void Call00490F30();
extern "C" void *Data00586C20;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00490EF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00490F30
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00586C20
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
