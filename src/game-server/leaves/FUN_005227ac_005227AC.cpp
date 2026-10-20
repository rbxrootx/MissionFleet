// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005227AC .. +0x34A bytes.
extern "C" __declspec(naked) void FUN_005227ac_005227AC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d36dh
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
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        push 0
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7C D6 FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5227f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 92h
        push 5c7638h
        ; Exact mapped bytes E8 13 22 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5227f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5227cd
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x522823
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 4B D6 FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x522823
        __asm _emit 0x75
        __asm _emit 0x14
        push 94h
        push 5c7638h
        ; Exact mapped bytes E8 E2 21 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x522823
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x5227f8
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 05 4B 01 00: call 0x537336
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F6 4A 01 00: call 0x537336
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 EA 4A 01 00: call 0x537336
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 41 4B 01 00: call 0x53739d
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 2A 35 01 00: call 0x535d92
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        neg ecx
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 1A 38 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E2 36 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E6 38 01 00: call 0x536177
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D1 36 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 FB 4A 01 00: call 0x53739d
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 BF 4A 01 00: call 0x537371
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        push 3
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 3A 4D 01 00: call 0x5375fe
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 08: jne 0x5228d9
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 46 FE FF FF: call 0x52271c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 20h], eax
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 75 06: jne 0x5228e5
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [ebp + 24h], edx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 49 4A 01 00: call 0x537336
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 3D 4A 01 00: call 0x537336
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x5229ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 5A 4A 01 00: call 0x537371
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7D 4C 01 00: call 0x5375a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 86 38 01 00: call 0x5361b5
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        neg edx
        push edx
        mov eax, dword ptr [ebp + 18h]
        neg eax
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 53 37 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 1B 36 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 1F 38 01 00: call 0x536177
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 0A 36 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 37 4C 01 00: call 0x5375a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        push 3
        lea edx, [ebp - 30h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 83 4C 01 00: call 0x5375fe
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ebp + 24h]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 22: jne 0x5229ab
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 D8 49 01 00: call 0x537371
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        push 3
        lea ecx, [ebp - 38h]
        push ecx
        lea edx, [ebp - 48h]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 53 4C 01 00: call 0x5375fe
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 20h]
        mov ecx, dword ptr [ebp + 24h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 6A: je 0x522a23
        __asm _emit 0x74
        __asm _emit 0x6a
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 64: je 0x522a23
        __asm _emit 0x74
        __asm _emit 0x64
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C9 F6 FD FF: call 0x502094
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 0D EA FD FF: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 5a0049h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 5A 34 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 3B 34 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 23 69 01 00: call 0x539333
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D7 E9 FD FF: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 08: je 0x522a31
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ebp - 40h]
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes EB 06: jmp 0x522a37
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 38h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 51 F6 FD FF: call 0x502094
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 95 E9 FD FF: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 5a0049h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E2 33 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 C3 33 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AB 68 01 00: call 0x539333
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0C: je 0x522a9a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 59 E9 FD FF: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F0 F5 FD FF: call 0x502094
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 A5 48 01 00: call 0x537355
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 99 48 01 00: call 0x537355
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 8D 48 01 00: call 0x537355
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 81 48 01 00: call 0x537355
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 72 48 01 00: call 0x537355
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
