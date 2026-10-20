// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014DE0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_10014de0_10014DE0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 50h]
        mov dword ptr [edi], 101753e4h
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x10014e07
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, esi
        mov esi, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10014e03
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 84 79 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        test esi, esi
        ; Exact mapped bytes 75 EA: jne 0x10014df1
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, edi
        ; Exact mapped bytes E8 02 DE 0E 00: call 0x10102c10
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
