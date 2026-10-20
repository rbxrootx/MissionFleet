// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CEB50 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_587ceb50() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C8 C0 98 58: call dword ptr [0x5898c0c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
