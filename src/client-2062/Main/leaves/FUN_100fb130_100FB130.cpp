// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB130 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_100fb130_100FB130() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        push edi
        test eax, eax
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x100fb1d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 8]
        mov edi, dword ptr [eax + 48h]
        shr edi, 0ah
        cmp edi, edx
        ; Exact mapped bytes 74 0E: je 0x100fb158
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 0b70h]
        test eax, eax
        ; Exact mapped bytes 75 EC: jne 0x100fb140
        __asm _emit 0x75
        __asm _emit 0xec
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0b6ch]
        test edx, edx
        ; Exact mapped bytes 75 24: jne 0x100fb186
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [eax + 0b70h]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 0b70h]
        test edx, edx
        ; Exact mapped bytes 75 05: jne 0x100fb17a
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes EB 39: jmp 0x100fb1b3
        __asm _emit 0xeb
        __asm _emit 0x39
        mov dword ptr [edx + 0b6ch], 0
        ; Exact mapped bytes EB 2D: jmp 0x100fb1b3
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edi, dword ptr [eax + 0b70h]
        mov dword ptr [edx + 0b70h], edi
        mov edx, dword ptr [eax + 0b70h]
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x100fb1a7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 0b6ch]
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes EB 0C: jmp 0x100fb1b3
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edi, dword ptr [eax + 0b6ch]
        mov dword ptr [edx + 0b6ch], edi
        mov edi, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ecx + 30h]
        dec edi
        cmp eax, edx
        mov dword ptr [ecx + 0ch], edi
        ; Exact mapped bytes 75 07: jne 0x100fb1c8
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ecx + 30h], 0
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100fb1d4
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [eax]
        push 1
        mov ecx, eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
