// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411290 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_00411290_00411290() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0c7ch]
        mov dword ptr [esi], 43d444h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4112b8
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [eax + 40h]
        push esi
        push 0
        push 469h
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x4112c8
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 50 C6 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
