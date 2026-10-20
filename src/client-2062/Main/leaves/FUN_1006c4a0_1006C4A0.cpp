// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006C4A0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_1006c4a0_1006C4A0() {
    __asm {
        ; Exact mapped bytes 8B 81 64 04 01 00: mov eax, dword ptr [ecx + 0x10464]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 81 BC 0B 02 00 00 00 00 00: mov dword ptr [ecx + 0x20bbc], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 00 01 00 00: xor eax, 0x100
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 CC 02: or ah, 2
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x02
        ; Exact mapped bytes 89 81 64 04 01 00: mov dword ptr [ecx + 0x10464], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
