// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867745 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_58867745_58867745() {
    __asm {
        push 10h
        push 588ed390h
        ; Exact mapped bytes E8 0F B0 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 25: jne 0x5886777c
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        push eax
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 BC 97 FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        or edx, 0ffffffffh
        mov eax, edx
        ; Exact mapped bytes EB 3C: jmp 0x588677b8
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 E0: movlpd qword ptr [ebp - 0x20], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xe0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 25 FF FF: call 0x58859d02
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C 00 00 00: call 0x588677d8
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov esi, eax
        mov dword ptr [ebp - 20h], esi
        mov edi, edx
        mov dword ptr [ebp - 1ch], edi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 1A 00 00 00: call 0x588677ce
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov edx, edi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
