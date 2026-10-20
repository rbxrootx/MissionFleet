// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1180 .. +0xC6 bytes.
extern "C" __declspec(naked) void FID_conflict___getenv_lk_004C1180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes A1 78 ED 5D 00: mov eax, dword ptr [0x5ded78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 83 3D 64 02 5E 00 00: cmp dword ptr [0x5e0264], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4c119e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4c1242
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 22: jne 0x4c11c6
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 83 3D 80 ED 5D 00 00: cmp dword ptr [0x5ded80], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x4c11c6
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 8E 4D 00 00: call 0x4c5f40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4c11bd
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x4c1242
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 ED 5D 00: mov ecx, dword ptr [0x5ded78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 74: je 0x4c1240
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 6E: je 0x4c1240
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F5 81 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 57: je 0x4c1240
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 DC 81 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 39: jbe 0x4c1235
        __asm _emit 0x76
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 04 11: movsx eax, byte ptr [ecx + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x11
        cmp eax, 3dh
        ; Exact mapped bytes 75 28: jne 0x4c1235
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 D0 4C 00 00: call 0x4c5ef0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4c1235
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [eax + ecx + 1]
        ; Exact mapped bytes EB 0D: jmp 0x4c1242
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB A1: jmp 0x4c11e1
        __asm _emit 0xeb
        __asm _emit 0xa1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
