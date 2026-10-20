// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58860F94 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_58860f94_58860F94() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        mov dl, byte ptr [eax]
        cmp dl, 6ah
        ; Exact mapped bytes 0F 87 BF 00 00 00: ja 0x58861061
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x58861055
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dl, 49h
        ; Exact mapped bytes 74 4A: je 0x58860ff7
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dl, 4ch
        ; Exact mapped bytes 74 39: je 0x58860feb
        __asm _emit 0x74
        __asm _emit 0x39
        cmp dl, 54h
        ; Exact mapped bytes 74 28: je 0x58860fdf
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dl, 68h
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x588610a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + 1]
        push ebx
        mov bl, byte ptr [edx]
        cmp bl, 68h
        ; Exact mapped bytes 75 03: jne 0x58860fce
        __asm _emit 0x75
        __asm _emit 0x03
        lea edx, [eax + 2]
        xor eax, eax
        mov dword ptr [ecx + 8], edx
        cmp bl, 68h
        pop ebx
        setne al
        inc eax
        mov dword ptr [ecx + 20h], eax
        ret
        inc eax
        mov dword ptr [ecx + 20h], 0bh
        mov dword ptr [ecx + 8], eax
        ret
        inc eax
        mov dword ptr [ecx + 20h], 8
        mov dword ptr [ecx + 8], eax
        ret
        mov dl, byte ptr [eax + 1]
        cmp dl, 33h
        ; Exact mapped bytes 75 18: jne 0x58861017
        __asm _emit 0x75
        __asm _emit 0x18
        cmp byte ptr [eax + 2], 32h
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x588610a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 3
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 20h], 9
        ret
        cmp dl, 36h
        ; Exact mapped bytes 75 18: jne 0x58861034
        __asm _emit 0x75
        __asm _emit 0x18
        cmp byte ptr [eax + 2], 34h
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x588610a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 3
        mov dword ptr [ecx + 20h], 0ah
        mov dword ptr [ecx + 8], eax
        ret
        cmp dl, 64h
        ; Exact mapped bytes 74 19: je 0x58861052
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dl, 69h
        ; Exact mapped bytes 74 14: je 0x58861052
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dl, 6fh
        ; Exact mapped bytes 74 0F: je 0x58861052
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dl, 75h
        ; Exact mapped bytes 74 0A: je 0x58861052
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dl, 78h
        ; Exact mapped bytes 74 05: je 0x58861052
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dl, 58h
        ; Exact mapped bytes 75 56: jne 0x588610a8
        __asm _emit 0x75
        __asm _emit 0x56
        inc eax
        ; Exact mapped bytes EB B7: jmp 0x5886100c
        __asm _emit 0xeb
        __asm _emit 0xb7
        inc eax
        mov dword ptr [ecx + 20h], 5
        mov dword ptr [ecx + 8], eax
        ret
        cmp dl, 6ch
        ; Exact mapped bytes 74 22: je 0x58861088
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dl, 74h
        ; Exact mapped bytes 74 11: je 0x5886107c
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dl, 7ah
        ; Exact mapped bytes 75 38: jne 0x588610a8
        __asm _emit 0x75
        __asm _emit 0x38
        inc eax
        mov dword ptr [ecx + 20h], 6
        mov dword ptr [ecx + 8], eax
        ret
        inc eax
        mov dword ptr [ecx + 20h], 7
        mov dword ptr [ecx + 8], eax
        ret
        lea edx, [eax + 1]
        cmp byte ptr [edx], 6ch
        ; Exact mapped bytes 75 0E: jne 0x5886109e
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        mov dword ptr [ecx + 20h], 4
        mov dword ptr [ecx + 8], eax
        ret
        mov dword ptr [ecx + 8], edx
        mov dword ptr [ecx + 20h], 3
        ret
    }
}
