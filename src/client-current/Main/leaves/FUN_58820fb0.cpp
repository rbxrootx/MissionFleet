// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58820FB0 .. +0x33B bytes.
extern "C" __declspec(naked) void FUN_58820fb0() {
    __asm {
        sub esp, 40h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 3ch], eax
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 4ch]
        mov ebx, ecx
        ; Exact mapped bytes 66 8B 43 24: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x24
        push esi
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 FF 02 00 00: je 0x588212d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 3ch]
        xor edi, edi
        cmp eax, edi
        ; Exact mapped bytes 74 34: je 0x58821011
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [eax + 34h]
        cmp eax, edi
        ; Exact mapped bytes 74 16: je 0x58820ffa
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebx + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 1B: je 0x58821011
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, edi
        ; Exact mapped bytes 75 EA: jne 0x58820fe4
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 3ch]
        xor ecx, esp
        ; Exact mapped bytes E8 CF BB 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 40h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 C8 84 A2 58: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 0c70h]
        add esi, 4
        push esi
        ; Exact mapped bytes E8 1A 05 F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        mov eax, dword ptr [ebp + 4]
        ; Exact mapped bytes 74 44: je 0x58821071
        __asm _emit 0x74
        __asm _emit 0x44
        cmp eax, 201h
        ; Exact mapped bytes 75 53: jne 0x58821087
        __asm _emit 0x75
        __asm _emit 0x53
        cmp dword ptr [ebx + 0c9ch], edi
        ; Exact mapped bytes 75 1E: jne 0x5882105a
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 84 45 A2 58: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push edi
        push 64h
        push ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebx + 0c9ch], 1
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 3ch]
        xor ecx, esp
        ; Exact mapped bytes E8 6F BB 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 40h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 201h
        ; Exact mapped bytes 0F 84 36 02 00 00: je 0x588212b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 204h
        ; Exact mapped bytes 0F 84 2B 02 00 00: je 0x588212b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 0c9ch], edi
        ; Exact mapped bytes 0F 84 40 02 00 00: je 0x588212d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 102h
        ; Exact mapped bytes 0F 85 4E 01 00 00: jne 0x588211ec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0dh
        ; Exact mapped bytes 0F 85 52 FF FF FF: jne 0x58820ffa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 0c74h]
        mov eax, dword ptr [eax + 80h]
        ; Exact mapped bytes 8B 35 A8 C1 98 58: mov esi, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 0F 8E 35 FF FF FF: jle 0x58820ffa
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0c74h]
        mov eax, dword ptr [ecx + 80h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov esi, eax
        add esi, 31h
        push esi
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E8 4B 04 15 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x15
        __asm _emit 0x00
        push 30h
        lea edx, [esp + 24h]
        push edi
        push edx
        mov ebp, eax
        ; Exact mapped bytes E8 56 BB 15 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x00
        push esi
        push edi
        push ebp
        ; Exact mapped bytes E8 4E BB 15 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 1ch
        push 58a0b450h
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebx + 0c78h]
        ; Exact mapped bytes E8 71 68 0E 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0c78h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor ecx, ecx
        ; Exact mapped bytes 66 3B 8B 98 0C 00 00: cmp cx, word ptr [ebx + 0xc98]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 8D 9C 00 00 00: jge 0x588211dc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebx + 64h]
        mov dword ptr [esp + 10h], edx
        mov eax, dword ptr [esp + 10h]
        push eax
        lea ecx, [esp + 38h]
        push ecx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, 0ch
        lea esi, [esp + 1ch]
        mov edi, ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebx + 0c74h]
        mov esi, dword ptr [edx + 80h]
        push esi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea eax, [ebp + 30h]
        push esi
        push eax
        ; Exact mapped bytes E8 CA BB 15 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 0ch
        push 1
        push eax
        push ebp
        push 0
        push 1
        ; Exact mapped bytes E8 74 6F F9 FF: call 0x587b8110
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6f
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x588211bf
        __asm _emit 0x75
        __asm _emit 0x1f
        push 6464ffh
        push 5899c598h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 91 C0 06 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BF 8B 98 0C 00 00: movsx ecx, word ptr [ebx + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esp + 10h], 18h
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C 6B FF FF FF: jl 0x58821147
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0c74h]
        ; Exact mapped bytes E8 59 E7 F3 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe7
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes E9 0E FE FF FF: jmp 0x58820ffa
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 20ah
        ; Exact mapped bytes 0F 85 03 FE FF FF: jne 0x58820ffa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp + 0ah]
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 7E 56: jle 0x58821256
        __asm _emit 0x7e
        __asm _emit 0x56
        mov edi, dword ptr [ebx + 0c7ch]
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 32 03 F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58821226
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebx + 0c80h]
        push esi
        ; Exact mapped bytes E8 22 03 F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D4 FD FF FF: je 0x58820ffa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 23 74 0E 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0c80h]
        ; Exact mapped bytes E8 18 74 0E 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 61 F4 FF FF: call 0x588206a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 3ch]
        xor ecx, esp
        ; Exact mapped bytes E8 8A B9 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb9
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 40h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 9E FD FF FF: jge 0x58820ffa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebx + 0c7ch]
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D6 02 F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58821282
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebx + 0c80h]
        push esi
        ; Exact mapped bytes E8 C6 02 F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 78 FD FF FF: je 0x58820ffa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 67 74 0E 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0c80h]
        ; Exact mapped bytes E8 5C 74 0E 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 05 F4 FF FF: call 0x588206a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 3ch]
        xor ecx, esp
        ; Exact mapped bytes E8 2E B9 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb9
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 40h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebx + 0c9ch], edi
        ; Exact mapped bytes 74 19: je 0x588212d3
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push edi
        push 64h
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebx + 0c9ch], edi
        mov eax, dword ptr [ebx + 34h]
        mov ecx, dword ptr [esp + 4ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 F5 B8 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 40h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
