// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BCD20 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_587bcd20_587BCD20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 33: je 0x587bcd65
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x587bcd54
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x587bcd5b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 33: je 0x587bcda1
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x587bcd90
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587bcd97
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 33: je 0x587bcddd
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x587bcdcc
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587bcdd3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 83 3D 28 5F 96 58 00: cmp dword ptr [0x58965f28], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x587bce04
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 28 5F 96 58: mov edx, dword ptr [0x58965f28]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 28 5F 96 58: mov ecx, dword ptr [0x58965f28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 05 28 5F 96 58 00 00 00 00: mov dword ptr [0x58965f28], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
