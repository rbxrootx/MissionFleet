// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A631D .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_004a631d_004A631D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 8A 02 00: call 0x4cee04
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 4]
        push eax
        push 67d770h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 25 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AD 26 08 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 74 24: je 0x4a637e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 6B FA 03 00: call 0x4e5dd4
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 67d784h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 24 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4D 27 08 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 14h]
        push edx
        push 67d794h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 24 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 88 27 08 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 18: mov dx, word ptr [ecx + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x18
        push edx
        push 67d7a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 24 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 07 26 08 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 1A: mov dx, word ptr [ecx + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1a
        push edx
        push 67d7b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 24 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E8 25 08 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 1C: mov dx, word ptr [ecx + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1c
        push edx
        push 67d7cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 24 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C9 25 08 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        push edx
        push 67d7e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A 24 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AA 25 08 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 20: mov dx, word ptr [ecx + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x20
        push edx
        push 67d7f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 24 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8B 25 08 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 2eh], 4a34d0h
        ; Exact mapped bytes 75 0F: jne 0x4a6455
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67d808h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 23 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4a6462
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67d840h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 23 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        cmp dword ptr [eax + 2ah], 4a34d0h
        ; Exact mapped bytes 75 0F: jne 0x4a6480
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67d878h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 23 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4a648d
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67d8b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 23 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        push 67d8e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 23 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
