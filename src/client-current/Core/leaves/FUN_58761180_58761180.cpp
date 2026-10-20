// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761180 .. +0x1BA bytes.
extern "C" __declspec(naked) void FUN_58761180_58761180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 47 D3 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x47
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x58761281
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6214h], 0
        ; Exact mapped bytes 74 61: je 0x58761211
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 F2 3E D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x3e
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6220h]
        add edx, dword ptr [ebp + 8]
        cmp eax, edx
        ; Exact mapped bytes 7E 08: jle 0x587611d8
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 37: jmp 0x5876120f
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 CA 3E D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x3e
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 6220h]
        ; Exact mapped bytes 7E 1C: jle 0x5876120f
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 AF 3E D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3e
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 1
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 6220h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 6E: jmp 0x5876127f
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6218h], 0
        ; Exact mapped bytes 74 62: je 0x5876127f
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 85 3E D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6220h]
        add edx, dword ptr [ebp + 8]
        cmp eax, edx
        ; Exact mapped bytes 7E 08: jle 0x58761246
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 39: jmp 0x5876127f
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 5C 3E D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3e
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 6220h]
        ; Exact mapped bytes 7E 1D: jle 0x5876127f
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 40 3E D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3e
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 2
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 6220h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 77: jmp 0x587612f8
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6214h], 0
        ; Exact mapped bytes 75 0C: jne 0x58761299
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6218h], 0
        ; Exact mapped bytes 74 5F: je 0x587612f8
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 09 3E D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3e
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6220h]
        add ecx, dword ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 7E 08: jle 0x587612c1
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 37: jmp 0x587612f8
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E1 3D D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 6220h]
        ; Exact mapped bytes 7E 1C: jle 0x587612f8
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 C6 3D D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xff
        shl eax, 1
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 6220h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6220h]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6220h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 56 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 14: jne 0x58761331
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0E: jne 0x58761331
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 5F E8 FF: call 0x585e7240
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5f
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
