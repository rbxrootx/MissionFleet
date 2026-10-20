// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430868 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00430868_00430868() {
    __asm {
        push esi
        mov esi, ecx
        test esi, esi
        ; Exact mapped bytes 74 06: je 0x430875
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 75 04: jne 0x430879
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 B0 00 00 00: call dword ptr [eax + 0xb0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x430890
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, esi
        ; Exact mapped bytes E8 2F FF FF FF: call 0x4307bd
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x4308a5
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, esi
        ; Exact mapped bytes E8 22 FF FF FF: call 0x4307bd
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4308a5
        __asm _emit 0x74
        __asm _emit 0x06
        mov esi, eax
        mov ecx, eax
        ; Exact mapped bytes EB F1: jmp 0x430896
        __asm _emit 0xeb
        __asm _emit 0xf1
        mov eax, esi
        pop esi
        ret
    }
}
