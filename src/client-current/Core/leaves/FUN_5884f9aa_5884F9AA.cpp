// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F9AA .. +0x3A2 bytes.
extern "C" __declspec(naked) void FUN_5884f9aa_5884F9AA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 18h]
        xor eax, eax
        push edi
        push dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], eax
        push dword ptr [ebp + 0ch]
        mov byte ptr [ebp - 18h], al
        ; Exact mapped bytes E8 96 11 00 00: call 0x58850b60
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        add esp, 0ch
        mov dword ptr [ebp - 8], ecx
        cmp ecx, -1
        ; Exact mapped bytes 0F 8C 6C 03 00 00: jl 0x5884fd47
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [edi + 4]
        ; Exact mapped bytes 0F 8D 63 03 00 00: jge 0x5884fd47
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        cmp dword ptr [ebx], 0e06d7363h
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x5884faea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 10h], 3
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x5884faea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 14h], 19930520h
        ; Exact mapped bytes 74 16: je 0x5884fa1c
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebx + 14h], 19930521h
        ; Exact mapped bytes 74 0D: je 0x5884fa1c
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebx + 14h], 19930522h
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x5884faea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        cmp dword ptr [ebx + 1ch], esi
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x5884faea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA FB FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 10h], esi
        ; Exact mapped bytes 0F 84 A8 02 00 00: je 0x5884fcdd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EC FB FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 E4 FB FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 18h], 1
        mov eax, dword ptr [eax + 14h]
        mov dword ptr [ebp - 4], eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 F3 02 00 00: je 0x5884fd47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx], 0e06d7363h
        ; Exact mapped bytes 75 2A: jne 0x5884fa86
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [ebx + 10h], 3
        ; Exact mapped bytes 75 24: jne 0x5884fa86
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ebx + 14h], 19930520h
        ; Exact mapped bytes 74 12: je 0x5884fa7d
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebx + 14h], 19930521h
        ; Exact mapped bytes 74 09: je 0x5884fa7d
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebx + 14h], 19930522h
        ; Exact mapped bytes 75 09: jne 0x5884fa86
        __asm _emit 0x75
        __asm _emit 0x09
        cmp dword ptr [ebx + 1ch], esi
        ; Exact mapped bytes 0F 84 C1 02 00 00: je 0x5884fd47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B FB FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 1ch], esi
        ; Exact mapped bytes 74 62: je 0x5884faf2
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes E8 91 FB FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 86 FB FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 0ch]
        push ebx
        mov dword ptr [eax + 1ch], esi
        ; Exact mapped bytes E8 29 09 00 00: call 0x588503d5
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 75 40: jne 0x5884faf2
        __asm _emit 0x75
        __asm _emit 0x40
        mov edi, dword ptr [ebp - 0ch]
        cmp dword ptr [edi], esi
        ; Exact mapped bytes 0F 8E 25 02 00 00: jle 0x5884fce2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        push 58907f4ch
        mov ecx, dword ptr [esi + eax + 4]
        ; Exact mapped bytes E8 87 05 00 00: call 0x58850055
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 85 11 02 00 00: jne 0x5884fce7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add esi, 10h
        inc eax
        mov dword ptr [ebp - 10h], eax
        cmp eax, dword ptr [edi]
        ; Exact mapped bytes 0F 8D FA 01 00 00: jge 0x5884fce2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D3: jmp 0x5884fabd
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 06: jmp 0x5884faf8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        xor eax, eax
        mov dword ptr [ebp - 30h], edi
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebx], 0e06d7363h
        ; Exact mapped bytes 0F 85 A0 01 00 00: jne 0x5884fcac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 10h], 3
        ; Exact mapped bytes 0F 85 96 01 00 00: jne 0x5884fcac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 14h], 19930520h
        ; Exact mapped bytes 74 16: je 0x5884fb35
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebx + 14h], 19930521h
        ; Exact mapped bytes 74 0D: je 0x5884fb35
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebx + 14h], 19930522h
        ; Exact mapped bytes 0F 85 77 01 00 00: jne 0x5884fcac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 0ch], eax
        ; Exact mapped bytes 0F 86 0E 01 00 00: jbe 0x5884fc4c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 20h]
        lea eax, [ebp - 30h]
        push edi
        push dword ptr [ebp + 14h]
        push ecx
        push eax
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 17 D4 FF FF: call 0x5884cf6a
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        add esp, 18h
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 0ch], edx
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 83 E1 00 00 00: jae 0x5884fc4c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, edx, 14h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [eax]
        lea edi, [ebp - 64h]
        push 5
        mov esi, dword ptr [eax + 10h]
        mov eax, dword ptr [ebp - 8]
        add esi, ecx
        pop ecx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 0F 8F A4 00 00 00: jg 0x5884fc30
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes 0F 8F 9B 00 00 00: jg 0x5884fc30
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x5884fc30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 1ch]
        mov eax, dword ptr [edx + 0ch]
        mov esi, dword ptr [eax]
        add eax, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 24h], esi
        mov dword ptr [ebp - 14h], eax
        mov esi, eax
        lea edi, [ebp - 50h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov esi, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp - 20h]
        test esi, esi
        ; Exact mapped bytes 7E 24: jle 0x5884fbf1
        __asm _emit 0x7e
        __asm _emit 0x24
        push edx
        push dword ptr [edi]
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 AA 02 00 00: call 0x5884fe83
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x5884fc02
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebx + 1ch]
        dec esi
        add edi, 4
        test esi, esi
        ; Exact mapped bytes 7F E2: jg 0x5884fbcd
        __asm _emit 0x7f
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        inc ecx
        add eax, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], eax
        cmp ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 75 BA: jne 0x5884fbba
        __asm _emit 0x75
        __asm _emit 0xba
        ; Exact mapped bytes EB 2B: jmp 0x5884fc2d
        __asm _emit 0xeb
        __asm _emit 0x2b
        push dword ptr [ebp + 1ch]
        lea eax, [ebp - 64h]
        push dword ptr [ebp - 18h]
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push eax
        push dword ptr [edi]
        lea eax, [ebp - 50h]
        push eax
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 FF FC FF FF: call 0x5884f929
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 30h
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 1ch]
        inc edx
        mov eax, dword ptr [ebp - 28h]
        add ecx, 14h
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 1ch], ecx
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 82 28 FF FF FF: jb 0x5884fb71
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 18h]
        cmp byte ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 0A: je 0x5884fc5c
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        push ebx
        ; Exact mapped bytes E8 94 F2 FF FF: call 0x5884eeee
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov eax, dword ptr [edi]
        and eax, 1fffffffh
        cmp eax, 19930521h
        ; Exact mapped bytes 72 68: jb 0x5884fcd2
        __asm _emit 0x72
        __asm _emit 0x68
        mov eax, dword ptr [edi + 20h]
        shr eax, 2
        cmp dword ptr [edi + 1ch], 0
        ; Exact mapped bytes 75 0C: jne 0x5884fc82
        __asm _emit 0x75
        __asm _emit 0x0c
        test al, 1
        ; Exact mapped bytes 74 58: je 0x5884fcd2
        __asm _emit 0x74
        __asm _emit 0x58
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 52: jne 0x5884fcd2
        __asm _emit 0x75
        __asm _emit 0x52
        ; Exact mapped bytes EB 04: jmp 0x5884fc86
        __asm _emit 0xeb
        __asm _emit 0x04
        test al, 1
        ; Exact mapped bytes 74 15: je 0x5884fc9b
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E8 9B F9 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax + 10h], ebx
        ; Exact mapped bytes E8 93 F9 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], ecx
        ; Exact mapped bytes EB 47: jmp 0x5884fce2
        __asm _emit 0xeb
        __asm _emit 0x47
        push dword ptr [edi + 1ch]
        push ebx
        ; Exact mapped bytes E8 31 07 00 00: call 0x588503d5
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 5D: je 0x5884fd07
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 26: jmp 0x5884fcd2
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [edi + 0ch], eax
        ; Exact mapped bytes 76 21: jbe 0x5884fcd2
        __asm _emit 0x76
        __asm _emit 0x21
        cmp byte ptr [ebp + 1ch], al
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x5884fd47
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push ecx
        push edi
        push dword ptr [ebp + 14h]
        push edx
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 7E 00 00 00: call 0x5884fd4d
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        ; Exact mapped bytes E8 4F F9 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 6A: jne 0x5884fd47
        __asm _emit 0x75
        __asm _emit 0x6a
        pop edi
        pop esi
        pop ebx
        leave
        ret
        ; Exact mapped bytes E8 40 61 01 00: call 0x58865e27
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        push ebx
        ; Exact mapped bytes E8 FF F1 FF FF: call 0x5884eeee
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 3E 03 00 00: call 0x58850037
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 588ed024h
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 DE D6 FF FF: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 1A F9 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax + 10h], ebx
        ; Exact mapped bytes E8 12 F9 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ebp + 24h], 0
        push ebx
        mov dword ptr [eax + 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmovne eax, dword ptr [ebp + 24h]
        push eax
        ; Exact mapped bytes E8 3C D4 FF FF: call 0x5884d168
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 97 05 00 00: call 0x588502cf
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 54 07 00 00: call 0x58850492
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push eax
        ; Exact mapped bytes E8 FC 04 00 00: call 0x58850243
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C4 29 01 00: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
