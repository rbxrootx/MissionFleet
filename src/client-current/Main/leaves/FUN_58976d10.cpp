// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976D10 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58976d10() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 14h]
        cmp edi, 0fffdh
        ; Exact mapped bytes 76 11: jbe 0x58976d33
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [esi]
        push esi
        mov dword ptr [eax + 14h], 0bh
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        mov edx, dword ptr [esp + 10h]
        push edx
        push esi
        ; Exact mapped bytes E8 12 00 00 00: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 2
        push edi
        push esi
        ; Exact mapped bytes E8 68 00 00 00: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        ret
    }
}
