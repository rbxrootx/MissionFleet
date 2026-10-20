// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58DA56DC .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58da56dc() {
    __asm {
        ; Exact mapped bytes 0F 84 D9 87 E9 FF: je 0x58c3debb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x87
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C1 C3 1D: rol ebx, 0x1d
        __asm _emit 0xc1
        __asm _emit 0xc3
        __asm _emit 0x1d
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C0 DB 0B: rcr bl, 0xb
        __asm _emit 0xc0
        __asm _emit 0xdb
        __asm _emit 0x0b
        ; Exact mapped bytes F6 C2 1E: test dl, 0x1e
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x1e
        ; Exact mapped bytes 0F C1 DB: xadd ebx, ebx
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0xdb
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 3A C8: cmp cl, al
        __asm _emit 0x3a
        __asm _emit 0xc8
        ; Exact mapped bytes E9 3C 0C EA FF: jmp 0x58c46335
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0xea
        __asm _emit 0xff
    }
}
