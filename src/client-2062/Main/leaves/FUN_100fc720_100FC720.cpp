// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FC720 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_100fc720_100FC720() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 164h], eax
        mov dword ptr [ecx + 1a0h], eax
        mov eax, dword ptr [esp + 8]
        mov dword ptr [ecx + 168h], eax
        mov dword ptr [ecx + 1a4h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
