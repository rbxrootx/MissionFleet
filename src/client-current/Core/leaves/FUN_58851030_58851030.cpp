// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851030 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_58851030_58851030() {
    __asm {
        ; Exact mapped bytes 83 3D A8 9C 96 58 00: cmp dword ptr [0x58969ca8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 67 96 01 00: je 0x5886a6a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes 0F AE 5C 24 04: stmxcsr dword ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, dword ptr [esp + 4]
        and eax, 7f80h
        cmp eax, 1f80h
        ; Exact mapped bytes 75 0F: jne 0x58851064
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 04 24: mov ax, word ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        ; Exact mapped bytes 66 83 F8 7F: cmp ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7f
        lea esp, [esp + 8]
        ; Exact mapped bytes 0F 85 36 96 01 00: jne 0x5886a6a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 46 98 01 00: jmp 0x5886a8b9
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
