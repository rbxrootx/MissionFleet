// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10070230 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_10070230_10070230() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 10a3ch]
        ; Exact mapped bytes E8 DC F4 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10a50h]
        push edi
        ; Exact mapped bytes E8 D0 F4 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
