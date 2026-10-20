// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10077220 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_10077220_10077220() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, 40000000h
        cmp edx, eax
        ; Exact mapped bytes 75 09: jne 0x10077236
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ecx + 80h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ecx + 80h], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
