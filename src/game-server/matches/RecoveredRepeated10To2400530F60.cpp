extern "C" void Call00530EB9();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered00530F60()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00530EB9
    __asm mov eax, dword ptr [eax + 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
