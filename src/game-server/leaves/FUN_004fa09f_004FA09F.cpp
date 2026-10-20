// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA09F .. +0x20A bytes.
extern "C" __declspec(naked) void FUN_004fa09f_004FA09F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 212h
        push 5c60d0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 A2 10 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes E8 7B 16 FB FF: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x4fa0f2
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes E8 30 31 FF FF: call 0x4ed204
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fa0ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 217h
        push 5c60d0h
        ; Exact mapped bytes E8 19 A9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa0ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fa0cf
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 8F 37 01 00 00: jg 0x4fa233
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 43: je 0x4fa14e
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x4fa14e
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CF 25 04 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x4fa14e
        __asm _emit 0x74
        __asm _emit 0x2e
        push 0
        push 1
        push 363h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 43 75 FF FF: call 0x4f167c
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 1
        push 0
        push 1
        push 363h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 26 04 00: call 0x53c783
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 B2 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 1070h
        ; Exact mapped bytes E8 10 96 04 00: call 0x543770
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 92 98 04 00: call 0x543a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x4fa231
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x4fa223
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x4fa223
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 12: jne 0x4fa1b2
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7D 51 FF FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 31 25 04 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x4fa1ca
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 7C 2E: jl 0x4fa1f8
        __asm _emit 0x7c
        __asm _emit 0x2e
        push 0
        push 1
        push 363h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 99 74 FF FF: call 0x4f167c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 1
        push 0
        push 1
        push 363h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8B 25 04 00: call 0x53c783
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 7E 12: jle 0x4fa216
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 19 51 FF FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 88h], 0ffffffffh
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x4fa171
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 30: jmp 0x4fa263
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 2A: jl 0x4fa263
        __asm _emit 0x7c
        __asm _emit 0x2a
        ; Exact mapped bytes E8 05 B2 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 1070h
        ; Exact mapped bytes E8 25 95 04 00: call 0x543770
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x4fa263
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 14 2B 00 00: call 0x4fcd70
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 2C 2B 00 00: call 0x4fcd8f
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes E8 D6 14 FB FF: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x4fa297
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes E8 8B 2F FF FF: call 0x4ed204
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fa291
        __asm _emit 0x75
        __asm _emit 0x14
        push 24ch
        push 5c60d0h
        ; Exact mapped bytes E8 74 A7 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa291
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fa274
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        cmp dword ptr [ebp + 8], 0
        setl al
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
