// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041303E .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0041303e_0041303E() {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi + 2dh], 2
        ; Exact mapped bytes 75 1C: jne 0x413063
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [esi + 94h], 0
        ; Exact mapped bytes 74 0C: je 0x41305c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        push 0
        push 3edh
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ecx, esi
        ; Exact mapped bytes E8 58 20 00 00: call 0x4150bb
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
