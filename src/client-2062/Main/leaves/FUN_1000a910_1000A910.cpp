// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000A910 .. +0x4 bytes.
extern "C" __declspec(naked) void FUN_1000a910_1000A910() {
    __asm {
        ; Exact mapped bytes 8B 41 78: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x78
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
