// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874C8F0 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_5874c8f0() {
    __asm {
        ; Exact mapped bytes F6 81 70 01 00 00 08: test byte ptr [ecx + 0x170], 8
        __asm _emit 0xf6
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 74 05: je 0x5874c8fe
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A2 F0 FF FF: jmp 0x5874b9a0
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
