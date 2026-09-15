extern "C" void Call0047C320();
extern "C" void Call0047C4A0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0047C250()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm wait
    __asm fnstcw word ptr [ebp - 0x10]
    __asm mov ax, word ptr [ebp - 0x10]
    __asm push eax
    __asm call Call0047C320
    __asm add esp, 4
    __asm mov dword ptr [ebp - 8], eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm and ecx, dword ptr [ebp + 0xc]
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm not edx
    __asm mov eax, dword ptr [ebp - 8]
    __asm and eax, edx
    __asm or ecx, eax
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm push ecx
    __asm call Call0047C4A0
    __asm add esp, 4
    __asm mov word ptr [ebp - 4], ax
    __asm fldcw word ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
