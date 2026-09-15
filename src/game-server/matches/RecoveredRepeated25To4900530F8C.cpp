extern "C" void Call00530EB9();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00530F8C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00530EB9
    __asm xor ecx, ecx
    __asm cmp dword ptr [eax + 4], 0
    __asm sete cl
    __asm mov eax, ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
