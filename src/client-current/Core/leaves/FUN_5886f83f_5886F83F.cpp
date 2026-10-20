// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F83F .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_5886f83f_5886F83F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 E7 FB FF FF: call 0x5886f431
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x5886f85f
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
        ; Exact mapped bytes EB 13: jmp 0x5886f872
        __asm _emit 0xeb
        __asm _emit 0x13
        push 1
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 00 00 00: call 0x5886f913
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A8 41 89 58: call dword ptr [0x588941a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
