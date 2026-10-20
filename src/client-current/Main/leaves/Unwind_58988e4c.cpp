// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58988E4C .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58988e4c() {
    __asm {
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 ED 3D FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
