extern "C" void Call00456800();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004568D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm lea eax, [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00456800
    __asm and eax, 0xff
    __asm test eax, eax
    __asm je loc_00456907
    __asm mov ecx, dword ptr [ebp + 8]
    __asm imul ecx, ecx, 0x30
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x10]
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov ax, word ptr [eax + ecx + 0x14]
    __asm mov word ptr [edx], ax
    __asm mov al, 1
    __asm jmp loc_00456909
loc_00456907:
    __asm xor al, al
loc_00456909:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
