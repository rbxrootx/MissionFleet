// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587893C0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_587893c0() {
    __asm {
        mov eax, dword ptr [ecx + 98h]
        test eax, eax
        ; Exact mapped bytes 7E 03: jle 0x587893cd
        __asm _emit 0x7e
        __asm _emit 0x03
        dec eax
        ; Exact mapped bytes EB 05: jmp 0x587893d2
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 3
        mov eax, dword ptr [ecx + eax*4 + 50h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x587893e0
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 7F 02: jg 0x587893e2
        __asm _emit 0x7f
        __asm _emit 0x02
        xor eax, eax
        ret
    }
}
