// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58742E50 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_58742e50() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes FF 15 D4 C3 98 58: call dword ptr [0x5898c3d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 50h]
        and dword ptr [esi + 68h], 0fffffffeh
        cmp eax, 4
        ; Exact mapped bytes 74 51: je 0x58742eb6
        __asm _emit 0x74
        __asm _emit 0x51
        cmp eax, 5
        ; Exact mapped bytes 74 4C: je 0x58742eb6
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp eax, 6
        ; Exact mapped bytes 74 47: je 0x58742eb6
        __asm _emit 0x74
        __asm _emit 0x47
        cmp eax, 8
        ; Exact mapped bytes 74 0F: je 0x58742e83
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, 9
        ; Exact mapped bytes 74 0A: je 0x58742e83
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 0ah
        ; Exact mapped bytes 74 05: je 0x58742e83
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [esi + 34h]
        pop esi
        ret
        mov eax, dword ptr [esi + 5ch]
        mov dword ptr [esi + 58h], eax
        mov eax, dword ptr [esi + 30h]
        mov dword ptr [esi + 50h], 2
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x58742ee5
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 5
        test cl, 1
        ; Exact mapped bytes 74 42: je 0x58742ee5
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 30h]
        mov ecx, dword ptr [esi + 5ch]
        mov dword ptr [esi + 58h], ecx
        mov dword ptr [esi + 50h], 3
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x58742ee5
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 0F: je 0x58742ee5
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ret
    }
}
