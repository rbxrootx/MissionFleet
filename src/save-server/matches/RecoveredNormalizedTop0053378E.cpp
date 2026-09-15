extern "C" void Call00532BAA();
extern "C" void *Data00636720;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053378E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00532BAA
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00636720
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
