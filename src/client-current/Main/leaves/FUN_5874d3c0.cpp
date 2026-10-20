// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874D3C0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5874d3c0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898d1d0h
        ; Exact mapped bytes E8 02 D2 FF FF: call 0x5874a5d0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5874d3de
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 67 F8 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
