// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A27B .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0041a27b_0041A27B() {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi + 71h], 40h
        ; Exact mapped bytes 74 11: je 0x41a295
        __asm _emit 0x74
        __asm _emit 0x11
        push dword ptr [esi + 20h]
        ; Exact mapped bytes FF 15 CC C4 43 00: call dword ptr [0x43c4cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 45 50 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        ret
        push edi
        ; Exact mapped bytes FF 15 0C C4 43 00: call dword ptr [0x43c40c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 36 50 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi]
        push 0
        push -4
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
