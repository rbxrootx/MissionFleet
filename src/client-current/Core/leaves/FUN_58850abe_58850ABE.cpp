// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850ABE .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58850abe_58850ABE() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push 588c3094h
        push 588c308ch
        push 588c3094h
        push 3
        ; Exact mapped bytes E8 4A FE FF FF: call 0x58850922
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov esi, eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x58850af3
        __asm _emit 0x74
        __asm _emit 0x0c
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
        ; Exact mapped bytes EB 06: jmp 0x58850af9
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 C4 42 89 58: call dword ptr [0x588942c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        pop ebp
        ret
    }
}
