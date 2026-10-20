// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008E500 .. +0x230 bytes.
extern "C" __declspec(naked) void FUN_1008e500_1008E500() {
    __asm {
        sub esp, 20h
        push ebx
        push esi
        mov esi, ecx
        push edi
        cmp byte ptr [esi + 2d5h], 1
        ; Exact mapped bytes 0F 85 12 02 00 00: jne 0x1008e727
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 30h]
        test edi, edi
        ; Exact mapped bytes 75 2C: jne 0x1008e549
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push edi
        push edi
        push 24ch
        ; Exact mapped bytes E8 80 F5 F8 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf5
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov al, byte ptr [esi + 2d4h]
        test al, al
        ; Exact mapped bytes 75 18: jne 0x1008e56b
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esi + 158h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + 140h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x1008e585
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp al, 1
        ; Exact mapped bytes 75 16: jne 0x1008e585
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esi + 158h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 140h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 8B 1D B0 50 17 10: mov ebx, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [edi + 0ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e5a3
        __asm _emit 0x74
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x1008e5a3
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 0c8h]
        lea ecx, [edi + 2dh]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e5bb
        __asm _emit 0x74
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x1008e5bb
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 47 4A: mov ax, word ptr [edi + 0x4a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x4a
        ; Exact mapped bytes 66 8B 4F 48: mov cx, word ptr [edi + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x48
        xor edx, edx
        push eax
        ; Exact mapped bytes 66 8B 57 46: mov dx, word ptr [edi + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x46
        push ecx
        push edx
        lea eax, [esp + 18h]
        push 101abadch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0cch]
        add esp, 14h
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1008e600
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [esp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008e600
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [esp + 0ch]
        push edx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x1008e650
        __asm _emit 0x74
        __asm _emit 0x47
        mov bl, 3
        push 0
        mov byte ptr [esi + 2d5h], bl
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 5C E6 FB FF: call 0x1004cc80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x1008e650
        __asm _emit 0x74
        __asm _emit 0x23
        mov byte ptr [esi + 2d5h], bl
        ; Exact mapped bytes 8B 0D 3C D1 1A 10: mov ecx, dword ptr [0x101ad13c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 39 E6 FB FF: call 0x1004cc80
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov byte ptr [esi + 2d5h], 0
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x1008e678
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e678
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x1008e67a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0bch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008e6af
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x1008e6d0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e6d0
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x1008e6d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008e707
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov ecx, dword ptr [esi + 0bch]
        push 0fffffeffh
        ; Exact mapped bytes E8 49 0A 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 39 0A 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
