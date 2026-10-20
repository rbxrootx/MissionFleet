// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103DB0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_10103db0_10103DB0() {
    __asm {
        mov eax, dword ptr [ecx + 78h]
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        ; Exact mapped bytes 7E 0C: jle 0x10103dc7
        __asm _emit 0x7e
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10103dd1
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [eax + 14h]
        dec ecx
        test ecx, ecx
        ; Exact mapped bytes 7F F4: jg 0x10103dbb
        __asm _emit 0x7f
        __asm _emit 0xf4
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x10103dd1
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
