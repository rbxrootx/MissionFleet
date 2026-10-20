// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AACF0 .. +0x3EC bytes.
extern "C" __declspec(naked) void FUN_004aacf0_004AACF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 B0 12 5D 00: mov eax, dword ptr [0x5d12b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x4aad33
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 C8 06 00 00: call 0x4ab3d0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4aad2d
        __asm _emit 0x75
        __asm _emit 0x21
        push 58bc14h
        push 0
        push 3e1h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 0C 5E 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aad2d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4aad03
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4aad3e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 97 03 00 00: jmp 0x4ab0d5
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 3
        ; Exact mapped bytes FF 15 88 1A 5D 00: call dword ptr [0x5d1a88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x4aad88
        __asm _emit 0x75
        __asm _emit 0x2b
        push 58bed8h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 BC 5D 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aad7d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4aad5d
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 4D 03 00 00: jmp 0x4ab0d5
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 9F 0A 00 00: call 0x4ab830
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4aadb9
        __asm _emit 0x75
        __asm _emit 0x21
        push 58bd18h
        push 0
        push 3f3h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 80 5D 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aadb9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x4aad88
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 43: je 0x4aae1b
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 3A: je 0x4aae1b
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 2A: je 0x4aae1b
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 74 21: je 0x4aae1b
        __asm _emit 0x74
        __asm _emit 0x21
        push 58beb0h
        push 0
        push 3f9h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 1E 5D 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aae1b
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 A7: jne 0x4aadc8
        __asm _emit 0x75
        __asm _emit 0xa7
        ; Exact mapped bytes A1 B0 12 5D 00: mov eax, dword ptr [0x5d12b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x4aaef6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8A 0D BC 12 5D 00: mov cl, byte ptr [0x5d12bc]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1ch
        push edx
        ; Exact mapped bytes E8 FA 04 00 00: call 0x4ab340
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x4aae90
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        mov edx, dword ptr [ecx*4 + 5d12c0h]
        push edx
        push 58be84h
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 AF 5C 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aae8a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BD: jne 0x4aae4d
        __asm _emit 0x75
        __asm _emit 0xbd
        push 4
        ; Exact mapped bytes 8A 0D BC 12 5D 00: mov cl, byte ptr [0x5d12bc]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20h]
        push edx
        ; Exact mapped bytes E8 94 04 00 00: call 0x4ab340
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x4aaef6
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        mov edx, dword ptr [ecx*4 + 5d12c0h]
        push edx
        push 58be58h
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 49 5C 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aaef0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BD: jne 0x4aaeb3
        __asm _emit 0x75
        __asm _emit 0xbd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 75 6C: jne 0x4aaf6b
        __asm _emit 0x75
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0fedcbabch
        ; Exact mapped bytes 75 09: jne 0x4aaf14
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 21: je 0x4aaf35
        __asm _emit 0x74
        __asm _emit 0x21
        push 58be18h
        push 0
        push 40eh
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 04 5C 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aaf35
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C4: jne 0x4aaeff
        __asm _emit 0x75
        __asm _emit 0xc4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 24h
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 8A 0D BD 12 5D 00: mov cl, byte ptr [0x5d12bd]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 19 E4 FF FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 CD A9 00 00: call 0x4b5930
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x4ab0d5
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 2
        ; Exact mapped bytes 75 0D: jne 0x4aaf81
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 07: jne 0x4aaf81
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 21: je 0x4aafad
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bdf8h
        push 0
        push 41bh
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 8C 5B 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aafad
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CE: jne 0x4aaf81
        __asm _emit 0x75
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 1C ED 5D 00: mov eax, dword ptr [0x5ded1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, dword ptr [edx + 10h]
        ; Exact mapped bytes A3 1C ED 5D 00: mov dword ptr [0x5ded1c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B0 12 5D 00: mov ecx, dword ptr [0x5d12b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x4ab0ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 10: je 0x4aafec
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 3E: jmp 0x4ab02a
        __asm _emit 0xeb
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 10 ED 5D 00: mov ecx, dword ptr [0x5ded10]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 21: je 0x4ab018
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bde0h
        push 0
        push 42ah
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 21 5B 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab018
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4aafec
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 89 0D 10 ED 5D 00: mov dword ptr [0x5ded10], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x4ab042
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 3D: jmp 0x4ab07f
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 18 ED 5D 00: mov ecx, dword ptr [0x5ded18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 21: je 0x4ab06e
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bdc8h
        push 0
        push 434h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 CB 5A 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab06e
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4ab042
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 18 ED 5D 00: mov dword ptr [0x5ded18], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 24h
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 8A 0D BD 12 5D 00: mov cl, byte ptr [0x5d12bd]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 D5 E2 FF FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 89 A8 00 00: call 0x4b5930
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 29: jmp 0x4ab0d5
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 8A 0D BD 12 5D 00: mov cl, byte ptr [0x5d12bd]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 20h
        push edx
        ; Exact mapped bytes E8 9E E2 FF FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
