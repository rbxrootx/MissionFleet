// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A67C0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587a67c0_587A67C0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x587a67db
        __asm _emit 0x74
        __asm _emit 0x13
        cmp byte ptr [eax + 150h], 0
        ; Exact mapped bytes 74 0A: je 0x587a67db
        __asm _emit 0x74
        __asm _emit 0x0a
        or dword ptr [eax + 7ch], 2
        mov eax, 7
        ret
        mov eax, 1
        ret
    }
}
