// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE72E .. +0x1E5 bytes.
extern "C" __declspec(naked) void FUN_004fe72e_004FE72E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D0 23 FD FF: call 0x4d0b13
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 1D: je 0x4fe769
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 3ch]
        mov ecx, dword ptr [eax]
        push ecx
        push 675584h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E2 A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 40h]
        push eax
        push 67559ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 13 A3 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 44h]
        push edx
        push 6755ach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F8 A2 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        push 6755bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD A2 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        push 6755c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C2 A2 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 70h]
        push edx
        push 6755d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A7 A2 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 6755e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8C A2 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 48h]
        push eax
        push 6755fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 71 A2 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        push 675610h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 A0 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 56 A2 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x4fe900
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c0h]
        push edx
        push 675624h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 9F 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 28 A2 02 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 90h
        push eax
        push 67563ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 9F 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 49 73 FE FF: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 67564ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 9F 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D7 72 FE FF: call 0x4e5b92
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0a0h
        push eax
        push 675660h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 9F 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FD 72 FE FF: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 1D: je 0x4fe900
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0b0h
        push edx
        push 675674h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 9F 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D4 72 FE FF: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        push 675688h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E 9F 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
