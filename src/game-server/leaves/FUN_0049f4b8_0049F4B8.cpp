// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049F4B8 .. +0x368 bytes.
extern "C" __declspec(naked) void FUN_0049f4b8_0049F4B8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        push esi
        mov dword ptr [ebp - 80h], ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 64 D3 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49f4ef
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 02 D3 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 2A 03 00 00: jmp 0x49f819
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 C0 D2 0A 00: call 0x54c7c1
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 2C: jne 0x49f533
        __asm _emit 0x75
        __asm _emit 0x2c
        push 1
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 31 D3 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 80000000h
        mov dword ptr [ebp - 20h], 0
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE D2 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 E6 02 00 00: jmp 0x49f819
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 15: jge 0x49f54e
        __asm _emit 0x7d
        __asm _emit 0x15
        lea edx, [ebp - 58h]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 91 FB FF FF: call 0x49f0d6
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 FA F5 FF FF: call 0x49eb48
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D9 A9 00 00: call 0x4a9f30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 48: jne 0x49f5ab
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 80h]
        mov eax, dword ptr [ecx]
        xor edx, edx
        div dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 4]
        xor eax, dword ptr [ebp + 0ch]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x49f597
        __asm _emit 0x74
        __asm _emit 0x15
        lea ecx, [ebp - 64h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 48 FB FF FF: call 0x49f0d6
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B1 F5 FF FF: call 0x49eb48
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 D2 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 6E 02 00 00: jmp 0x49f819
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 E3 D1 0A 00: call 0x54c796
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DB D1 0A 00: call 0x54c796
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 D3 D1 0A 00: call 0x54c796
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 81 F8 FF FF: call 0x49ee56
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 05 02 00 00: je 0x49f7e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 34: je 0x49f617
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 66 C7 45 FC 20 00: mov word ptr [ebp - 4], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x49f5f7
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        sub ecx, 1
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x49f615
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x49f5eb
        __asm _emit 0xeb
        __asm _emit 0xd6
        ; Exact mapped bytes EB 06: jmp 0x49f61d
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BA: jne 0x49f5dd
        __asm _emit 0x75
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x49f63d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 20: add cx, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 46: jmp 0x49f683
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 34: je 0x49f677
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 66 C7 45 FC 20 00: mov word ptr [ebp - 4], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x49f657
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        sub ecx, 1
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr [ebp - 20h]
        and ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x49f675
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x49f64b
        __asm _emit 0xeb
        __asm _emit 0xd6
        ; Exact mapped bytes EB 06: jmp 0x49f67d
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BA: jne 0x49f63d
        __asm _emit 0x75
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        mov ecx, 40h
        sub ecx, eax
        ; Exact mapped bytes 66 89 4D C0: mov word ptr [ebp - 0x40], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 66 8B 55 C0: mov dx, word ptr [ebp - 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 55 BC: mov word ptr [ebp - 0x44], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes EB 0C: jmp 0x49f6ac
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 45 BC: mov ax, word ptr [ebp - 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 66 2D 01 00: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 BC: mov word ptr [ebp - 0x44], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 44h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 7E 25: jle 0x49f6de
        __asm _emit 0x7e
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 1ch]
        shl edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 20h]
        and eax, 80000000h
        shr eax, 1fh
        mov ecx, dword ptr [ebp - 1ch]
        or ecx, eax
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 20h]
        shl edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB C2: jmp 0x49f6a0
        __asm _emit 0xeb
        __asm _emit 0xc2
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B2: jne 0x49f696
        __asm _emit 0x75
        __asm _emit 0xb2
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ebp - 1ch], ecx
        sbb edx, edx
        neg edx
        ; Exact mapped bytes 66 89 55 C4: mov word ptr [ebp - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 3ch]
        and ecx, 0ffffh
        mov esi, dword ptr [ebp - 14h]
        shr esi, cl
        mov eax, dword ptr [ebp - 1ch]
        xor edx, edx
        div esi
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 66 8B 45 C0: mov ax, word ptr [ebp - 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 45 B8: mov word ptr [ebp - 0x48], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes EB 0C: jmp 0x49f720
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D B8: mov cx, word ptr [ebp - 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D B8: mov word ptr [ebp - 0x48], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb8
        mov edx, dword ptr [ebp - 48h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 7E 23: jle 0x49f750
        __asm _emit 0x7e
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 20h]
        shr eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 1
        shl ecx, 1fh
        mov edx, dword ptr [ebp - 20h]
        or edx, ecx
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        shr eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB C4: jmp 0x49f714
        __asm _emit 0xeb
        __asm _emit 0xc4
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 B4: jne 0x49f70a
        __asm _emit 0x75
        __asm _emit 0xb4
        mov edx, dword ptr [ebp - 40h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 3ch]
        and eax, 0ffffh
        sub edx, eax
        ; Exact mapped bytes 66 89 55 C0: mov word ptr [ebp - 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc0
        ; Exact mapped bytes 66 8B 4D C0: mov cx, word ptr [ebp - 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 4D B4: mov word ptr [ebp - 0x4c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes EB 0C: jmp 0x49f783
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 B4: mov dx, word ptr [ebp - 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb4
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 B4: mov word ptr [ebp - 0x4c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb4
        mov eax, dword ptr [ebp - 4ch]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 7E 23: jle 0x49f7b2
        __asm _emit 0x7e
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        shr ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        and edx, 1
        shl edx, 1fh
        mov eax, dword ptr [ebp - 10h]
        or eax, edx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        shr ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB C5: jmp 0x49f777
        __asm _emit 0xeb
        __asm _emit 0xc5
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B5: jne 0x49f76d
        __asm _emit 0x75
        __asm _emit 0xb5
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 94 D0 0A 00: call 0x54c858
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 70h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 91 F9 FF FF: call 0x49f165
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 A6 D0 0A 00: call 0x54c883
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd0
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 E7 FD FF FF: jmp 0x49f5c9
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 4]
        xor ecx, dword ptr [ebp + 0ch]
        and ecx, 80000000h
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x49f80a
        __asm _emit 0x74
        __asm _emit 0x15
        lea edx, [ebp - 7ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 D5 F8 FF FF: call 0x49f0d6
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 3E F3 FF FF: call 0x49eb48
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 CF 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
