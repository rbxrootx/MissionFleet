// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58736F40 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58736f40() {
    __asm {
        mov eax, dword ptr [esp + 8]
        lea eax, [eax + eax*4]
        add byte ptr [ecx + eax*4 + 109h], 0ffh
        lea eax, [ecx + eax*4]
        ; Exact mapped bytes 75 0A: jne 0x58736f5e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [eax + 110h], 0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
