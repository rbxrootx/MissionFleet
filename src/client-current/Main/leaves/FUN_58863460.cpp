// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863460 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58863460() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        xor ecx, ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 8E A6 00 00 00: mov word ptr [esi + 0xa6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push edx
        ; Exact mapped bytes 66 89 86 A4 00 00 00: mov word ptr [esi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AB 48 F6 FF: call 0x587c7d30
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x48
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 70 09 F3 FF: call 0x58793e00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0ach]
        mov dword ptr [eax + 50h], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
