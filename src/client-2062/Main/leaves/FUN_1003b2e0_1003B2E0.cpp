// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003B2E0 .. +0x5 bytes.
extern "C" __declspec(naked) void FUN_1003b2e0_1003B2E0() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 60 08: jmp dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x60
        __asm _emit 0x08
    }
}
