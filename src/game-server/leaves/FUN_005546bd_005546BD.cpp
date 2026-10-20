// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005546BD .. +0x21F bytes.
extern "C" __declspec(naked) void FUN_005546bd_005546BD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 2dfh
        push 5cfa08h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 84 6A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x5546f9
        __asm _emit 0x74
        __asm _emit 0x14
        push 2e0h
        push 5cfa08h
        ; Exact mapped bytes E8 0C 03 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5546f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5546dc
        __asm _emit 0x75
        __asm _emit 0xdd
        push 2e1h
        push 5cfa08h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4E 6A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x55472f
        __asm _emit 0x75
        __asm _emit 0x14
        push 2e2h
        push 5cfa08h
        ; Exact mapped bytes E8 D6 02 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55472f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554712
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 05 E9 FF FF: call 0x553042
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x55476e
        __asm _emit 0x75
        __asm _emit 0x14
        push 2e7h
        push 5cfa08h
        ; Exact mapped bytes E8 97 02 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55476e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554751
        __asm _emit 0x75
        __asm _emit 0xdd
        push 58e4b0h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 01 77 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x5547a2
        __asm _emit 0x75
        __asm _emit 0x14
        push 2ech
        push 5cfa08h
        ; Exact mapped bytes E8 63 02 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5547a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x554788
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 B8 29 5E 00: call dword ptr [0x5e29b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 10: je 0x5547ee
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 30h], ecx
        xor eax, eax
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x5548d3
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x55480b
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f8h
        push 5cfa08h
        ; Exact mapped bytes E8 FA 01 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55480b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5547ee
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 10h], 0
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x55484c
        __asm _emit 0x74
        __asm _emit 0x14
        push 2fdh
        push 5cfa08h
        ; Exact mapped bytes E8 B9 01 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55484c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x554818
        __asm _emit 0x75
        __asm _emit 0xc6
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1F: je 0x554877
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x554871
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x554858
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 58e540h
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes FF 15 B4 29 5E 00: call dword ptr [0x5e29b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 309h
        push 5cfa08h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 90 68 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
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
