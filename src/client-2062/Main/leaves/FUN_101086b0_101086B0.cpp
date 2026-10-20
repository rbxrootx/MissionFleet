// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101086B0 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_101086b0_101086B0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 90h]
        mov dword ptr [esi], 10176a4ch
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x101086d6
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 BB 40 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 90h], 0
        mov eax, dword ptr [esi + 94h]
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x1010872f
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [esi + 5ch]
        push edi
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 2B: jle 0x10108715
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 94h]
        mov eax, dword ptr [eax + edi*4]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x1010870d
        __asm _emit 0x74
        __asm _emit 0x16
        push eax
        ; Exact mapped bytes E8 87 40 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        add esp, 4
        mov dword ptr [ecx + edi*4], 0
        mov eax, dword ptr [esi + 5ch]
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 7C D5: jl 0x101086ea
        __asm _emit 0x7c
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 94h]
        push edx
        ; Exact mapped bytes E8 63 40 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 94h], 0
        pop edi
        pop esi
        ret
    }
}
