// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413BFC .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00413bfc_00413BFC() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 2dh], 1
        ; Exact mapped bytes 74 2D: je 0x413c33
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [esi + 8]
        test byte ptr [eax + 50h], 40h
        ; Exact mapped bytes 74 24: je 0x413c33
        __asm _emit 0x74
        __asm _emit 0x24
        push 1
        push 0ch
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 6D 89 01 00: call 0x42c588
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x413c33
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        push 0
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        pop edi
        pop esi
        ret
    }
}
