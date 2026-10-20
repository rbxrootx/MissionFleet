// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58782680 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58782680() {
    __asm {
        mov eax, dword ptr [esp + 4]
        add dword ptr [ecx + 920h], eax
        mov edx, dword ptr [ecx + 920h]
        mov eax, dword ptr [ecx + 918h]
        cmp edx, eax
        ; Exact mapped bytes 76 06: jbe 0x587826a0
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [ecx + 920h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
