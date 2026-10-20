// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851130 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_58851130_58851130() {
    __asm {
        ; Exact mapped bytes 83 3D A8 9C 96 58 00: cmp dword ptr [0x58969ca8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 82 AC 01 00: je 0x5886bdbf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0xac
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
        ; Exact mapped bytes 75 0F: jne 0x58851164
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
        ; Exact mapped bytes 0F 85 51 AC 01 00: jne 0x5886bdbf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 AD 01 00: jmp 0x5886be78
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
