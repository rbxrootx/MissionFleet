// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10081A20 .. +0x2F4 bytes.
extern "C" __declspec(naked) void FUN_10081a20_10081A20() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 E1 02 00 00: je 0x10081d11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 52: je 0x10081a8d
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 4C: je 0x10081a8d
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 66 3D 00 02: cmp ax, 0x200
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 A2 02 00 00: jne 0x10081ced
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c64h]
        cmp dword ptr [ecx + 2ch], 0fffffeffh
        ; Exact mapped bytes 0F 84 8F 02 00 00: je 0x10081ced
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fffffeffh
        ; Exact mapped bytes E8 F8 D6 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c6ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 E8 D6 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c70h]
        push 101h
        ; Exact mapped bytes E8 D8 D6 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x10081ced
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x10081aa5
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 54h]
        cmp edx, edi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x10081b2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8]
        sub eax, ecx
        mov ecx, dword ptr [esi + 54h]
        sub ecx, edi
        cmp eax, -8
        ; Exact mapped bytes 7E 2C: jle 0x10081ae0
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp eax, 8
        ; Exact mapped bytes 7D 27: jge 0x10081ae0
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x10081ad7
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x10081ad7
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x10081acc
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x10081aeb
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x10081aeb
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x10081aeb
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x10081b1a
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x10081b1a
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x10081b11
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x10081b11
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x10081b08
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x10081b25
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x10081b25
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x10081b25
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 02 D3 07 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x10081b62
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x10081b4b
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10081b46
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x10081b5b
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x10081b5a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10081b57
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x10081b5b
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 FE D5 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x10081b96
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x10081b7f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10081b7a
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x10081b8f
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x10081b8e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10081b8b
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x10081b8f
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 8A D5 07 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 50h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 49 01 00 00: jne 0x10081ced
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x10081ced
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 28h]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x10081ced
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 1F 01 00 00: jne 0x10081ced
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x10081cd3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c64h]
        push 0fffffeffh
        ; Exact mapped bytes E8 6B D5 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c6ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 5B D5 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c70h]
        push 101h
        ; Exact mapped bytes E8 4B D5 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e2ffh
        or ecx, 202h
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c74h]
        ; Exact mapped bytes E8 8C A1 F9 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0c74h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 0c74h]
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes 66 83 BE 8C 0C 00 00 00: cmp word ptr [esi + 0xc8c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 5E: jle 0x10081cb0
        __asm _emit 0x7e
        __asm _emit 0x5e
        push ebx
        push ebp
        xor ebp, ebp
        xor ebx, ebx
        lea edi, [esi + 64h]
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 B3 2D 01 00: call 0x10094a20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x10081c82
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 DE 2D 01 00: call 0x10094a60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ach]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [eax + 64h]
        dec ecx
        cmp edx, ecx
        ; Exact mapped bytes 7D 03: jge 0x10081c96
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [eax + 64h], ecx
        ; Exact mapped bytes 0F BF 8E 8C 0C 00 00: movsx ecx, word ptr [esi + 0xc8c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebp
        cmp ebp, ecx
        ; Exact mapped bytes 74 0C: je 0x10081cae
        __asm _emit 0x74
        __asm _emit 0x0c
        inc ebx
        add edi, 18h
        cmp ebx, 80h
        ; Exact mapped bytes 7C AD: jl 0x10081c5b
        __asm _emit 0x7c
        __asm _emit 0xad
        pop ebp
        pop ebx
        ; Exact mapped bytes 8B 15 E4 56 1C 10: mov edx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [edx + 30h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov eax, 1
        mov dword ptr [esi + 0c90h], eax
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 1A: jmp 0x10081ced
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 13: jne 0x10081ced
        __asm _emit 0x75
        __asm _emit 0x13
        and eax, 0e5f8h
        mov dword ptr [esi + 60h], 0
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10081d11
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10081d0c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10081cf4
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
