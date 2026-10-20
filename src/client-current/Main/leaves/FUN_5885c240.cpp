// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885C240 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5885c240() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ach]
        push eax
        ; Exact mapped bytes E8 DD BA F6 FF: call 0x587c7d30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ch]
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 CD BA F6 FF: call 0x587c7d30
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0a8h]
        mov dword ptr [edx + 50h], 0
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 89 86 A4 00 00 00: mov word ptr [esi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E A6 00 00 00: mov word ptr [esi + 0xa6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
