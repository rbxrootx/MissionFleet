// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004369CF .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004369cf_004369CF() {
    __asm {
        push esi
        mov esi, ecx
        xor eax, eax
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 18h], 4
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], 1
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes FF 15 B4 C1 43 00: call dword ptr [0x43c1b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        mov dword ptr [esi], eax
        ; Exact mapped bytes 75 05: jne 0x436a03
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 1E 63 FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C4 C1 43 00: call dword ptr [0x43c1c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, esi
        pop esi
        ret
    }
}
