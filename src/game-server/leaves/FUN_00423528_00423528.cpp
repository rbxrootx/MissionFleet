// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423528 .. +0xE6B bytes.
extern "C" __declspec(naked) void FUN_00423528_00423528() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 6ch]
        mov ecx, 1bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 34h], 63h
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 34h]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 57 02 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x4235b8
        __asm _emit 0x74
        __asm _emit 0x48
        mov dword ptr [ebp - 40h], 53h
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 48h], ecx
        lea edx, [ebp - 40h]
        push edx
        lea eax, [ebp - 44h]
        push eax
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 2B 02 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4235b8
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2e4h], 1
        ; Exact mapped bytes 75 23: jne 0x4235db
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020eh
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E 3C 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A6 0D 00 00: jmp 0x424381
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 5
        lea eax, [ecx + edx + 15e94h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + ecx*4]
        and edx, 0ff000000h
        shr edx, 18h
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 5
        lea eax, [ecx + edx + 15e94h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + ecx*4]
        and edx, 0ffffffh
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 4ch], 4
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 54h], eax
        lea ecx, [ebp - 4ch]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 73 01 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x423732
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], 53h
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 60h], ecx
        lea edx, [ebp - 58h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        ; Exact mapped bytes E8 43 01 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x423732
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0c4h
        cmp dword ptr [edx + eax + 5a151ch], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x423732
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0c4h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp + 0ch]
        imul esi, esi, 37ch
        mov eax, dword ptr [eax + esi + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp dword ptr [ecx + edx + 5a1524h], eax
        ; Exact mapped bytes 77 4E: ja 0x423732
        __asm _emit 0x77
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0c4h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov ecx, dword ptr [ecx + edx + 5a152ch]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 77 27: ja 0x423732
        __asm _emit 0x77
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0c4h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov edx, dword ptr [edx + eax + 5a1528h]
        cmp edx, dword ptr [ecx + 18h]
        ; Exact mapped bytes 7E 23: jle 0x423755
        __asm _emit 0x7e
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020eh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 3A 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 2C 0C 00 00: jmp 0x424381
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        mov byte ptr [ebp - 10h], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffh
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 1ch]
        imul edx, edx, 0c4h
        mov eax, dword ptr [ecx + edx + 5a1540h]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4237f7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 5C: jae 0x42385b
        __asm _emit 0x73
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 10h]
        and eax, 0ffh
        imul eax, eax, 3f8ch
        mov ecx, dword ptr [ebp - 1ch]
        imul ecx, ecx, 0c4h
        lea edx, [eax + ecx + 5a14d8h]
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 4C 42 6C: mov cx, word ptr [edx + eax*2 + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 4D D4: mov word ptr [ebp - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 66 8B 55 D4: mov dx, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        and edx, 0ffffh
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 1D: jne 0x423859
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 45 D4: mov ax, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 25 FF 03: and ax, 0x3ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x03
        and eax, 0ffffh
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 07: jne 0x423859
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 93: jmp 0x4237ee
        __asm _emit 0xeb
        __asm _emit 0x93
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 23: jne 0x423884
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020eh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 39 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 FD 0A 00 00: jmp 0x424381
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0c4h
        mov ecx, dword ptr [edx + eax + 5a151ch]
        and ecx, 10000000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A3 05 00 00: je 0x423e4e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2bch], -1
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x4239e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 0ch
        and edx, 0fh
        test edx, edx
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x4239c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2bch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 3D 02 00: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x4239a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov esi, dword ptr [edx + eax + 234h]
        shr esi, 4
        and esi, 0ffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 2bch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 3D 02 00: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 81 E2 FF 00: and dx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        and edx, 0ffffh
        cmp esi, edx
        ; Exact mapped bytes 73 23: jae 0x42399f
        __asm _emit 0x73
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020eh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A 38 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 E2 09 00 00: jmp 0x424381
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x4239c4
        __asm _emit 0xeb
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020eh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 38 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 BD 09 00 00: jmp 0x424381
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x4239e9
        __asm _emit 0xeb
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020eh
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 38 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 98 09 00 00: jmp 0x424381
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0ffffh
        or eax, 610000h
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 234h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        test eax, eax
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x423b57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C0 02 00 00 00 00: mov word ptr [edx + eax + 0x2c0], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C2 02 00 00 00 00: mov word ptr [edx + eax + 0x2c2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C4 02 00 00 00 00: mov word ptr [edx + eax + 0x2c4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C6 02 00 00 00 00: mov word ptr [edx + eax + 0x2c6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        sub edx, 1
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 3
        ; Exact mapped bytes 0F 87 80 00 00 00: ja 0x423b52
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 24 85 93 43 42 00: jmp dword ptr [eax*4 + 0x424393]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x43
        __asm _emit 0x42
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C0 02 00 00 41 21: mov word ptr [edx + eax + 0x2c0], 0x2141
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x21
        ; Exact mapped bytes EB 58: jmp 0x423b52
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C2 02 00 00 41 46: mov word ptr [edx + eax + 0x2c2], 0x4641
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x46
        ; Exact mapped bytes EB 3A: jmp 0x423b52
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C4 02 00 00 81 6C: mov word ptr [edx + eax + 0x2c4], 0x6c81
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0x6c
        ; Exact mapped bytes EB 1C: jmp 0x423b52
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C6 02 00 00 C1 92: mov word ptr [edx + eax + 0x2c6], 0x92c1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc1
        __asm _emit 0x92
        ; Exact mapped bytes E9 53 02 00 00: jmp 0x423daa
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        cmp ecx, 1
        ; Exact mapped bytes 75 75: jne 0x423bed
        __asm _emit 0x75
        __asm _emit 0x75
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C0 02 00 00 41 21: mov word ptr [eax + ecx + 0x2c0], 0x2141
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C2 02 00 00 00 00: mov word ptr [eax + ecx + 0x2c2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C4 02 00 00 00 00: mov word ptr [eax + ecx + 0x2c4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C6 02 00 00 00 00: mov word ptr [eax + ecx + 0x2c6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x423daa
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        cmp edx, 2
        ; Exact mapped bytes 75 75: jne 0x423c83
        __asm _emit 0x75
        __asm _emit 0x75
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 C7 84 11 C0 02 00 00 00 00: mov word ptr [ecx + edx + 0x2c0], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 C7 84 11 C2 02 00 00 41 46: mov word ptr [ecx + edx + 0x2c2], 0x4641
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x46
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 C7 84 11 C4 02 00 00 00 00: mov word ptr [ecx + edx + 0x2c4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 C7 84 11 C6 02 00 00 00 00: mov word ptr [ecx + edx + 0x2c6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 27 01 00 00: jmp 0x423daa
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        cmp eax, 3
        ; Exact mapped bytes 75 75: jne 0x423d19
        __asm _emit 0x75
        __asm _emit 0x75
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C0 02 00 00 00 00: mov word ptr [edx + eax + 0x2c0], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C2 02 00 00 00 00: mov word ptr [edx + eax + 0x2c2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C4 02 00 00 81 6C: mov word ptr [edx + eax + 0x2c4], 0x6c81
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 C6 02 00 00 00 00: mov word ptr [edx + eax + 0x2c6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x423daa
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        cmp ecx, 4
        ; Exact mapped bytes 75 70: jne 0x423daa
        __asm _emit 0x75
        __asm _emit 0x70
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C0 02 00 00 00 00: mov word ptr [eax + ecx + 0x2c0], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C2 02 00 00 00 00: mov word ptr [eax + ecx + 0x2c2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C4 02 00 00 00 00: mov word ptr [eax + ecx + 0x2c4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C6 02 00 00 C1 92: mov word ptr [eax + ecx + 0x2c6], 0x92c1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc1
        __asm _emit 0x92
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 C8 02 00 00 00 00: mov word ptr [eax + ecx + 0x2c8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 CA 02 00 00 00 00: mov word ptr [eax + ecx + 0x2ca], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 CC 02 00 00 00 00: mov word ptr [eax + ecx + 0x2cc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 CE 02 00 00 00 00: mov word ptr [eax + ecx + 0x2ce], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov byte ptr [eax + ecx + 2f0h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov byte ptr [eax + ecx + 2f1h], 2
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0c4h
        ; Exact mapped bytes 66 8B 8C 02 18 15 5A 00: mov cx, word ptr [edx + eax + 0x5a1518]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x15
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        and ecx, 0fh
        mov eax, dword ptr [eax + edx + 234h]
        and al, 0f0h
        or eax, ecx
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 234h], eax
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 3f8ch
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0c4h
        ; Exact mapped bytes 66 8B 94 08 18 15 5A 00: mov dx, word ptr [eax + ecx + 0x5a1518]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x15
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 E2 FF 03: and dx, 0x3ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x03
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        and edx, 7fffffffh
        shl edx, 1
        mov ecx, dword ptr [ecx + eax + 278h]
        and ecx, 1
        or ecx, edx
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + edx + 278h], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 3f8ch
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0c4h
        mov edx, dword ptr [edx + 1ch]
        sub edx, dword ptr [eax + ecx + 5a152ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 1ch], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0c4h
        mov eax, dword ptr [eax + 18h]
        sub eax, dword ptr [ecx + edx + 5a1528h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        cmp eax, 1
        ; Exact mapped bytes 75 21: jne 0x423fb7
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 74 02 00 00 12 02: mov word ptr [edx + eax + 0x274], 0x212
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x02
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x424072
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        cmp ecx, 2
        ; Exact mapped bytes 75 1E: jne 0x423ff6
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 74 02 00 00 26 02: mov word ptr [eax + ecx + 0x274], 0x226
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        __asm _emit 0x02
        ; Exact mapped bytes EB 7C: jmp 0x424072
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        cmp edx, 3
        ; Exact mapped bytes 75 1E: jne 0x424035
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 C7 84 11 74 02 00 00 F4 01: mov word ptr [ecx + edx + 0x274], 0x1f4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0x01
        ; Exact mapped bytes EB 3D: jmp 0x424072
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        cmp eax, 4
        ; Exact mapped bytes 75 1C: jne 0x424072
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 74 02 00 00 35 02: mov word ptr [edx + eax + 0x274], 0x235
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x35
        __asm _emit 0x02
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x424084
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0bh
        ; Exact mapped bytes 0F 83 C3 00 00 00: jae 0x424151
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 3f8ch
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 0c4h
        lea eax, [eax + ecx + 5a14d8h]
        mov ecx, dword ptr [ebp - 28h]
        mov esi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 54 4A 14: mov dx, word ptr [edx + ecx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0x14
        ; Exact mapped bytes 66 03 94 70 9C 00 00 00: add dx, word ptr [eax + esi*2 + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x94
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        lea eax, [ecx + eax + 224h]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 54 48 14: mov word ptr [eax + ecx*2 + 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 28h]
        add ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 3f8ch
        mov esi, dword ptr [ebp - 0ch]
        imul esi, esi, 0c4h
        lea eax, [eax + esi + 5a14d8h]
        mov esi, dword ptr [ebp - 28h]
        mov cl, byte ptr [edx + ecx + 250h]
        add cl, byte ptr [eax + esi*2 + 7ch]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 28h]
        add esi, dword ptr [eax + 168h]
        mov byte ptr [edx + esi + 250h], cl
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x42407b
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov esi, dword ptr [ebp - 64h]
        mov cl, byte ptr [esi + ecx*4 + 0ch]
        mov byte ptr [eax + edx + 25bh], cl
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0c4h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov esi, dword ptr [ebp + 0ch]
        imul esi, esi, 37ch
        mov edx, dword ptr [edx + eax + 5a151ch]
        mov dword ptr [ecx + esi + 2b8h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E0 0F 00 00: call 0x4251c6
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 6ch], al
        mov ecx, dword ptr [ebp - 6ch]
        and ecx, 0ffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        and ecx, 1
        mov eax, dword ptr [eax + edx + 278h]
        and al, 0feh
        or eax, ecx
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 278h], eax
        push 0
        push 37ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        push eax
        push 8001020eh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 80000002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 2F 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0c4h
        mov ecx, dword ptr [edx + eax + 5a151ch]
        and ecx, 10000000h
        test ecx, ecx
        ; Exact mapped bytes 74 7B: je 0x424300
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 52: mov cx, word ptr [eax + 0x52]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x52
        cmp ecx, 0ah
        ; Exact mapped bytes 7D 67: jge 0x424300
        __asm _emit 0x7d
        __asm _emit 0x67
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 C7 40 52 0A 00: mov word ptr [eax + 0x52], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        add eax, 4e20h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        add edx, 4e20h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 1ch], edx
        push 0
        push 0
        push 0
        push 4e20h
        push 4e20h
        push 8002f10bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 2F 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 19ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 9B E3 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 10h
        or edx, 4
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 79 E3 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov al, byte ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c98h]
        ; Exact mapped bytes E8 3C 6D 01 00: call 0x43b0b8
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 6ch
        cmp ebp, esp
        ; Exact mapped bytes E8 53 44 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
