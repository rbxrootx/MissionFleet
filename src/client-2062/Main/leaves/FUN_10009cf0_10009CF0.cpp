// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10009CF0 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_10009cf0_10009CF0() {
    __asm {
        mov edx, dword ptr [ecx + 4f8h]
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes 66 8B 72 24: mov si, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x24
        mov al, bl
        and al, 1
        and esi, 0fffeh
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        or esi, eax
        ; Exact mapped bytes 66 89 72 24: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 500h]
        ; Exact mapped bytes 66 8B 72 24: mov si, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x24
        and esi, 0fffeh
        or esi, eax
        ; Exact mapped bytes 66 89 72 24: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 504h]
        ; Exact mapped bytes 66 8B 72 24: mov si, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x24
        and esi, 0fffeh
        or esi, eax
        ; Exact mapped bytes 66 89 72 24: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 520h]
        ; Exact mapped bytes 66 8B 72 24: mov si, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x24
        and esi, 0fffeh
        or esi, eax
        ; Exact mapped bytes 66 89 72 24: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 524h]
        ; Exact mapped bytes 66 8B 72 24: mov si, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x24
        and esi, 0fffeh
        or esi, eax
        ; Exact mapped bytes 66 89 72 24: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 528h]
        ; Exact mapped bytes 66 8B 72 24: mov si, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x24
        and esi, 0fffeh
        or esi, eax
        ; Exact mapped bytes 66 89 72 24: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        pop esi
        test ebx, ebx
        pop ebx
        ; Exact mapped bytes 74 5E: je 0x10009de6
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ecx + 468h]
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x10009de6
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes A1 9C 7D 1A 10: mov eax, dword ptr [0x101a7d9c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x10009de6
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 21a34h]
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x10009de6
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 2D: jne 0x10009de6
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 1ch
        ; Exact mapped bytes 7E 17: jle 0x10009dde
        __asm _emit 0x7e
        __asm _emit 0x17
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10009dde
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [eax + 70h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        push ecx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
