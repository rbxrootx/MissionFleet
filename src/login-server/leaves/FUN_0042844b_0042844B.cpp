// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042844B .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_0042844b_0042844B() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        or edi, 0ffffffffh
        test byte ptr [esi + 0ch], 40h
        ; Exact mapped bytes 74 06: je 0x428460
        __asm _emit 0x74
        __asm _emit 0x06
        and dword ptr [esi + 0ch], 0
        ; Exact mapped bytes EB 17: jmp 0x428477
        __asm _emit 0xeb
        __asm _emit 0x17
        push esi
        ; Exact mapped bytes E8 B3 E8 FF FF: call 0x426d19
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 10 00 00 00: call 0x42847c
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov edi, eax
        ; Exact mapped bytes E8 F7 E8 FF FF: call 0x426d6b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
