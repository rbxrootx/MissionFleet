// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103E60 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_10103e60_10103E60() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 78h]
        test edx, edx
        ; Exact mapped bytes 7E 0C: jle 0x10103e77
        __asm _emit 0x7e
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10103e81
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [eax + 14h]
        dec edx
        test edx, edx
        ; Exact mapped bytes 7F F4: jg 0x10103e6b
        __asm _emit 0x7f
        __asm _emit 0xf4
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x10103e81
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ecx + 80h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
