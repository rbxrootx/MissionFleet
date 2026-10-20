// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0780 .. +0x332 bytes.
extern "C" __declspec(naked) void FUN_585b0780_585B0780() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 3A 42 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0xff
        imul ecx, dword ptr [eax + 78h], 3e8h
        sub ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        mov byte ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585b07c9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D D8 02 00 00: jge 0x585b0aab
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 58 C8 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc8
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 02 00 00: je 0x585b0aa6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 3B C8 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc8
        __asm _emit 0xed
        __asm _emit 0xff
        movzx esi, word ptr [eax + 1eh]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 CC 41 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [eax + ecx*2 + 0dah]
        sub edx, esi
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 20 C8 ED FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc8
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, ax
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 5
        ; Exact mapped bytes 74 0F: je 0x585b085b
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 20h], 6
        ; Exact mapped bytes 0F 84 8B 01 00 00: je 0x585b09e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x585b0aa6
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 9E F4 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf4
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x585b091a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7F C7 ED FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc7
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5F F4 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf4
        __asm _emit 0xef
        __asm _emit 0xff
        movzx edx, word ptr [eax + 1eh]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 41 F4 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf4
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [eax + 24h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        imul ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7C 23: jl 0x585b091a
        __asm _emit 0x7c
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7C 1B: jl 0x585b091a
        __asm _emit 0x7c
        __asm _emit 0x1b
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push 0bh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 01 00 00: call 0x585b0ac0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 DF F3 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf3
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x585b09dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 54h], eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C0 C6 ED FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc6
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 A0 F3 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xef
        __asm _emit 0xff
        movzx eax, word ptr [eax + 1eh]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 82 F3 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        imul edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 64h]
        add eax, dword ptr [ebp + 8]
        imul eax, dword ptr [ebp - 68h]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7C 23: jl 0x585b09dc
        __asm _emit 0x7c
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7C 1B: jl 0x585b09dc
        __asm _emit 0x7c
        __asm _emit 0x1b
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        push 0bh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 00 00 00: call 0x585b0ac0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x585b0aa6
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 18 F3 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf3
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585b0aa6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 F9 C5 ED FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 D9 F2 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 1eh]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 B8 F2 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 7ch]
        imul eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 80h]
        add ecx, dword ptr [ebp + 8]
        imul ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7C 23: jl 0x585b0aa6
        __asm _emit 0x7c
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7C 1B: jl 0x585b0aa6
        __asm _emit 0x7c
        __asm _emit 0x1b
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1B 00 00 00: call 0x585b0ac0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 15 FD FF FF: jmp 0x585b07c0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
