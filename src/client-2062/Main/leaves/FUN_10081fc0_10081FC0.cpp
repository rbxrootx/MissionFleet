// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10081FC0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_10081fc0_10081FC0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x10081fdf
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 70h]
        mov edx, dword ptr [eax + 6ch]
        push edx
        ; Exact mapped bytes E8 1B 00 00 00: call 0x10081ff0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0a4h], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
