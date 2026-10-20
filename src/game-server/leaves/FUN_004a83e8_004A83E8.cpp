// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A83E8 .. +0x208 bytes.
extern "C" __declspec(naked) void FUN_004a83e8_004A83E8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 14 01 00 00: call dword ptr [edx + 0x114]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 74 11: je 0x4a8422
        __asm _emit 0x74
        __asm _emit 0x11
        push 7fh
        push 5d089ch
        ; Exact mapped bytes E8 E3 C5 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a8422
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4a8405
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes FF 15 24 28 5E 00: call dword ptr [0x5e2824]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0e4h], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 75 07: jne 0x4a844a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9F 01 00 00: jmp 0x4a85e9
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0e8h
        push ecx
        ; Exact mapped bytes E8 13 0F 00 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d4h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d4h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x4a84b4
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        ; Exact mapped bytes FF 15 64 25 5E 00: call dword ptr [0x5e2564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0e4h], 0
        xor eax, eax
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x4a85e9
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0ech], 0
        ; Exact mapped bytes 74 14: je 0x4a84d4
        __asm _emit 0x74
        __asm _emit 0x14
        push 8eh
        push 5d089ch
        ; Exact mapped bytes E8 31 C5 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a84d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4a84b4
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 74 14: je 0x4a84fa
        __asm _emit 0x74
        __asm _emit 0x14
        push 8fh
        push 5d089ch
        ; Exact mapped bytes E8 0B C5 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a84fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4a84da
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 93h
        push 5d089ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 3C 2C 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        push 58aaa8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F 2B 05 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a8549
        __asm _emit 0x75
        __asm _emit 0x14
        push 94h
        push 5d089ch
        ; Exact mapped bytes E8 BC C4 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a8549
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4a8524
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 7D 0C 00: call 0x570309
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4a8581
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0fch], 0
        ; Exact mapped bytes 74 14: je 0x4a857b
        __asm _emit 0x74
        __asm _emit 0x14
        push 96h
        push 5d089ch
        ; Exact mapped bytes E8 8A C4 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a857b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4a855b
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x4a858e
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 5B: jmp 0x4a85e9
        __asm _emit 0xeb
        __asm _emit 0x5b
        push 1
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0e8h
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0e4h]
        push ecx
        ; Exact mapped bytes E8 8B 50 0A 00: call 0x54d63a
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 12ch], eax
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0e8h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes FF 15 F0 29 5E 00: call dword ptr [0x5e29f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 100h], eax
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        cmp dword ptr [edx + 100h], 0
        setne al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
