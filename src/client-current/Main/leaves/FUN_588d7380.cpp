// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D7380 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_588d7380() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 09: jl 0x588d7391
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 89 81 A4 02 00 00: mov dword ptr [ecx + 0x2a4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
