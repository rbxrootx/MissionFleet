// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D9180 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_100d9180_100D9180() {
    __asm {
        mov eax, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 0bch]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [ecx + 0bch]
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes 66 C7 81 9C 01 00 00 07 00: mov word ptr [ecx + 0x19c], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        ret
    }
}
