// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3B20 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_587c3b20_587C3B20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes 83 3D 9C 5F 96 58 00: cmp dword ptr [0x58965f9c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 32: je 0x587c3b61
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes A1 9C 5F 96 58: mov eax, dword ptr [0x58965f9c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x587c3b50
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x587c3b57
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes C7 05 9C 5F 96 58 00 00 00 00: mov dword ptr [0x58965f9c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x587c3b87
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 94 5F 96 58: mov ecx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 94 5F 96 58: mov eax, dword ptr [0x58965f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        ; Exact mapped bytes C7 05 94 5F 96 58 00 00 00 00: mov dword ptr [0x58965f94], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x587c3bae
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 98 5F 96 58: mov edx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 98 5F 96 58: mov ecx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 05 98 5F 96 58 00 00 00 00: mov dword ptr [0x58965f98], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 5F 96 58 00: cmp dword ptr [0x58965fa4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x587c3bd4
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes A1 A4 5F 96 58: mov eax, dword ptr [0x58965fa4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 8B 15 A4 5F 96 58: mov edx, dword ptr [0x58965fa4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ecx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes C7 05 A4 5F 96 58 00 00 00 00: mov dword ptr [0x58965fa4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
