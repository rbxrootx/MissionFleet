// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9F10 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_587b9f10() {
    __asm {
        push esi
        push edi
        push 8
        mov edi, ecx
        ; Exact mapped bytes E8 13 76 1B 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x76
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        mov esi, eax
        xor eax, eax
        mov dword ptr [esi], eax
        add esp, 4
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [eax]
        push 0
        push 8
        mov dword ptr [esi], ecx
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        push esi
        push ecx
        push edx
        push 80013121h
        mov ecx, edi
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E8 1D 6D 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6d
        __asm _emit 0x1b
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 CD 2E 1C 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2e
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
