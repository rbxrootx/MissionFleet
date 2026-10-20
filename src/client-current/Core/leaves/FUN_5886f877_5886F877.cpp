// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F877 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5886f877_5886F877() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 DA FB FF FF: call 0x5886f45c
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x5886f8a0
        __asm _emit 0x74
        __asm _emit 0x18
        push dword ptr [ebp + 14h]
        mov ecx, esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
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
        ; Exact mapped bytes EB 11: jmp 0x5886f8b1
        __asm _emit 0xeb
        __asm _emit 0x11
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 BA 00 00: call 0x5887b301
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
