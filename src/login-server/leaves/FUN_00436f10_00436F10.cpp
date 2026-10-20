// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436F10 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_00436f10_00436F10() {
    __asm {
        ; Exact mapped bytes 83 3D 74 FB 44 00 00: cmp dword ptr [0x44fb74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes 75 34: jne 0x436f4e
        __asm _emit 0x75
        __asm _emit 0x34
        push 1
        pop esi
        ; Exact mapped bytes 89 35 74 FB 44 00: mov dword ptr [0x44fb74], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E8 C1 43 00: call dword ptr [0x43c1e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp al, 4
        ; Exact mapped bytes 73 0F: jae 0x436f3c
        __asm _emit 0x73
        __asm _emit 0x0f
        test eax, 80000000h
        ; Exact mapped bytes 74 08: je 0x436f3c
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 89 35 70 FB 44 00: mov dword ptr [0x44fb70], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x436f4e
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 83 25 70 FB 44 00 00: and dword ptr [0x44fb70], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push 44f9c0h
        ; Exact mapped bytes FF 15 C4 C1 43 00: call dword ptr [0x43c1c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A1 74 FB 44 00: mov eax, dword ptr [0x44fb74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        pop esi
        ret
    }
}
