// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853A00 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58853a00() {
    __asm {
        mov eax, dword ptr [esp + 8]
        imul eax, eax, 3bh
        cdq
        and edx, 7ffh
        add eax, edx
        mov edx, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + edx*4 + 108h]
        sar eax, 0bh
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
