extern "C" void Call00559AB0();
extern "C" void *Data005895A8;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00559843()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data005895A8
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00559AB0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
