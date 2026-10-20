// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D6350 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_585d6350_585D6350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 21004h], 0
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x585d642a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 207h
        ; Exact mapped bytes 74 47: je 0x585d63c2
        __asm _emit 0x74
        __asm _emit 0x47
        cmp dword ptr [ebp - 0ch], 20ah
        ; Exact mapped bytes 74 05: je 0x585d6389
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x585d642a
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x585d63b3
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 10700h], 3e8h
        ; Exact mapped bytes EB 0D: jmp 0x585d63c0
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10700h], 1f4h
        ; Exact mapped bytes EB 68: jmp 0x585d642a
        __asm _emit 0xeb
        __asm _emit 0x68
        ; Exact mapped bytes 83 3D 0C 5D 96 58 00: cmp dword ptr [0x58965d0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 30: je 0x585d63fb
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 10700h], 3e8h
        ; Exact mapped bytes 83 3D 0C 5D 96 58 00: cmp dword ptr [0x58965d0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x585d63ea
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x585d63f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes A3 0C 5D 96 58: mov dword ptr [0x58965d0c], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 2F: jmp 0x585d642a
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10700h], 1f4h
        ; Exact mapped bytes 83 3D 0C 5D 96 58 00: cmp dword ptr [0x58965d0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x585d641a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x585d6421
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 89 15 0C 5D 96 58: mov dword ptr [0x58965d0c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
