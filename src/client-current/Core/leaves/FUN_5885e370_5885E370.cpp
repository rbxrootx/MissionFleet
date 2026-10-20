// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885E370 .. +0x1CFF bytes.
extern "C" __declspec(naked) void FUN_5885e370_5885E370() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0cf8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp byte ptr [ecx + 4], 0
        push edi
        push 19h
        pop eax
        push 36h
        pop edx
        cmovne eax, edx
        mov dword ptr [ebp - 958h], ecx
        mov edx, dword ptr [esi]
        lea edi, [esi + 8]
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [ebp - 954h], eax
        xor eax, eax
        test edx, edx
        mov dword ptr [ebp - 950h], esi
        cmovs edx, eax
        cmp edx, ecx
        mov eax, edx
        cmovae eax, ecx
        xor ebx, ebx
        sub edx, eax
        mov dword ptr [ebp - 91ch], ebx
        add edi, eax
        mov dword ptr [ebp - 940h], edx
        lea eax, [esi + 8]
        mov dword ptr [ebp - 92ch], edi
        add eax, ecx
        add esi, 8
        xor ecx, ecx
        mov dword ptr [ebp - 934h], eax
        sub eax, edi
        mov dword ptr [ebp - 918h], ecx
        xor edx, edx
        mov dword ptr [ebp - 948h], eax
        mov dword ptr [ebp - 1d4h], ecx
        mov dword ptr [ebp - 920h], esi
        cmp esi, edi
        ; Exact mapped bytes 0F 84 DC 06 00 00: je 0x5885eaeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 9
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x5885e522
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5885e4ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov ebx, 3b9aca00h
        xor edi, edi
        mov eax, dword ptr [ebp + edi*4 - 1d0h]
        mul ebx
        add eax, esi
        mov dword ptr [ebp + edi*4 - 1d0h], eax
        adc edx, 0
        inc edi
        mov esi, edx
        cmp edi, ecx
        ; Exact mapped bytes 75 E4: jne 0x5885e429
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ebx, dword ptr [ebp - 91ch]
        test esi, esi
        ; Exact mapped bytes 74 4B: je 0x5885e49a
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 16: jae 0x5885e470
        __asm _emit 0x73
        __asm _emit 0x16
        mov dword ptr [ebp + eax*4 - 1d0h], esi
        mov ecx, dword ptr [ebp - 1d4h]
        inc ecx
        mov dword ptr [ebp - 1d4h], ecx
        ; Exact mapped bytes EB 30: jmp 0x5885e4a0
        __asm _emit 0xeb
        __asm _emit 0x30
        xor eax, eax
        push eax
        mov dword ptr [ebp - 914h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 910h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 A4 85 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 1d4h]
        mov esi, dword ptr [ebp - 920h]
        mov edi, dword ptr [ebp - 92ch]
        test ebx, ebx
        ; Exact mapped bytes 74 6E: je 0x5885e51e
        __asm _emit 0x74
        __asm _emit 0x6e
        xor edx, edx
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x5885e4d2
        __asm _emit 0x74
        __asm _emit 0x1c
        xor eax, eax
        add dword ptr [ebp + edx*4 - 1d0h], ebx
        mov ecx, dword ptr [ebp - 1d4h]
        adc eax, eax
        inc edx
        mov ebx, eax
        cmp edx, ecx
        ; Exact mapped bytes 75 E8: jne 0x5885e4b6
        __asm _emit 0x75
        __asm _emit 0xe8
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x5885e51e
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp ecx, 73h
        ; Exact mapped bytes 73 16: jae 0x5885e4ed
        __asm _emit 0x73
        __asm _emit 0x16
        mov dword ptr [ebp + ecx*4 - 1d0h], ebx
        mov ecx, dword ptr [ebp - 1d4h]
        inc ecx
        mov dword ptr [ebp - 1d4h], ecx
        ; Exact mapped bytes EB 31: jmp 0x5885e51e
        __asm _emit 0xeb
        __asm _emit 0x31
        and dword ptr [ebp - 914h], 0
        lea eax, [ebp - 910h]
        and dword ptr [ebp - 1d4h], 0
        push 0
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 26 85 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d4h]
        add esp, 10h
        xor ebx, ebx
        xor edx, edx
        movzx eax, byte ptr [esi]
        imul ebx, ebx, 0ah
        add ebx, eax
        inc edx
        inc esi
        mov dword ptr [ebp - 91ch], ebx
        mov dword ptr [ebp - 920h], esi
        cmp esi, edi
        ; Exact mapped bytes 0F 85 CF FE FF FF: jne 0x5885e40f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 928h], edx
        mov dword ptr [ebp - 918h], ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 8F 05 00 00: je 0x5885eae3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        xor edx, edx
        push 0ah
        pop esi
        div esi
        mov dword ptr [ebp - 930h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 03 00 00: je 0x5885e92a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 26h
        pop edx
        cmp eax, edx
        mov ecx, eax
        cmova ecx, edx
        mov dword ptr [ebp - 938h], ecx
        movzx esi, byte ptr [ecx*4 + 588c3c2fh]
        movzx ecx, byte ptr [ecx*4 + 588c3c2eh]
        mov edi, ecx
        shl edi, 2
        push edi
        lea eax, [ecx + esi]
        mov dword ptr [ebp - 914h], eax
        lea eax, [ebp - 910h]
        push 0
        push eax
        ; Exact mapped bytes E8 68 E8 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        shl eax, 2
        push eax
        mov eax, dword ptr [ebp - 938h]
        movzx eax, word ptr [eax*4 + 588c3c2ch]
        lea eax, [eax*4 + 588c3328h]
        push eax
        lea eax, [ebp - 910h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 BE E2 FE FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 914h]
        xor eax, eax
        inc eax
        add esp, 18h
        cmp edx, eax
        ; Exact mapped bytes 0F 87 C7 00 00 00: ja 0x5885e6ad
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 910h], 0
        ; Exact mapped bytes 75 1A: jne 0x5885e609
        __asm _emit 0x75
        __asm _emit 0x1a
        xor eax, eax
        mov dword ptr [ebp - 914h], eax
        mov dword ptr [ebp - 1d4h], eax
        push eax
        lea eax, [ebp - 910h]
        ; Exact mapped bytes E9 D8 02 00 00: jmp 0x5885e8e1
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 918h]
        cmp dword ptr [ebp - 910h], eax
        ; Exact mapped bytes 0F 84 EC 02 00 00: je 0x5885e907
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E4 02 00 00: je 0x5885e907
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor edi, edi
        mov eax, dword ptr [ebp - 910h]
        mul dword ptr [ebp + edi*4 - 1d0h]
        add eax, esi
        mov dword ptr [ebp + edi*4 - 1d0h], eax
        adc edx, 0
        inc edi
        mov esi, edx
        cmp edi, ecx
        ; Exact mapped bytes 75 E0: jne 0x5885e627
        __asm _emit 0x75
        __asm _emit 0xe0
        test esi, esi
        ; Exact mapped bytes 74 52: je 0x5885e69d
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 16: jae 0x5885e66c
        __asm _emit 0x73
        __asm _emit 0x16
        mov dword ptr [ebp + eax*4 - 1d0h], esi
        mov ecx, dword ptr [ebp - 1d4h]
        inc ecx
        mov dword ptr [ebp - 1d4h], ecx
        ; Exact mapped bytes EB 37: jmp 0x5885e6a3
        __asm _emit 0xeb
        __asm _emit 0x37
        xor eax, eax
        push eax
        mov dword ptr [ebp - 914h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 910h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 A8 83 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        xor al, al
        ; Exact mapped bytes E9 5E 02 00 00: jmp 0x5885e8fb
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1d4h]
        xor edx, edx
        lea eax, [edx + 1]
        ; Exact mapped bytes E9 54 02 00 00: jmp 0x5885e901
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 918h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 87 8B 00 00 00: ja 0x5885e746
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 1d0h]
        mov eax, edx
        shl eax, 2
        push eax
        lea eax, [ebp - 910h]
        mov dword ptr [ebp - 924h], esi
        push eax
        lea eax, [ebp - 1d0h]
        mov dword ptr [ebp - 1d4h], edx
        push 1cch
        push eax
        ; Exact mapped bytes E8 50 83 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        xor eax, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 F9 FE FF FF: je 0x5885e5f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d4h]
        inc eax
        mov dword ptr [ebp - 918h], ecx
        cmp esi, eax
        ; Exact mapped bytes 0F 84 FA 01 00 00: je 0x5885e907
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F2 01 00 00: je 0x5885e907
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 924h]
        xor esi, esi
        xor edi, edi
        mov eax, ebx
        mul dword ptr [ebp + edi*4 - 1d0h]
        add eax, esi
        mov dword ptr [ebp + edi*4 - 1d0h], eax
        adc edx, 0
        inc edi
        mov esi, edx
        cmp edi, ecx
        ; Exact mapped bytes 75 E4: jne 0x5885e71f
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ebx, dword ptr [ebp - 91ch]
        ; Exact mapped bytes E9 01 FF FF FF: jmp 0x5885e647
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, ecx
        lea edi, [ebp - 1d0h]
        lea esi, [ebp - 910h]
        cmovae esi, edi
        setb al
        mov dword ptr [ebp - 924h], esi
        mov esi, edi
        lea edi, [ebp - 910h]
        cmovae esi, edi
        mov dword ptr [ebp - 94ch], esi
        mov esi, ecx
        cmovb esi, edx
        test al, al
        mov dword ptr [ebp - 944h], esi
        cmovne edx, ecx
        xor eax, eax
        xor edi, edi
        mov dword ptr [ebp - 920h], edx
        mov dword ptr [ebp - 744h], eax
        test esi, esi
        ; Exact mapped bytes 0F 84 38 01 00 00: je 0x5885e8d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edx
        mov edx, dword ptr [ebp - 924h]
        cmp dword ptr [edx + edi*4], 0
        ; Exact mapped bytes 75 1E: jne 0x5885e7c5
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp edi, eax
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x5885e8c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp + edi*4 - 740h], 0
        lea eax, [edi + 1]
        mov dword ptr [ebp - 744h], eax
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x5885e8c8
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 918h], 0
        xor edx, edx
        mov dword ptr [ebp - 93ch], edx
        mov esi, edi
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5885e8b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 73h
        ; Exact mapped bytes 74 6A: je 0x5885e84d
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, esi
        shl ecx, 2
        cmp esi, eax
        ; Exact mapped bytes 75 13: jne 0x5885e7ff
        __asm _emit 0x75
        __asm _emit 0x13
        and dword ptr [ebp + ecx - 740h], 0
        lea eax, [edi + 1]
        add eax, edx
        mov dword ptr [ebp - 744h], eax
        mov eax, dword ptr [ebp - 94ch]
        mov eax, dword ptr [eax + edx*4]
        mov edx, dword ptr [ebp - 924h]
        mul dword ptr [edx + edi*4]
        add eax, dword ptr [ebp + ecx - 740h]
        adc edx, 0
        add eax, dword ptr [ebp - 918h]
        mov dword ptr [ebp + ecx - 740h], eax
        mov eax, dword ptr [ebp - 744h]
        adc edx, 0
        mov dword ptr [ebp - 918h], edx
        mov edx, dword ptr [ebp - 93ch]
        inc edx
        inc esi
        mov dword ptr [ebp - 93ch], edx
        cmp edx, dword ptr [ebp - 920h]
        ; Exact mapped bytes 75 91: jne 0x5885e7de
        __asm _emit 0x75
        __asm _emit 0x91
        cmp dword ptr [ebp - 918h], 0
        ; Exact mapped bytes 74 57: je 0x5885e8ad
        __asm _emit 0x74
        __asm _emit 0x57
        lea edx, [ebp - 740h]
        lea edx, [edx + esi*4]
        mov dword ptr [ebp - 93ch], edx
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 73 01 00 00: je 0x5885e9e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1]
        cmp esi, eax
        mov esi, ecx
        ; Exact mapped bytes 75 09: jne 0x5885e880
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [edx], 0
        mov dword ptr [ebp - 744h], ecx
        mov ecx, dword ptr [edx]
        xor eax, eax
        add dword ptr [ebp - 93ch], 4
        add ecx, dword ptr [ebp - 918h]
        mov dword ptr [edx], ecx
        adc eax, eax
        mov dword ptr [ebp - 918h], eax
        test eax, eax
        mov eax, dword ptr [ebp - 744h]
        ; Exact mapped bytes 74 08: je 0x5885e8ad
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 93ch]
        ; Exact mapped bytes EB B8: jmp 0x5885e865
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 920h]
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 25 01 00 00: je 0x5885e9e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 944h]
        mov edx, dword ptr [ebp - 924h]
        inc edi
        cmp edi, esi
        ; Exact mapped bytes 0F 85 D0 FE FF FF: jne 0x5885e7a1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        shl eax, 2
        push eax
        lea eax, [ebp - 740h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 48 81 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        xor edx, edx
        lea eax, [edx + 1]
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 918h], ecx
        test al, al
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x5885ea0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 930h]
        sub eax, dword ptr [ebp - 938h]
        mov dword ptr [ebp - 930h], eax
        ; Exact mapped bytes 0F 85 44 FC FF FF: jne 0x5885e56b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ah
        pop esi
        mov eax, dword ptr [ebp - 928h]
        xor edx, edx
        div esi
        test edx, edx
        ; Exact mapped bytes 74 4B: je 0x5885e983
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ebx, dword ptr [edx*4 + 588c3cc4h]
        xor eax, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x5885ea46
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 CD 80 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 918h], ecx
        mov ebx, dword ptr [ebp - 91ch]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x5885eae3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        test ecx, ecx
        ; Exact mapped bytes 74 28: je 0x5885e9b9
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, ebx
        xor ebx, ebx
        add dword ptr [ebp + edx*4 - 1d0h], eax
        mov ecx, dword ptr [ebp - 1d4h]
        adc ebx, ebx
        mov dword ptr [ebp - 918h], ecx
        inc edx
        mov eax, ebx
        cmp edx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5885e991
        __asm _emit 0x75
        __asm _emit 0xe0
        test eax, eax
        ; Exact mapped bytes 0F 84 32 01 00 00: je 0x5885eaeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 73h
        ; Exact mapped bytes 0F 83 E8 00 00 00: jae 0x5885eaaa
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + ecx*4 - 1d0h], ebx
        mov ebx, dword ptr [ebp - 1d4h]
        inc ebx
        mov dword ptr [ebp - 918h], ebx
        mov dword ptr [ebp - 1d4h], ebx
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x5885eaed
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push eax
        mov dword ptr [ebp - 0cf8h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 0cf4h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 33 80 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        xor eax, eax
        push eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 09 80 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d4h]
        add esp, 10h
        mov dword ptr [ebp - 918h], ecx
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x5885e983
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        cmp ebx, eax
        ; Exact mapped bytes 0F 84 2E FF FF FF: je 0x5885e97d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ecx, ecx
        ; Exact mapped bytes 0F 84 26 FF FF FF: je 0x5885e97d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        xor edi, edi
        mov eax, ebx
        mul dword ptr [ebp + edi*4 - 1d0h]
        add eax, esi
        mov dword ptr [ebp + edi*4 - 1d0h], eax
        adc edx, 0
        inc edi
        mov esi, edx
        cmp edi, ecx
        ; Exact mapped bytes 75 E4: jne 0x5885ea5b
        __asm _emit 0x75
        __asm _emit 0xe4
        test esi, esi
        ; Exact mapped bytes 0F 84 F2 FE FF FF: je 0x5885e971
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 19: jae 0x5885eaa3
        __asm _emit 0x73
        __asm _emit 0x19
        mov dword ptr [ebp + eax*4 - 1d0h], esi
        mov ecx, dword ptr [ebp - 1d4h]
        inc ecx
        mov dword ptr [ebp - 1d4h], ecx
        ; Exact mapped bytes E9 D4 FE FF FF: jmp 0x5885e977
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 9F FE FF FF: jmp 0x5885e949
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 0b28h], 0
        lea eax, [ebp - 0b24h]
        and dword ptr [ebp - 1d4h], 0
        push 0
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 69 7F FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 1d4h]
        add esp, 10h
        mov dword ptr [ebp - 918h], ebx
        ; Exact mapped bytes EB 0A: jmp 0x5885eaed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ebx, dword ptr [ebp - 918h]
        ; Exact mapped bytes EB 02: jmp 0x5885eaed
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ebx, ecx
        mov eax, dword ptr [ebp - 940h]
        test eax, eax
        ; Exact mapped bytes 0F 84 C1 04 00 00: je 0x5885efbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        xor edx, edx
        pop ecx
        div ecx
        mov dword ptr [ebp - 91ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 03 00 00: je 0x5885eeb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 26h
        pop edx
        cmp eax, edx
        mov ecx, eax
        cmova ecx, edx
        mov dword ptr [ebp - 920h], ecx
        movzx esi, byte ptr [ecx*4 + 588c3c2fh]
        movzx ecx, byte ptr [ecx*4 + 588c3c2eh]
        mov edi, ecx
        shl edi, 2
        push edi
        lea eax, [ecx + esi]
        mov dword ptr [ebp - 914h], eax
        lea eax, [ebp - 910h]
        push 0
        push eax
        ; Exact mapped bytes E8 C3 E2 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        shl eax, 2
        push eax
        mov eax, dword ptr [ebp - 920h]
        movzx eax, word ptr [eax*4 + 588c3c2ch]
        lea eax, [eax*4 + 588c3328h]
        push eax
        lea eax, [ebp - 910h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 19 DD FE FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 914h]
        xor edx, edx
        inc edx
        add esp, 18h
        cmp ecx, edx
        ; Exact mapped bytes 0F 87 BF 00 00 00: ja 0x5885ec4a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 910h]
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x5885ebaf
        __asm _emit 0x75
        __asm _emit 0x1a
        xor eax, eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 1d4h], eax
        push eax
        lea eax, [ebp - 0b24h]
        ; Exact mapped bytes E9 83 02 00 00: jmp 0x5885ee32
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, edx
        ; Exact mapped bytes 75 0A: jne 0x5885ebbd
        __asm _emit 0x75
        __asm _emit 0x0a
        xor ecx, ecx
        mov al, dl
        inc ecx
        ; Exact mapped bytes E9 9B 02 00 00: jmp 0x5885ee58
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ebx, ebx
        ; Exact mapped bytes 74 F2: je 0x5885ebb5
        __asm _emit 0x74
        __asm _emit 0xf2
        xor esi, esi
        mov eax, edi
        mul dword ptr [ebp + esi*4 - 1d0h]
        add eax, ecx
        mov dword ptr [ebp + esi*4 - 1d0h], eax
        adc edx, 0
        inc esi
        mov ecx, edx
        cmp esi, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885ebc5
        __asm _emit 0x75
        __asm _emit 0xe4
        test ecx, ecx
        ; Exact mapped bytes 74 55: je 0x5885ec3a
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 16: jae 0x5885ec06
        __asm _emit 0x73
        __asm _emit 0x16
        mov dword ptr [ebp + eax*4 - 1d0h], ecx
        mov ebx, dword ptr [ebp - 1d4h]
        inc ebx
        mov dword ptr [ebp - 1d4h], ebx
        ; Exact mapped bytes EB 3A: jmp 0x5885ec40
        __asm _emit 0xeb
        __asm _emit 0x3a
        xor ebx, ebx
        lea eax, [ebp - 0b24h]
        push ebx
        push eax
        lea eax, [ebp - 1d0h]
        mov dword ptr [ebp - 0b28h], ebx
        push 1cch
        push eax
        mov dword ptr [ebp - 1d4h], ebx
        ; Exact mapped bytes E8 0E 7E FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        add esp, 10h
        mov al, bl
        inc ecx
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x5885ee4c
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 1d4h]
        xor ecx, ecx
        inc ecx
        mov al, cl
        ; Exact mapped bytes E9 08 02 00 00: jmp 0x5885ee52
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, edx
        ; Exact mapped bytes 77 79: ja 0x5885ecc7
        __asm _emit 0x77
        __asm _emit 0x79
        mov edi, dword ptr [ebp - 1d0h]
        mov eax, ecx
        shl eax, 2
        push eax
        lea eax, [ebp - 910h]
        mov dword ptr [ebp - 1d4h], ecx
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 C3 7D FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test edi, edi
        ; Exact mapped bytes 0F 84 12 FF FF FF: je 0x5885eb95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 1d4h]
        xor edx, edx
        inc edx
        mov dword ptr [ebp - 918h], ebx
        cmp edi, edx
        ; Exact mapped bytes 0F 84 19 FF FF FF: je 0x5885ebb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 11 FF FF FF: je 0x5885ebb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        mov eax, edi
        mul dword ptr [ebp + esi*4 - 1d0h]
        add eax, ecx
        mov dword ptr [ebp + esi*4 - 1d0h], eax
        adc edx, 0
        inc esi
        mov ecx, edx
        cmp esi, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885eca6
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x5885ebe1
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, ebx
        lea edx, [ebp - 1d0h]
        lea esi, [ebp - 910h]
        cmovae esi, edx
        lea edi, [ebp - 910h]
        cmovae edx, edi
        mov dword ptr [ebp - 93ch], esi
        setb al
        mov dword ptr [ebp - 928h], edx
        mov edx, ebx
        cmovb edx, ecx
        test al, al
        mov dword ptr [ebp - 944h], edx
        cmovne ecx, ebx
        xor eax, eax
        xor edi, edi
        mov dword ptr [ebp - 938h], ecx
        mov dword ptr [ebp - 744h], eax
        test edx, edx
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x5885ee22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + edi*4], 0
        ; Exact mapped bytes 75 1E: jne 0x5885ed3c
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp edi, eax
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x5885ee19
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp + edi*4 - 740h], 0
        lea eax, [edi + 1]
        mov dword ptr [ebp - 744h], eax
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x5885ee19
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 924h], 0
        xor edx, edx
        mov dword ptr [ebp - 930h], edx
        mov esi, edi
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5885ee02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 938h]
        cmp esi, 73h
        ; Exact mapped bytes 74 5F: je 0x5885edbf
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, esi
        shl ecx, 2
        cmp esi, eax
        ; Exact mapped bytes 75 13: jne 0x5885ed7c
        __asm _emit 0x75
        __asm _emit 0x13
        and dword ptr [ebp + ecx - 740h], 0
        lea eax, [edi + 1]
        add eax, edx
        mov dword ptr [ebp - 744h], eax
        mov eax, dword ptr [ebp - 928h]
        mov eax, dword ptr [eax + edx*4]
        mov edx, dword ptr [ebp - 93ch]
        mul dword ptr [edx + edi*4]
        add eax, dword ptr [ebp - 924h]
        adc edx, 0
        add dword ptr [ebp + ecx - 740h], eax
        mov eax, dword ptr [ebp - 744h]
        adc edx, 0
        mov dword ptr [ebp - 924h], edx
        mov edx, dword ptr [ebp - 930h]
        inc edx
        inc esi
        mov dword ptr [ebp - 930h], edx
        cmp edx, ebx
        ; Exact mapped bytes 75 9C: jne 0x5885ed5b
        __asm _emit 0x75
        __asm _emit 0x9c
        mov ebx, dword ptr [ebp - 924h]
        test ebx, ebx
        ; Exact mapped bytes 74 39: je 0x5885ee02
        __asm _emit 0x74
        __asm _emit 0x39
        lea edx, [ebp - 740h]
        lea edx, [edx + esi*4]
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x5885ee76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1]
        cmp esi, eax
        mov esi, ecx
        ; Exact mapped bytes 75 09: jne 0x5885eded
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [edx], 0
        mov dword ptr [ebp - 744h], ecx
        mov ecx, edx
        mov eax, ebx
        add edx, 4
        xor ebx, ebx
        add dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 744h]
        adc ebx, ebx
        ; Exact mapped bytes 75 D0: jne 0x5885edd2
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp esi, 73h
        ; Exact mapped bytes 74 6F: je 0x5885ee76
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 938h]
        mov edx, dword ptr [ebp - 944h]
        mov esi, dword ptr [ebp - 93ch]
        inc edi
        cmp edi, edx
        ; Exact mapped bytes 0F 85 F6 FE FF FF: jne 0x5885ed18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        shl eax, 2
        push eax
        lea eax, [ebp - 740h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 F7 7B FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        add esp, 10h
        inc ecx
        mov al, cl
        mov ebx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 918h], ebx
        test al, al
        ; Exact mapped bytes 74 46: je 0x5885eea2
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 91ch]
        sub eax, dword ptr [ebp - 920h]
        mov dword ptr [ebp - 91ch], eax
        ; Exact mapped bytes 0F 85 9C FC FF FF: jne 0x5885eb10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 43: jmp 0x5885eeb9
        __asm _emit 0xeb
        __asm _emit 0x43
        xor ebx, ebx
        lea eax, [ebp - 0cf4h]
        push ebx
        push eax
        lea eax, [ebp - 1d0h]
        mov dword ptr [ebp - 0cf8h], ebx
        push 1cch
        push eax
        mov dword ptr [ebp - 1d4h], ebx
        ; Exact mapped bytes E8 9E 7B FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 02: jmp 0x5885eea4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov dword ptr [ebp - 0b28h], ebx
        mov dword ptr [ebp - 1d4h], ebx
        push ebx
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x5885ef7e
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        inc ecx
        mov eax, dword ptr [ebp - 940h]
        xor edx, edx
        push 0ah
        pop esi
        div esi
        test edx, edx
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x5885efbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx*4 + 588c3cc4h]
        test edi, edi
        ; Exact mapped bytes 75 3B: jne 0x5885ef14
        __asm _emit 0x75
        __asm _emit 0x3b
        xor eax, eax
        push eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 1d4h], eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 3B 7B FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 918h], ecx
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x5885efc2
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ecx
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5885efbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x5885efbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor ecx, ecx
        mov eax, edi
        mul dword ptr [ebp + ecx*4 - 1d0h]
        add eax, esi
        mov dword ptr [ebp + ecx*4 - 1d0h], eax
        adc edx, 0
        inc ecx
        mov esi, edx
        cmp ecx, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885ef28
        __asm _emit 0x75
        __asm _emit 0xe4
        test esi, esi
        ; Exact mapped bytes 74 BB: je 0x5885ef03
        __asm _emit 0x74
        __asm _emit 0xbb
        mov eax, dword ptr [ebp - 1d4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 1C: jae 0x5885ef6f
        __asm _emit 0x73
        __asm _emit 0x1c
        mov dword ptr [ebp + eax*4 - 1d0h], esi
        mov ecx, dword ptr [ebp - 1d4h]
        inc ecx
        mov dword ptr [ebp - 918h], ecx
        mov dword ptr [ebp - 1d4h], ecx
        ; Exact mapped bytes EB 53: jmp 0x5885efc2
        __asm _emit 0xeb
        __asm _emit 0x53
        xor eax, eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 1d4h], eax
        push eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 1d0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 A5 7A FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 950h]
        add esp, 10h
        push dword ptr [ebp - 958h]
        movzx eax, byte ptr [eax + 308h]
        push eax
        ; Exact mapped bytes E8 13 EE FF FF: call 0x5885ddc5
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 3
        pop eax
        ; Exact mapped bytes E9 A4 10 00 00: jmp 0x58860060
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 918h]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5885efe4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + ecx*4 - 1d4h]
        and dword ptr [ebp - 928h], 0
        bsr eax, eax
        ; Exact mapped bytes 74 03: je 0x5885efdc
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x5885efde
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        dec ecx
        shl ecx, 5
        add ecx, eax
        mov eax, dword ptr [ebp - 948h]
        mov dword ptr [ebp - 93ch], ecx
        cmp ecx, dword ptr [ebp - 954h]
        ; Exact mapped bytes 0F 83 37 10 00 00: jae 0x58860033
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 31 10 00 00: je 0x58860035
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 92ch]
        xor ebx, ebx
        xor esi, esi
        mov dword ptr [ebp - 3a4h], ebx
        xor ecx, ecx
        mov dword ptr [ebp - 920h], esi
        cmp edi, dword ptr [ebp - 934h]
        ; Exact mapped bytes 0F 84 15 06 00 00: je 0x5885f63d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 9
        ; Exact mapped bytes 0F 85 06 01 00 00: jne 0x5885f137
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5885f0bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov esi, 3b9aca00h
        xor edi, edi
        mov eax, dword ptr [ebp + edi*4 - 3a0h]
        mul esi
        add eax, ecx
        mov dword ptr [ebp + edi*4 - 3a0h], eax
        adc edx, 0
        inc edi
        mov ecx, edx
        cmp edi, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885f042
        __asm _emit 0x75
        __asm _emit 0xe4
        mov esi, dword ptr [ebp - 920h]
        test ecx, ecx
        ; Exact mapped bytes 74 4B: je 0x5885f0b3
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 3a4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 16: jae 0x5885f089
        __asm _emit 0x73
        __asm _emit 0x16
        mov dword ptr [ebp + eax*4 - 3a0h], ecx
        mov ebx, dword ptr [ebp - 3a4h]
        inc ebx
        mov dword ptr [ebp - 3a4h], ebx
        ; Exact mapped bytes EB 30: jmp 0x5885f0b9
        __asm _emit 0xeb
        __asm _emit 0x30
        xor eax, eax
        push eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 3a4h], eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 8B 79 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ebx, dword ptr [ebp - 3a4h]
        mov edi, dword ptr [ebp - 92ch]
        test esi, esi
        ; Exact mapped bytes 74 70: je 0x5885f133
        __asm _emit 0x74
        __asm _emit 0x70
        xor ecx, ecx
        test ebx, ebx
        ; Exact mapped bytes 74 1E: je 0x5885f0e7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, esi
        xor esi, esi
        add dword ptr [ebp + ecx*4 - 3a0h], eax
        mov ebx, dword ptr [ebp - 3a4h]
        adc esi, esi
        inc ecx
        mov eax, esi
        cmp ecx, ebx
        ; Exact mapped bytes 75 E6: jne 0x5885f0c9
        __asm _emit 0x75
        __asm _emit 0xe6
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x5885f133
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp ebx, 73h
        ; Exact mapped bytes 73 16: jae 0x5885f102
        __asm _emit 0x73
        __asm _emit 0x16
        mov dword ptr [ebp + ebx*4 - 3a0h], esi
        mov ebx, dword ptr [ebp - 3a4h]
        inc ebx
        mov dword ptr [ebp - 3a4h], ebx
        ; Exact mapped bytes EB 31: jmp 0x5885f133
        __asm _emit 0xeb
        __asm _emit 0x31
        and dword ptr [ebp - 0b28h], 0
        lea eax, [ebp - 0b24h]
        and dword ptr [ebp - 3a4h], 0
        push 0
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 11 79 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 3a4h]
        add esp, 10h
        xor esi, esi
        xor ecx, ecx
        movzx eax, byte ptr [edi]
        imul esi, esi, 0ah
        add esi, eax
        inc ecx
        inc edi
        mov dword ptr [ebp - 920h], esi
        mov dword ptr [ebp - 92ch], edi
        cmp edi, dword ptr [ebp - 934h]
        ; Exact mapped bytes 0F 85 CF FE FF FF: jne 0x5885f028
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 92ch], ecx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D0 04 00 00: je 0x5885f637
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        xor edx, edx
        mov eax, ecx
        pop esi
        div esi
        mov dword ptr [ebp - 938h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 56 03 00 00: je 0x5885f4d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 26h
        pop edx
        cmp eax, edx
        mov ecx, eax
        cmova ecx, edx
        mov dword ptr [ebp - 930h], ecx
        movzx esi, byte ptr [ecx*4 + 588c3c2fh]
        movzx ecx, byte ptr [ecx*4 + 588c3c2eh]
        mov edi, ecx
        shl edi, 2
        push edi
        lea eax, [ecx + esi]
        mov dword ptr [ebp - 914h], eax
        lea eax, [ebp - 910h]
        push 0
        push eax
        ; Exact mapped bytes E8 55 DC FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        shl eax, 2
        push eax
        mov eax, dword ptr [ebp - 930h]
        movzx eax, word ptr [eax*4 + 588c3c2ch]
        lea eax, [eax*4 + 588c3328h]
        push eax
        lea eax, [ebp - 910h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 AB D6 FE FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 914h]
        xor edx, edx
        inc edx
        add esp, 18h
        cmp ecx, edx
        ; Exact mapped bytes 0F 87 B7 00 00 00: ja 0x5885f2b0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 910h]
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x5885f21d
        __asm _emit 0x75
        __asm _emit 0x1a
        xor eax, eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 3a4h], eax
        push eax
        lea eax, [ebp - 0b24h]
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x5885f490
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, edx
        ; Exact mapped bytes 75 07: jne 0x5885f228
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, dl
        ; Exact mapped bytes E9 86 02 00 00: jmp 0x5885f4ae
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 74 F5: je 0x5885f221
        __asm _emit 0x74
        __asm _emit 0xf5
        xor ecx, ecx
        xor esi, esi
        mov eax, edi
        mul dword ptr [ebp + esi*4 - 3a0h]
        add eax, ecx
        mov dword ptr [ebp + esi*4 - 3a0h], eax
        adc edx, 0
        inc esi
        mov ecx, edx
        cmp esi, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885f230
        __asm _emit 0x75
        __asm _emit 0xe4
        test ecx, ecx
        ; Exact mapped bytes 74 52: je 0x5885f2a2
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 3a4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 16: jae 0x5885f271
        __asm _emit 0x73
        __asm _emit 0x16
        mov dword ptr [ebp + eax*4 - 3a0h], ecx
        mov ebx, dword ptr [ebp - 3a4h]
        inc ebx
        mov dword ptr [ebp - 3a4h], ebx
        ; Exact mapped bytes EB 37: jmp 0x5885f2a8
        __asm _emit 0xeb
        __asm _emit 0x37
        xor ebx, ebx
        lea eax, [ebp - 0b24h]
        push ebx
        push eax
        lea eax, [ebp - 3a0h]
        mov dword ptr [ebp - 0b28h], ebx
        push 1cch
        push eax
        mov dword ptr [ebp - 3a4h], ebx
        ; Exact mapped bytes E8 A3 77 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov al, bl
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x5885f4a8
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 3a4h]
        xor eax, eax
        inc eax
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x5885f4ae
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, edx
        ; Exact mapped bytes 77 73: ja 0x5885f327
        __asm _emit 0x77
        __asm _emit 0x73
        mov edi, dword ptr [ebp - 3a0h]
        mov eax, ecx
        shl eax, 2
        push eax
        lea eax, [ebp - 910h]
        mov dword ptr [ebp - 3a4h], ecx
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 5D 77 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test edi, edi
        ; Exact mapped bytes 0F 84 1A FF FF FF: je 0x5885f203
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 3a4h]
        xor edx, edx
        inc edx
        cmp edi, edx
        ; Exact mapped bytes 0F 84 27 FF FF FF: je 0x5885f221
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 0F 84 1F FF FF FF: je 0x5885f221
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        xor esi, esi
        mov eax, edi
        mul dword ptr [ebp + esi*4 - 3a0h]
        add eax, ecx
        mov dword ptr [ebp + esi*4 - 3a0h], eax
        adc edx, 0
        inc esi
        mov ecx, edx
        cmp esi, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885f306
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E9 25 FF FF FF: jmp 0x5885f24c
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, ebx
        lea edx, [ebp - 3a0h]
        lea esi, [ebp - 910h]
        cmovae esi, edx
        lea edi, [ebp - 910h]
        cmovae edx, edi
        mov dword ptr [ebp - 940h], esi
        setb al
        mov dword ptr [ebp - 928h], edx
        mov edx, ebx
        cmovb edx, ecx
        test al, al
        mov dword ptr [ebp - 94ch], edx
        cmovne ecx, ebx
        xor eax, eax
        xor edi, edi
        mov dword ptr [ebp - 944h], ecx
        mov dword ptr [ebp - 744h], eax
        test edx, edx
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x5885f480
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + edi*4], 0
        ; Exact mapped bytes 75 1E: jne 0x5885f39c
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp edi, eax
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x5885f477
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp + edi*4 - 740h], 0
        lea eax, [edi + 1]
        mov dword ptr [ebp - 744h], eax
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x5885f477
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 924h], 0
        xor edx, edx
        mov dword ptr [ebp - 934h], edx
        mov esi, edi
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5885f462
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 73h
        ; Exact mapped bytes 74 5F: je 0x5885f419
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ebx, esi
        shl ebx, 2
        cmp esi, eax
        ; Exact mapped bytes 75 13: jne 0x5885f3d6
        __asm _emit 0x75
        __asm _emit 0x13
        and dword ptr [ebp + ebx - 740h], 0
        lea eax, [edi + 1]
        add eax, edx
        mov dword ptr [ebp - 744h], eax
        mov eax, dword ptr [ebp - 928h]
        mov eax, dword ptr [eax + edx*4]
        mov edx, dword ptr [ebp - 940h]
        mul dword ptr [edx + edi*4]
        add eax, dword ptr [ebp - 924h]
        adc edx, 0
        add dword ptr [ebp + ebx - 740h], eax
        mov eax, dword ptr [ebp - 744h]
        adc edx, 0
        mov dword ptr [ebp - 924h], edx
        mov edx, dword ptr [ebp - 934h]
        inc edx
        inc esi
        mov dword ptr [ebp - 934h], edx
        cmp edx, ecx
        ; Exact mapped bytes 75 9C: jne 0x5885f3b5
        __asm _emit 0x75
        __asm _emit 0x9c
        mov ebx, dword ptr [ebp - 924h]
        test ebx, ebx
        ; Exact mapped bytes 74 3F: je 0x5885f462
        __asm _emit 0x74
        __asm _emit 0x3f
        lea edx, [ebp - 740h]
        lea edx, [edx + esi*4]
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x5885f550
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1]
        cmp esi, eax
        mov esi, ecx
        ; Exact mapped bytes 75 09: jne 0x5885f447
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [edx], 0
        mov dword ptr [ebp - 744h], ecx
        mov ecx, edx
        mov eax, ebx
        add edx, 4
        xor ebx, ebx
        add dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 744h]
        adc ebx, ebx
        ; Exact mapped bytes 75 D0: jne 0x5885f42c
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 944h]
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x5885f550
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 94ch]
        mov esi, dword ptr [ebp - 940h]
        inc edi
        cmp edi, edx
        ; Exact mapped bytes 0F 85 F8 FE FF FF: jne 0x5885f378
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3a4h], eax
        shl eax, 2
        push eax
        lea eax, [ebp - 740h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 99 75 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        add esp, 10h
        inc eax
        mov ebx, dword ptr [ebp - 3a4h]
        test al, al
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x5885f57c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 938h]
        sub eax, dword ptr [ebp - 930h]
        mov dword ptr [ebp - 938h], eax
        ; Exact mapped bytes 0F 85 B0 FC FF FF: jne 0x5885f17e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 92ch]
        mov eax, ecx
        xor edx, edx
        push 0ah
        pop ecx
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x5885f5bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx*4 + 588c3cc4h]
        xor eax, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x5885f58f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        cmp edi, eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x5885f5bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x5885f5bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor ecx, ecx
        mov eax, edi
        mul dword ptr [ebp + ecx*4 - 3a0h]
        add eax, esi
        mov dword ptr [ebp + ecx*4 - 3a0h], eax
        adc edx, 0
        inc ecx
        mov esi, edx
        cmp ecx, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885f50b
        __asm _emit 0x75
        __asm _emit 0xe4
        test esi, esi
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5885f5b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3a4h]
        cmp eax, 73h
        ; Exact mapped bytes 73 53: jae 0x5885f58d
        __asm _emit 0x73
        __asm _emit 0x53
        mov dword ptr [ebp + eax*4 - 3a0h], esi
        mov ebx, dword ptr [ebp - 3a4h]
        inc ebx
        mov dword ptr [ebp - 3a4h], ebx
        ; Exact mapped bytes EB 6D: jmp 0x5885f5bd
        __asm _emit 0xeb
        __asm _emit 0x6d
        xor ebx, ebx
        lea eax, [ebp - 0cf4h]
        push ebx
        push eax
        lea eax, [ebp - 3a0h]
        mov dword ptr [ebp - 0cf8h], ebx
        push 1cch
        push eax
        mov dword ptr [ebp - 3a4h], ebx
        ; Exact mapped bytes E8 C4 74 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 02: jmp 0x5885f57e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov dword ptr [ebp - 0b28h], ebx
        mov dword ptr [ebp - 3a4h], ebx
        push ebx
        ; Exact mapped bytes EB 0F: jmp 0x5885f59c
        __asm _emit 0xeb
        __asm _emit 0x0f
        xor eax, eax
        push eax
        mov dword ptr [ebp - 3a4h], eax
        mov dword ptr [ebp - 0b28h], eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 87 74 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ebx, dword ptr [ebp - 3a4h]
        mov ecx, dword ptr [ebp - 920h]
        test ecx, ecx
        ; Exact mapped bytes 74 70: je 0x5885f637
        __asm _emit 0x74
        __asm _emit 0x70
        xor edx, edx
        test ebx, ebx
        ; Exact mapped bytes 74 1E: je 0x5885f5eb
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, ecx
        xor ecx, ecx
        add dword ptr [ebp + edx*4 - 3a0h], eax
        mov ebx, dword ptr [ebp - 3a4h]
        adc ecx, ecx
        inc edx
        mov eax, ecx
        cmp edx, ebx
        ; Exact mapped bytes 75 E6: jne 0x5885f5cd
        __asm _emit 0x75
        __asm _emit 0xe6
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x5885f637
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp ebx, 73h
        ; Exact mapped bytes 73 16: jae 0x5885f606
        __asm _emit 0x73
        __asm _emit 0x16
        mov dword ptr [ebp + ebx*4 - 3a0h], ecx
        mov ebx, dword ptr [ebp - 3a4h]
        inc ebx
        mov dword ptr [ebp - 3a4h], ebx
        ; Exact mapped bytes EB 31: jmp 0x5885f637
        __asm _emit 0xeb
        __asm _emit 0x31
        and dword ptr [ebp - 0b28h], 0
        lea eax, [ebp - 0b24h]
        and dword ptr [ebp - 3a4h], 0
        push 0
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 0D 74 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 3a4h]
        add esp, 10h
        mov eax, dword ptr [ebp - 948h]
        mov ecx, dword ptr [ebp - 950h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7D 02: jge 0x5885f64a
        __asm _emit 0x7d
        __asm _emit 0x02
        sub eax, dword ptr [ecx]
        push 0ah
        xor edx, edx
        mov dword ptr [ebp - 948h], eax
        pop edi
        div edi
        and dword ptr [ebp - 56ch], 0
        xor ecx, ecx
        inc ecx
        mov dword ptr [ebp - 938h], eax
        mov dword ptr [ebp - 570h], ecx
        mov esi, ecx
        mov dword ptr [ebp - 91ch], esi
        mov dword ptr [ebp - 574h], esi
        test eax, eax
        ; Exact mapped bytes 0F 84 97 03 00 00: je 0x5885fa1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, ecx
        push 26h
        pop edx
        cmp eax, edx
        mov ecx, eax
        cmova ecx, edx
        mov dword ptr [ebp - 930h], ecx
        movzx esi, byte ptr [ecx*4 + 588c3c2fh]
        movzx ecx, byte ptr [ecx*4 + 588c3c2eh]
        mov edi, ecx
        shl edi, 2
        push edi
        lea eax, [ecx + esi]
        mov dword ptr [ebp - 914h], eax
        lea eax, [ebp - 910h]
        push 0
        push eax
        ; Exact mapped bytes E8 4E D7 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        shl eax, 2
        push eax
        mov eax, dword ptr [ebp - 930h]
        movzx eax, word ptr [eax*4 + 588c3c2ch]
        lea eax, [eax*4 + 588c3328h]
        push eax
        lea eax, [ebp - 910h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 A4 D1 FE FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 914h]
        xor eax, eax
        inc eax
        add esp, 18h
        cmp ecx, eax
        ; Exact mapped bytes 0F 87 C3 00 00 00: ja 0x5885f7c3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 910h]
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x5885f724
        __asm _emit 0x75
        __asm _emit 0x1a
        xor eax, eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 574h], eax
        push eax
        lea eax, [ebp - 0b24h]
        ; Exact mapped bytes E9 A1 02 00 00: jmp 0x5885f9c5
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        inc ecx
        cmp edi, ecx
        ; Exact mapped bytes 0F 84 BA 02 00 00: je 0x5885f9e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 B2 02 00 00: je 0x5885f9e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor ecx, ecx
        mov eax, edi
        mul dword ptr [ebp + ecx*4 - 570h]
        add eax, esi
        mov dword ptr [ebp + ecx*4 - 570h], eax
        adc edx, 0
        inc ecx
        mov esi, edx
        cmp ecx, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885f73b
        __asm _emit 0x75
        __asm _emit 0xe4
        test esi, esi
        ; Exact mapped bytes 0F 84 7B 02 00 00: je 0x5885f9da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 574h]
        cmp eax, 73h
        ; Exact mapped bytes 73 19: jae 0x5885f783
        __asm _emit 0x73
        __asm _emit 0x19
        mov dword ptr [ebp + eax*4 - 570h], esi
        mov ebx, dword ptr [ebp - 574h]
        inc ebx
        mov dword ptr [ebp - 574h], ebx
        ; Exact mapped bytes E9 5D 02 00 00: jmp 0x5885f9e0
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        lea eax, [ebp - 0b24h]
        push ebx
        push eax
        lea eax, [ebp - 570h]
        mov dword ptr [ebp - 0b28h], ebx
        push 1cch
        push eax
        mov dword ptr [ebp - 574h], ebx
        ; Exact mapped bytes E8 91 72 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, bl
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 574h]
        add esp, 10h
        mov dword ptr [ebp - 91ch], ebx
        inc ecx
        ; Exact mapped bytes E9 28 02 00 00: jmp 0x5885f9eb
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 0F 87 92 00 00 00: ja 0x5885f85d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 570h]
        mov eax, ecx
        shl eax, 2
        mov ebx, 1cch
        push eax
        lea eax, [ebp - 910h]
        mov dword ptr [ebp - 574h], ecx
        push eax
        lea eax, [ebp - 570h]
        push ebx
        push eax
        ; Exact mapped bytes E8 45 72 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test edi, edi
        ; Exact mapped bytes 75 1C: jne 0x5885f819
        __asm _emit 0x75
        __asm _emit 0x1c
        xor eax, eax
        push eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 574h], eax
        lea eax, [ebp - 0b24h]
        push eax
        push ebx
        ; Exact mapped bytes E9 B2 01 00 00: jmp 0x5885f9cb
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 574h]
        xor ecx, ecx
        inc ecx
        mov dword ptr [ebp - 91ch], ebx
        cmp edi, ecx
        ; Exact mapped bytes 0F 84 B9 01 00 00: je 0x5885f9e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 B1 01 00 00: je 0x5885f9e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        xor ecx, ecx
        mov eax, edi
        mul dword ptr [ebp + ecx*4 - 570h]
        add eax, esi
        mov dword ptr [ebp + ecx*4 - 570h], eax
        adc edx, 0
        inc ecx
        mov esi, edx
        cmp ecx, ebx
        ; Exact mapped bytes 75 E4: jne 0x5885f83c
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E9 FA FE FF FF: jmp 0x5885f757
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, ebx
        lea edx, [ebp - 570h]
        lea esi, [ebp - 910h]
        cmovae esi, edx
        lea edi, [ebp - 910h]
        cmovae edx, edi
        mov dword ptr [ebp - 940h], esi
        setb al
        mov dword ptr [ebp - 928h], edx
        mov edx, ebx
        cmovb edx, ecx
        test al, al
        mov dword ptr [ebp - 94ch], edx
        cmovne ecx, ebx
        xor eax, eax
        xor edi, edi
        mov dword ptr [ebp - 944h], ecx
        mov dword ptr [ebp - 744h], eax
        test edx, edx
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x5885f9b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + edi*4], 0
        ; Exact mapped bytes 75 1E: jne 0x5885f8d2
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp edi, eax
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x5885f9ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp + edi*4 - 740h], 0
        lea eax, [edi + 1]
        mov dword ptr [ebp - 744h], eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x5885f9ac
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov esi, edi
        and dword ptr [ebp - 920h], edx
        mov dword ptr [ebp - 934h], edx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5885f997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 73h
        ; Exact mapped bytes 74 65: je 0x5885f954
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 920h]
        mov ebx, esi
        shl ebx, 2
        cmp esi, eax
        ; Exact mapped bytes 75 13: jne 0x5885f911
        __asm _emit 0x75
        __asm _emit 0x13
        and dword ptr [ebp + ebx - 740h], 0
        lea eax, [edx + 1]
        add eax, edi
        mov dword ptr [ebp - 744h], eax
        mov eax, dword ptr [ebp - 928h]
        mov eax, dword ptr [eax + edx*4]
        mov edx, dword ptr [ebp - 940h]
        mul dword ptr [edx + edi*4]
        add eax, dword ptr [ebp - 934h]
        adc edx, 0
        add dword ptr [ebp + ebx - 740h], eax
        mov ebx, dword ptr [ebp - 920h]
        mov eax, dword ptr [ebp - 744h]
        adc edx, 0
        inc ebx
        mov dword ptr [ebp - 934h], edx
        inc esi
        mov dword ptr [ebp - 920h], ebx
        cmp ebx, ecx
        ; Exact mapped bytes 75 96: jne 0x5885f8ea
        __asm _emit 0x75
        __asm _emit 0x96
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x5885f997
        __asm _emit 0x74
        __asm _emit 0x3f
        lea ebx, [ebp - 740h]
        lea ebx, [ebx + esi*4]
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 1C 01 00 00: je 0x5885fa86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1]
        cmp esi, eax
        mov esi, ecx
        ; Exact mapped bytes 75 09: jne 0x5885f97c
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [ebx], 0
        mov dword ptr [ebp - 744h], ecx
        mov ecx, ebx
        mov eax, edx
        add ebx, 4
        xor edx, edx
        add dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 744h]
        adc edx, edx
        ; Exact mapped bytes 75 D0: jne 0x5885f961
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 944h]
        cmp esi, 73h
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x5885fa86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 94ch]
        mov esi, dword ptr [ebp - 940h]
        inc edi
        cmp edi, edx
        ; Exact mapped bytes 0F 85 F9 FE FF FF: jne 0x5885f8ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 574h], eax
        shl eax, 2
        push eax
        lea eax, [ebp - 740h]
        push eax
        push 1cch
        lea eax, [ebp - 570h]
        push eax
        ; Exact mapped bytes E8 64 70 FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ebx, dword ptr [ebp - 574h]
        xor ecx, ecx
        mov dword ptr [ebp - 91ch], ebx
        inc ecx
        mov al, cl
        test al, al
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x5885fab2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 938h]
        sub eax, dword ptr [ebp - 930h]
        mov dword ptr [ebp - 938h], eax
        ; Exact mapped bytes 0F 85 7A FC FF FF: jne 0x5885f685
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 3a4h]
        mov esi, dword ptr [ebp - 91ch]
        push 0ah
        pop edi
        mov eax, dword ptr [ebp - 948h]
        xor edx, edx
        div edi
        test edx, edx
        ; Exact mapped bytes 74 4F: je 0x5885fa77
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [edx*4 + 588c3cc4h]
        mov dword ptr [ebp - 928h], eax
        test eax, eax
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x5885fac3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 0b28h], eax
        and dword ptr [ebp - 574h], eax
        push eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 570h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 D9 6F FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 3a4h]
        add esp, 10h
        mov esi, dword ptr [ebp - 574h]
        mov dword ptr [ebp - 91ch], esi
        test ebx, ebx
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x5885fb67
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x5885fb87
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        lea eax, [ebp - 0cf4h]
        push ebx
        push eax
        lea eax, [ebp - 570h]
        mov dword ptr [ebp - 0cf8h], ebx
        push 1cch
        push eax
        mov dword ptr [ebp - 574h], ebx
        ; Exact mapped bytes E8 8E 6F FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 02: jmp 0x5885fab4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov dword ptr [ebp - 0b28h], ebx
        mov dword ptr [ebp - 574h], ebx
        push ebx
        ; Exact mapped bytes EB 67: jmp 0x5885fb2a
        __asm _emit 0xeb
        __asm _emit 0x67
        cmp eax, ecx
        ; Exact mapped bytes 74 B0: je 0x5885fa77
        __asm _emit 0x74
        __asm _emit 0xb0
        test esi, esi
        ; Exact mapped bytes 74 AC: je 0x5885fa77
        __asm _emit 0x74
        __asm _emit 0xac
        xor edi, edi
        xor ecx, ecx
        mul dword ptr [ebp + ecx*4 - 570h]
        add eax, edi
        mov dword ptr [ebp + ecx*4 - 570h], eax
        mov eax, dword ptr [ebp - 928h]
        adc edx, 0
        inc ecx
        mov edi, edx
        cmp ecx, esi
        ; Exact mapped bytes 75 E0: jne 0x5885facf
        __asm _emit 0x75
        __asm _emit 0xe0
        test edi, edi
        ; Exact mapped bytes 0F 84 74 FF FF FF: je 0x5885fa6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 574h]
        cmp eax, 73h
        ; Exact mapped bytes 73 19: jae 0x5885fb1b
        __asm _emit 0x73
        __asm _emit 0x19
        mov dword ptr [ebp + eax*4 - 570h], edi
        mov esi, dword ptr [ebp - 574h]
        inc esi
        mov dword ptr [ebp - 574h], esi
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x5885fa71
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 574h], eax
        push eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 570h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 F9 6E FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 950h]
        add esp, 10h
        push dword ptr [ebp - 958h]
        movzx eax, byte ptr [eax + 308h]
        push eax
        ; Exact mapped bytes E8 DD E7 FF FF: call 0x5885e33b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 2
        ; Exact mapped bytes E9 4F F4 FF FF: jmp 0x5885efb6
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + ebx*4 - 3a4h]
        and dword ptr [ebp - 928h], 0
        bsr eax, eax
        ; Exact mapped bytes 74 03: je 0x5885fb7d
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x5885fb7f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edx, [ebx - 1]
        shl edx, 5
        add edx, eax
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x5885fb8f
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 20: jmp 0x5885fbaf
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + esi*4 - 574h]
        and dword ptr [ebp - 928h], 0
        bsr eax, eax
        ; Exact mapped bytes 74 03: je 0x5885fba5
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x5885fba7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [esi - 1]
        shl ecx, 5
        add ecx, eax
        mov eax, ecx
        sub eax, edx
        cmp edx, ecx
        sbb edi, edi
        and edi, eax
        mov dword ptr [ebp - 92ch], edi
        ; Exact mapped bytes 0F 86 8D 01 00 00: jbe 0x5885fd52
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 92ch]
        xor edx, edx
        and eax, 1fh
        shr edi, 5
        push 20h
        pop ecx
        sub ecx, eax
        mov dword ptr [ebp - 940h], eax
        bts edx, ecx
        mov dword ptr [ebp - 94ch], ecx
        xor eax, eax
        mov dword ptr [ebp - 920h], edi
        cmp ecx, 20h
        cmovae eax, edx
        xor edx, eax
        mov eax, dword ptr [ebp + ebx*4 - 3a4h]
        dec edx
        mov dword ptr [ebp - 928h], edx
        not edx
        mov dword ptr [ebp - 944h], edx
        xor edx, edx
        bsr ecx, eax
        mov dword ptr [ebp - 934h], edx
        ; Exact mapped bytes 74 03: je 0x5885fc1d
        __asm _emit 0x74
        __asm _emit 0x03
        inc ecx
        ; Exact mapped bytes EB 02: jmp 0x5885fc1f
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, edx
        lea eax, [edi + ebx]
        cmp eax, 73h
        ; Exact mapped bytes 76 39: jbe 0x5885fc60
        __asm _emit 0x76
        __asm _emit 0x39
        mov dword ptr [ebp - 0b28h], edx
        mov dword ptr [ebp - 3a4h], edx
        push edx
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 EF 6D FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 3a4h]
        add esp, 10h
        mov esi, dword ptr [ebp - 574h]
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x5885fd4c
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        pop eax
        sub eax, ecx
        cmp eax, dword ptr [ebp - 940h]
        sbb edx, edx
        neg edx
        add edx, edi
        add edx, ebx
        mov dword ptr [ebp - 924h], edx
        cmp edx, 73h
        ; Exact mapped bytes 76 11: jbe 0x5885fc8f
        __asm _emit 0x76
        __asm _emit 0x11
        xor eax, eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 3a4h], eax
        push eax
        ; Exact mapped bytes EB A5: jmp 0x5885fc34
        __asm _emit 0xeb
        __asm _emit 0xa5
        lea eax, [edi - 1]
        lea ecx, [edx - 1]
        mov dword ptr [ebp - 938h], eax
        mov dword ptr [ebp - 930h], ecx
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5885fd34
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        lea esi, [ebp - 3a4h]
        sub edx, edi
        mov edi, dword ptr [ebp - 928h]
        lea esi, [esi + edx*4]
        cmp edx, ebx
        ; Exact mapped bytes 73 05: jae 0x5885fcc5
        __asm _emit 0x73
        __asm _emit 0x05
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes EB 02: jmp 0x5885fcc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp - 934h], eax
        lea eax, [edx - 1]
        cmp eax, ebx
        ; Exact mapped bytes 73 04: jae 0x5885fcd8
        __asm _emit 0x73
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5885fcda
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        and eax, dword ptr [ebp - 944h]
        sub esi, 4
        mov ecx, dword ptr [ebp - 94ch]
        mov ebx, dword ptr [ebp - 934h]
        shr eax, cl
        and ebx, edi
        mov ecx, dword ptr [ebp - 940h]
        shl ebx, cl
        mov ecx, dword ptr [ebp - 930h]
        or eax, ebx
        mov dword ptr [ebp + ecx*4 - 3a0h], eax
        dec ecx
        dec edx
        mov dword ptr [ebp - 930h], ecx
        cmp ecx, dword ptr [ebp - 938h]
        ; Exact mapped bytes 74 08: je 0x5885fd22
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes EB 9A: jmp 0x5885fcbc
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov esi, dword ptr [ebp - 91ch]
        mov edx, dword ptr [ebp - 924h]
        mov edi, dword ptr [ebp - 920h]
        test edi, edi
        ; Exact mapped bytes 74 0C: je 0x5885fd44
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, edi
        xor eax, eax
        lea edi, [ebp - 3a0h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ebx, edx
        mov dword ptr [ebp - 3a4h], ebx
        mov edi, dword ptr [ebp - 92ch]
        mov eax, dword ptr [ebp - 954h]
        mov ecx, dword ptr [ebp - 93ch]
        sub eax, ecx
        mov dword ptr [ebp - 954h], eax
        mov edx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x5885fd7c
        __asm _emit 0x74
        __asm _emit 0x10
        cmp edi, eax
        ; Exact mapped bytes 76 08: jbe 0x5885fd78
        __asm _emit 0x76
        __asm _emit 0x08
        xor eax, eax
        inc eax
        ; Exact mapped bytes E9 C3 02 00 00: jmp 0x5886003b
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        sub edx, edi
        cmp ebx, esi
        ; Exact mapped bytes 77 24: ja 0x5885fda4
        __asm _emit 0x77
        __asm _emit 0x24
        ; Exact mapped bytes 73 07: jae 0x5885fd89
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        lea ecx, [eax + 1]
        ; Exact mapped bytes EB 1D: jmp 0x5885fda6
        __asm _emit 0xeb
        __asm _emit 0x1d
        lea ecx, [ebx - 1]
        ; Exact mapped bytes EB 11: jmp 0x5885fd9f
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp + ecx*4 - 3a0h]
        cmp dword ptr [ebp + ecx*4 - 570h], eax
        ; Exact mapped bytes 75 6D: jne 0x5885fe0b
        __asm _emit 0x75
        __asm _emit 0x6d
        dec ecx
        cmp ecx, -1
        ; Exact mapped bytes 75 EA: jne 0x5885fd8e
        __asm _emit 0x75
        __asm _emit 0xea
        xor cl, cl
        lea eax, [edi + 1]
        test cl, cl
        mov esi, edx
        cmovne edi, eax
        shr esi, 5
        and edx, 1fh
        mov dword ptr [ebp - 92ch], edi
        push 20h
        pop eax
        sub eax, edx
        mov dword ptr [ebp - 920h], esi
        mov ecx, eax
        mov dword ptr [ebp - 94ch], eax
        xor edi, edi
        mov dword ptr [ebp - 930h], edx
        xor eax, eax
        bts edi, ecx
        cmp ecx, 20h
        cmovae eax, edi
        and dword ptr [ebp - 934h], 0
        xor edi, eax
        dec edi
        mov eax, edi
        mov dword ptr [ebp - 928h], edi
        not eax
        mov dword ptr [ebp - 944h], eax
        mov eax, dword ptr [ebp + ebx*4 - 3a4h]
        bsr ecx, eax
        ; Exact mapped bytes 74 09: je 0x5885fe11
        __asm _emit 0x74
        __asm _emit 0x09
        inc ecx
        ; Exact mapped bytes EB 08: jmp 0x5885fe13
        __asm _emit 0xeb
        __asm _emit 0x08
        sbb cl, cl
        inc cl
        ; Exact mapped bytes EB 95: jmp 0x5885fda6
        __asm _emit 0xeb
        __asm _emit 0x95
        xor ecx, ecx
        lea eax, [esi + ebx]
        cmp eax, 73h
        ; Exact mapped bytes 76 2F: jbe 0x5885fe4a
        __asm _emit 0x76
        __asm _emit 0x2f
        xor eax, eax
        push eax
        mov dword ptr [ebp - 0b28h], eax
        mov dword ptr [ebp - 3a4h], eax
        lea eax, [ebp - 0b24h]
        push eax
        lea eax, [ebp - 3a0h]
        push 1cch
        push eax
        ; Exact mapped bytes E8 F9 6B FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x5885ff19
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        pop eax
        sub eax, ecx
        cmp eax, edx
        sbb edx, edx
        neg edx
        add edx, esi
        add edx, ebx
        mov dword ptr [ebp - 924h], edx
        cmp edx, 73h
        ; Exact mapped bytes 77 B7: ja 0x5885fe1b
        __asm _emit 0x77
        __asm _emit 0xb7
        lea eax, [esi - 1]
        lea ecx, [edx - 1]
        mov dword ptr [ebp - 938h], eax
        mov dword ptr [ebp - 940h], ecx
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x5885ff03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        lea edx, [ebp - 3a4h]
        sub edi, esi
        mov esi, dword ptr [ebp - 928h]
        lea edx, [edx + edi*4]
        cmp edi, ebx
        ; Exact mapped bytes 73 05: jae 0x5885fe9a
        __asm _emit 0x73
        __asm _emit 0x05
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes EB 02: jmp 0x5885fe9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp - 934h], eax
        lea eax, [edi - 1]
        cmp eax, ebx
        ; Exact mapped bytes 73 04: jae 0x5885fead
        __asm _emit 0x73
        __asm _emit 0x04
        mov eax, dword ptr [edx]
        ; Exact mapped bytes EB 02: jmp 0x5885feaf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        and eax, dword ptr [ebp - 944h]
        sub edx, 4
        mov ecx, dword ptr [ebp - 94ch]
        mov ebx, dword ptr [ebp - 934h]
        shr eax, cl
        and ebx, esi
        mov ecx, dword ptr [ebp - 930h]
        shl ebx, cl
        mov ecx, dword ptr [ebp - 940h]
        or eax, ebx
        mov dword ptr [ebp + ecx*4 - 3a0h], eax
        dec ecx
        dec edi
        mov dword ptr [ebp - 940h], ecx
        cmp ecx, dword ptr [ebp - 938h]
        ; Exact mapped bytes 74 08: je 0x5885fef7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes EB 9A: jmp 0x5885fe91
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov edx, dword ptr [ebp - 924h]
        mov esi, dword ptr [ebp - 920h]
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x5885ff13
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, esi
        lea edi, [ebp - 3a0h]
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [ebp - 3a4h], edx
        lea eax, [ebp - 574h]
        push eax
        lea eax, [ebp - 3a4h]
        push eax
        ; Exact mapped bytes E8 14 02 00 00: call 0x58860140
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3a4h], 0
        mov edi, eax
        mov ebx, edx
        sete al
        mov byte ptr [ebp - 924h], al
        pop ecx
        pop ecx
        test ebx, ebx
        ; Exact mapped bytes 75 11: jne 0x5885ff57
        __asm _emit 0x75
        __asm _emit 0x11
        cmp edi, -1
        ; Exact mapped bytes 77 0C: ja 0x5885ff57
        __asm _emit 0x77
        __asm _emit 0x0c
        bsr esi, edi
        ; Exact mapped bytes 74 03: je 0x5885ff53
        __asm _emit 0x74
        __asm _emit 0x03
        inc esi
        ; Exact mapped bytes EB 11: jmp 0x5885ff64
        __asm _emit 0xeb
        __asm _emit 0x11
        xor esi, esi
        ; Exact mapped bytes EB 0D: jmp 0x5885ff64
        __asm _emit 0xeb
        __asm _emit 0x0d
        bsr esi, ebx
        ; Exact mapped bytes 74 03: je 0x5885ff5f
        __asm _emit 0x74
        __asm _emit 0x03
        inc esi
        ; Exact mapped bytes EB 02: jmp 0x5885ff61
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        add esi, 20h
        mov ecx, dword ptr [ebp - 954h]
        cmp esi, ecx
        ; Exact mapped bytes 76 4C: jbe 0x5885ffba
        __asm _emit 0x76
        __asm _emit 0x4c
        sub esi, ecx
        test al, al
        ; Exact mapped bytes 74 30: je 0x5885ffa4
        __asm _emit 0x74
        __asm _emit 0x30
        xor edx, edx
        xor ecx, ecx
        mov eax, esi
        bts edx, eax
        cmp eax, 20h
        cmovae ecx, edx
        xor edx, ecx
        cmp eax, 40h
        cmovae ecx, edx
        add edx, -1
        adc ecx, -1
        and edx, edi
        and ecx, ebx
        or edx, ecx
        ; Exact mapped bytes 75 0B: jne 0x5885ffa4
        __asm _emit 0x75
        __asm _emit 0x0b
        xor eax, eax
        inc eax
        mov byte ptr [ebp - 924h], al
        ; Exact mapped bytes EB 07: jmp 0x5885ffab
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [ebp - 924h], 0
        mov eax, edi
        mov edx, ebx
        mov ecx, esi
        ; Exact mapped bytes E8 9A D2 01 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov ebx, edx
        push dword ptr [ebp - 958h]
        mov eax, dword ptr [ebp - 950h]
        xor ecx, ecx
        cmp ecx, dword ptr [ebp - 918h]
        push dword ptr [ebp - 924h]
        mov ecx, dword ptr [ebp - 92ch]
        sbb esi, esi
        movzx eax, byte ptr [eax + 308h]
        xor edx, edx
        and esi, dword ptr [ebp - 1d0h]
        inc edx
        cmp edx, dword ptr [ebp - 918h]
        not ecx
        push eax
        mov eax, dword ptr [ebp - 93ch]
        sbb edx, edx
        and edx, dword ptr [ebp - 1cch]
        add eax, -2
        cmp dword ptr [ebp - 93ch], 0
        cmova ecx, eax
        xor eax, eax
        add eax, esi
        push ecx
        mov ecx, dword ptr [ebp - 954h]
        adc edx, 0
        ; Exact mapped bytes E8 9D D0 01 00: call 0x5887d0c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        add eax, edi
        adc edx, ebx
        push edx
        push eax
        ; Exact mapped bytes E8 D7 DD FF FF: call 0x5885de05
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes EB 2D: jmp 0x58860060
        __asm _emit 0xeb
        __asm _emit 0x2d
        test eax, eax
        setne al
        movzx eax, al
        push dword ptr [ebp - 958h]
        push eax
        mov eax, dword ptr [ebp - 950h]
        movzx eax, byte ptr [eax + 308h]
        push eax
        push ecx
        lea eax, [ebp - 1d4h]
        push eax
        ; Exact mapped bytes E8 41 E1 FF FF: call 0x5885e19e
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 E3 0F FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
