// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850A0D .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58850a0d_58850A0D() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push 588c305ch
        push 588c3054h
        push 588c305ch
        push 0
        ; Exact mapped bytes E8 FB FE FF FF: call 0x58850922
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x58850a40
        __asm _emit 0x74
        __asm _emit 0x10
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
        pop esi
        pop ebp
        ret
        pop esi
        pop ebp
        ; Exact mapped bytes FF 25 CC 42 89 58: jmp dword ptr [0x588942cc]
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0xcc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
    }
}
