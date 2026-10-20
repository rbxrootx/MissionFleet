// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411300 .. +0x5 bytes.
extern "C" __declspec(naked) void FUN_00411300_00411300() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 60 0C: jmp dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x60
        __asm _emit 0x0c
    }
}
