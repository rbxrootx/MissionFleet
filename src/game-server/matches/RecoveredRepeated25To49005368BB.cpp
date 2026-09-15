extern "C" void Call00536702();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005368BB()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call00536702
    __asm mov ecx, dword ptr [ebp - 4]
    __asm xor edx, edx
    __asm cmp eax, dword ptr [ecx + 4]
    __asm setne dl
    __asm mov eax, edx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
