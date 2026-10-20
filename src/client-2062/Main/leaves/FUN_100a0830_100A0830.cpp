// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0830 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_100a0830_100A0830() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + eax*4 + 848h]
        xor edx, 0aah
        ; Exact mapped bytes 7D 0B: jge 0x100a084e
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov dword ptr [ecx + eax*4 + 848h], 0aah
        mov eax, dword ptr [ecx + eax*4 + 848h]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
