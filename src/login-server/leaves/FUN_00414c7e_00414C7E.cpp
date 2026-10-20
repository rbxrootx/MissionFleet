// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414C7E .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00414c7e_00414C7E() {
    __asm {
        cmp dword ptr [esp + 8], 0
        ; Exact mapped bytes 75 10: jne 0x414c95
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 3ch]
        shl eax, 4
        lea eax, [ecx + eax + 4]
        ; Exact mapped bytes EB 0D: jmp 0x414ca2
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ecx + 0f4h]
        mov ecx, dword ptr [esp + 4]
        lea eax, [eax + ecx*4]
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
