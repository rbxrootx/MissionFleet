// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100436B0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_100436b0_100436B0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        lea eax, [eax + eax*4]
        shl eax, 1
        mov dword ptr [ecx + 0c0h], eax
        mov eax, dword ptr [esp + 8]
        lea edx, [eax + eax*4]
        shl edx, 1
        mov dword ptr [ecx + 0bch], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
