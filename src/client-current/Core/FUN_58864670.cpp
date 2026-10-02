// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864670 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58864670() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 55 00 00 00: call 0x588646d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x58864697
        __asm _emit 0x74
        __asm _emit 0x16
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
        neg eax
        pop ecx
        sbb eax, eax
        neg eax
        ; Exact mapped bytes EB 02: jmp 0x58864699
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}
