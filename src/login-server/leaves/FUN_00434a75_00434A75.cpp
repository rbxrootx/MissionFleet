// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434A75 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00434a75_00434A75() {
    __asm {
        push edi
        mov edi, dword ptr [esp + 8]
        test edi, edi
        ; Exact mapped bytes 74 29: je 0x434aa7
        __asm _emit 0x74
        __asm _emit 0x29
        push edi
        ; Exact mapped bytes FF 15 C4 C0 43 00: call dword ptr [0x43c0c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        and eax, 0ffh
        mov ecx, eax
        dec eax
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x434aa0
        __asm _emit 0x74
        __asm _emit 0x0f
        push esi
        lea esi, [eax + 1]
        push edi
        ; Exact mapped bytes FF 15 24 C2 43 00: call dword ptr [0x43c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        dec esi
        ; Exact mapped bytes 75 F6: jne 0x434a95
        __asm _emit 0x75
        __asm _emit 0xf6
        pop esi
        push edi
        ; Exact mapped bytes FF 15 78 C2 43 00: call dword ptr [0x43c278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
