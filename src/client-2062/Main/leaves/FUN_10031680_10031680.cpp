// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10031680 .. +0x463 bytes.
extern "C" __declspec(naked) void FUN_10031680_10031680() {
    __asm {
        sub esp, 8
        push ebp
        mov ebp, ecx
        push esi
        mov al, byte ptr [ebp + 368h]
        test al, al
        ; Exact mapped bytes 75 5B: jne 0x100316ec
        __asm _emit 0x75
        __asm _emit 0x5b
        mov eax, dword ptr [ebp + 0a024h]
        mov dword ptr [ebp + 0a010h], 13h
        push 0ffffh
        push 0
        mov dword ptr [eax + 6ch], 0ffffffh
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp + 0a024h]
        push 10198478h
        ; Exact mapped bytes E8 EA 25 0D 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x25
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0a024h]
        ; Exact mapped bytes E8 BF 30 0D 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 0a024h]
        mov ecx, ebp
        mov eax, dword ptr [ebp + 88h]
        dec eax
        push eax
        ; Exact mapped bytes E8 6A 30 0D 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x00
        pop esi
        pop ebp
        add esp, 8
        ret
        mov ecx, dword ptr [ebp + 9ffch]
        ; Exact mapped bytes 8B 35 A8 50 17 10: mov esi, dword ptr [0x101750a8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 80h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, 3
        ; Exact mapped bytes 0F 8E 7E 03 00 00: jle 0x10031a88
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0a000h]
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 0F 84 67 03 00 00: je 0x10031a88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 9ffch]
        push ebx
        xor ebx, ebx
        mov ecx, 0fffdh
        mov dword ptr [ebp + 9fdch], ebx
        mov dword ptr [ebp + 0a010h], 12h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0a000h]
        push edi
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 9ffch]
        mov eax, 707070h
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp + 0a000h]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp + 9ff4h]
        cmp eax, ebx
        ; Exact mapped bytes 74 22: je 0x10031791
        __asm _emit 0x74
        __asm _emit 0x22
        mov dword ptr [eax + 28h], ebx
        mov dword ptr [eax + 84h], 100h
        mov dword ptr [eax + 8ch], 40000000h
        mov ecx, dword ptr [ebp + 9ff4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 36h
        ; Exact mapped bytes 7E 11: jle 0x100317b0
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100317b0
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0d80h
        ; Exact mapped bytes EB 02: jmp 0x100317b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 9fech]
        cmp eax, ebx
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100317e7
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1cbh
        ; Exact mapped bytes 7E 12: jle 0x1003180a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1003180a
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 72ch]
        ; Exact mapped bytes EB 02: jmp 0x1003180c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 9ff0h]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10031841
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
        mov ecx, dword ptr [ebp + 9ffch]
        ; Exact mapped bytes 8B 35 B0 50 17 10: mov esi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [ebp + 9f74h]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 0a000h]
        lea eax, [ebp + 9f8ch]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edi, [ebp + 9f9ch]
        lea esi, [ecx + 0d54h]
        mov ecx, 10h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp + 9fd8h], ebx
        xor ecx, ecx
        ; Exact mapped bytes 8B 35 F0 58 1C 10: mov esi, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8]
        cmp edx, ebx
        ; Exact mapped bytes 75 04: jne 0x100318a5
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x100318ad
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0ch]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 7D 26: jge 0x100318d7
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + ecx*4]
        mov eax, dword ptr [eax + 0f4h]
        imul eax, ecx
        lea edx, [eax + eax*2]
        lea eax, [eax + edx*4]
        mov edx, dword ptr [ebp + 9fd8h]
        add edx, eax
        inc ecx
        mov dword ptr [ebp + 9fd8h], edx
        ; Exact mapped bytes EB BD: jmp 0x10031894
        __asm _emit 0xeb
        __asm _emit 0xbd
        cmp dword ptr [ebp + 9fe0h], ebx
        ; Exact mapped bytes 75 3A: jne 0x10031919
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 86 A8 13 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8D 68 04 00 00: mov cx, word ptr [ebp + 0x468]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 A0 51 17 10: call dword ptr [0x101751a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 54 56 1C 10: mov edx, dword ptr [0x101c5654]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        and eax, 0ffffh
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [ebp + 368h]
        push eax
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 B7 A9 13 00: call 0x1016c2d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa9
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 46ch]
        xor esi, esi
        cmp eax, ebx
        ; Exact mapped bytes 7E 46: jle 0x1003196b
        __asm _emit 0x7e
        __asm _emit 0x46
        lea ebx, [ebp + 8472h]
        lea edi, [ebp + 472h]
        lea eax, [ebp + 368h]
        push edi
        push eax
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x1003194f
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 8D 68 04 00 00: mov cx, word ptr [ebp + 0x468]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 0B: cmp cx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x0b
        ; Exact mapped bytes 74 16: je 0x10031965
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 46ch]
        inc esi
        add ebx, 2
        add edi, 100h
        cmp esi, eax
        ; Exact mapped bytes 7C CE: jl 0x10031931
        __asm _emit 0x7c
        __asm _emit 0xce
        ; Exact mapped bytes EB 06: jmp 0x1003196b
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 35 94 7C 1A 10: mov dword ptr [0x101a7c94], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        lea edx, [esp + 10h]
        push edx
        push 0f003fh
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF 15 14 50 17 10: call dword ptr [0x10175014]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D 10 50 17 10: mov ebx, dword ptr [0x10175010]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x100319b7
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [esp + 14h]
        lea ecx, [esp + 10h]
        push eax
        push ecx
        push 0
        push 0f003fh
        push 0
        push 101ace48h
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea edi, [ebp + 368h]
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 35 04 50 17 10: mov esi, dword ptr [0x10175004]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push edi
        push 1
        push 0
        push 10197c18h
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x10031a1f
        __asm _emit 0x74
        __asm _emit 0x3f
        lea eax, [esp + 14h]
        lea ecx, [esp + 10h]
        push eax
        push ecx
        push 0
        push 0f003fh
        push 0
        push 10197c18h
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        push eax
        push edi
        push 1
        push 0
        push 10197c18h
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 10h]
        lea edi, [ebp + 468h]
        push 4
        push edi
        push 4
        push 0
        push 10197c10h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x10031a75
        __asm _emit 0x74
        __asm _emit 0x39
        lea ecx, [esp + 14h]
        lea edx, [esp + 10h]
        push ecx
        push edx
        push 0
        push 0f003fh
        push 0
        push 10197c10h
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esp + 10h]
        push 4
        push edi
        push 4
        push 0
        push 10197c10h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [esp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 0C 50 17 10: call dword ptr [0x1017500c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 8
        ret
        mov eax, dword ptr [ebp + 0a024h]
        mov dword ptr [ebp + 0a010h], 13h
        push 0ffffh
        push 0
        mov dword ptr [eax + 6ch], 0ffffffh
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp + 0a024h]
        push 101807ach
        ; Exact mapped bytes E8 F3 21 0D 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x21
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0a024h]
        ; Exact mapped bytes E8 C8 2C 0D 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 0a024h]
        mov ecx, ebp
        mov edx, dword ptr [ebp + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 73 2C 0D 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x00
        pop esi
        pop ebp
        add esp, 8
        ret
    }
}
