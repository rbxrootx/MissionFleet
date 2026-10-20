// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873A260 .. +0x4 bytes.
extern "C" __declspec(naked) void FUN_5873a260() {
    __asm {
        ; Exact mapped bytes 8B 41 78: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x78
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
