// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B7F10 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_586b7f10_586B7F10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 91 F3 DC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf3
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        push eax
        push 22h
        ; Exact mapped bytes E8 56 FA DC FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 77 F3 DC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf3
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov ecx, 8
        mov esi, eax
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
