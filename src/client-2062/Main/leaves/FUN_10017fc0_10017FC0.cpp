// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10017FC0 .. +0x20F bytes.
extern "C" __declspec(naked) void FUN_10017fc0_10017FC0() {
    __asm {
        push -1
        push 1016d54bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 DA 01 00 00: je 0x100181be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        test eax, eax
        ; Exact mapped bytes 0F 8E B5 01 00 00: jle 0x100181a4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        push ebx
        test eax, eax
        push ebp
        ; Exact mapped bytes 75 76: jne 0x1001806e
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes A1 9C 7D 1A 10: mov eax, dword ptr [0x101a7d9c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 6D: je 0x1001806e
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D DC 56 1C 10: mov ebx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 104e0h]
        mov eax, dword ptr [ebx + 1ch]
        mov edx, dword ptr [ebx + 14h]
        sub eax, edx
        mov edi, dword ptr [ecx + 110h]
        sar eax, 1
        mov ebp, dword ptr [ecx + 50h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv edi
        mov edi, dword ptr [esi + 4]
        mov edx, dword ptr [ebx + 18h]
        sub edi, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, edx
        sub edi, ebp
        sar eax, 1
        mov ebp, dword ptr [ecx + 54h]
        mov ecx, dword ptr [ecx + 110h]
        lea eax, [eax + eax*4]
        mov ebx, dword ptr [esi + 8]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 64h]
        sub eax, ebx
        add eax, ebp
        push eax
        push edi
        ; Exact mapped bytes E8 22 09 03 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [esi + 60h]
        inc ecx
        dec eax
        mov dword ptr [esi + 50h], ecx
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi + 60h], eax
        mov eax, ecx
        not eax
        xor al, cl
        and eax, 1
        xor eax, ecx
        test al, 1
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x1001815f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 FF 46 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 8B 3D 20 51 17 10: mov edi, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 66: je 0x1001811e
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1b9h
        ; Exact mapped bytes 7E 10: jle 0x100180d9
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x100180d9
        __asm _emit 0x74
        __asm _emit 0x06
        mov ebp, dword ptr [eax + 6e4h]
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        mov ebx, dword ptr [ecx + 104e0h]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr [esi + 8]
        sub eax, edx
        inc eax
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 18h]
        sub eax, edx
        inc eax
        push eax
        push ebp
        push ebx
        ; Exact mapped bytes E8 F4 AF 01 00: call 0x10033110
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebp, eax
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cdq
        mov ecx, 0c8h
        idiv ecx
        mov eax, dword ptr [esi + 58h]
        mov ecx, 0e10h
        lea eax, [edx + eax - 64h]
        cdq
        idiv ecx
        mov ebx, edx
        test ebx, ebx
        ; Exact mapped bytes 7D 02: jge 0x10018147
        __asm _emit 0x7d
        __asm _emit 0x02
        add ebx, ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cdq
        mov ecx, 32h
        mov edi, dword ptr [esi + 5ch]
        idiv ecx
        mov ecx, ebp
        add edx, edi
        push edx
        push ebx
        ; Exact mapped bytes E8 D1 B0 01 00: call 0x10033230
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        pop ebp
        test ecx, ecx
        pop ebx
        ; Exact mapped bytes 74 56: je 0x100181be
        __asm _emit 0x74
        __asm _emit 0x56
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 1C: je 0x1001818e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10018168
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 B5 6E 0E 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 FE 6E 0E 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6e
        __asm _emit 0x0e
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x100181be
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
