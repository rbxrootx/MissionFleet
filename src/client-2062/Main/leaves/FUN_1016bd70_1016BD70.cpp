// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016BD70 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_1016bd70_1016BD70() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push 40000h
        mov dword ptr [esi], 10176bf0h
        mov dword ptr [esi + 4], 0ffffffffh
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 20h], 40000h
        ; Exact mapped bytes E8 F7 09 00 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 30h], edi
        ; Exact mapped bytes FF 15 88 50 17 10: call dword ptr [0x10175088]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 1
        push edi
        push edi
        mov dword ptr [esi + 34h], eax
        mov dword ptr [esi + 38h], eax
        mov eax, dword ptr [esp + 18h]
        push edi
        push 1
        push 2
        mov dword ptr [esi + 3ch], edi
        mov dword ptr [esi + 48h], edi
        mov dword ptr [esi + 4ch], edi
        mov dword ptr [esi + 44h], eax
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 5ch], edi
        ; Exact mapped bytes FF 15 A8 51 17 10: call dword ptr [0x101751a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 4], eax
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
