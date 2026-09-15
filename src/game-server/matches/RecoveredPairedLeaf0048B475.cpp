// Exact recovered paired leaf helper.
extern "C" __declspec(naked) void Recovered0048B475()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, 8
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
