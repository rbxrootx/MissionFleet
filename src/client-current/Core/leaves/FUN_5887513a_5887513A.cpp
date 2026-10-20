// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887513A .. +0x205 bytes.
extern "C" __declspec(naked) void FUN_5887513a_5887513A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 FB FF FF: call 0x58874c71
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        mov dword ptr [ebp - 20h], ebx
        pop ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 BF 01 00 00: je 0x58875327
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov ecx, edi
        mov eax, edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [eax + 58907c38h], ebx
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x58875273
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc ecx
        add eax, 30h
        mov dword ptr [ebp - 1ch], ecx
        cmp eax, 0f0h
        ; Exact mapped bytes 72 E6: jb 0x58875171
        __asm _emit 0x72
        __asm _emit 0xe6
        cmp ebx, 0fde8h
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x5887526b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, bx
        push eax
        ; Exact mapped bytes FF 15 88 41 89 58: call dword ptr [0x58894188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x5887526b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0fde9h
        cmp ebx, eax
        ; Exact mapped bytes 75 20: jne 0x588751d2
        __asm _emit 0x75
        __asm _emit 0x20
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 21ch], edi
        mov dword ptr [esi + 18h], edi
        ; Exact mapped bytes 66 89 7E 1C: mov word ptr [esi + 0x1c], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov dword ptr [esi + 8], edi
        xor eax, eax
        lea edi, [esi + 0ch]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x5887531f
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        push ebx
        ; Exact mapped bytes FF 15 AC 43 89 58: call dword ptr [0x588943ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 7E: je 0x5887525f
        __asm _emit 0x74
        __asm _emit 0x7e
        push 101h
        lea eax, [esi + 18h]
        push edi
        push eax
        ; Exact mapped bytes E8 20 7C FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [esi + 4], ebx
        cmp dword ptr [ebp - 18h], 2
        mov dword ptr [esi + 21ch], edi
        ; Exact mapped bytes 75 C0: jne 0x588751c2
        __asm _emit 0x75
        __asm _emit 0xc0
        cmp byte ptr [ebp - 12h], 0
        lea eax, [ebp - 12h]
        ; Exact mapped bytes 74 2A: je 0x58875235
        __asm _emit 0x74
        __asm _emit 0x2a
        mov cl, byte ptr [eax + 1]
        test cl, cl
        ; Exact mapped bytes 74 23: je 0x58875235
        __asm _emit 0x74
        __asm _emit 0x23
        movzx edi, byte ptr [eax]
        movzx ecx, cl
        cmp edi, ecx
        ; Exact mapped bytes 77 11: ja 0x5887522d
        __asm _emit 0x77
        __asm _emit 0x11
        lea edx, [esi + 19h]
        sub ecx, edi
        add edx, edi
        inc ecx
        or byte ptr [edx], 4
        inc edx
        sub ecx, 1
        ; Exact mapped bytes 75 F7: jne 0x58875224
        __asm _emit 0x75
        __asm _emit 0xf7
        add eax, 2
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 D6: jne 0x5887520b
        __asm _emit 0x75
        __asm _emit 0xd6
        lea eax, [esi + 1ah]
        mov ecx, 0feh
        or byte ptr [eax], 8
        inc eax
        sub ecx, 1
        ; Exact mapped bytes 75 F7: jne 0x5887523d
        __asm _emit 0x75
        __asm _emit 0xf7
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 E5 F9 FF FF: call 0x58874c33
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        mov dword ptr [esi + 21ch], eax
        add esp, 4
        inc edi
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x588751c2
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 3D 50 9C 96 58: cmp dword ptr [0x58969c50], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x58875327
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x58875330
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 101h
        lea eax, [esi + 18h]
        push edi
        push eax
        ; Exact mapped bytes E8 8E 7B FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        imul eax, dword ptr [ebp - 1ch], 30h
        mov dword ptr [ebp - 24h], eax
        lea eax, [eax + 58907c48h]
        mov dword ptr [ebp - 1ch], eax
        cmp byte ptr [eax], 0
        mov ecx, eax
        ; Exact mapped bytes 74 3B: je 0x588752d7
        __asm _emit 0x74
        __asm _emit 0x3b
        mov al, byte ptr [ecx + 1]
        test al, al
        ; Exact mapped bytes 74 31: je 0x588752d4
        __asm _emit 0x74
        __asm _emit 0x31
        movzx edx, byte ptr [ecx]
        movzx eax, al
        cmp edx, eax
        ; Exact mapped bytes 77 1F: ja 0x588752cc
        __asm _emit 0x77
        __asm _emit 0x1f
        lea ebx, [esi + 19h]
        add ebx, edx
        cmp edx, 100h
        ; Exact mapped bytes 73 12: jae 0x588752cc
        __asm _emit 0x73
        __asm _emit 0x12
        mov al, byte ptr [edi + 58907c30h]
        or byte ptr [ebx], al
        inc edx
        movzx eax, byte ptr [ecx + 1]
        inc ebx
        cmp edx, eax
        ; Exact mapped bytes 76 E6: jbe 0x588752b2
        __asm _emit 0x76
        __asm _emit 0xe6
        add ecx, 2
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 75 C8: jne 0x5887529c
        __asm _emit 0x75
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 1ch]
        inc edi
        add eax, 8
        mov dword ptr [ebp - 1ch], eax
        cmp edi, 4
        ; Exact mapped bytes 72 B2: jb 0x58875295
        __asm _emit 0x72
        __asm _emit 0xb2
        mov ebx, dword ptr [ebp - 20h]
        push ebx
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], 1
        ; Exact mapped bytes E8 3D F9 FF FF: call 0x58874c33
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [esi + 21ch], eax
        mov eax, dword ptr [ebp - 24h]
        lea ecx, [esi + 0ch]
        push 6
        lea edx, [eax + 58907c3ch]
        pop edi
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        lea edx, [edx + 2]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        lea ecx, [ecx + 2]
        sub edi, 1
        ; Exact mapped bytes 75 EF: jne 0x5887530e
        __asm _emit 0x75
        __asm _emit 0xef
        push esi
        ; Exact mapped bytes E8 20 FA FF FF: call 0x58874d45
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5887532d
        __asm _emit 0xeb
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B5 F9 FF FF: call 0x58874ce2
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 13 BD FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
