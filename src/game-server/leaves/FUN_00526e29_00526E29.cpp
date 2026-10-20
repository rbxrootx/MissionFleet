// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526E29 .. +0x383 bytes.
extern "C" __declspec(naked) void FUN_00526e29_00526E29() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x526e58
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c3h
        push 5c8e54h
        ; Exact mapped bytes E8 AD DB 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x526e58
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x526e35
        __asm _emit 0x75
        __asm _emit 0xd7
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        push 0
        push 0
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        push 0
        push 0
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 AE FD FF: call 0x501ce5
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 8
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AD BF FF FF: call 0x522e60
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 4]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x526f56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 4]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x526ef9
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 1C E8 5D 00: mov edx, dword ptr [0x5de81c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 1A FA 00 00: call 0x536905
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E A4 FD FF: call 0x501362
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 10: jmp 0x526f09
        __asm _emit 0xeb
        __asm _emit 0x10
        push 7
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        mov dword ptr [ebp - 20h], eax
        push 5
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        mov dword ptr [ebp - 18h], eax
        push 0dh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 A8 FD FF: call 0x501779
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        push 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 64 F1 00 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 22 01 00: call 0x5391c1
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 A8 FD FF: call 0x501779
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 4]
        and eax, 24h
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x526f70
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D 20 E8 5D 00: mov ecx, dword ptr [0x5de820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 68 21 5E 00: call dword ptr [0x5e2168]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 4]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x527002
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 06: jne 0x526f9d
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 20 E8 5D 00: mov ecx, dword ptr [0x5de820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 D9 FA 00 00: call 0x536a82
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 A4 FD FF: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 06: jne 0x526fc1
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC A6 FD FF: call 0x501677
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        push 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 A7 FD FF: call 0x501779
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB 21 01 00: call 0x5391c1
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 A7 FD FF: call 0x501779
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 4]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x5270e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 E8 5D 00: mov ecx, dword ptr [0x5de820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 63 FA 00 00: call 0x536a82
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB A3 FD FF: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 06: jne 0x527037
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        push 2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 A6 FD FF: call 0x501677
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 08 ED 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 82 07 00 00: call 0x5277d7
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f0001h
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 2ch]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D1 ED 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 22 01 00: call 0x539333
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        push 0f0001h
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 AC ED 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 22 01 00: call 0x539333
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        push 0f0001h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A4 ED 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 22 01 00: call 0x539333
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        push 0f0001h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7F ED 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 22 01 00: call 0x539333
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 4]
        and edx, 18h
        test edx, edx
        ; Exact mapped bytes 74 5E: je 0x527154
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x527116
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 8
        ; Exact mapped bytes 7D 38: jge 0x527154
        __asm _emit 0x7d
        __asm _emit 0x38
        mov edx, 1
        mov ecx, dword ptr [ebp - 34h]
        shl edx, cl
        mov eax, dword ptr [ebp - 38h]
        and eax, edx
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x527152
        __asm _emit 0x74
        __asm _emit 0x23
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 75 07 00 00: call 0x5278b4
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 21 EE 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 B9 FF FF: call 0x522af6
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB B9: jmp 0x52710d
        __asm _emit 0xeb
        __asm _emit 0xb9
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0C: je 0x527166
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC A1 FD FF: call 0x501362
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0C: je 0x527178
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B A2 FD FF: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        push -1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52719d
        __asm _emit 0x75
        __asm _emit 0x14
        push 118h
        push 5c8e54h
        ; Exact mapped bytes E8 68 D8 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52719d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x527178
        __asm _emit 0x75
        __asm _emit 0xd5
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
