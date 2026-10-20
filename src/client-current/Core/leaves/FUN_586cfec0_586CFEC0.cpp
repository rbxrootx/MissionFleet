// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CFEC0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_586cfec0_586CFEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x586cff9d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 224h]
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x586cff9d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 22ch], 40000000h
        ; Exact mapped bytes 75 31: jne 0x586cff25
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 22ch], 0
        push 0fffffee1h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B B9 E9 FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 78: jmp 0x586cff9d
        __asm _emit 0xeb
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 22ch], 0
        ; Exact mapped bytes 75 6C: jne 0x586cff9d
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 FD DD FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x586cff9d
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 22ch], 40000000h
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 FD DD FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 4A DB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 228h]
        shl ecx, 4
        sub ecx, 118h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 B8 E9 FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb8
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
