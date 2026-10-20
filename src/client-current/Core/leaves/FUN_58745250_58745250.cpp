// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58745250 .. +0x269 bytes.
extern "C" __declspec(naked) void FUN_58745250_58745250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 1
        ; Exact mapped bytes 0F 84 48 02 00 00: je 0x587454b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 AA D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xaa
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 FE D5 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xd5
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 AA D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xaa
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE A4 D6 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 27: je 0x587452bd
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes E8 55 1F D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 3ach
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BF 3A D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3a
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 01 02 00 00: jmp 0x587454b9
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 01 00 00: jmp 0x587454b4
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 84 E5 01 00 00: je 0x587454b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
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
        ; Exact mapped bytes 0F 8C B7 01 00 00: jl 0x58745495
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb7
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 8D A7 01 00 00: jge 0x58745495
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 F8 BF 03 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x58745474
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 50h]
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x587453f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5874533d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 A9 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 F6 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf6
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 0F 8D 90 00 00 00: jge 0x587453f7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58745387
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 65: jge 0x587453f2
        __asm _emit 0x7d
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 A9 D6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4A: je 0x587453f0
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx]
        cmp eax, 0bh
        ; Exact mapped bytes 75 3F: jne 0x587453f0
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 1F: jne 0x587453f0
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 1A 1E D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 2eh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 87 39 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x587454b9
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8C: jmp 0x5874537e
        __asm _emit 0xeb
        __asm _emit 0x8c
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x58745334
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 A3 D6 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 FC D5 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 22: je 0x5874542f
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 DE 1D D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 3a7h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 48 39 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x587454b9
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
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
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D F5 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf5
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        cmp esi, eax
        ; Exact mapped bytes 73 1F: jae 0x58745472
        __asm _emit 0x73
        __asm _emit 0x1f
        ; Exact mapped bytes E8 98 1D D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 3aeh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 02 39 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 47: jmp 0x587454b9
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes EB 1F: jmp 0x58745493
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 77 1D D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 3a5h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E1 38 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 26: jmp 0x587454b9
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes EB 1F: jmp 0x587454b4
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 56 1D D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 3a6h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C0 38 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x587454b9
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
    }
}
