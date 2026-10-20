// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041300A .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_0041300a_0041300A() {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi + 2dh], 2
        ; Exact mapped bytes 74 04: je 0x413017
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 94h]
        cmp eax, 2
        ; Exact mapped bytes 74 13: je 0x413035
        __asm _emit 0x74
        __asm _emit 0x13
        cmp eax, 1
        ; Exact mapped bytes 74 0E: je 0x413035
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        push 0
        push 3edh
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ecx, esi
        ; Exact mapped bytes E8 7F 20 00 00: call 0x4150bb
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
