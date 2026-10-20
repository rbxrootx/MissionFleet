// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420590 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_00420590_00420590() {
    __asm {
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes 83 25 B4 FC 44 00 00: and dword ptr [0x44fcb4], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -2
        ; Exact mapped bytes 75 10: jne 0x4205b0
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes C7 05 B4 FC 44 00 01 00 00 00: mov dword ptr [0x44fcb4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 25 D4 C0 43 00: jmp dword ptr [0x43c0d4]
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0xd4
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -3
        ; Exact mapped bytes 75 10: jne 0x4205c5
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes C7 05 B4 FC 44 00 01 00 00 00: mov dword ptr [0x44fcb4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 25 40 C1 43 00: jmp dword ptr [0x43c140]
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0x40
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -4
        ; Exact mapped bytes 75 0F: jne 0x4205d9
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes A1 5C FF 44 00: mov eax, dword ptr [0x44ff5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 B4 FC 44 00 01 00 00 00: mov dword ptr [0x44fcb4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
