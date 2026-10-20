// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898211A .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5898211a() {
    __asm {
        ; Exact mapped bytes 8B 85 E4 FE FF FF: mov eax, dword ptr [ebp - 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1C AB FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
