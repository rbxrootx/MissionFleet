// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850AFC .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58850afc_58850AFC() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push 588c30a8h
        push 588c30a0h
        push 588c30a8h
        push 4
        ; Exact mapped bytes E8 0C FE FF FF: call 0x58850922
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 74 15: je 0x58850b34
        __asm _emit 0x74
        __asm _emit 0x15
        push dword ptr [ebp + 10h]
        mov ecx, esi
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
        ; Exact mapped bytes EB 0C: jmp 0x58850b40
        __asm _emit 0xeb
        __asm _emit 0x0c
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 4C 41 89 58: call dword ptr [0x5889414c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        pop ebp
        ret
    }
}
