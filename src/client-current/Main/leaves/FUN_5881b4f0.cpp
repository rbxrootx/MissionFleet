// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881B4F0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_5881b4f0() {
    __asm {
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 42 50: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 8B 49 60: mov ecx, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x60
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
