// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005175F8 .. +0x192 bytes.
extern "C" __declspec(naked) void FUN_005175f8_005175F8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 6C 8B 02 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 2A: jne 0x51763c
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], 90c020c4h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 42 07 01 00: call 0x527d66
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x51763a
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        or edx, 80000h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], edx
        ; Exact mapped bytes EB 09: jmp 0x517645
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 20h], ecx
        push 388h
        push 674cach
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 FF 2B FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x51767e
        __asm _emit 0x74
        __asm _emit 0x14
        push 389h
        push 674cach
        ; Exact mapped bytes E8 C7 16 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51767e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x517661
        __asm _emit 0x75
        __asm _emit 0xdd
        push 10h
        ; Exact mapped bytes E8 A0 DC FB FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5176a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 38bh
        push 674cach
        ; Exact mapped bytes E8 A2 16 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5176a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x517684
        __asm _emit 0x75
        __asm _emit 0xdb
        push 3c000h
        ; Exact mapped bytes E8 78 DC FB FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 83 F3 FF FF: call 0x516a3e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 84h], 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        or dh, 5
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 24h], 51755dh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 3E 01 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 56 8B FB FF: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 78 B3 68 00: call dword ptr [0x68b378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 2D 8C FB FF: call 0x4d0351
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x517736
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x517742
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 15: jne 0x517757
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 674e2ch
        ; Exact mapped bytes E8 C5 8E F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x517781
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 74 14: je 0x517776
        __asm _emit 0x74
        __asm _emit 0x14
        push 3a8h
        push 674cach
        ; Exact mapped bytes E8 CF 15 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517776
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x517757
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
