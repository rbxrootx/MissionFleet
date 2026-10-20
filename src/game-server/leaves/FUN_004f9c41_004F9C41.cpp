// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9C41 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_004f9c41_004F9C41() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 14: je 0x4f9c6a
        __asm _emit 0x74
        __asm _emit 0x14
        push 184h
        push 5c60d0h
        ; Exact mapped bytes E8 9B AD 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9c6a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f9c4d
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1ch
        push 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 F3 F6 FA FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 D0 B2 04 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 1
        push 0
        ; Exact mapped bytes FF 15 08 24 5E 00: call dword ptr [0x5e2408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 1
        push 0
        ; Exact mapped bytes FF 15 08 24 5E 00: call dword ptr [0x5e2408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 06: je 0x4f9cc2
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 39: jne 0x4f9cfb
        __asm _emit 0x75
        __asm _emit 0x39
        push 5c6150h
        push 5c618ch
        ; Exact mapped bytes E8 44 5F FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x4f9ce4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x4f9cf4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x4f9e30
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp + 8]
        or edx, 4
        push edx
        lea eax, [ebp - 1ch]
        push eax
        push 4f9460h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 11 03 FB FF: call 0x4aa030
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 75 07: jne 0x4f9d38
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x4f9e30
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CB 7E 04 00: call 0x541c0b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x4f9d59
        __asm _emit 0x75
        __asm _emit 0x14
        push 19eh
        push 5c60d0h
        ; Exact mapped bytes E8 AC AC 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9d59
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4f9d38
        __asm _emit 0x75
        __asm _emit 0xd9
        push -1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 80 23 5E 00: call dword ptr [0x5e2380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f9d83
        __asm _emit 0x74
        __asm _emit 0x14
        push 19fh
        push 5c60d0h
        ; Exact mapped bytes E8 82 AC 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9d83
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4f9d5f
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x4f9dc9
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 CC 23 5E 00: call dword ptr [0x5e23cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x4f9dc3
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a4h
        push 5c60d0h
        ; Exact mapped bytes E8 42 AC 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9dc3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4f9d9d
        __asm _emit 0x75
        __asm _emit 0xd4
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 52: je 0x4f9e21
        __asm _emit 0x74
        __asm _emit 0x52
        push -1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 80 23 5E 00: call dword ptr [0x5e2380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f9df6
        __asm _emit 0x74
        __asm _emit 0x14
        push 1a9h
        push 5c60d0h
        ; Exact mapped bytes E8 0F AC 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9df6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4f9dcf
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 28h], 0
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 0F: jmp 0x4f9e30
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 00 24 5E 00: call dword ptr [0x5e2400]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
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
