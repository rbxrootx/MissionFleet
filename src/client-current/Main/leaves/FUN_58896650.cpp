// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58896650 .. +0x5FB bytes.
extern "C" __declspec(naked) void FUN_58896650() {
    __asm {
        sub esp, 1ch
        push ebx
        mov ebx, ecx
        ; Exact mapped bytes 66 8B 43 24: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x24
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ebx
        test al, 1
        ; Exact mapped bytes 0F 84 DB 05 00 00: je 0x58896c44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 10524h]
        mov eax, dword ptr [ecx + 50h]
        mov ebp, dword ptr [ebx + 4]
        cdq
        mov ebx, dword ptr [ebx + 8]
        and edx, 3fh
        add eax, edx
        mov esi, eax
        mov eax, dword ptr [ecx + 54h]
        mov ecx, dword ptr [ecx + 114h]
        sar esi, 6
        lea edx, [esi + ebp + 2]
        mov dword ptr [esp + 1ch], edx
        cdq
        and edx, 3fh
        add eax, edx
        mov edi, eax
        sar edi, 6
        lea eax, [ebx + edi - 5]
        mov dword ptr [esp + 20h], eax
        mov eax, 3e80h
        cdq
        idiv ecx
        add eax, ebp
        lea edx, [eax + esi + 2]
        mov dword ptr [esp + 24h], edx
        mov eax, 2ee0h
        cdq
        idiv ecx
        mov esi, dword ptr [esp + 34h]
        add eax, ebx
        lea ebx, [eax + edi - 5]
        mov eax, dword ptr [esp + 10h]
        mov edi, dword ptr [eax + 4ch]
        test edi, edi
        ; Exact mapped bytes 74 3B: je 0x58896717
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ebp, dword ptr [esp + 38h]
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 19: jge 0x58896700
        __asm _emit 0x7d
        __asm _emit 0x19
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [edx + 14h]
        push ebp
        push esi
        push eax
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E2: jne 0x588966e0
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes EB 17: jmp 0x58896717
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 30h]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 14h]
        push ebp
        push esi
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E9: jne 0x58896700
        __asm _emit 0x75
        __asm _emit 0xe9
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x58896743
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        push 0
        push 100h
        push 0ffffffh
        push ebx
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push edx
        ; Exact mapped bytes E8 1D 7C 07 00: call 0x5890e360
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [eax + 0ch]
        mov dword ptr [esp + 34h], 0
        test ebx, ebx
        ; Exact mapped bytes 0F 84 30 03 00 00: je 0x58896a8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x58896760
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 69 FF 03 00: call 0x588d66d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 0E 03 00 00: jne 0x58896a80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 1
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 31 6A 04 00: call 0x588dd1b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x588967a3
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov al, byte ptr [edx + 354h]
        cmp al, byte ptr [ebx + 354h]
        ; Exact mapped bytes 74 09: je 0x588967a3
        __asm _emit 0x74
        __asm _emit 0x09
        add dword ptr [esp + 34h], ebp
        ; Exact mapped bytes E9 DD 02 00 00: jmp 0x58896a80
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 36 FF 03 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 C7 02 00 00: jne 0x58896a7c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 218b0h], 0
        mov dword ptr [esp + 38h], 0
        ; Exact mapped bytes 7E 12: jle 0x588967dd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [eax + 21c48h]
        mov edx, dword ptr [ecx + 50h]
        cmp dword ptr [edx + 50h], ebp
        ; Exact mapped bytes 75 04: jne 0x588967dd
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebp
        cmp dword ptr [ebx + 63b4h], 0
        ; Exact mapped bytes 74 04: je 0x588967ea
        __asm _emit 0x74
        __asm _emit 0x04
        mov dword ptr [esp + 38h], ebp
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        mov cl, byte ptr [ebx + 354h]
        mov edi, ebp
        cmp cl, byte ptr [eax + 354h]
        ; Exact mapped bytes 74 18: je 0x5889681a
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 BB 64 01 00 00 03: cmp word ptr [ebx + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 72 0E: jb 0x5889681a
        __asm _emit 0x72
        __asm _emit 0x0e
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 4C 72 04 00: call 0x588dda60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5889681a
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebx + 8]
        mov ecx, dword ptr [ebx + 4]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 F5 F4 FF: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x5889683b
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 84 41 02 00 00: je 0x58896a7c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ebp
        ; Exact mapped bytes 0F 85 39 02 00 00: jne 0x58896a7c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        mov ecx, dword ptr [esp + 10h]
        cdq
        and edx, 3fh
        add eax, edx
        mov edx, dword ptr [ecx + 4]
        sar eax, 6
        lea edi, [eax + edx - 2]
        mov eax, dword ptr [ebx + 8]
        cdq
        and edx, 3fh
        add eax, edx
        mov edx, dword ptr [ecx + 8]
        sar eax, 6
        lea ebp, [eax + edx - 0ah]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 218b0h], 0
        ; Exact mapped bytes 0F 8E 5A 01 00 00: jle 0x588969da
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 21c34h], 0
        ; Exact mapped bytes 0F 85 4D 01 00 00: jne 0x588969da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        cmp ebx, eax
        ; Exact mapped bytes 75 5B: jne 0x588968f4
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 309h
        ; Exact mapped bytes 7E 17: jle 0x588968c1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588968c1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [ecx + 0c24h]
        ; Exact mapped bytes EB 02: jmp 0x588968c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        push ebp
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 4ch]
        push edi
        push eax
        ; Exact mapped bytes E9 83 01 00 00: jmp 0x58896a77
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 21c48h]
        push eax
        push ebx
        ; Exact mapped bytes E8 7F F0 ED FF: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xed
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 28: jne 0x5889692e
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 240h
        ; Exact mapped bytes 7E AA: jle 0x588968c1
        __asm _emit 0x7e
        __asm _emit 0xaa
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 A1: je 0x588968c1
        __asm _emit 0x74
        __asm _emit 0xa1
        mov ecx, dword ptr [eax + 18ch]
        mov ecx, dword ptr [ecx + 900h]
        ; Exact mapped bytes EB 95: jmp 0x588968c3
        __asm _emit 0xeb
        __asm _emit 0x95
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c48h]
        push eax
        push ebx
        ; Exact mapped bytes E8 36 F0 ED FF: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf0
        __asm _emit 0xed
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 33: jne 0x58896982
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 30ah
        ; Exact mapped bytes 0F 8E 5D FF FF FF: jle 0x588968c1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 50 FF FF FF: je 0x588968c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x588968c3
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c48h]
        push eax
        push ebx
        ; Exact mapped bytes E8 E2 EF ED FF: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x58896a7c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 23fh
        ; Exact mapped bytes 0F 8E 05 FF FF FF: jle 0x588968c1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 F8 FE FF FF: je 0x588968c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 8fch]
        ; Exact mapped bytes E9 E9 FE FF FF: jmp 0x588968c3
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ebx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 33: jne 0x58896a18
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 309h
        ; Exact mapped bytes 0F 8E C7 FE FF FF: jle 0x588968c1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 BA FE FF FF: je 0x588968c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 0c24h]
        ; Exact mapped bytes E9 AB FE FF FF: jmp 0x588968c3
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 6078h]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 75 06: jne 0x58896a2c
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [esp + 38h], edx
        ; Exact mapped bytes 74 50: je 0x58896a7c
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esi + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 4ch]
        push ebp
        push edi
        push eax
        movzx eax, byte ptr [edx + ecx + 4e8h]
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 23fh
        push eax
        ; Exact mapped bytes E8 3B AD E9 FF: call 0x587317b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xad
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E4 D2 06 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0x00
        inc dword ptr [esp + 34h]
        mov ebx, dword ptr [ebx + 78h]
        test ebx, ebx
        ; Exact mapped bytes 0F 85 D5 FC FF FF: jne 0x58896760
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 21c34h], 0
        ; Exact mapped bytes 0F 85 A7 01 00 00: jne 0x58896c44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 07: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 99 01 00 00: jne 0x58896c44
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 21f04h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58896b42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        mov edx, ecx
        mov ecx, dword ptr [edx + 24h]
        mov eax, dword ptr [ecx + 4]
        cdq
        and edx, 3fh
        add eax, edx
        mov edx, dword ptr [ebx + 4]
        sar eax, 6
        lea edi, [eax + edx - 2]
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebx + 8]
        cdq
        and edx, 3fh
        add eax, edx
        sar eax, 6
        lea edx, [eax + ecx - 0ah]
        ; Exact mapped bytes A1 38 46 A2 58: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 73h
        ; Exact mapped bytes 7E 17: jle 0x58896b0f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x58896b0f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ecx, dword ptr [eax + 1cch]
        ; Exact mapped bytes EB 02: jmp 0x58896b11
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebx, dword ptr [esi]
        push 101h
        push 100h
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], ebx
        mov ebx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esp + 4ch]
        mov dword ptr [eax + 8], ebx
        mov ebx, dword ptr [esi + 0ch]
        push edi
        push edx
        mov dword ptr [eax + 0ch], ebx
        ; Exact mapped bytes E8 1E D2 06 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 6648h], 0
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x58896c44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 354h]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 21f04h]
        mov ebx, dword ptr [esp + 10h]
        shl ecx, 4
        add ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx + 8]
        add eax, dword ptr [ecx]
        cdq
        sub eax, edx
        sar eax, 1
        cdq
        and edx, 3fh
        add eax, edx
        mov edx, dword ptr [ebx + 4]
        sar eax, 6
        lea edi, [eax + edx - 2]
        mov eax, dword ptr [ecx + 0ch]
        add eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        cdq
        and edx, 3fh
        add eax, edx
        sar eax, 6
        lea ebp, [eax + ecx - 0ah]
        ; Exact mapped bytes 8B 0D 38 46 A2 58: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 160h]
        cmp eax, 19h
        ; Exact mapped bytes 7E 17: jle 0x58896bd1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58896bd1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 640h
        ; Exact mapped bytes EB 02: jmp 0x58896bd3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add edi, dword ptr [edx + 18h]
        cmp eax, 19h
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 7E 17: jle 0x58896bf6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58896bf6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 640h
        ; Exact mapped bytes EB 02: jmp 0x58896bf8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebp, dword ptr [edx + 1ch]
        cmp eax, 19h
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 104f4h]
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 7E 17: jle 0x58896c27
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58896c27
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 640h
        ; Exact mapped bytes EB 02: jmp 0x58896c29
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        push 100h
        push edx
        mov edx, dword ptr [esp + 3ch]
        push esi
        lea eax, [esp + 24h]
        push eax
        push edx
        ; Exact mapped bytes E8 8C 39 EA FF: call 0x5873a5d0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x39
        __asm _emit 0xea
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
    }
}
