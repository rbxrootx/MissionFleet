// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C0030 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_004c0030_004C0030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4c0043
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x4c00cc
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 F0 5D 00 00: cmp dword ptr [0x5df014], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2E: jne 0x4c007a
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        cmp eax, 0ffh
        ; Exact mapped bytes 7E 10: jle 0x4c006b
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes E8 10 12 FF FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 61: jmp 0x4c00cc
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ebp + 0ch]
        mov byte ptr [ecx], dl
        mov eax, 1
        ; Exact mapped bytes EB 52: jmp 0x4c00cc
        __asm _emit 0xeb
        __asm _emit 0x52
        mov dword ptr [ebp - 8], 0
        lea eax, [ebp - 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 88 18 5D 00: mov ecx, dword ptr [0x5d1888]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 1
        lea eax, [ebp + 0ch]
        push eax
        push 220h
        ; Exact mapped bytes 8B 0D 24 F0 5D 00: mov ecx, dword ptr [0x5df024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x4c00b9
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x4c00c9
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 B2 11 FF FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x4c00cc
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
