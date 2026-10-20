// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100178B0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_100178b0_100178B0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        or byte ptr [ecx + 24h], 1
        mov dword ptr [ecx + 70h], 40000000h
        mov dword ptr [ecx + 84h], eax
        mov dword ptr [ecx + 88h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
