// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042A80 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_10042a80_10042A80() {
    __asm {
        mov eax, dword ptr [ecx + 60h]
        xor edx, edx
        push esi
        mov eax, dword ptr [eax + 0e7ch]
        mov dword ptr [ecx + 14h], 40000000h
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        mov eax, 2710h
        mov esi, edx
        cdq
        add esi, 64h
        idiv esi
        pop esi
        mov edx, eax
        mov eax, 51eb851fh
        imul edx, dword ptr [esp + 4]
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 24h], edx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
