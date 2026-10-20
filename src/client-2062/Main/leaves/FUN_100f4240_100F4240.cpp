// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F4240 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_100f4240_100F4240() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 89 41 58: mov dword ptr [ecx + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        ; Exact mapped bytes 89 41 5C: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5c
        ; Exact mapped bytes 89 41 60: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
