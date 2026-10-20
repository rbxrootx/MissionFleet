// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB3D0 .. +0x35F bytes.
extern "C" __declspec(naked) void FUN_004ab3d0_004AB3D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes A1 B0 12 5D 00: mov eax, dword ptr [0x5d12b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4ab3f6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 32 03 00 00: jmp 0x4ab728
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 F3 9D 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 9B A5 00 00: call 0x4b59a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x4ab519
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -2
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x4ab519
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 6
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 0F 87 AD 00 00 00: ja 0x4ab4e2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 85 2F B7 4A 00: jmp dword ptr [eax*4 + 0x4ab72f]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0xb7
        __asm _emit 0x4a
        __asm _emit 0x00
        push 58c048h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 DA 56 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab45f
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4ab43f
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x4ab508
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58c024h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 AF 56 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab48a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ab46a
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes EB 76: jmp 0x4ab508
        __asm _emit 0xeb
        __asm _emit 0x76
        push 58c000h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 87 56 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab4b2
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4ab492
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes EB 4E: jmp 0x4ab508
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 58bfdch
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 5F 56 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab4da
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4ab4ba
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes EB 26: jmp 0x4ab508
        __asm _emit 0xeb
        __asm _emit 0x26
        push 58bfb0h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 37 56 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab502
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ab4e2
        __asm _emit 0x75
        __asm _emit 0xda
        push 9
        ; Exact mapped bytes E8 81 9D 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 0F 02 00 00: jmp 0x4ab728
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 ED 5D 00: mov eax, dword ptr [0x5ded18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 08: jmp 0x4ab52b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 E6 01 00 00: je 0x4ab71b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        cmp ecx, 4
        ; Exact mapped bytes 74 23: je 0x4ab570
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 14h], 1
        ; Exact mapped bytes 74 1A: je 0x4ab570
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 74 09: je 0x4ab570
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 14h], 3
        ; Exact mapped bytes 75 18: jne 0x4ab588
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        mov edx, dword ptr [ecx*4 + 5d12c0h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x4ab58f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 58bfa8h
        push 4
        ; Exact mapped bytes A0 BC 12 5D 00: mov al, byte ptr [0x5d12bc]
        __asm _emit 0xa0
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes E8 9D FD FF FF: call 0x4ab340
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x4ab5e4
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 8]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 58be84h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 62 55 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab5d7
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x4ab5aa
        __asm _emit 0x75
        __asm _emit 0xcd
        mov dword ptr [ebp - 10h], 0
        push 4
        ; Exact mapped bytes 8A 0D BC 12 5D 00: mov cl, byte ptr [0x5d12bc]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 20h]
        push edx
        ; Exact mapped bytes E8 40 FD FF FF: call 0x4ab340
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x4ab641
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 58be58h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 05 55 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab634
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CD: jne 0x4ab607
        __asm _emit 0x75
        __asm _emit 0xcd
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 50: jne 0x4ab69a
        __asm _emit 0x75
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes 8A 15 BD 12 5D 00: mov dl, byte ptr [0x5d12bd]
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 20h
        push eax
        ; Exact mapped bytes E8 DC FC FF FF: call 0x4ab340
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x4ab69a
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        add ecx, 20h
        push ecx
        push 58bf7ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 AC 54 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab68d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4ab66b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 76: jne 0x4ab716
        __asm _emit 0x75
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 33: je 0x4ab6dc
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 58bf5ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 63 54 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab6d6
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x4ab6a9
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 58bf30h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 30 54 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab709
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CD: jne 0x4ab6dc
        __asm _emit 0x75
        __asm _emit 0xcd
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 08 FE FF FF: jmp 0x4ab523
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 9
        ; Exact mapped bytes E8 6E 9B 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
