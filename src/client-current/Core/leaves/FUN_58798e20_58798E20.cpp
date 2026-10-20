// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798E20 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58798e20_58798E20() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 4]
        test esi, esi
        ; Exact mapped bytes 74 1A: je 0x58798e42
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [esi]
        push dword ptr [eax + 4]
        push dword ptr [ecx]
        mov ecx, esi
        ; Exact mapped bytes E8 6A F4 FF FF: call 0x587982a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push 30h
        push dword ptr [esi]
        ; Exact mapped bytes E8 F5 81 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        pop esi
        ret
    }
}
