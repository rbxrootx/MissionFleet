// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10028D80 .. +0x2FE bytes.
extern "C" __declspec(naked) void FUN_10028d80_10028D80() {
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
        ; Exact mapped bytes 0F 84 EB 02 00 00: je 0x1002907b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        mov edi, 2
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 42: jne 0x10028de2
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [esi + 3dch]
        mov ecx, dword ptr [eax + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x10028dcc
        __asm _emit 0x74
        __asm _emit 0x1f
        xor edx, edx
        push ebx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov ebx, dword ptr [eax + 50h]
        imul edx, dword ptr [ecx + 8]
        dec edx
        xor ecx, ecx
        cmp ebx, edx
        pop ebx
        setge cl
        test ecx, ecx
        ; Exact mapped bytes 0F 85 4C 02 00 00: jne 0x10029018
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 50h]
        inc edx
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [esi + 3e0h]
        mov ecx, dword ptr [eax + 50h]
        inc ecx
        ; Exact mapped bytes E9 33 02 00 00: jmp 0x10029015
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 2C 02 00 00: jne 0x10029018
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3dch]
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 07 02 00 00: jne 0x10029004
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        mov eax, ecx
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 75 2A: jne 0x10028e38
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 41: jle 0x10028e68
        __asm _emit 0x7e
        __asm _emit 0x41
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x10028e68
        __asm _emit 0x74
        __asm _emit 0x37
        add eax, 80h
        ; Exact mapped bytes EB 32: jmp 0x10028e6a
        __asm _emit 0xeb
        __asm _emit 0x32
        cmp eax, 0a8h
        ; Exact mapped bytes 75 6A: jne 0x10028ea9
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 2C 58 1C 10: mov eax, dword ptr [0x101c582c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x10028e68
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10028e68
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x10028e6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10028e9f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 101h
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x10028fe6
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a2h
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x10028ff1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a4h
        ; Exact mapped bytes 0F 84 32 01 00 00: je 0x10028ff1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a6h
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x10028ff1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0aeh
        ; Exact mapped bytes 0F 84 1C 01 00 00: je 0x10028ff1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add eax, ecx
        lea ecx, [eax + eax*4]
        lea eax, [eax + ecx*2]
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [eax + eax*4]
        mov eax, dword ptr [edx*4 + 10181750h]
        mov edx, dword ptr [ecx + 160h]
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x10028f1e
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10028f1e
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x10028f1e
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10028f20
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3e0h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10028f55
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 3e0h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 60h]
        and eax, 0fh
        lea ecx, [eax + eax*4]
        lea edx, [eax + ecx*8]
        mov ecx, dword ptr [esi + 0a4h]
        shr ecx, 1
        lea eax, [eax + edx*2]
        add eax, ecx
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        mov edx, dword ptr [ecx + 160h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 10181750h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x10028fad
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10028fad
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x10028fad
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10028faf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10028fe4
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 0
        mov ecx, dword ptr [esi + 3dch]
        ; Exact mapped bytes E8 6F 61 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e5ffh
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes EB 14: jmp 0x10029018
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [eax + 50h]
        dec edx
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [esi + 3e0h]
        mov ecx, dword ptr [eax + 50h]
        dec ecx
        mov dword ptr [eax + 50h], ecx
        cmp dword ptr [esi + 44ch], edi
        ; Exact mapped bytes 75 37: jne 0x10029057
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 66 8B 86 58 04 00 00: mov ax, word ptr [esi + 0x458]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 1E 00: cmp ax, 0x1e
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 7E 22: jle 0x1002904f
        __asm _emit 0x7e
        __asm _emit 0x22
        mov eax, dword ptr [esi + 454h]
        mov edx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 10h]
        cmp edx, ecx
        ; Exact mapped bytes 74 1A: je 0x10029057
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        ; Exact mapped bytes E8 6C 01 00 00: call 0x100291b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 58 04 00 00 00 00: mov word ptr [esi + 0x458], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x10029057
        __asm _emit 0xeb
        __asm _emit 0x08
        inc eax
        ; Exact mapped bytes 66 89 86 58 04 00 00: mov word ptr [esi + 0x458], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x1002907b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10029076
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1002905e
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
