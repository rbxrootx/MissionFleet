// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004516D1 .. +0x3C4 bytes.
extern "C" __declspec(naked) void FUN_004516d1_004516D1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58de71h
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
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [eax], 63960ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 4ch]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x4517d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x4517d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        push 640cf0h
        mov ecx, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 70 59 00 00: call 0x4570a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 8C 8B 00 00 00: jl 0x4517d1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x451760
        __asm _emit 0x75
        __asm _emit 0x14
        push 7c8h
        push 67702ch
        ; Exact mapped bytes E8 E5 75 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x451760
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x451746
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 14h], 0
        lea eax, [ebp - 14h]
        push eax
        push 640240h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 3F: jl 0x4517c5
        __asm _emit 0x7c
        __asm _emit 0x3f
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4517a0
        __asm _emit 0x75
        __asm _emit 0x14
        push 7cdh
        push 67702ch
        ; Exact mapped bytes E8 A5 75 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4517a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x451786
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 18h
        ; Exact mapped bytes E8 6E 51 0D 00: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3C: jne 0x45181c
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 18h
        ; Exact mapped bytes E8 78 51 0D 00: call 0x526963
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 90h], 0
        ; Exact mapped bytes EB B5: jmp 0x4517d1
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 18h
        ; Exact mapped bytes E8 65 FC 06 00: call 0x4c148c
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 74 67: je 0x451897
        __asm _emit 0x74
        __asm _emit 0x67
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x451842
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes 7D 17: jge 0x451864
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 40h]
        add edx, eax
        push edx
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB D5: jmp 0x451839
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 2A: je 0x451897
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 2A AC 07 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 15 AC 07 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 12: je 0x4518b2
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4ch]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 12: je 0x4518cd
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x4519a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4518ec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 0F 8D 9D 00 00 00: jge 0x451998
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, ecx, 28h
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 24h]
        ; Exact mapped bytes E8 47 51 0D 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2D: je 0x451946
        __asm _emit 0x74
        __asm _emit 0x2d
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + edx + 24h]
        ; Exact mapped bytes E8 47 51 0D 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 90h], 0
        ; Exact mapped bytes EB CD: jmp 0x451913
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, ecx, 28h
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 24h]
        ; Exact mapped bytes E8 31 FB 06 00: call 0x4c148c
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, ecx, 28h
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 24h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 12: je 0x45198c
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x451993
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x4518e3
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 0D: je 0x4519bb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 22: je 0x4519e6
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 C1 56 00 00: call 0x457090
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 75 39 00 00: call 0x455350
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 CA 3A 00 00: call 0x4554b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 0F: je 0x451a0a
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9B 3B 00 00: call 0x4555a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x451a11
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 0F: je 0x451a35
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C0 3B 00 00: call 0x4555f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x451a3c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 12: je 0x451a57
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4ch]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 12: je 0x451a72
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 18h
        ; Exact mapped bytes E8 60 FA 06 00: call 0x4c14e4
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
