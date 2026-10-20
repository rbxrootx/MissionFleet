// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871DAD0 .. +0x2EA bytes.
extern "C" __declspec(naked) void FUN_5871dad0_5871DAD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x5871dbb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 97 84 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 0ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 81 84 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, 4
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 9C 01 00 00: mov word ptr [edx + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AF 83 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C 83 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 86 83 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 70 83 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 1c0h]
        cmp eax, 1
        ; Exact mapped bytes 75 2D: jne 0x5871dbad
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AA 1C D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 34 82 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 02 02 00 00: jmp 0x5871ddb4
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 78 1C D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 02 82 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 30h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EC 81 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D6 81 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C0 81 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5A 83 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 40h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 94 81 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 198h]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 7E 81 D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 21: jne 0x5871dc8a
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 82 95 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x95
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0
        push 0
        push 0
        push 193h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 EC B0 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x5871ddb4
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 21: jne 0x5871dcb1
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 5B 95 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x95
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0
        push 0
        push 0
        push 198h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C5 B0 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x5871ddb4
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 21: jne 0x5871dcd8
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 34 95 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x95
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        push 0
        push 0
        push 1afh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 9E B0 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x5871ddb4
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 21: jne 0x5871dcff
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 0D 95 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x95
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        push 0
        push 1b0h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 77 B0 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x5871ddb4
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 5
        ; Exact mapped bytes 75 21: jne 0x5871dd26
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 E6 94 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        push 0
        push 1b1h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 50 B0 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x5871ddb4
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 6
        ; Exact mapped bytes 75 1E: jne 0x5871dd4a
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 BF 94 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        push 0
        push 1b2h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 29 B0 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6A: jmp 0x5871ddb4
        __asm _emit 0xeb
        __asm _emit 0x6a
        cmp dword ptr [ebp + 0ch], 7
        ; Exact mapped bytes 75 1E: jne 0x5871dd6e
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 9B 94 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        push 0
        push 0
        push 0
        push 1b3h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 05 B0 DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 46: jmp 0x5871ddb4
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp + 0ch], 8
        ; Exact mapped bytes 75 1E: jne 0x5871dd92
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 77 94 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 0
        push 0
        push 0
        push 1b8h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E1 AF DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xaf
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x5871ddb4
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp dword ptr [ebp + 0ch], 9
        ; Exact mapped bytes 75 1C: jne 0x5871ddb4
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 53 94 DB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 0
        push 0
        push 0
        push 1b9h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 BD AF DB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xaf
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
