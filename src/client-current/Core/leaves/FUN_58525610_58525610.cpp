// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58525610 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_58525610_58525610() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 92 1C F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        mov edi, dword ptr [ebp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 76 1C F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 11ch
        idiv ecx
        push eax
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A8 FE FF FF: call 0x58525500
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        pop esi
        pop ebp
        ret
    }
}
