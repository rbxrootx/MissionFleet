// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D61A .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_0051d61a_0051D61A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58edaeh
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
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x51d649
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 99 01 00 00: jmp 0x51d7e2
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        ; Exact mapped bytes E8 2A 57 02 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 64 71 68 00 00: cmp dword ptr [0x687164], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 64: jne 0x51d6bd
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes E8 54 44 01 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 7912h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 38 BD 68 00: call dword ptr [0x68bd38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 64 71 68 00: mov dword ptr [0x687164], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 64 71 68 00 00: cmp dword ptr [0x687164], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x51d68f
        __asm _emit 0x75
        __asm _emit 0x11
        push 54h
        push 679288h
        ; Exact mapped bytes E8 B6 B6 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d68f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x51d661
        __asm _emit 0x75
        __asm _emit 0xcc
        lea edx, [ebp - 24h]
        push edx
        push 18h
        ; Exact mapped bytes A1 64 71 68 00: mov eax, dword ptr [0x687164]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 8C B6 68 00: call dword ptr [0x68b68c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x51d6bd
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 0D 58 71 68 00: mov dword ptr [0x687158], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 89 15 5C 71 68 00: mov dword ptr [0x68715c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 71 68 00 00: cmp dword ptr [0x687160], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 7A: jne 0x51d740
        __asm _emit 0x75
        __asm _emit 0x7a
        push 3ch
        push 0
        lea eax, [ebp - 64h]
        push eax
        ; Exact mapped bytes E8 ED 81 F4 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 5C 71 68 00: mov ecx, dword ptr [0x68715c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        sub ecx, 1
        neg ecx
        mov dword ptr [ebp - 64h], ecx
        mov byte ptr [ebp - 4dh], 1
        mov dword ptr [ebp - 54h], 190h
        push 2ah
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x51d70c
        __asm _emit 0x74
        __asm _emit 0x11
        push 6792a4h
        lea edx, [ebp - 48h]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x51d71b
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 6792b0h
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 64h]
        push ecx
        push 0f233h
        ; Exact mapped bytes E8 C7 E4 FC FF: call 0x4ebbf0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x51d731
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ebp - 49h], 20h
        lea edx, [ebp - 64h]
        push edx
        ; Exact mapped bytes FF 15 D0 B3 68 00: call dword ptr [0x68b3d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 60 71 68 00: mov dword ptr [0x687160], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 71 68 00 00: cmp dword ptr [0x687160], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x51d7db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 37 AE FC FF: call 0x4e8591
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes A1 60 71 68 00: mov eax, dword ptr [0x687160]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 AA 69 01 00: call 0x53411c
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        lea ecx, [ebp - 9ch]
        push ecx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 1D 8B 01 00: call 0x5362a7
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 7A 69 01 00: call 0x53411c
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 14: je 0x51d7bf
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 9ch]
        sub eax, dword ptr [ebp - 90h]
        ; Exact mapped bytes 3B 05 5C 71 68 00: cmp eax, dword ptr [0x68715c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0A: jle 0x51d7c9
        __asm _emit 0x7e
        __asm _emit 0x0a
        push 687160h
        ; Exact mapped bytes E8 DD E6 FC FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 68 AE FC FF: call 0x4e8643
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0ah
        ; Exact mapped bytes E8 CA 56 02 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x56
        __asm _emit 0x02
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
