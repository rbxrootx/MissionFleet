// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877EBD0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5877ebd0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        add dword ptr [ecx + 924h], eax
        mov edx, dword ptr [ecx + 924h]
        mov eax, dword ptr [ecx + 918h]
        cmp edx, eax
        ; Exact mapped bytes 76 06: jbe 0x5877ebf0
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [ecx + 924h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
