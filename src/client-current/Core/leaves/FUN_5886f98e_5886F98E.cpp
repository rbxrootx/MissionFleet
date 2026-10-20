// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F98E .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5886f98e_5886F98E() {
    __asm {
        mov edi, edi
        push esi
        ; Exact mapped bytes 8B 35 64 A0 96 58: mov esi, dword ptr [0x5896a064]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x64
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        cmp esi, -1
        ; Exact mapped bytes 74 2D: je 0x5886f9c9
        __asm _emit 0x74
        __asm _emit 0x2d
        test esi, esi
        ; Exact mapped bytes 75 1F: jne 0x5886f9bf
        __asm _emit 0x75
        __asm _emit 0x1f
        push 588c5ff8h
        push 588c5ff4h
        push 588c5ff8h
        push 19h
        ; Exact mapped bytes E8 27 FB FF FF: call 0x5886f4dd
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x5886f9c9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop esi
        ret
    }
}
