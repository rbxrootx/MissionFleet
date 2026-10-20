// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00558D09 .. +0x216 bytes.
extern "C" __declspec(naked) void FUN_00558d09_00558D09() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x558d40
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2E 71 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x71
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x558d40
        __asm _emit 0x75
        __asm _emit 0x14
        push 191h
        push 5cfe58h
        ; Exact mapped bytes E8 C5 BC FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558d40
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x558d15
        __asm _emit 0x75
        __asm _emit 0xcf
        mov dword ptr [ebp - 8], 0
        lea edx, [ebp - 4]
        push edx
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 78 D9 FF FF: call 0x5566d9
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x558d86
        __asm _emit 0x75
        __asm _emit 0x21
        push 58eae8h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 10 31 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x558d86
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x558f16
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x558da0
        __asm _emit 0x75
        __asm _emit 0x14
        push 19dh
        push 5cfe58h
        ; Exact mapped bytes E8 65 BC FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558da0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x558d86
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 26: jne 0x558dd2
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 20: jne 0x558dd2
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x558f16
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x558e8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x558e8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5F 70 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x70
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x558e0f
        __asm _emit 0x75
        __asm _emit 0x14
        push 1aah
        push 5cfe58h
        ; Exact mapped bytes E8 F6 BB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558e0f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x558de6
        __asm _emit 0x75
        __asm _emit 0xd1
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 30 70 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x70
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x558e3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1abh
        push 5cfe58h
        ; Exact mapped bytes E8 C7 BB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558e3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x558e15
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 3A: jne 0x558e8a
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 0D 75 F5 FF: call 0x4b0370
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x558e8a
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x558f16
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 55: je 0x558ee5
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 66 C7 45 E0 03 00: mov word ptr [ebp - 0x20], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 1
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 10h], 20h
        lea edx, [ebp - 24h]
        push edx
        push 20h
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x558ee5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 31: jmp 0x558f16
        __asm _emit 0xeb
        __asm _emit 0x31
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1A: je 0x558f05
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
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
