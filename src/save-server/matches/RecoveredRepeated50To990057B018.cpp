extern "C" void Call00578ACB();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0057B018()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0x6c
    __asm mov dword ptr [ebp - 8], eax
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call00578ACB
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm add edx, 0xa4
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0xa4]
    __asm push edx
    __asm call dword ptr [ecx + 0xc]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
