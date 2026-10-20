// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F727 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5886f727_5886F727() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        ; Exact mapped bytes E8 25 FC FF FF: call 0x5886f35a
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x5886f753
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
        ; Exact mapped bytes EB 23: jmp 0x5886f776
        __asm _emit 0xeb
        __asm _emit 0x23
        push 4
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 1]
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 1C FB FF FF: call 0x5886f292
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
