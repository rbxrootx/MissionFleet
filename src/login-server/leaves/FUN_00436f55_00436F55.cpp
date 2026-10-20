// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436F55 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_00436f55_00436F55() {
    __asm {
        ; Exact mapped bytes 83 3D 74 FB 44 00 00: cmp dword ptr [0x44fb74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 44: je 0x436fa2
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes FF 0D 74 FB 44 00: dec dword ptr [0x44fb74]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 70 FB 44 00 00: cmp dword ptr [0x44fb70], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 35: jne 0x436fa2
        __asm _emit 0x75
        __asm _emit 0x35
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 8B 3D BC C1 43 00: mov edi, dword ptr [0x43c1bc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push 44f9c0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, 44f97ch
        mov ebx, 44f9d8h
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 05: je 0x436f91
        __asm _emit 0x74
        __asm _emit 0x05
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        dec dword ptr [esi]
        add ebx, 18h
        add esi, 4
        cmp ebx, 44fb70h
        ; Exact mapped bytes 7C E8: jl 0x436f87
        __asm _emit 0x7c
        __asm _emit 0xe8
        pop edi
        pop esi
        pop ebx
        ret
    }
}
