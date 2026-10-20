// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041912B .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_0041912b_0041912B() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 1ch]
        push dword ptr [esi + 20h]
        add ecx, 20h
        ; Exact mapped bytes E8 E2 46 01 00: call 0x42d81e
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push 0
        mov ecx, esi
        ; Exact mapped bytes FF 90 A0 00 00 00: call dword ptr [eax + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x419155
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        push 1
        pop eax
        pop esi
        ret
    }
}
