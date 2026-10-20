// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042702E .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_0042702e_0042702E() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        push 20h
        mov ebx, dword ptr [esp + 14h]
        cdq
        pop ecx
        idiv ecx
        mov esi, eax
        mov eax, dword ptr [esp + 14h]
        cdq
        idiv ecx
        lea edi, [ebx + esi*4]
        push edi
        push 1fh
        pop ecx
        push 1
        pop eax
        sub ecx, edx
        shl eax, cl
        push eax
        push dword ptr [edi]
        ; Exact mapped bytes E8 3B 0A 00 00: call 0x427a99
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        dec esi
        ; Exact mapped bytes 78 1C: js 0x427080
        __asm _emit 0x78
        __asm _emit 0x1c
        lea edi, [ebx + esi*4]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x427080
        __asm _emit 0x74
        __asm _emit 0x15
        push edi
        push 1
        push dword ptr [edi]
        ; Exact mapped bytes E8 24 0A 00 00: call 0x427a99
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        dec esi
        sub edi, 4
        test esi, esi
        ; Exact mapped bytes 7D E7: jge 0x427067
        __asm _emit 0x7d
        __asm _emit 0xe7
        pop edi
        pop esi
        pop ebx
        ret
    }
}
