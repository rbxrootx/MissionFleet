// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BE60 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_1002be60_1002BE60() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        test edx, edx
        mov esi, ecx
        ; Exact mapped bytes 74 4F: je 0x1002beba
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1002be7d
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 74 12: je 0x1002be8c
        __asm _emit 0x74
        __asm _emit 0x12
        mov dword ptr [ecx + 4], eax
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x1002be8f
        __asm _emit 0x74
        __asm _emit 0x0e
        test eax, eax
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes 74 2D: je 0x1002beb5
        __asm _emit 0x74
        __asm _emit 0x2d
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 10: jmp 0x1002be9c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [esi + 38h], eax
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x1002be9c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 3ch], eax
        mov dword ptr [esi + 34h], eax
        mov dword ptr [esi + 38h], eax
        push edx
        ; Exact mapped bytes E8 E2 08 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        add esp, 4
        dec eax
        mov dword ptr [esi + 24h], eax
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 34h], ecx
        ; Exact mapped bytes EB E2: jmp 0x1002be9c
        __asm _emit 0xeb
        __asm _emit 0xe2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
