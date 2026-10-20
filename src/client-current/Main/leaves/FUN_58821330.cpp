// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58821330 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58821330() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x5882134f
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 70h]
        mov edx, dword ptr [eax + 6ch]
        push edx
        ; Exact mapped bytes E8 FB F0 FF FF: call 0x58820440
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0a4h], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
