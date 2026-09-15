// Exact recovered failure callback/server lookup helper.
extern "C" void *Handler00687438;
extern "C" __declspec(naked) void Recovered00472280()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [Handler00687438]
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm je failed
    __asm mov ecx, dword ptr [ebp+8]
    __asm push ecx
    __asm call dword ptr [ebp-4]
    __asm add esp, 4
    __asm test eax, eax
    __asm jne succeeded
    __asm failed:
    __asm xor eax, eax
    __asm jmp short finished
    __asm succeeded:
    __asm mov eax, 1
    __asm finished:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
