// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F66E8 .. +0x2E8 bytes.
extern "C" __declspec(naked) void FUN_004f66e8_004F66E8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 7ch], ecx
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f6719
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c47h
        push 5c5574h
        ; Exact mapped bytes E8 EC E2 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6719
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f66f4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 D7 86 FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 54 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 58: jne 0x4f6793
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 34h]
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4f6759
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 12: jmp 0x4f676b
        __asm _emit 0xeb
        __asm _emit 0x12
        push 4
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 22: je 0x4f6793
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        push 0
        push 36bh
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 06: je 0x4f6793
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 B6 F5 03 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 08 59 04 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A2 F5 03 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 9A F5 03 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        and edx, 40000000h
        test edx, edx
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x4f687d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 30: je 0x4f67fe
        __asm _emit 0x74
        __asm _emit 0x30
        push -10h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        and ecx, 10000000h
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x4f67f7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 74h]
        and edx, 20000000h
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4f67fe
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 70h], 28h
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 3E: jne 0x4f6849
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes E8 F0 ED 03 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 35 53 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        lea eax, [ebp - 70h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        ; Exact mapped bytes E8 AC 6C F9 FF: call 0x48d4d5
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 25 6D F9 FF: call 0x48d554
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6d
        __asm _emit 0xf9
        __asm _emit 0xff
        lea edx, [ebp - 5ch]
        push edx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 7A F9 03 00: call 0x5361b5
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6E F9 03 00: call 0x5361b5
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x4f6878
        __asm _emit 0xeb
        __asm _emit 0x2f
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [ebp - 70h]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 6F 6C F9 FF: call 0x48d4d5
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E8 6C F9 FF: call 0x48d554
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xff
        lea edx, [ebp - 5ch]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3D F9 03 00: call 0x5361b5
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x4f690d
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f68af
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c85h
        push 5c5574h
        ; Exact mapped bytes E8 56 E1 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f68af
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4f688d
        __asm _emit 0x75
        __asm _emit 0xd8
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 84 27 5E 00: call dword ptr [0x5e2784]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f68e5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c88h
        push 5c5574h
        ; Exact mapped bytes E8 20 E1 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f68e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4f68c3
        __asm _emit 0x75
        __asm _emit 0xd8
        lea edx, [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 84 27 5E 00: call dword ptr [0x5e2784]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push 2
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 80 27 5E 00: call dword ptr [0x5e2780]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [ebp - 3ch]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 18 F5 03 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [ebp - 38h]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 0F F5 03 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov dword ptr [ebp - 4], esi
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 08: jge 0x4f695b
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 22: jmp 0x4f697d
        __asm _emit 0xeb
        __asm _emit 0x22
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 D7 F4 03 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 10: jle 0x4f697d
        __asm _emit 0x7e
        __asm _emit 0x10
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 C5 F4 03 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        sub edx, eax
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7D 08: jge 0x4f698d
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 22: jmp 0x4f69af
        __asm _emit 0xeb
        __asm _emit 0x22
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 BB F4 03 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, eax
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 10: jle 0x4f69af
        __asm _emit 0x7e
        __asm _emit 0x10
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 A9 F4 03 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, eax
        mov dword ptr [ebp - 4], ecx
        push 15h
        push -1
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 C9 88 FF FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
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
