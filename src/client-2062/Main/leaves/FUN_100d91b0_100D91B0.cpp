// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D91B0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_100d91b0_100D91B0() {
    __asm {
        mov eax, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 0b8h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes 66 8B 81 9C 01 00 00: mov ax, word ptr [ecx + 0x19c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 09 00: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x100d91dd
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 C7 81 9C 01 00 00 04 00: mov word ptr [ecx + 0x19c], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ret
        ; Exact mapped bytes 66 3D 0A 00: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 75 F9: jne 0x100d91dc
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 66 C7 81 9C 01 00 00 04 00: mov word ptr [ecx + 0x19c], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E9 D9 38 F7 FF: jmp 0x1004cad0
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x38
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
