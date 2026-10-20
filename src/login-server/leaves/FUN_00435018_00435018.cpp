// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435018 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_00435018_00435018() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        inc eax
        push esi
        xor esi, esi
        mov cl, byte ptr [eax]
        cmp cl, 6ch
        ; Exact mapped bytes 74 08: je 0x435032
        __asm _emit 0x74
        __asm _emit 0x08
        cmp cl, 73h
        ; Exact mapped bytes 75 04: jne 0x435033
        __asm _emit 0x75
        __asm _emit 0x04
        push 1
        pop esi
        inc eax
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        cmp dl, 20h
        ; Exact mapped bytes 74 05: je 0x435042
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dl, 9
        ; Exact mapped bytes 75 06: jne 0x435048
        __asm _emit 0x75
        __asm _emit 0x06
        inc ecx
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB EE: jmp 0x435036
        __asm _emit 0xeb
        __asm _emit 0xee
        cmp byte ptr [eax], 64h
        mov bl, byte ptr [ecx]
        ; Exact mapped bytes 75 0E: jne 0x43505d
        __asm _emit 0x75
        __asm _emit 0x0e
        lea eax, [ebp + 8]
        push 0ah
        push eax
        push ecx
        ; Exact mapped bytes E8 2C C2 FE FF: call 0x421287
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x43506e
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp bl, 2dh
        ; Exact mapped bytes 74 3D: je 0x43509f
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [ebp + 8]
        push 0ah
        push eax
        push ecx
        ; Exact mapped bytes E8 35 C4 FE FF: call 0x4214a3
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x43507a
        __asm _emit 0x75
        __asm _emit 0x05
        cmp bl, 30h
        ; Exact mapped bytes 75 25: jne 0x43509f
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        cmp dl, 20h
        ; Exact mapped bytes 74 05: je 0x435089
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dl, 9
        ; Exact mapped bytes 75 06: jne 0x43508f
        __asm _emit 0x75
        __asm _emit 0x06
        inc ecx
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB EE: jmp 0x43507d
        __asm _emit 0xeb
        __asm _emit 0xee
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 75 0B: jne 0x43509f
        __asm _emit 0x75
        __asm _emit 0x0b
        test esi, esi
        ; Exact mapped bytes 74 15: je 0x4350ad
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ecx, eax
        ; Exact mapped bytes 74 04: je 0x4350a3
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x4350b7
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes EB 07: jmp 0x4350b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx]
        mov dword ptr [ecx], eax
        push 1
        pop eax
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
