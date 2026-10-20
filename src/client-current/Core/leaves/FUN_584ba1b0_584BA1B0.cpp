// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BA1B0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_584ba1b0_584BA1B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F1 D0 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        push 48h
        ; Exact mapped bytes E8 B6 D7 FC FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 D7 D0 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov ecx, 12h
        mov esi, eax
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
