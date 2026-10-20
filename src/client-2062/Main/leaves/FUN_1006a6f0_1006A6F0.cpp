// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006A6F0 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_1006a6f0_1006A6F0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 10514h]
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x1006a72f
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        ; Exact mapped bytes E8 6B 35 08 00: call 0x100edc70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x1006a71c
        __asm _emit 0x74
        __asm _emit 0x0b
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 2C 03 00 00: mov ax, word ptr [ecx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x1006a71f
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov dword ptr [esi + 104b4h], eax
        mov dword ptr [esi + 10524h], 0
        mov edi, dword ptr [esp + 0ch]
        cmp edi, -1
        ; Exact mapped bytes 74 6D: je 0x1006a7a5
        __asm _emit 0x74
        __asm _emit 0x6d
        mov ecx, dword ptr [esi + 10510h]
        test ecx, ecx
        ; Exact mapped bytes 74 63: je 0x1006a7a5
        __asm _emit 0x74
        __asm _emit 0x63
        push 40000000h
        ; Exact mapped bytes E8 24 35 08 00: call 0x100edc70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10510h]
        mov dword ptr [esi + 104b4h], edi
        mov dword ptr [esi + 10514h], ecx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x1006a784
        __asm _emit 0x74
        __asm _emit 0x19
        xor edx, edx
        ; Exact mapped bytes 66 8B 90 2C 03 00 00: mov dx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, edx
        ; Exact mapped bytes 74 0C: je 0x1006a784
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [esi + 10524h], 40000000h
        ; Exact mapped bytes EB 0A: jmp 0x1006a78e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 10524h], 0
        mov eax, dword ptr [ecx + 4]
        pop edi
        mov dword ptr [esi + 10a20h], eax
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [esi + 10a24h], ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        mov ecx, esi
        mov dword ptr [esi + 10514h], 0
        ; Exact mapped bytes E8 78 4E 00 00: call 0x1006f630
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
