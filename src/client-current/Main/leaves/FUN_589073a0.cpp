// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589073A0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_589073a0() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 41 10: mov dword ptr [ecx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x10
        ; Exact mapped bytes 89 41 14: mov dword ptr [ecx + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 89 41 18: mov dword ptr [ecx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 89 41 1C: mov dword ptr [ecx + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
