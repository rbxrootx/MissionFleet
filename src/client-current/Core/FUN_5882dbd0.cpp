// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882DBD0 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_5882dbd0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes C7 05 C4 60 96 58 00 00 00 00: mov dword ptr [0x589660c4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 C8 60 96 58 00 00 00 00: mov dword ptr [0x589660c8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 CC 60 96 58 00 00 00 00: mov dword ptr [0x589660cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CA 04 D4 FF: call 0x5856e0d0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D D0 60 96 58 00: cmp dword ptr [0x589660d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 44: je 0x5882dc54
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes A1 D0 60 96 58: mov eax, dword ptr [0x589660d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], eax
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 1C: je 0x5882dc40
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5882dc4a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes C7 05 D0 60 96 58 00 00 00 00: mov dword ptr [0x589660d0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 5F 96 58 00: cmp dword ptr [0x58965f78], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 45: je 0x5882dca2
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 78 5F 96 58: mov ecx, dword ptr [0x58965f78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a0h], ecx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 1C: je 0x5882dc8e
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5882dc98
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes C7 05 78 5F 96 58 00 00 00 00: mov dword ptr [0x58965f78], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 5F 96 58 00: cmp dword ptr [0x58965f74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 44: je 0x5882dcef
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes A1 74 5F 96 58: mov eax, dword ptr [0x58965f74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a4h], eax
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 1C: je 0x5882dcdb
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5882dce5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes C7 05 74 5F 96 58 00 00 00 00: mov dword ptr [0x58965f74], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 5F 96 58: mov ecx, dword ptr [0x58965f20]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 58965fb8h
        ; Exact mapped bytes FF 15 84 44 89 58: call dword ptr [0x58894484]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        push 94h
        push 0
        lea edx, [ebp - 98h]
        push edx
        ; Exact mapped bytes E8 FC F0 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 98h], 94h
        lea eax, [ebp - 98h]
        push eax
        ; Exact mapped bytes FF 15 34 41 89 58: call dword ptr [0x58894134]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 88h], 2
        ; Exact mapped bytes 75 0E: jne 0x5882dd46
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 C0 44 89 58: call dword ptr [0x588944c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 00 33 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
