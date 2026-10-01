// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x10109C00 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_10109c00() {
    __asm {
        mov eax, dword ptr [ecx + 50h]
        add eax, -2
        cmp eax, 4
        ; Exact mapped bytes 77 1B: ja 0x10109c26
        __asm _emit 0x77
        __asm _emit 0x1b
        ; Exact mapped bytes FF 24 85 2C 9C 10 10: jmp dword ptr [eax*4 + 0x10109c2c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x10
        mov dword ptr [ecx + 50h], 1
        xor eax, eax
        ret
        mov dword ptr [ecx + 50h], 5
        xor eax, eax
        ret
        mov eax, dword ptr [ecx + 34h]
        ret
    }
}
