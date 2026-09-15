extern "C" void Call0049B999();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0049B977()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0xc0000000
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call0049B999
    __asm add esp, 8
    __asm xor ecx, ecx
    __asm cmp eax, 0x40000000
    __asm sete cl
    __asm mov eax, ecx
    __asm pop ebp
    __asm ret
}
