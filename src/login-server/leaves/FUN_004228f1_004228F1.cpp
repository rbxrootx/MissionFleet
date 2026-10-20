// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004228F1 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004228f1_004228F1() {
    __asm {
        ; Exact mapped bytes 83 3D 88 11 45 00 00: cmp dword ptr [0x451188], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4228ff
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 BC DE FF FF: call 0x4207bb
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes 8B 35 C8 13 45 00: mov esi, dword ptr [0x4513c8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        mov al, byte ptr [esi]
        cmp al, 22h
        ; Exact mapped bytes 75 25: jne 0x422931
        __asm _emit 0x75
        __asm _emit 0x25
        mov al, byte ptr [esi + 1]
        inc esi
        cmp al, 22h
        ; Exact mapped bytes 74 15: je 0x422929
        __asm _emit 0x74
        __asm _emit 0x15
        test al, al
        ; Exact mapped bytes 74 11: je 0x422929
        __asm _emit 0x74
        __asm _emit 0x11
        movzx eax, al
        push eax
        ; Exact mapped bytes E8 FE 3C 00 00: call 0x42661f
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 E6: je 0x42290c
        __asm _emit 0x74
        __asm _emit 0xe6
        inc esi
        ; Exact mapped bytes EB E3: jmp 0x42290c
        __asm _emit 0xeb
        __asm _emit 0xe3
        cmp byte ptr [esi], 22h
        ; Exact mapped bytes 75 0D: jne 0x42293b
        __asm _emit 0x75
        __asm _emit 0x0d
        inc esi
        ; Exact mapped bytes EB 0A: jmp 0x42293b
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp al, 20h
        ; Exact mapped bytes 76 06: jbe 0x42293b
        __asm _emit 0x76
        __asm _emit 0x06
        inc esi
        cmp byte ptr [esi], 20h
        ; Exact mapped bytes 77 FA: ja 0x422935
        __asm _emit 0x77
        __asm _emit 0xfa
        mov al, byte ptr [esi]
        test al, al
        ; Exact mapped bytes 74 04: je 0x422945
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 20h
        ; Exact mapped bytes 76 E9: jbe 0x42292e
        __asm _emit 0x76
        __asm _emit 0xe9
        mov eax, esi
        pop esi
        ret
    }
}
