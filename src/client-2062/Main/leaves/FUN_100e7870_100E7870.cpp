// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E7870 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_100e7870_100E7870() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 230h], eax
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 234h], edx
        mov dword ptr [ecx + 238h], eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
