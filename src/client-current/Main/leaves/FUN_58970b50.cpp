// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58970B50 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_58970b50() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        push 40000h
        mov dword ptr [esi], 589a2eb0h
        mov dword ptr [esi + 4], 0ffffffffh
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 20h], 40000h
        ; Exact mapped bytes E8 C5 C0 00 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 30h], edi
        ; Exact mapped bytes FF 15 20 C1 98 58: call dword ptr [0x5898c120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 1
        push edi
        push edi
        push edi
        mov dword ptr [esi + 34h], eax
        mov dword ptr [esi + 38h], eax
        mov eax, dword ptr [esp + 1ch]
        push 1
        push 2
        mov dword ptr [esi + 3ch], edi
        mov dword ptr [esi + 48h], edi
        mov dword ptr [esi + 4ch], edi
        mov dword ptr [esi + 44h], eax
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 5ch], edi
        ; Exact mapped bytes FF 15 4C C4 98 58: call dword ptr [0x5898c44c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 4], eax
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
