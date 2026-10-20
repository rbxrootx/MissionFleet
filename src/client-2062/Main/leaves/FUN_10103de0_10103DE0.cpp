// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103DE0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_10103de0_10103DE0() {
    __asm {
        mov eax, dword ptr [ecx + 78h]
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        ; Exact mapped bytes 7E 09: jle 0x10103df4
        __asm _emit 0x7e
        __asm _emit 0x09
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x10103dff
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB F7: jmp 0x10103deb
        __asm _emit 0xeb
        __asm _emit 0xf7
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10103dff
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
