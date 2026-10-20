// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E97B .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5897e97b() {
    __asm {
        ; Exact mapped bytes 8B 85 48 FA FF FF: mov eax, dword ptr [ebp - 0x5b8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BB E2 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
