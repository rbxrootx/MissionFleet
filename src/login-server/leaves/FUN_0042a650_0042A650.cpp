// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A650 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0042a650_0042A650() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes E8 C5 E7 FF FF: call 0x428e20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x42a666
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        ; Exact mapped bytes 66 81 3D 20 14 45 00 5F 03: cmp word ptr [0x451420], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 11: jb 0x42a682
        __asm _emit 0x72
        __asm _emit 0x11
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test al, 4
        ; Exact mapped bytes 74 04: je 0x42a682
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, 1
        pop esi
        ret
    }
}
