// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D7B3 .. +0x2BD bytes.
extern "C" __declspec(naked) void FUN_0055d7b3_0055D7B3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 21ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        push 14bh
        push 67b3b8h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 88 CA F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        push 63c7b8h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AB C9 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55d7fd
        __asm _emit 0x75
        __asm _emit 0x14
        push 14ch
        push 67b3b8h
        ; Exact mapped bytes E8 48 B5 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d7fd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x55d7d8
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 33 90 FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x55d824
        __asm _emit 0x74
        __asm _emit 0x14
        push 14dh
        push 67b3b8h
        ; Exact mapped bytes E8 21 B5 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d824
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x55d803
        __asm _emit 0x75
        __asm _emit 0xd9
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x55d844
        __asm _emit 0x75
        __asm _emit 0x14
        push 150h
        push 67b3b8h
        ; Exact mapped bytes E8 01 B5 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d844
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55d82a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 09: je 0x55d862
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], 0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 09: je 0x55d871
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 09: je 0x55d880
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], 0
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 12: je 0x55d898
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 40h]
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [edx], ecx
        push 641278h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 4D D0 FE FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x55d8c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 15dh
        push 67b3b8h
        ; Exact mapped bytes E8 7F B4 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d8c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55d8ac
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x55d900
        __asm _emit 0x75
        __asm _emit 0x20
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0E: je 0x55d8f4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 04 02 FF FF: call 0x54daf3
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 7A: je 0x55d980
        __asm _emit 0x74
        __asm _emit 0x7a
        mov dword ptr [ebp - 18h], 0
        lea eax, [ebp - 18h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 80 88 FE FF: call 0x5461ae
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 18h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 45: jne 0x55d980
        __asm _emit 0x75
        __asm _emit 0x45
        push 100h
        lea ecx, [ebp - 118h]
        push ecx
        push 0f095h
        ; Exact mapped bytes E8 EF C3 F7 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55d969
        __asm _emit 0x75
        __asm _emit 0x14
        push 172h
        push 67b3b8h
        ; Exact mapped bytes E8 DC B3 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d969
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x55d93b
        __asm _emit 0x75
        __asm _emit 0xcc
        lea eax, [ebp - 118h]
        push eax
        ; Exact mapped bytes E8 F4 8C FE FF: call 0x54666f
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x55da0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], 0
        lea edx, [ebp - 11ch]
        push edx
        push 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 11ch]
        push eax
        ; Exact mapped bytes E8 F3 87 FE FF: call 0x5461ae
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 1ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 45: jne 0x55da0d
        __asm _emit 0x75
        __asm _emit 0x45
        push 100h
        lea eax, [ebp - 21ch]
        push eax
        push 0f095h
        ; Exact mapped bytes E8 62 C3 F7 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55d9f6
        __asm _emit 0x75
        __asm _emit 0x14
        push 17eh
        push 67b3b8h
        ; Exact mapped bytes E8 4F B3 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d9f6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x55d9c8
        __asm _emit 0x75
        __asm _emit 0xcc
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes E8 67 8C FE FF: call 0x54666f
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], eax
        mov dword ptr [ebp - 8], 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 7E 87 FE FF: call 0x5461ae
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x55da4c
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 1B: jmp 0x55da67
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 13: je 0x55da65
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 14h]
        sete cl
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [edx], ecx
        xor eax, eax
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
