// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA7FA .. +0x240 bytes.
extern "C" __declspec(naked) void FUN_004fa7fa_004FA7FA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 2d0h
        push 674fe8h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 47 FA FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6D BA FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fa83c
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d1h
        push 674fe8h
        ; Exact mapped bytes E8 09 E5 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa83c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4fa819
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 68h], 1
        ; Exact mapped bytes 7F 14: jg 0x4fa85f
        __asm _emit 0x7f
        __asm _emit 0x14
        push 2d3h
        push 674fe8h
        ; Exact mapped bytes E8 E6 E4 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa85f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fa842
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 7C 14: jl 0x4fa884
        __asm _emit 0x7c
        __asm _emit 0x14
        push 2d4h
        push 674fe8h
        ; Exact mapped bytes E8 C1 E4 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa884
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4fa865
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
        ; Exact mapped bytes 74 3B: je 0x4fa8df
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 33: jne 0x4fa8df
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 7C 07: jl 0x4fa8c7
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
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
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 17: je 0x4fa8ff
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ea10h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 77 B4 FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4fa906
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4fa91e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 0F 8D D6 00 00 00: jge 0x4faa03
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
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
        ; Exact mapped bytes EB 09: jmp 0x4fa957
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 0F 8D 98 00 00 00: jge 0x4fa9fe
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D6 EF FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4fa993
        __asm _emit 0x75
        __asm _emit 0x14
        push 2e6h
        push 674fe8h
        ; Exact mapped bytes E8 B2 E3 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa993
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fa979
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 14h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E0 EE FF FF: call 0x4f988c
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 65 BC FD FF: call 0x4d661a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 3B: je 0x4fa9f9
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 6ch]
        sub eax, 1
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 2D: jne 0x4fa9f9
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ea10h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 93 B3 FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x4fa9f9
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 14h]
        add edx, 0ea0fh
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 21 BC FD FF: call 0x4d661a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x4fa94e
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x4fa915
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 68h], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x4faa23
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
