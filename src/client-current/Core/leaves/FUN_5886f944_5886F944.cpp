// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F944 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5886f944_5886F944() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes 8B 35 60 A0 96 58: mov esi, dword ptr [0x5896a060]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        cmp esi, -1
        ; Exact mapped bytes 74 32: je 0x5886f987
        __asm _emit 0x74
        __asm _emit 0x32
        test esi, esi
        ; Exact mapped bytes 75 1F: jne 0x5886f978
        __asm _emit 0x75
        __asm _emit 0x1f
        push 588c5fe4h
        push 588c5fe0h
        push 588c5fe4h
        push 18h
        ; Exact mapped bytes E8 6E FB FF FF: call 0x5886f4dd
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x5886f987
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp + 8]
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
        ; Exact mapped bytes EB 02: jmp 0x5886f989
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
