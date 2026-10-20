// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B5090 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_588b5090() {
    __asm {
        mov eax, dword ptr [ecx + 0bch]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov eax, dword ptr [ecx + 0c0h]
        mov edx, 7
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes 66 89 91 9C 01 00 00: mov word ptr [ecx + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
