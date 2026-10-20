// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047760 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_10047760_10047760() {
    __asm {
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 6C: mov dword ptr [ecx + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 89 51 70: mov dword ptr [ecx + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x70
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
