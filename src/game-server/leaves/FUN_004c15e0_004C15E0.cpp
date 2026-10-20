// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C15E0 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_004c15e0_004C15E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 20 F2 5D 00: cmp eax, dword ptr [0x5df220]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 A8 00 00 00: jae 0x4c169b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x4c169b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 5df120h]
        cmp dword ptr [ecx + eax], -1
        ; Exact mapped bytes 74 66: je 0x4c169b
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 83 3D E4 12 5D 00 01: cmp dword ptr [0x5d12e4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 3C: jne 0x4c167a
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4c1658
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 14: je 0x4c1664
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 74 1A: je 0x4c1670
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 22: jmp 0x4c167a
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push -0ah
        ; Exact mapped bytes FF 15 2C 22 5E 00: call dword ptr [0x5e222c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x4c167a
        __asm _emit 0xeb
        __asm _emit 0x16
        push 0
        push -0bh
        ; Exact mapped bytes FF 15 2C 22 5E 00: call dword ptr [0x5e222c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4c167a
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        push -0ch
        ; Exact mapped bytes FF 15 2C 22 5E 00: call dword ptr [0x5e222c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov dword ptr [edx + ecx], 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x4c16b4
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 D0 FB FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 D5 FB FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
