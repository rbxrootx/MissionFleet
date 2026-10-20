// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437B0C .. +0x30F bytes.
extern "C" __declspec(naked) void FUN_00437b0c_00437B0C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 2ch]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 C4 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 CE 02 00 00: jne 0x437e09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 10h], 18h
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 4E BC FC FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 8C 02 00 00: je 0x437e09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 110h]
        and eax, 0fh
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 110h]
        and eax, 0f0h
        sar eax, 4
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffffh
        imul edx, edx, 5
        add ecx, edx
        mov eax, 80000000h
        shr eax, cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + ecx*4 + 4618h]
        or ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + edx*4 + 4618h], ecx
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 8B 0A: mov cx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 00: and cx, 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 3588h]
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 3588h]
        ; Exact mapped bytes 66 8B 72 02: mov si, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 BD FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 66 03 75 D4: add si, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 3588h]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 00: and dx, 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D6: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 3588h]
        ; Exact mapped bytes 66 89 51 02: mov word ptr [ecx + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 358ch]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 14 88: mov dx, word ptr [eax + ecx*4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x88
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 358ch]
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 14 81: mov word ptr [ecx + eax*4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x81
        mov ecx, dword ptr [ebp - 28h]
        mov esi, dword ptr [ecx + 358ch]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 BC FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4C 96 02: mov cx, word ptr [esi + edx*4 + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x96
        __asm _emit 0x02
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 358ch]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 90 02: mov word ptr [eax + edx*4 + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 358ch]
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ecx + eax*4]
        mov byte ptr [edx + 35fch], cl
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 24h
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 3590h]
        ; Exact mapped bytes 66 89 14 01: mov word ptr [ecx + eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 3590h]
        ; Exact mapped bytes 66 8B 54 11 02: mov dx, word ptr [ecx + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 24h
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 3590h]
        ; Exact mapped bytes 66 89 54 01 02: mov word ptr [ecx + eax + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x02
        mov dword ptr [ebp - 1ch], 19h
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 3590h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 11 02: mov ax, word ptr [ecx + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x02
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 83 BA FC FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x437e09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 24h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 3590h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 08 02: mov dx, word ptr [eax + ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x02
        sub edx, 1
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4b88h], edx
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 0d78h]
        add esi, 20h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4b88h]
        imul eax, eax, 60h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 28h]
        mov edi, dword ptr [edx + ecx*4 + 3594h]
        add edi, eax
        mov ecx, 18h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 BB FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4b88h]
        imul edx, edx, 60h
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 28h]
        mov ecx, dword ptr [esi + ecx*4 + 3594h]
        mov byte ptr [ecx + edx + 44h], al
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4b88h]
        imul eax, eax, 60h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + ecx*4 + 3594h]
        ; Exact mapped bytes 66 8B 74 01 46: mov si, word ptr [ecx + eax + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x46
        ; Exact mapped bytes 66 81 E6 FF 00: and si, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 35f8h]
        mov ecx, dword ptr [eax + 40cach]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 32h
        lea edi, [ecx + edx + 4696h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC C1 FC FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 74 47 FE: mov word ptr [edi + eax*2 - 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0xfe
        pop edi
        pop esi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CB 09 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
