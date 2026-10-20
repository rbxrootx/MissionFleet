// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042855B .. +0x220 bytes.
extern "C" __declspec(naked) void FUN_0042855b_0042855B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4B 0A: mov cx, word ptr [ebx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x0a
        xor eax, eax
        push edi
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 66 8B 46 0A: mov ax, word ptr [esi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0a
        mov edi, ecx
        mov edx, 7fffh
        xor edi, eax
        and eax, edx
        and ecx, edx
        and edi, 8000h
        ; Exact mapped bytes 66 3D FF 7F: cmp ax, 0x7fff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0x7f
        lea edx, [ecx + eax]
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes 0F 83 B8 01 00 00: jae 0x42875b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 FF 7F: cmp cx, 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 0F 83 AD 01 00 00: jae 0x42875b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FA FD BF: cmp dx, 0xbffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xbf
        ; Exact mapped bytes 0F 87 A2 01 00 00: ja 0x42875b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FA BF 3F: cmp dx, 0x3fbf
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xbf
        __asm _emit 0x3f
        ; Exact mapped bytes 77 04: ja 0x4285c4
        __asm _emit 0x77
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3A: jmp 0x4285fe
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        mov edx, 7fffffffh
        ; Exact mapped bytes 75 18: jne 0x4285e6
        __asm _emit 0x75
        __asm _emit 0x18
        inc dword ptr [ebp + 8]
        test dword ptr [esi + 8], edx
        ; Exact mapped bytes 75 10: jne 0x4285e6
        __asm _emit 0x75
        __asm _emit 0x10
        xor eax, eax
        cmp dword ptr [esi + 4], eax
        ; Exact mapped bytes 75 0B: jne 0x4285e8
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp dword ptr [esi], eax
        ; Exact mapped bytes 75 07: jne 0x4285e8
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E9 6F 01 00 00: jmp 0x428755
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 1E: jne 0x42860b
        __asm _emit 0x75
        __asm _emit 0x1e
        inc dword ptr [ebp + 8]
        test dword ptr [ebx + 8], edx
        ; Exact mapped bytes 75 16: jne 0x42860b
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebx + 4], eax
        ; Exact mapped bytes 75 11: jne 0x42860b
        __asm _emit 0x75
        __asm _emit 0x11
        cmp dword ptr [ebx], eax
        ; Exact mapped bytes 75 0D: jne 0x42860b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi], eax
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x428776
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 20h]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp + 0ch], 5
        mov eax, dword ptr [ebp - 10h]
        add eax, eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 49: jle 0x42866f
        __asm _emit 0x7e
        __asm _emit 0x49
        add eax, esi
        lea ecx, [ebx + 8]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [eax]
        movzx ecx, word ptr [ecx]
        imul eax, ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, -4
        push ecx
        push eax
        push dword ptr [ecx]
        ; Exact mapped bytes E8 44 F4 FF FF: call 0x427a99
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x428662
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 FF 00: inc word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x00
        add dword ptr [ebp - 8], 2
        sub dword ptr [ebp - 0ch], 2
        dec dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 C8: jne 0x428637
        __asm _emit 0x75
        __asm _emit 0xc8
        add dword ptr [ebp - 4], 2
        inc dword ptr [ebp - 10h]
        dec dword ptr [ebp + 0ch]
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 9C: jg 0x42861b
        __asm _emit 0x7f
        __asm _emit 0x9c
        add dword ptr [ebp + 8], 0c002h
        ; Exact mapped bytes 66 83 7D 08 00: cmp word ptr [ebp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7E 25: jle 0x4286b2
        __asm _emit 0x7e
        __asm _emit 0x25
        test byte ptr [ebp - 19h], 80h
        ; Exact mapped bytes 75 18: jne 0x4286ab
        __asm _emit 0x75
        __asm _emit 0x18
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 7C F4 FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [ebp + 8], 0ffffh
        pop ecx
        ; Exact mapped bytes 66 83 7D 08 00: cmp word ptr [ebp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7F E2: jg 0x42868d
        __asm _emit 0x7f
        __asm _emit 0xe2
        ; Exact mapped bytes 66 83 7D 08 00: cmp word ptr [ebp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7F 39: jg 0x4286eb
        __asm _emit 0x7f
        __asm _emit 0x39
        add dword ptr [ebp + 8], 0ffffh
        ; Exact mapped bytes 66 83 7D 08 00: cmp word ptr [ebp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7D 2B: jge 0x4286eb
        __asm _emit 0x7d
        __asm _emit 0x2b
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        neg eax
        add dword ptr [ebp + 8], eax
        mov ebx, eax
        test byte ptr [ebp - 24h], 1
        ; Exact mapped bytes 74 03: je 0x4286d4
        __asm _emit 0x74
        __asm _emit 0x03
        inc dword ptr [ebp - 14h]
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 69 F4 FF FF: call 0x427b46
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        dec ebx
        pop ecx
        ; Exact mapped bytes 75 EA: jne 0x4286cb
        __asm _emit 0x75
        __asm _emit 0xea
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 04: je 0x4286eb
        __asm _emit 0x74
        __asm _emit 0x04
        or byte ptr [ebp - 24h], 1
        ; Exact mapped bytes 66 81 7D DC 00 80: cmp word ptr [ebp - 0x24], 0x8000
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 77 0F: ja 0x428702
        __asm _emit 0x77
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 24h]
        and eax, 1ffffh
        cmp eax, 18000h
        ; Exact mapped bytes 75 35: jne 0x428737
        __asm _emit 0x75
        __asm _emit 0x35
        cmp dword ptr [ebp - 22h], -1
        ; Exact mapped bytes 75 2C: jne 0x428734
        __asm _emit 0x75
        __asm _emit 0x2c
        and dword ptr [ebp - 22h], 0
        cmp dword ptr [ebp - 1eh], -1
        ; Exact mapped bytes 75 1D: jne 0x42872f
        __asm _emit 0x75
        __asm _emit 0x1d
        and dword ptr [ebp - 1eh], 0
        ; Exact mapped bytes 66 81 7D E6 FF FF: cmp word ptr [ebp - 0x1a], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 0B: jne 0x428729
        __asm _emit 0x75
        __asm _emit 0x0b
        inc dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 45 E6 00 80: mov word ptr [ebp - 0x1a], 0x8000
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes EB 0E: jmp 0x428737
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 FF 45 E6: inc word ptr [ebp - 0x1a]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x45
        __asm _emit 0xe6
        ; Exact mapped bytes EB 08: jmp 0x428737
        __asm _emit 0xeb
        __asm _emit 0x08
        inc dword ptr [ebp - 1eh]
        ; Exact mapped bytes EB 03: jmp 0x428737
        __asm _emit 0xeb
        __asm _emit 0x03
        inc dword ptr [ebp - 22h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 3D FF 7F: cmp ax, 0x7fff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 73 1B: jae 0x42875b
        __asm _emit 0x73
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 4D DE: mov cx, word ptr [ebp - 0x22]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xde
        or eax, edi
        ; Exact mapped bytes 66 89 0E: mov word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [esi + 2], ecx
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [esi + 6], ecx
        ; Exact mapped bytes 66 89 46 0A: mov word ptr [esi + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0a
        ; Exact mapped bytes EB 1B: jmp 0x428776
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 66 F7 DF: neg di
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xdf
        sbb edi, edi
        and dword ptr [esi + 4], 0
        and edi, 80000000h
        add edi, 7fff8000h
        and dword ptr [esi], 0
        mov dword ptr [esi + 8], edi
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
