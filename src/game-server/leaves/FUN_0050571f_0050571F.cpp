// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050571F .. +0x255 bytes.
extern "C" __declspec(naked) void FUN_0050571f_0050571F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 272h
        push 5c7650h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 21 5A FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x505765
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x505765
        __asm _emit 0x75
        __asm _emit 0x14
        push 273h
        push 5c7650h
        ; Exact mapped bytes E8 A0 F2 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505765
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x50573f
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x505791
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x505791
        __asm _emit 0x75
        __asm _emit 0x14
        push 274h
        push 5c7650h
        ; Exact mapped bytes E8 74 F2 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505791
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x50576b
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 3A: je 0x5057da
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E C1 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes E8 94 A6 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5057da
        __asm _emit 0x75
        __asm _emit 0x14
        push 276h
        push 5c7650h
        ; Exact mapped bytes E8 2B F2 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5057da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B7: jne 0x505797
        __asm _emit 0x75
        __asm _emit 0xb7
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 3A: je 0x505823
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 C1 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 24h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes E8 4B A6 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x505823
        __asm _emit 0x75
        __asm _emit 0x14
        push 278h
        push 5c7650h
        ; Exact mapped bytes E8 E2 F1 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505823
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B7: jne 0x5057e0
        __asm _emit 0x75
        __asm _emit 0xb7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB C0 02 00: call 0x5318fc
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x505876
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        cmp eax, dword ptr [edx + 24h]
        ; Exact mapped bytes 74 22: je 0x505865
        __asm _emit 0x74
        __asm _emit 0x22
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 24h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 30: call dword ptr [edx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [eax + 24h], edx
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x50596d
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 38: jne 0x5058b7
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 24h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 74 25: je 0x5058b2
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 24h]
        sub eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x505961
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 24h]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 74 24: je 0x5058e9
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 24h]
        sub edx, dword ptr [ecx + 2ch]
        push edx
        push 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 14: je 0x50592d
        __asm _emit 0x74
        __asm _emit 0x14
        push 290h
        push 5c7650h
        ; Exact mapped bytes E8 D8 F0 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50592d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B6: jne 0x5058e9
        __asm _emit 0x75
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], edx
        ; Exact mapped bytes 74 14: je 0x50595b
        __asm _emit 0x74
        __asm _emit 0x14
        push 291h
        push 5c7650h
        ; Exact mapped bytes E8 AA F0 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50595b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x505933
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [edx + 24h], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
