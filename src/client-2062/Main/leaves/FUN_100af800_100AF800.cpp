// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AF800 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_100af800_100AF800() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 25 F8 E5 00 00: and eax, 0xe5f8
        __asm _emit 0x25
        __asm _emit 0xf8
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 CC 05: or ah, 5
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x05
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 41 28: mov dword ptr [ecx + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x28
        ; Exact mapped bytes 89 41 58: mov dword ptr [ecx + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
