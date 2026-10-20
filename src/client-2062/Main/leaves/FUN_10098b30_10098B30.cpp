// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10098B30 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_10098b30_10098B30() {
    __asm {
        ; Exact mapped bytes 8B 91 D0 00 00 00: mov edx, dword ptr [ecx + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 81 E0 00 00 00 FF FF FF FF: mov dword ptr [ecx + 0xe0], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 42 50: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 8B 89 D4 00 00 00: mov ecx, dword ptr [ecx + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
