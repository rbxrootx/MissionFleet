// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D3E0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0042d3e0_0042D3E0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x42d3ed
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x42d3ef
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42d3fe
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 8]
        cmp ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 75 F1: jne 0x42d3ed
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 02: jmp 0x42d400
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
