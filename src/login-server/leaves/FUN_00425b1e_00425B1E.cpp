// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425B1E .. +0x287 bytes.
extern "C" __declspec(naked) void FUN_00425b1e_00425B1E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        push 0ch
        pop edi
        xor ebx, ebx
        push edi
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes E8 D6 CA FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 0D 10 D1 44 00 FF: or dword ptr [0x44d110], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 83 0D 00 D1 44 00 FF: or dword ptr [0x44d100], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 89 1D 88 FE 44 00: mov dword ptr [0x44fe88], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esp], 4400b0h
        ; Exact mapped bytes E8 0F 1A 00 00: call 0x427563
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        cmp esi, ebx
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x425c5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 06 CB FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp], 44fe90h
        ; Exact mapped bytes FF 15 0C C2 43 00: call dword ptr [0x43c20c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 25 02 00 00: je 0x425da0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 90 FE 44 00: mov eax, dword ptr [0x44fe90]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E4 FE 44 00: mov ecx, dword ptr [0x44fee4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        imul eax, eax, 3ch
        ; Exact mapped bytes 66 39 1D D6 FE 44 00: cmp word ptr [0x44fed6], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push 1
        pop edx
        ; Exact mapped bytes A3 68 D0 44 00: mov dword ptr [0x44d068], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 88 FE 44 00: mov dword ptr [0x44fe88], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x425bac
        __asm _emit 0x74
        __asm _emit 0x0c
        mov esi, ecx
        imul esi, esi, 3ch
        add eax, esi
        ; Exact mapped bytes A3 68 D0 44 00: mov dword ptr [0x44d068], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 1D 2A FF 44 00: cmp word ptr [0x44ff2a], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x425bd0
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes A1 38 FF 44 00: mov eax, dword ptr [0x44ff38]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x425bd0
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, ecx
        ; Exact mapped bytes 89 15 6C D0 44 00: mov dword ptr [0x44d06c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        imul eax, eax, 3ch
        ; Exact mapped bytes A3 70 D0 44 00: mov dword ptr [0x44d070], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x425bdc
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 89 1D 6C D0 44 00: mov dword ptr [0x44d06c], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D 70 D0 44 00: mov dword ptr [0x44d070], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        lea eax, [ebp - 4]
        ; Exact mapped bytes 8B 35 88 C2 43 00: mov esi, dword ptr [0x43c288]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push ebx
        push 3fh
        mov edi, 220h
        ; Exact mapped bytes FF 35 F4 D0 44 00: push dword ptr [0x44d0f4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        push -1
        push 44fe94h
        push edi
        ; Exact mapped bytes FF 35 5C FF 44 00: push dword ptr [0x44ff5c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x425c18
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 75 0B: jne 0x425c18
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes A1 F4 D0 44 00: mov eax, dword ptr [0x44d0f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        and byte ptr [eax + 3fh], 0
        ; Exact mapped bytes EB 08: jmp 0x425c20
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes A1 F4 D0 44 00: mov eax, dword ptr [0x44d0f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        and byte ptr [eax], 0
        lea eax, [ebp - 4]
        push eax
        push ebx
        push 3fh
        ; Exact mapped bytes FF 35 F8 D0 44 00: push dword ptr [0x44d0f8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        push -1
        push 44fee8h
        push edi
        ; Exact mapped bytes FF 35 5C FF 44 00: push dword ptr [0x44ff5c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x425d8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x425d8f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 D0 44 00: mov eax, dword ptr [0x44d0f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        and byte ptr [eax + 3fh], 0
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x425da0
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x425d99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C FF 44 00: mov eax, dword ptr [0x44ff3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 74 11: je 0x425c7f
        __asm _emit 0x74
        __asm _emit 0x11
        push eax
        push esi
        ; Exact mapped bytes E8 0B CA FF FF: call 0x422680
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x425d99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 3C FF 44 00: push dword ptr [0x44ff3c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 94 98 FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 B0 8E FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        push eax
        ; Exact mapped bytes E8 4D 97 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp eax, ebx
        ; Exact mapped bytes A3 3C FF 44 00: mov dword ptr [0x44ff3c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x425d99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push eax
        ; Exact mapped bytes E8 D2 04 00 00: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 B7 C9 FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        push 3
        push esi
        ; Exact mapped bytes FF 35 F4 D0 44 00: push dword ptr [0x44d0f4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 2E 0A 00 00: call 0x4266f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 D0 44 00: mov eax, dword ptr [0x44d0f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        add esi, 3
        add esp, 18h
        and byte ptr [eax + 3], 0
        cmp byte ptr [esi], 2dh
        ; Exact mapped bytes 75 08: jne 0x425cde
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [ebp - 8], 1
        inc esi
        push esi
        ; Exact mapped bytes E8 5F 8D FF FF: call 0x41ea43
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov bl, 30h
        mov ecx, eax
        imul ecx, ecx, 0e10h
        ; Exact mapped bytes 89 0D 68 D0 44 00: mov dword ptr [0x44d068], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [esi]
        cmp al, 2bh
        ; Exact mapped bytes 74 08: je 0x425d03
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, bl
        ; Exact mapped bytes 7C 07: jl 0x425d06
        __asm _emit 0x7c
        __asm _emit 0x07
        cmp al, 39h
        ; Exact mapped bytes 7F 03: jg 0x425d06
        __asm _emit 0x7f
        __asm _emit 0x03
        inc esi
        ; Exact mapped bytes EB EF: jmp 0x425cf5
        __asm _emit 0xeb
        __asm _emit 0xef
        cmp byte ptr [esi], 3ah
        ; Exact mapped bytes 75 4E: jne 0x425d59
        __asm _emit 0x75
        __asm _emit 0x4e
        inc esi
        push esi
        ; Exact mapped bytes E8 31 8D FF FF: call 0x41ea43
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 3ch
        pop ecx
        ; Exact mapped bytes 8B 0D 68 D0 44 00: mov ecx, dword ptr [0x44d068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        add ecx, eax
        ; Exact mapped bytes 89 0D 68 D0 44 00: mov dword ptr [0x44d068], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [esi]
        cmp al, bl
        ; Exact mapped bytes 7C 07: jl 0x425d31
        __asm _emit 0x7c
        __asm _emit 0x07
        cmp al, 39h
        ; Exact mapped bytes 7F 03: jg 0x425d31
        __asm _emit 0x7f
        __asm _emit 0x03
        inc esi
        ; Exact mapped bytes EB F3: jmp 0x425d24
        __asm _emit 0xeb
        __asm _emit 0xf3
        cmp byte ptr [esi], 3ah
        ; Exact mapped bytes 75 23: jne 0x425d59
        __asm _emit 0x75
        __asm _emit 0x23
        inc esi
        push esi
        ; Exact mapped bytes E8 06 8D FF FF: call 0x41ea43
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes 8B 0D 68 D0 44 00: mov ecx, dword ptr [0x44d068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        add ecx, eax
        ; Exact mapped bytes 89 0D 68 D0 44 00: mov dword ptr [0x44d068], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [esi]
        cmp al, bl
        ; Exact mapped bytes 7C 07: jl 0x425d59
        __asm _emit 0x7c
        __asm _emit 0x07
        cmp al, 39h
        ; Exact mapped bytes 7F 03: jg 0x425d59
        __asm _emit 0x7f
        __asm _emit 0x03
        inc esi
        ; Exact mapped bytes EB F3: jmp 0x425d4c
        __asm _emit 0xeb
        __asm _emit 0xf3
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x425d67
        __asm _emit 0x74
        __asm _emit 0x08
        neg ecx
        ; Exact mapped bytes 89 0D 68 D0 44 00: mov dword ptr [0x44d068], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        test eax, eax
        ; Exact mapped bytes A3 6C D0 44 00: mov dword ptr [0x44d06c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x425d8f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 3
        push esi
        ; Exact mapped bytes FF 35 F8 D0 44 00: push dword ptr [0x44d0f8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 6F 09 00 00: call 0x4266f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 D0 44 00: mov eax, dword ptr [0x44d0f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        add esp, 0ch
        and byte ptr [eax + 3], 0
        ; Exact mapped bytes EB 11: jmp 0x425da0
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes A1 F8 D0 44 00: mov eax, dword ptr [0x44d0f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        and byte ptr [eax], 0
        ; Exact mapped bytes EB 07: jmp 0x425da0
        __asm _emit 0xeb
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes E8 CC C8 FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
