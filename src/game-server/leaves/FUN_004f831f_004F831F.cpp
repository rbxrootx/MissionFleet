// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F831F .. +0x284 bytes.
extern "C" __declspec(naked) void FUN_004f831f_004F831F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 0ch], -2
        ; Exact mapped bytes 75 56: jne 0x4f8387
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes E8 0D D1 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax + 1038h], 0
        ; Exact mapped bytes 75 14: jne 0x4f8353
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cfh
        push 5c5b58h
        ; Exact mapped bytes E8 B2 C6 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8353
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4f8331
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 D5 D0 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x4f859a
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp + 0ch], -3
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x4f8465
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 08: jmp 0x4f83c6
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x4f845d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x4f845d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 09: jmp 0x4f83ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ch
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 61: je 0x4f8458
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 58: je 0x4f8458
        __asm _emit 0x74
        __asm _emit 0x58
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 52: jne 0x4f8458
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 45: jne 0x4f8456
        __asm _emit 0x75
        __asm _emit 0x45
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 08: jne 0x4f841f
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 24: je 0x4f8443
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 31: je 0x4f8456
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 29: je 0x4f8456
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 A4 53 F9 FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4f8456
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 4], ecx
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 8D: jmp 0x4f83e5
        __asm _emit 0xeb
        __asm _emit 0x8d
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x4f83be
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x4f859a
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 20: je 0x4f848b
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 0ch]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4f8498
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 111h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 30: call dword ptr [edx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x30
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 08: jmp 0x4f84b0
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x4f8598
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 14: jne 0x4f84d8
        __asm _emit 0x75
        __asm _emit 0x14
        push 114h
        push 5c5b58h
        ; Exact mapped bytes E8 2D C5 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f84d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4f84ba
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 02 B6 FF FF: call 0x4f3af8
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x4f8593
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 E8 5D 00: mov ecx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 5A: je 0x4f856a
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 20: jne 0x4f8536
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5c5b7ch
        ; Exact mapped bytes E8 E4 76 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 34: jmp 0x4f856a
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 2E: jle 0x4f856a
        __asm _emit 0x7e
        __asm _emit 0x2e
        ; Exact mapped bytes A1 78 E8 5D 00: mov eax, dword ptr [0x5de878]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x4f856a
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 5c5ba8h
        ; Exact mapped bytes E8 AE 76 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 31 F8 FF FF: call 0x4f7dc2
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x4f859a
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 10 FF FF FF: jmp 0x4f84a8
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
