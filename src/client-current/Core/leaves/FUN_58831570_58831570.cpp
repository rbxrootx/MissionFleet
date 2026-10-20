// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831570 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58831570_58831570() {
    __asm {
        add esp, -8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov edx, dword ptr [esp + 4]
        add esp, 8
        cmp edx, 41e00000h
        ; Exact mapped bytes 73 07: jae 0x5883158e
        __asm _emit 0x73
        __asm _emit 0x07
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        xor edx, edx
        ret
        cmp edx, 43f00000h
        ; Exact mapped bytes 0F 83 06 00 00 00: jae 0x588315a0
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 FF FF FF: jmp 0x588314c0
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
