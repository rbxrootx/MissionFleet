// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F913 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5886f913_5886F913() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 94 FB FF FF: call 0x5886f4b2
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 12: je 0x5886f936
        __asm _emit 0x74
        __asm _emit 0x12
        push dword ptr [ebp + 0ch]
        mov ecx, esi
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
        ; Exact mapped bytes EB 09: jmp 0x5886f93f
        __asm _emit 0xeb
        __asm _emit 0x09
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 BA 00 00: call 0x5887b37f
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
