extern "C" void Call0056898A();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered005692BE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0x2c
    __asm mov dword ptr [ebp - 8], eax
    __asm push 1
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call0056898A
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm jne loc_005692EB
    __asm mov eax, 0x80040064
    __asm jmp loc_005692ED
loc_005692EB:
    __asm xor eax, eax
loc_005692ED:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
