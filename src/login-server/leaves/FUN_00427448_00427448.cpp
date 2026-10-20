// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427448 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00427448_00427448() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        lea eax, [ebp + 8]
        push edi
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 47 00 00 00: call 0x4274a4
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        lea eax, [ebp - 28h]
        pop ecx
        lea esi, [ebp - 0ch]
        push eax
        push 0
        push 11h
        sub esp, 0ch
        mov edi, esp
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        ; Exact mapped bytes E8 93 0C 00 00: call 0x42810b
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 10h]
        mov edi, dword ptr [ebp + 14h]
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes 0F BE 45 DA: movsx eax, byte ptr [ebp - 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xda
        mov dword ptr [esi], eax
        ; Exact mapped bytes 0F BF 45 D8: movsx eax, word ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xd8
        mov dword ptr [esi + 4], eax
        lea eax, [ebp - 24h]
        push eax
        push edi
        ; Exact mapped bytes E8 E8 EC FF FF: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov dword ptr [esi + 0ch], edi
        mov eax, esi
        pop edi
        pop esi
        leave
        ret
    }
}
