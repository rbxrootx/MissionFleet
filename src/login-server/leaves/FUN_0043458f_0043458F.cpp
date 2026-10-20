// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043458F .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0043458f_0043458F() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        cmp dword ptr [esi + 18h], edi
        mov dword ptr [esi + 20h], edi
        ; Exact mapped bytes 75 0F: jne 0x4345ac
        __asm _emit 0x75
        __asm _emit 0x0f
        push dword ptr [esi + 2ch]
        ; Exact mapped bytes E8 70 93 FF FF: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 24h], edi
        mov ecx, dword ptr [esi + 38h]
        cmp ecx, edi
        ; Exact mapped bytes 74 07: je 0x4345ba
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 34h]
        mov dword ptr [esi + 38h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 07: je 0x4345cb
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [esi + 34h], edi
        pop edi
        pop esi
        ret
    }
}
