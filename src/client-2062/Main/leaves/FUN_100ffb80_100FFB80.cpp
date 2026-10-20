// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FFB80 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_100ffb80_100FFB80() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 190h]
        mov dword ptr [esi], 10176780h
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ffb99
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 3
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [esi + 18ch]
        push edi
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x100ffbdd
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [esi + 164h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 1E: jle 0x100ffbce
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 18ch]
        mov ecx, dword ptr [ecx + edi*4]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ffbc3
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [esi + 164h]
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 7C E2: jl 0x100ffbb0
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov eax, dword ptr [esi + 18ch]
        push eax
        ; Exact mapped bytes E8 AA CB 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esi + 194h]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x100ffc20
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [esi + 170h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 1E: jle 0x100ffc11
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 194h]
        mov ecx, dword ptr [ecx + edi*4]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100ffc06
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [esi + 170h]
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 7C E2: jl 0x100ffbf3
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov eax, dword ptr [esi + 194h]
        push eax
        ; Exact mapped bytes E8 67 CB 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov esi, dword ptr [esi + 4]
        pop edi
        cmp esi, -1
        ; Exact mapped bytes 74 07: je 0x100ffc30
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop esi
        ret
    }
}
