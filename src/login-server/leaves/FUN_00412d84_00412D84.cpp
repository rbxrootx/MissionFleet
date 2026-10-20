// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412D84 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_00412d84_00412D84() {
    __asm {
        mov eax, 43a62ch
        ; Exact mapped bytes E8 7A C8 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        ; Exact mapped bytes 66 83 7D 08 01: cmp word ptr [ebp + 8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x01
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 75: jne 0x412e10
        __asm _emit 0x75
        __asm _emit 0x75
        push edi
        push 1
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F4 EB FF FF: call 0x41199a
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        lea ecx, [ebp - 20h]
        push edi
        mov dword ptr [ebp - 4], edi
        push dword ptr [esi + 4]
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 68 EC FF FF: call 0x411a22
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 43d518h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 92 99 01 00: call 0x42c759
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 18: jl 0x412de3
        __asm _emit 0x7c
        __asm _emit 0x18
        mov eax, dword ptr [esi + 8]
        test byte ptr [eax + 4ch], 1
        ; Exact mapped bytes 74 05: je 0x412dd9
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dword ptr [esi + 24h], edi
        ; Exact mapped bytes 75 28: jne 0x412e01
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [esi]
        push edi
        push 3fdh
        ; Exact mapped bytes EB 19: jmp 0x412dfc
        __asm _emit 0xeb
        __asm _emit 0x19
        push 43d524h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 69 99 01 00: call 0x42c759
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 0D: jl 0x412e01
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        push edi
        push 3feh
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D6 EB FF FF: call 0x4119e3
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        ; Exact mapped bytes EB 1A: jmp 0x412e2a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [esi]
        push dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x412e2a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        push 0
        push dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
