// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F60D .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_5886f60d_5886F60D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes 8B 35 68 A0 96 58: mov esi, dword ptr [0x5896a068]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        cmp esi, -1
        ; Exact mapped bytes 74 34: je 0x5886f652
        __asm _emit 0x74
        __asm _emit 0x34
        test esi, esi
        ; Exact mapped bytes 75 1F: jne 0x5886f641
        __asm _emit 0x75
        __asm _emit 0x1f
        push 588c600ch
        push 588c6008h
        push 588c600ch
        push 1ah
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x5886f4dd
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x5886f652
        __asm _emit 0x74
        __asm _emit 0x11
        push dword ptr [ebp + 8]
        mov ecx, esi
        push -6
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
        ; Exact mapped bytes EB 05: jmp 0x5886f657
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 0c0000225h
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
