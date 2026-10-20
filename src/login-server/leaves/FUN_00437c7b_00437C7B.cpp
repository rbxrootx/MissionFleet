// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437C7B .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_00437c7b_00437C7B() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 28h]
        cmp ecx, dword ptr [esi + 2ch]
        ; Exact mapped bytes 72 04: jb 0x437c8a
        __asm _emit 0x72
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1D: jmp 0x437ca7
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [esi + 1ch]
        push eax
        imul eax, ecx
        add eax, dword ptr [esi + 24h]
        push eax
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 22 6F FE FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        inc dword ptr [esi + 28h]
        push 1
        pop eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
