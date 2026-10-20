// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534470 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_58534470_58534470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12114h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12114h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 12118h], 0
        ; Exact mapped bytes 75 2C: jne 0x585344c6
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 12114h], 0ea6h
        ; Exact mapped bytes 76 18: jbe 0x585344c1
        __asm _emit 0x76
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 0
        push 63h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x58534556
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 12118h], 1
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x58534556
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 12114h], 1770h
        ; Exact mapped bytes 76 71: jbe 0x58534556
        __asm _emit 0x76
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12118h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp - 10h], ecx
        push 0
        push 0
        push 62h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 7F 2F 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7f
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x58534556
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 15 94 75 94 58: mov edx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 18: je 0x58534545
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853454c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes C7 05 94 75 94 58 00 00 00 00: mov dword ptr [0x58947594], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
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
