// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0EB0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_587a0eb0_587A0EB0() {
    __asm {
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 2B: je 0x587a0ee2
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x587a0ee2
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x587a0ee2
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes F3 0F 7E 00: movq xmm0, qword ptr [eax]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 08: mov ax, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        or dword ptr [ecx + 8], 20h
        ; Exact mapped bytes 66 0F D6 81 82 00 00 00: movq qword ptr [ecx + 0x82], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x81
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 8A 00 00 00: mov word ptr [ecx + 0x8a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
