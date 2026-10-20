// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058703D .. +0x2E0 bytes.
extern "C" __declspec(naked) void FUN_0058703d_0058703D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x587066
        __asm _emit 0x75
        __asm _emit 0x14
        push 87h
        push 67d938h
        ; Exact mapped bytes E8 DF 1C FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x587066
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x587049
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 64h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 14: jne 0x587089
        __asm _emit 0x75
        __asm _emit 0x14
        push 88h
        push 67d938h
        ; Exact mapped bytes E8 BC 1C FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x587089
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x58706c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 75 14: jne 0x5870b1
        __asm _emit 0x75
        __asm _emit 0x14
        push 89h
        push 67d938h
        ; Exact mapped bytes E8 94 1C FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5870b1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x58708f
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x5870d1
        __asm _emit 0x75
        __asm _emit 0x14
        push 8ah
        push 67d938h
        ; Exact mapped bytes E8 74 1C FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5870d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5870b7
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 80 C3 F1 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5870fe
        __asm _emit 0x75
        __asm _emit 0x14
        push 8bh
        push 67d938h
        ; Exact mapped bytes E8 47 1C FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5870fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x5870d7
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 90 AA FA FF: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        push 0
        push 0
        push 1
        push 67d9fch
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 D4 BC 68 00: call dword ptr [0x68bcd4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 08: jne 0x587147
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 1B: jmp 0x587162
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp + 1ch], 1
        ; Exact mapped bytes 75 15: jne 0x587162
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 07: jne 0x587162
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x5872c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 47: je 0x5871bf
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 9
        ; Exact mapped bytes 74 3C: je 0x5871bf
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 688ca1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x5871ab
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, 1
        mov dword ptr [ebp + 18h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 18h]
        sub eax, 1
        mov dword ptr [ebp + 18h], eax
        ; Exact mapped bytes EB B3: jmp 0x587172
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 E0 B4 68 00: call dword ptr [0x68b4e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B5 A9 FA FF: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa9
        __asm _emit 0xfa
        __asm _emit 0xff
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 E4 B4 68 00: call dword ptr [0x68b4e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp + 0ch], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x5872bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 9
        ; Exact mapped bytes 74 14: je 0x587238
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b9h
        push 67d938h
        ; Exact mapped bytes E8 0D 1B FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x587238
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x587219
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp + 18h]
        sub eax, 1
        mov dword ptr [ebp + 18h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 4C: jne 0x5872a2
        __asm _emit 0x75
        __asm _emit 0x4c
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x587268
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 7D 24: jge 0x587294
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx + eax*4]
        add edx, dword ptr [ebp + 24h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7D 11: jge 0x587292
        __asm _emit 0x7d
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx + eax*4]
        add edx, dword ptr [ebp + 24h]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x587294
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CB: jmp 0x58725f
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 28h]
        cmp eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 75 06: jne 0x5872a2
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x5872bf
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 24h]
        cdq
        idiv dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 24h]
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes E9 9E FE FF FF: jmp 0x587162
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 64h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 2D: je 0x5872fa
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 DE EE FA FF: call 0x5361b3
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x5872fa
        __asm _emit 0x74
        __asm _emit 0x1e
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 BF EF FA FF: call 0x5362a7
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xef
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 23 00 00 00: call 0x58731d
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
