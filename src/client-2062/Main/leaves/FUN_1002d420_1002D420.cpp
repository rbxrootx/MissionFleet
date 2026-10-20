// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002D420 .. +0x3FE bytes.
extern "C" __declspec(naked) void FUN_1002d420_1002D420() {
    __asm {
        push -1
        push 1016dd7bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        ; Exact mapped bytes 89 35 DC 56 1C 10: mov dword ptr [0x101c56dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 34h
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 58h], 100h
        ; Exact mapped bytes E8 4B F3 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        cmp eax, ebx
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes 74 09: je 0x1002d46d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 E5 8B FE FF: call 0x10016050
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1002d46f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebp
        push edi
        push 10197cach
        mov ecx, eax
        mov dword ptr [esp + 30h], 0ffffffffh
        ; Exact mapped bytes A3 E0 58 1C 10: mov dword ptr [0x101c58e0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 66 8C FE FF: call 0x100160f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [esi + 472h]
        push 10197c94h
        push eax
        mov dword ptr [esi + 46ch], 4
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea eax, [esi + 572h]
        mov ebp, 1f43h
        push 10197c78h
        push eax
        ; Exact mapped bytes 66 89 AE 72 84 00 00: mov word ptr [esi + 0x8472], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x72
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 72 85 00 00 01 00: mov word ptr [esi + 0x8572], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 8674h], 8
        ; Exact mapped bytes 66 89 9E 74 88 00 00: mov word ptr [esi + 0x8874], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x74
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 8974h], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea ecx, [esi + 672h]
        push 10197c5ch
        push ecx
        ; Exact mapped bytes 66 89 AE 74 84 00 00: mov word ptr [esi + 0x8474], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 74 85 00 00 01 00: mov word ptr [esi + 0x8574], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 8678h], ebx
        ; Exact mapped bytes 66 89 9E 76 88 00 00: mov word ptr [esi + 0x8876], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x76
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 8994h], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 89 AE 76 84 00 00: mov word ptr [esi + 0x8476], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x76
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 772h]
        mov ebp, 1
        push 10197c44h
        push edx
        ; Exact mapped bytes 66 89 AE 76 85 00 00: mov word ptr [esi + 0x8576], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x76
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 867ch], 3
        ; Exact mapped bytes 66 89 9E 78 88 00 00: mov word ptr [esi + 0x8878], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 89b4h], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 C7 86 78 84 00 00 27 23: mov word ptr [esi + 0x8478], 0x2327
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x27
        __asm _emit 0x23
        ; Exact mapped bytes 66 89 9E 78 85 00 00: mov word ptr [esi + 0x8578], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 8680h], 4
        ; Exact mapped bytes 66 89 9E 7A 88 00 00: mov word ptr [esi + 0x887a], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 89d4h], bl
        lea eax, [esi + 9974h]
        mov ecx, 10h
        mov byte ptr [eax], bl
        add eax, 20h
        dec ecx
        ; Exact mapped bytes 75 F8: jne 0x1002d57d
        __asm _emit 0x75
        __asm _emit 0xf8
        lea eax, [esp + 10h]
        ; Exact mapped bytes 66 89 9E 70 04 00 00: mov word ptr [esi + 0x470], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 0f003fh
        push ebx
        push 10197c20h
        push 80000002h
        mov dword ptr [esp + 2ch], 80h
        mov dword ptr [esp + 30h], ebp
        ; Exact mapped bytes FF 15 14 50 17 10: call dword ptr [0x10175014]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x1002d5de
        __asm _emit 0x74
        __asm _emit 0x27
        lea ecx, [esp + 14h]
        lea edx, [esp + 10h]
        push ecx
        push edx
        push ebx
        push 0f003fh
        push ebx
        push 101ace48h
        push ebx
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF 15 10 50 17 10: call dword ptr [0x10175010]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        lea eax, [esp + 18h]
        lea ebp, [esi + 368h]
        push eax
        lea ecx, [esp + 18h]
        push ebp
        push ecx
        push ebx
        push 10197c18h
        push edx
        ; Exact mapped bytes FF 15 00 50 17 10: call dword ptr [0x10175000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x1002d664
        __asm _emit 0x74
        __asm _emit 0x60
        cmp dword ptr [esi + 46ch], ebx
        ; Exact mapped bytes 75 09: jne 0x1002d615
        __asm _emit 0x75
        __asm _emit 0x09
        lea eax, [esi + 472h]
        push eax
        ; Exact mapped bytes EB 05: jmp 0x1002d61a
        __asm _emit 0xeb
        __asm _emit 0x05
        push 101ace48h
        push ebp
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea eax, [esp + 14h]
        lea ecx, [esp + 10h]
        push eax
        push ecx
        push ebx
        push 0f003fh
        push ebx
        push 10197c18h
        push ebx
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF 15 10 50 17 10: call dword ptr [0x10175010]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push ebp
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 3D 04 50 17 10: mov edi, dword ptr [0x10175004]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push ebp
        push 1
        push ebx
        push 10197c18h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 06: jmp 0x1002d66a
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 3D 04 50 17 10: mov edi, dword ptr [0x10175004]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        lea eax, [esp + 18h]
        lea ebp, [esi + 468h]
        push eax
        lea ecx, [esp + 18h]
        push ebp
        push ecx
        push ebx
        push 10197c10h
        push edx
        ; Exact mapped bytes FF 15 00 50 17 10: call dword ptr [0x10175000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x1002d696
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 39 5D 00: cmp word ptr [ebp], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 52: jne 0x1002d6e8
        __asm _emit 0x75
        __asm _emit 0x52
        cmp dword ptr [esi + 46ch], ebx
        ; Exact mapped bytes 75 0D: jne 0x1002d6ab
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 66 8B 86 72 84 00 00: mov ax, word ptr [esi + 0x8472]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x72
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 00: mov word ptr [ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x1002d6af
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 5D 00: mov word ptr [ebp], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        lea edx, [esp + 10h]
        push ecx
        push edx
        push ebx
        push 0f003fh
        push ebx
        push 10197c10h
        push ebx
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF 15 10 50 17 10: call dword ptr [0x10175010]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 10h]
        push 4
        push ebp
        push 4
        push ebx
        push 10197c10h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea ecx, [esp + 18h]
        lea edx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        lea eax, [esp + 18h]
        push edx
        push eax
        push ebx
        push 10197c0ch
        push ecx
        ; Exact mapped bytes FF 15 00 50 17 10: call dword ptr [0x10175000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x1002d749
        __asm _emit 0x74
        __asm _emit 0x3d
        lea edx, [esp + 14h]
        lea eax, [esp + 10h]
        push edx
        push eax
        push ebx
        push 0f003fh
        push ebx
        push 10197c0ch
        push ebx
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF 15 10 50 17 10: call dword ptr [0x10175010]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        lea ecx, [esp + 1ch]
        push 4
        push ecx
        push 4
        push ebx
        push 10197c0ch
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 0C 50 17 10: call dword ptr [0x1017500c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 1ch]
        pop edi
        ; Exact mapped bytes 89 0D 98 7C 1A 10: mov dword ptr [0x101a7c98], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0a074h]
        cmp eax, ebx
        pop ebp
        ; Exact mapped bytes 74 28: je 0x1002d792
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 0a00ch], 8
        and edx, 0e1ffh
        or dh, 1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 E0 E9 13 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 77: jmp 0x1002d809
        __asm _emit 0xeb
        __asm _emit 0x77
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0a034h], ebx
        and eax, 0edffh
        or ah, 0dh
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ff8h]
        mov dword ptr [eax + 28h], ebx
        mov dword ptr [eax + 84h], 100h
        mov dword ptr [eax + 8ch], 40000000h
        mov ecx, dword ptr [esi + 9ff8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        lea eax, [esi + 0a030h]
        mov dword ptr [esi + 34ch], 64h
        push eax
        push ebx
        push esi
        push 1002d9a0h
        push ebx
        push ebx
        mov dword ptr [esi + 354h], 0ffffffffh
        ; Exact mapped bytes FF 15 E8 50 17 10: call dword ptr [0x101750e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 1
        push eax
        mov dword ptr [esi + 0a02ch], eax
        ; Exact mapped bytes FF 15 E4 50 17 10: call dword ptr [0x101750e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        or byte ptr [esi + 24h], 4
        mov ecx, dword ptr [esp + 1ch]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        ret
    }
}
