// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588510E0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_588510e0_588510E0() {
    __asm {
        ; Exact mapped bytes 83 3D A8 9C 96 58 00: cmp dword ptr [0x58969ca8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 32 AA 01 00: je 0x5886bb1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xaa
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
        ; Exact mapped bytes 75 0F: jne 0x58851114
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
        ; Exact mapped bytes 0F 85 01 AA 01 00: jne 0x5886bb1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 B5 AA 01 00: jmp 0x5886bbd8
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
