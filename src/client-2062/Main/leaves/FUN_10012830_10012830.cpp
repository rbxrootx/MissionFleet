// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012830 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_10012830_10012830() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esi], 101753ach
        mov eax, dword ptr [esi + 18h]
        push eax
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes E8 3C 9F 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9f
        __asm _emit 0x15
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], edi
        mov dword ptr [esi + 20h], edi
        mov eax, dword ptr [esi + 8]
        push eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes E8 24 9F 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9f
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        pop edi
        pop esi
        pop ecx
        ret
    }
}
