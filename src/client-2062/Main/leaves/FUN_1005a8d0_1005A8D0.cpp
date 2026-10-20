// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005A8D0 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_1005a8d0_1005A8D0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d40h]
        and eax, 0e4fdh
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d50h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d44h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d60h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d48h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x1005a920
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d4ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 56ch]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 74 05: je 0x1005a93c
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 3B 26 00 00: call 0x1005cf80
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d48h]
        mov dword ptr [esi + 58h], 0
        mov eax, dword ptr [eax + 0a8h]
        mov ecx, dword ptr [eax + 0fch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0d54h]
        mov dword ptr [eax + 50h], 320h
        mov dword ptr [eax + 54h], 28h
        mov ecx, dword ptr [esi + 0d54h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 558h]
        mov dword ptr [ecx + 80h], 0
        mov ecx, dword ptr [esi + 558h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 55ch]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [esi + 55ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, esi
        ; Exact mapped bytes E8 31 29 00 00: call 0x1005d2f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
