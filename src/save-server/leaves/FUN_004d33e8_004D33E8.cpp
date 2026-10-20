// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D33E8 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_004d33e8_004D33E8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 20: je 0x4d341a
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 74 1A: je 0x4d341a
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 14h], 2
        ; Exact mapped bytes 74 14: je 0x4d341a
        __asm _emit 0x74
        __asm _emit 0x14
        push 9bch
        push 671a64h
        ; Exact mapped bytes E8 2B 59 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d341a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4d33f4
        __asm _emit 0x75
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x4d345c
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 0C: jmp 0x4d3468
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F3 86 05 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 74 0D: je 0x4d347b
        __asm _emit 0x74
        __asm _emit 0x0d
        push 8
        ; Exact mapped bytes FF 15 A8 BE 68 00: call dword ptr [0x68bea8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x4d3482
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D0 BE 68 00: call dword ptr [0x68bed0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 11: jmp 0x4d34a5
        __asm _emit 0xeb
        __asm _emit 0x11
        push 2
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B1 68 F7 FF: call 0x449d50
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x68
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5B: je 0x4d3506
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 6E C4 FF FF: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 30h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 08: jne 0x4d34d9
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 2B: jmp 0x4d3504
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 23: jb 0x4d3504
        __asm _emit 0x72
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 30h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 77 1B: ja 0x4d3504
        __asm _emit 0x77
        __asm _emit 0x1b
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 15: je 0x4d3504
        __asm _emit 0x74
        __asm _emit 0x15
        lea ecx, [ebp - 28h]
        push ecx
        push 0
        push 361h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 8E: jmp 0x4d3494
        __asm _emit 0xeb
        __asm _emit 0x8e
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 60: jne 0x4d356c
        __asm _emit 0x75
        __asm _emit 0x60
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4d3526
        __asm _emit 0x75
        __asm _emit 0x14
        push 9e0h
        push 671a64h
        ; Exact mapped bytes E8 1F 58 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3526
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d350c
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 10: je 0x4d3542
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes FF 15 AC BE 68 00: call dword ptr [0x68beac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x4d3567
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], edx
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x4d3629
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x4d3603
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x4d3603
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 26 C3 FF FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp + 14h], 2
        ; Exact mapped bytes 75 4F: jne 0x4d35e1
        __asm _emit 0x75
        __asm _emit 0x4f
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4d35ac
        __asm _emit 0x75
        __asm _emit 0x14
        push 9f3h
        push 671a64h
        ; Exact mapped bytes E8 99 57 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d35ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d3592
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 18h], eax
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 2F 00 00 00: call 0x4d3632
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0E: je 0x4d3617
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 B0 BE 68 00: call dword ptr [0x68beb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4d3629
        __asm _emit 0x75
        __asm _emit 0x12
        push 671e2ch
        push 671e64h
        ; Exact mapped bytes E8 EF CF FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
