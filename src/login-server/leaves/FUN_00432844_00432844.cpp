// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432844 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_00432844_00432844() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        xor eax, eax
        cmp edi, eax
        mov esi, ecx
        ; Exact mapped bytes 75 0A: jne 0x43285c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes EB 10: jmp 0x43286c
        __asm _emit 0xeb
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 DB 00 00 00: call 0x43293d
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 07 00 00 00: call 0x432873
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
