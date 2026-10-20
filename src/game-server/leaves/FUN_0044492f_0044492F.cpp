// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044492F .. +0x310 bytes.
extern "C" __declspec(naked) void FUN_0044492f_0044492F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57af8eh
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
        sub esp, 144h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 150h]
        mov ecx, 51h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 150h], ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 340h
        ; Exact mapped bytes E8 66 71 0F 00: call 0x53bae0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x71
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x444985
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9B 02 00 00: jmp 0x444c20
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 340h
        ; Exact mapped bytes E8 AB 2E 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 83 7C 02 00 00: jae 0x444c1b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 13ch]
        ; Exact mapped bytes E8 5D C5 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 340h
        ; Exact mapped bytes E8 74 00 09 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 36 02 00 00: je 0x444c09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 1
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 20h], 3ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], ecx
        mov esi, esp
        push 5b6738h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 33 1B 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D5 3D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x444a55
        __asm _emit 0x74
        __asm _emit 0x46
        mov esi, esp
        push 5b6748h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 1B 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B4 3D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x444a55
        __asm _emit 0x74
        __asm _emit 0x25
        mov esi, esp
        push 5b6754h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 1A 00 00: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 93 3D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x444b0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F3 1A 00 00: call 0x446550
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 148h], esp
        push eax
        ; Exact mapped bytes E8 28 CC 0E 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xcc
        __asm _emit 0x0e
        __asm _emit 0x00
        lea edx, [ebp - 14ch]
        push edx
        lea eax, [ebp - 144h]
        push eax
        ; Exact mapped bytes E8 18 A9 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa9
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1C CD 0E 00: call 0x5317a2
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 B0 C9 0E 00: call 0x531442
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 4
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 76 CA 0E 00: call 0x53151a
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 32 CA 0E 00: call 0x5314e4
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 E8 C9 0E 00: call 0x5314a6
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 AC C9 0E 00: call 0x531476
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 5b6760h
        lea ecx, [ebp - 138h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 18h
        cmp esi, esp
        ; Exact mapped bytes E8 F9 3C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        lea edx, [ebp - 138h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 340h
        ; Exact mapped bytes E8 E4 2D 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x444be3
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 91 50 01 00 00: movsx edx, byte ptr [ecx + 0x150]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x444be3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov eax, dword ptr [ebp - 10h]
        add eax, 150h
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 340h
        ; Exact mapped bytes E8 A6 2D 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 5
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 168h]
        mov esi, esp
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 5b6770h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 6B 3C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 340h
        ; Exact mapped bytes E8 56 2D 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 6
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 168h]
        mov esi, esp
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 5b6774h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 1B 3C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 340h
        ; Exact mapped bytes E8 06 2D 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 7
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E 19 00 00: call 0x446570
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10060000h
        ; Exact mapped bytes 75 09: jne 0x444c02
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 5b6778h
        ; Exact mapped bytes EB 07: jmp 0x444c09
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 5b6780h
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 13ch]
        ; Exact mapped bytes E8 31 8C 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
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
        add esp, 150h
        cmp ebp, esp
        ; Exact mapped bytes E8 A7 3B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
