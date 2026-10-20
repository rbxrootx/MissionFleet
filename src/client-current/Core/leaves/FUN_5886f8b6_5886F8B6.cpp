// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F8B6 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_5886f8b6_5886F8B6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 C6 FB FF FF: call 0x5886f487
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 27: je 0x5886f8ee
        __asm _emit 0x74
        __asm _emit 0x27
        push dword ptr [ebp + 28h]
        mov ecx, esi
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
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
        ; Exact mapped bytes EB 20: jmp 0x5886f90e
        __asm _emit 0xeb
        __asm _emit 0x20
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 00 00 00: call 0x5886f913
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 B0 41 89 58: call dword ptr [0x588941b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
