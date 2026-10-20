// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58C42EE0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58c42ee0_58C42EE0() {
    __asm {
        ; Exact mapped bytes 0F 84 08 00 00 00: je 0x58c42eee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A C1: cmp al, cl
        __asm _emit 0x3a
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 84 58 FF F9 FF: je 0x58be2e46
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 3A C8: cmp cl, al
        __asm _emit 0x3a
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 86 56 0F 00 00: jbe 0x58c43e4f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x56
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes E9 FF 83 32 00: jmp 0x58f6b300
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x83
        __asm _emit 0x32
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E9 62 2C 15 00: jmp 0x58d95b6a
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x2c
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes FF C1: inc ecx
        __asm _emit 0xff
        __asm _emit 0xc1
    }
}
