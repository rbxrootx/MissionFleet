// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B10B0 .. +0x288 bytes.
extern "C" __declspec(naked) void FUN_584b10b0_584B10B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB EB FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E4 3F FF FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 EB FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F E6 FF FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        and ecx, 1
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x584b123d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 22: je 0x584b1120
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 ED 60 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 3abh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 57 7C 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 17 02 00 00: jmp 0x584b1337
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 05 C5 05 96 58: movzx eax, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 0ffh
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x584b1238
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 0D C5 05 96 58: movzx ecx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 0F 8C D5 00 00 00: jl 0x584b1216
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 15 C5 05 96 58: movzx edx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 5
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x584b1216
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 05 C5 05 96 58: movzx eax, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax*4 + 589605ach]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 01 2D 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x2d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 22: jne 0x584b1196
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 77 60 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 3a5h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E1 7B 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 A1 01 00 00: jmp 0x584b1337
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B2 E5 FF FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 08 3F FF FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 22: je 0x584b11ce
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 3F 60 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 3a4h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A9 7B 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x584b1337
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 F8 04 96 58: mov esi, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FE 37 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        cmp esi, eax
        ; Exact mapped bytes 73 22: jae 0x584b1214
        __asm _emit 0x73
        __asm _emit 0x22
        ; Exact mapped bytes E8 F9 5F 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 3aeh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 63 7B 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x584b1337
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x584b1238
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 D5 5F 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 3a6h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3F 7B 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x584b1337
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x584b1335
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 07: jne 0x584b124c
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, 1
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x584b1337
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes E8 B1 FD 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 16ah]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 164h]
        and dl, 7fh
        movzx eax, dl
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes E8 59 5F 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 72 F0 FF FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x584b12bf
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 20h], 15eh
        ; Exact mapped bytes E8 3F 5F 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 62 F8 FF FF: call 0x584b0b20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        cmp dword ptr [ecx*4 + 58948c60h], 0
        ; Exact mapped bytes 74 42: je 0x584b1314
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        movzx edx, word ptr [ecx + 2]
        cmp edx, 3
        ; Exact mapped bytes 75 06: jne 0x584b12f1
        __asm _emit 0x75
        __asm _emit 0x06
        mov al, 1
        ; Exact mapped bytes EB 48: jmp 0x584b1337
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes EB 21: jmp 0x584b1312
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes E8 FA 5E 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 0
        push 1f4h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B2 04 03 00: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 25: jmp 0x584b1337
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes EB 21: jmp 0x584b1335
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes E8 D7 5E 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        push 0
        push 1f4h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8F 04 03 00: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b1337
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        pop esi
    }
}
