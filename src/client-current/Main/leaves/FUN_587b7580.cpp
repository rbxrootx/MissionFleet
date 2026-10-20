// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B7580 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_587b7580() {
    __asm {
        push ebx
        push esi
        push edi
        push 10000000h
        mov esi, ecx
        ; Exact mapped bytes E8 D1 9C 1B 00: call 0x58971260
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [esi], 5899a164h
        lea edx, [esi + 178h]
        lea eax, [esi + 130h]
        mov edi, 3
        or ebx, 0ffffffffh
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [edx], ebx
        add edx, 4
        add eax, 18h
        sub edi, 1
        ; Exact mapped bytes 75 E0: jne 0x587b75b0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [esi + 184h], ebx
        mov dword ptr [esi + 188h], ebx
        mov dword ptr [esi + 18ch], ebx
        mov dword ptr [esi + 190h], ebx
        ; Exact mapped bytes FF 15 2C C4 98 58: call dword ptr [0x5898c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 198h], edi
        mov dword ptr [esi + 19ch], edi
        mov dword ptr [esi + 194h], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}
