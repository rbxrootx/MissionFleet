// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58530F60 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_58530f60_58530F60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1214ch], 12h
        ; Exact mapped bytes 75 7C: jne 0x58530fef
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 12118h], 0
        ; Exact mapped bytes 75 5B: jne 0x58530fda
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 47: je 0x58530fcf
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD EC F7 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 37: jne 0x58530fcf
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12114h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12118h], 1
        push 178h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 11f9ch
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 E0 04 00: call 0x5857f010
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x58530fd8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 34 00 00: call 0x58534470
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 15: jmp 0x58530fef
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 12118h], 1
        ; Exact mapped bytes 75 09: jne 0x58530fef
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 34 00 00: call 0x58534470
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
