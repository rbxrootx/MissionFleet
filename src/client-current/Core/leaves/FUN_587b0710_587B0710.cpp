// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0710 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_587b0710_587B0710() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [esp + 4], ecx
        lea eax, [ecx + 94h]
        mov dword ptr [ecx + 0b20h], 588bcfb0h
        mov dword ptr [ecx + 0b18h], eax
        lea eax, [ecx + 988h]
        mov dword ptr [ecx + 0b24h], eax
        lea eax, [ecx + 0a7ch]
        mov dword ptr [ecx + 0b30h], eax
        xor eax, eax
        mov dword ptr [ecx + 0b2ch], 588bcfc4h
        mov dword ptr [ecx + 0b38h], 588bcfd8h
        ; Exact mapped bytes 66 89 81 B8 16 00 00: mov word ptr [ecx + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 16bch], eax
        mov dword ptr [ecx + 16c0h], eax
        ; Exact mapped bytes E9 8C 0B 00 00: jmp 0x587b1300
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
