// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005077F2 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_005077f2_005077F2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e16dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x50782d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bdh
        push 5ca348h
        ; Exact mapped bytes E8 D8 D1 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50782d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x507813
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 43: je 0x507893
        __asm _emit 0x74
        __asm _emit 0x43
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0C A2 03 00: call 0x541a7a
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 35 97 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 BF 84 FF FF: call 0x4ffd3a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x507891
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx], eax
        mov eax, 5
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x507955
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B7: jmp 0x50784a
        __asm _emit 0xeb
        __asm _emit 0xb7
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6C 96 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 4
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x50793c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C9 96 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 75: jne 0x50793c
        __asm _emit 0x75
        __asm _emit 0x75
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B2 98 02 00: call 0x531183
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C8: movsx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc8
        cmp ecx, 2eh
        ; Exact mapped bytes 74 14: je 0x5078ed
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d3h
        push 5ca348h
        ; Exact mapped bytes E8 18 D1 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5078ed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x5078c7
        __asm _emit 0x75
        __asm _emit 0xd4
        push 2eh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 92 1D F3 FF: call 0x439690
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1d
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 32: je 0x50793c
        __asm _emit 0x74
        __asm _emit 0x32
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 98 96 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x50793c
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 20h], 4
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 15 5F FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 19: jmp 0x507955
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 24h], 3
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FA 5E FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
