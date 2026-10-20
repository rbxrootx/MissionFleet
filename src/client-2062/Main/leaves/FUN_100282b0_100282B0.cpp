// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100282B0 .. +0x292 bytes.
extern "C" __declspec(naked) void FUN_100282b0_100282B0() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 44ch], 2
        ; Exact mapped bytes 0F 84 80 02 00 00: je 0x10028540
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 DC 92 1C 10: mov eax, dword ptr [0x101c92dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push edi
        push eax
        ; Exact mapped bytes FF 15 84 51 17 10: call dword ptr [0x10175184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 80h
        mov ecx, esi
        mov dword ptr [esi + 444h], 1
        ; Exact mapped bytes E8 3C 6E 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, 12ch
        sub eax, 190h
        sub ecx, edi
        push ecx
        mov ecx, dword ptr [esi + 3cch]
        push eax
        ; Exact mapped bytes E8 8D 06 02 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3dch]
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 54h]
        mov eax, dword ptr [ecx + 2ch]
        mov ebx, dword ptr [ecx + 24h]
        sub eax, ebx
        cdq
        sub eax, edx
        mov edx, dword ptr [edi + 8]
        sar eax, 1
        sub edx, eax
        mov eax, dword ptr [ecx + 28h]
        sub edx, 0ah
        push edx
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edi + 4]
        sub eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        push ecx
        ; Exact mapped bytes 8B 0D 40 CE 1A 10: mov ecx, dword ptr [0x101ace40]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes E8 8A 69 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x69
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        ; Exact mapped bytes 8B 3D 6C 59 1C 10: mov edi, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        mov edx, dword ptr [edi + 160h]
        lea eax, [eax + eax*4]
        shl eax, 2
        mov ecx, dword ptr [eax + 10181758h]
        cmp edx, ecx
        ; Exact mapped bytes 7E 15: jle 0x10028396
        __asm _emit 0x7e
        __asm _emit 0x15
        test ecx, ecx
        ; Exact mapped bytes 7C 11: jl 0x10028396
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ebx, dword ptr [edi + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 07: je 0x10028396
        __asm _emit 0x74
        __asm _emit 0x07
        shl ecx, 6
        add ecx, ebx
        ; Exact mapped bytes EB 02: jmp 0x10028398
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [eax + 10181750h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x100283b7
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100283b7
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, dword ptr [edi + 190h]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x100283b7
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100283b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ecx
        ; Exact mapped bytes 8B 0D 40 CE 1A 10: mov ecx, dword ptr [0x101ace40]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        push eax
        push esi
        ; Exact mapped bytes E8 E9 14 00 00: call 0x100298b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 40 CE 1A 10: mov edi, dword ptr [0x101ace40]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D D4 92 1C 10: mov ebx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 25 6B 0D 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 BD 6B 0D 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [eax + 0d4h], 1
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d48h]
        mov ecx, dword ptr [edx + 9ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        pop edi
        shr ecx, 1
        lea edx, [eax + eax*4]
        pop ebx
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 10181750h]
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1002845a
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1002845a
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1002845a
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1002845c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3e0h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10028491
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
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 0a4h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 10181750h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x100284df
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100284df
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100284df
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100284e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10028516
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
        mov ecx, dword ptr [esi + 3e0h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [esi + 3dch]
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e1ffh
        or ah, 1
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
    }
}
