// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587991B0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_587991b0_587991B0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, eax
        push esi
        mov esi, ecx
        cmp dword ptr [eax + 14h], 0fh
        ; Exact mapped bytes 76 06: jbe 0x587991c5
        __asm _emit 0x76
        __asm _emit 0x06
        mov edx, dword ptr [eax]
        mov ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x587991c7
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, eax
        mov eax, dword ptr [eax + 10h]
        add eax, edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 0B 11 00 00: call 0x5879a2e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x587991df
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 71 16 00 00: call 0x5879a850
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
