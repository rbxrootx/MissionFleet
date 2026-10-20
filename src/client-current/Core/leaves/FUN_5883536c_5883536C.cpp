// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883536C .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_5883536c_5883536C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 80 3D 31 84 96 58 00: cmp byte ptr [0x58968431], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x31
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 08: je 0x58835394
        __asm _emit 0x74
        __asm _emit 0x08
        xor eax, eax
        inc eax
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x58835483
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov esi, dword ptr [esi]
        ; Exact mapped bytes C6 05 31 84 96 58 01: mov byte ptr [0x58968431], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x31
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 74 2F: je 0x588353d5
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes FF 35 A4 7A 96 58: push dword ptr [0x58967aa4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push dword ptr [esi + 0ch]
        push dword ptr [esi]
        push 588f1550h
        ; Exact mapped bytes E8 91 6F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 B8 4C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        push ebx
        mov ebx, dword ptr [esi + 0ch]
        push 20h
        push ebx
        ; Exact mapped bytes FF 15 3C 41 89 58: call dword ptr [0x5889413c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 6D: jne 0x58835453
        __asm _emit 0x75
        __asm _emit 0x6d
        push edi
        xor esi, esi
        xor edi, edi
        movzx eax, byte ptr [edi + ebx]
        push eax
        push 588f1584h
        ; Exact mapped bytes E8 DF 72 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 84h]
        add eax, esi
        push eax
        ; Exact mapped bytes E8 56 77 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x77
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 0ch
        add esi, eax
        inc edi
        cmp edi, 20h
        ; Exact mapped bytes 7C D6: jl 0x588353eb
        __asm _emit 0x7c
        __asm _emit 0xd6
        pop edi
        cmp esi, 80h
        ; Exact mapped bytes 73 76: jae 0x58835494
        __asm _emit 0x73
        __asm _emit 0x76
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov byte ptr [ebp + esi - 84h], 0
        ; Exact mapped bytes 74 24: je 0x58835453
        __asm _emit 0x74
        __asm _emit 0x24
        lea eax, [ebp - 84h]
        push eax
        push 588f1590h
        ; Exact mapped bytes E8 13 6F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 3A 4C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 0
        ; Exact mapped bytes E8 37 07 00 00: call 0x58835b91
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 AC 05 00 00: call 0x58835a0d
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        pop ecx
        pop ecx
        pop ebx
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58835481
        __asm _emit 0x74
        __asm _emit 0x14
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 0F: jne 0x58835481
        __asm _emit 0x75
        __asm _emit 0x0f
        add dword ptr [eax + 10h], 2710h
        push 64h
        ; Exact mapped bytes FF 15 0C 42 89 58: call dword ptr [0x5889420c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 C2 BB FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 10 BD FF FF: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
