// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004307BD .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_004307bd_004307BD() {
    __asm {
        push esi
        push edi
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x4307f6
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ecx + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x4307f6
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 3D 08 C5 43 00: mov edi, dword ptr [0x43c508]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        ; Exact mapped bytes E8 FF EA FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 17: je 0x4307f6
        __asm _emit 0x74
        __asm _emit 0x17
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
        ; Exact mapped bytes 75 05: jne 0x4307f2
        __asm _emit 0x75
        __asm _emit 0x05
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes EB DF: jmp 0x4307d1
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x4307f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ret
    }
}
