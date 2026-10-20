// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B0A80 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_100b0a80_100B0A80() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x100b0b61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x100b0ab9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100b0ab2
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push ebx
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x100b0ab9
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x100b0a9c
        __asm _emit 0xeb
        __asm _emit 0xea
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x100b0b61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x100b0b61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push ebp
        push edi
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        mov edx, dword ptr [edi + 4]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 7C 69: jl 0x100b0b58
        __asm _emit 0x7c
        __asm _emit 0x69
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 7D 60: jge 0x100b0b58
        __asm _emit 0x7d
        __asm _emit 0x60
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 51: jl 0x100b0b58
        __asm _emit 0x7c
        __asm _emit 0x51
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D 48: jge 0x100b0b58
        __asm _emit 0x7d
        __asm _emit 0x48
        mov eax, dword ptr [ebx + 8]
        shr eax, 10h
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 1C: jle 0x100b0b37
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov eax, dword ptr [esi + 17ch]
        test eax, eax
        ; Exact mapped bytes 7E 33: jle 0x100b0b58
        __asm _emit 0x7e
        __asm _emit 0x33
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 42 00 00 00: call 0x100b0b70
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop ebp
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1F: jge 0x100b0b58
        __asm _emit 0x7d
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 17ch]
        mov edx, dword ptr [ecx + 2ch]
        sub edx, 7
        cmp eax, edx
        ; Exact mapped bytes 7D 09: jge 0x100b0b58
        __asm _emit 0x7d
        __asm _emit 0x09
        push -1
        mov ecx, esi
        ; Exact mapped bytes E8 18 00 00 00: call 0x100b0b70
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop ebp
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
