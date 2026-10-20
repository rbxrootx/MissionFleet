// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58615C00 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_58615c00_58615C00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 1
        ; Exact mapped bytes 75 20: jne 0x58615c30
        __asm _emit 0x75
        __asm _emit 0x20
        push 0ah
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 B4 F4 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb4
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58615c2b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 0ah
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x58615cda
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 0ah
        ; Exact mapped bytes 75 20: jne 0x58615c59
        __asm _emit 0x75
        __asm _emit 0x20
        push 66h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A B4 F4 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb4
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58615c54
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 66h
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x58615cda
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 66h
        ; Exact mapped bytes 75 29: jne 0x58615c8b
        __asm _emit 0x75
        __asm _emit 0x29
        push 67h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 B4 F4 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb4
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58615c7f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 67h
        ; Exact mapped bytes EB 0A: jmp 0x58615c89
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 2
        ; Exact mapped bytes EB 4F: jmp 0x58615cda
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 67h
        ; Exact mapped bytes 75 29: jne 0x58615cbd
        __asm _emit 0x75
        __asm _emit 0x29
        push 68h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F B4 F4 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb4
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58615cb1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 68h
        ; Exact mapped bytes EB 0A: jmp 0x58615cbb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 2
        ; Exact mapped bytes EB 1D: jmp 0x58615cda
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 2
        mov edx, 2
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x58615cda
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0c9h
        mov esp, ebp
        pop ebp
        ret
    }
}
