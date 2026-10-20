// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886C6C0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_5886c6c0_5886C6C0() {
    __asm {
        push 0ch
        push 588ed4f0h
        ; Exact mapped bytes E8 94 60 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        xor edi, edi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [esi], edi
        push 8
        ; Exact mapped bytes E8 42 75 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 4], edi
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 7D 00 00 00: call 0x5886c764
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x5886c6ff
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 1ch], edi
        mov dword ptr [eax], edi
        mov dword ptr [eax + 4], edi
        or dword ptr [eax + 10h], 0ffffffffh
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 15 00 00 00: call 0x5886c720
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
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
