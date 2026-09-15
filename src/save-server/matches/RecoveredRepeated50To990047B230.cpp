extern "C" void Call0047B1F0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0047B230()
{
    __asm push ebp
    __asm mov ebp, esp
loc_0047B233:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm sub ecx, 1
    __asm mov dword ptr [ebp + 0xc], ecx
    __asm test eax, eax
    __asm jle loc_0047B264
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov cx, word ptr [ebp + 8]
    __asm push ecx
    __asm call Call0047B1F0
    __asm add esp, 0xc
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm cmp dword ptr [edx], -1
    __asm jne loc_0047B262
    __asm jmp loc_0047B264
loc_0047B262:
    __asm jmp loc_0047B233
loc_0047B264:
    __asm pop ebp
    __asm ret
}
