// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051180A .. +0x240 bytes.
extern "C" __declspec(naked) void FUN_0051180a_0051180A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 2f9h
        push 5c84b0h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 37 99 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CD D5 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51184c
        __asm _emit 0x75
        __asm _emit 0x14
        push 2fah
        push 5c84b0h
        ; Exact mapped bytes E8 B9 31 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51184c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x511829
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 6ch], 1
        ; Exact mapped bytes 7F 14: jg 0x51186f
        __asm _emit 0x7f
        __asm _emit 0x14
        push 2fch
        push 5c84b0h
        ; Exact mapped bytes E8 96 31 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51186f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x511852
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 7C 14: jl 0x511894
        __asm _emit 0x7c
        __asm _emit 0x14
        push 2fdh
        push 5c84b0h
        ; Exact mapped bytes E8 71 31 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511894
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x511875
        __asm _emit 0x75
        __asm _emit 0xdb
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5118ef
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 33: jne 0x5118ef
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 7C 07: jl 0x5118d7
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 74 17: je 0x51190f
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ea00h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D7 CF FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x511916
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x51192e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 8D D6 00 00 00: jge 0x511a13
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 D4 00 00 00: call dword ptr [eax + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 09: jmp 0x511967
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 0F 8D 98 00 00 00: jge 0x511a0e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 96 ED FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x5119a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 30fh
        push 5c84b0h
        ; Exact mapped bytes E8 62 30 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5119a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x511989
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A0 EC FF FF: call 0x51065c
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C5 D7 FD FF: call 0x4ef18a
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 3B: je 0x511a09
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 68h]
        sub eax, 1
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 2D: jne 0x511a09
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ea00h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F3 CE FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x511a09
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 14h]
        add edx, 0e9ffh
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 81 D7 FD FF: call 0x4ef18a
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x51195e
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x511925
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 6ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 6ch], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x511a33
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
