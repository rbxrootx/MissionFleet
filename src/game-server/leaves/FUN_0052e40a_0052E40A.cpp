// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E40A .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_0052e40a_0052E40A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f2ceh
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
        sub esp, 0ach
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x52e439
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 99 01 00 00: jmp 0x52e5d2
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        ; Exact mapped bytes E8 9A 98 01 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 EC 5D 00 00: cmp dword ptr [0x5dec44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 64: jne 0x52e4ad
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes E8 F4 70 00 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 7912h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 78 28 5E 00: call dword ptr [0x5e2878]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 44 EC 5D 00: mov dword ptr [0x5dec44], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 EC 5D 00 00: cmp dword ptr [0x5dec44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x52e47f
        __asm _emit 0x75
        __asm _emit 0x11
        push 54h
        push 5ccab0h
        ; Exact mapped bytes E8 86 65 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52e47f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x52e451
        __asm _emit 0x75
        __asm _emit 0xcc
        lea edx, [ebp - 24h]
        push edx
        push 18h
        ; Exact mapped bytes A1 44 EC 5D 00: mov eax, dword ptr [0x5dec44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 21 5E 00: call dword ptr [0x5e2160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x52e4ad
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 0D 38 EC 5D 00: mov dword ptr [0x5dec38], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 89 15 3C EC 5D 00: mov dword ptr [0x5dec3c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 EC 5D 00 00: cmp dword ptr [0x5dec40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 7A: jne 0x52e530
        __asm _emit 0x75
        __asm _emit 0x7a
        push 3ch
        push 0
        lea eax, [ebp - 64h]
        push eax
        ; Exact mapped bytes E8 AD AE F7 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 3C EC 5D 00: mov ecx, dword ptr [0x5dec3c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        sub ecx, 1
        neg ecx
        mov dword ptr [ebp - 64h], ecx
        mov byte ptr [ebp - 4dh], 1
        mov dword ptr [ebp - 54h], 190h
        push 2ah
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x52e4fc
        __asm _emit 0x74
        __asm _emit 0x11
        push 5ccacch
        lea edx, [ebp - 48h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x52e50b
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 5ccad8h
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 64h]
        push ecx
        push 0f233h
        ; Exact mapped bytes E8 17 87 FD FF: call 0x506c30
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x52e521
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ebp - 49h], 20h
        lea edx, [ebp - 64h]
        push edx
        ; Exact mapped bytes FF 15 94 21 5E 00: call dword ptr [0x5e2194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 40 EC 5D 00: mov dword ptr [0x5dec40], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 EC 5D 00 00: cmp dword ptr [0x5dec40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x52e5cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 93 50 FD FF: call 0x5035dd
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes A1 40 EC 5D 00: mov eax, dword ptr [0x5dec40]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 62 97 00 00: call 0x537cc4
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        lea ecx, [ebp - 9ch]
        push ecx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 20 B9 00 00: call 0x539e9a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 32 97 00 00: call 0x537cc4
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 14: je 0x52e5af
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 9ch]
        sub eax, dword ptr [ebp - 90h]
        ; Exact mapped bytes 3B 05 3C EC 5D 00: cmp eax, dword ptr [0x5dec3c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x52e5b9
        __asm _emit 0x7e
        __asm _emit 0x0a
        push 5dec40h
        ; Exact mapped bytes E8 2D 89 FD FF: call 0x506ee6
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 C4 50 FD FF: call 0x50368f
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0ah
        ; Exact mapped bytes E8 3A 98 01 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x98
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
        ret
    }
}
