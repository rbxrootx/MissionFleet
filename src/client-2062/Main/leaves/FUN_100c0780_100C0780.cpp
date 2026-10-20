// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C0780 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_100c0780_100C0780() {
    __asm {
        mov eax, dword ptr [ecx + 0c0h]
        push esi
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x100c07d9
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ecx + 0b0h]
        test edx, edx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100c0821
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0b8h]
        test eax, eax
        ; Exact mapped bytes 74 7E: je 0x100c0821
        __asm _emit 0x74
        __asm _emit 0x7e
        lea esi, [eax - 47h]
        cmp edx, esi
        ; Exact mapped bytes 77 0B: ja 0x100c07b5
        __asm _emit 0x77
        __asm _emit 0x0b
        add eax, -47h
        mov dword ptr [ecx + 0b8h], eax
        ; Exact mapped bytes EB 06: jmp 0x100c07bb
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ecx + 0a0h]
        mov edx, dword ptr [ecx + 0b8h]
        pop esi
        mov dword ptr [eax + 80h], edx
        mov dword ptr [ecx + 0c0h], 1
        ret
        mov edx, dword ptr [ecx + 0b4h]
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x100c0821
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ecx + 0bch]
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x100c0821
        __asm _emit 0x74
        __asm _emit 0x34
        lea esi, [eax - 47h]
        cmp edx, esi
        ; Exact mapped bytes 77 0B: ja 0x100c07ff
        __asm _emit 0x77
        __asm _emit 0x0b
        add eax, -47h
        mov dword ptr [ecx + 0bch], eax
        ; Exact mapped bytes EB 06: jmp 0x100c0805
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [ecx + 0bch], edx
        mov eax, dword ptr [ecx + 0a0h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [eax + 80h], edx
        mov dword ptr [ecx + 0c0h], 0
        pop esi
        ret
    }
}
