// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 37 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E6480 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587e6480_segment_00() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov ecx, dword ptr [esi + 10bd8h]
        push edi
        ; Exact mapped bytes E8 CC 0E 12 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0e
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10bech]
        push edi
        ; Exact mapped bytes E8 C0 0E 12 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0x12
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
