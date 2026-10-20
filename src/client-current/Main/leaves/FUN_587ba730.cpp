// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA730 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587ba730() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov ecx, dword ptr [esi + 1b4h]
        push edi
        ; Exact mapped bytes E8 1C CC 14 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcc
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1b8h]
        push edi
        ; Exact mapped bytes E8 10 CC 14 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xcc
        __asm _emit 0x14
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
