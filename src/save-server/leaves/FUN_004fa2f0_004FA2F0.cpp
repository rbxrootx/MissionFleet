// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA2F0 .. +0x285 bytes.
extern "C" __declspec(naked) void FUN_004fa2f0_004FA2F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 26eh
        push 674fe8h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 51 FF FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 77 BF FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fa332
        __asm _emit 0x75
        __asm _emit 0x14
        push 26fh
        push 674fe8h
        ; Exact mapped bytes E8 13 EA 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa332
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4fa30f
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 75 14: jne 0x4fa355
        __asm _emit 0x75
        __asm _emit 0x14
        push 270h
        push 674fe8h
        ; Exact mapped bytes E8 F0 E9 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa355
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fa338
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 68h]
        cmp eax, dword ptr [edx + 40h]
        ; Exact mapped bytes 7C 14: jl 0x4fa37d
        __asm _emit 0x7c
        __asm _emit 0x14
        push 271h
        push 674fe8h
        ; Exact mapped bytes E8 C8 E9 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa37d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4fa35b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 64h]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 7ch]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 46 FE FF FF: call 0x4fa200
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 07: jne 0x4fa3ca
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A2 01 00 00: jmp 0x4fa56c
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 37: je 0x4fa40a
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0ea10h
        push ecx
        push 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x4fa40a
        __asm _emit 0x75
        __asm _emit 0x19
        push 6751bch
        push 6751ech
        ; Exact mapped bytes E8 15 62 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 62 01 00 00: jmp 0x4fa56c
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        add edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 68h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4fa42b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x4fa508
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ecx + edx + 8]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 59 77 03 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 75: jne 0x4fa503
        __asm _emit 0x75
        __asm _emit 0x75
        push 6751f0h
        push 675220h
        ; Exact mapped bytes E8 78 61 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 21: jle 0x4fa4c7
        __asm _emit 0x7e
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D9: jmp 0x4fa4a0
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 20: je 0x4fa4f0
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0ea10h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8F B8 FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        sub edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 68h], edx
        xor eax, eax
        ; Exact mapped bytes EB 69: jmp 0x4fa56c
        __asm _emit 0xeb
        __asm _emit 0x69
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x4fa422
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 7ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [eax + ecx + 4], edx
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + eax + 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 68h], edx
        ; Exact mapped bytes 74 14: je 0x4fa553
        __asm _emit 0x74
        __asm _emit 0x14
        push 297h
        push 674fe8h
        ; Exact mapped bytes E8 F2 E7 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa553
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4fa531
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
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
