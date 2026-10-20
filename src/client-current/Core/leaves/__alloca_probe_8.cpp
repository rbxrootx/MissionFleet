// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588325F6 .. +0x16 bytes.
extern "C" __declspec(naked) void __alloca_probe_8() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4C 24 08: lea ecx, [esp + 8]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 E1 07: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 1B C9: sbb ecx, ecx
        __asm _emit 0x1b
        __asm _emit 0xc9
        ; Exact mapped bytes 0B C1: or eax, ecx
        __asm _emit 0x0b
        __asm _emit 0xc1
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes E9 E4 F4 FF FF: jmp 0x58831af0
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
