// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58828B00 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58828b00() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 174h]
        mov dword ptr [edi + 1f8h], ebx
        mov dword ptr [edi + 1fch], 0
        ; Exact mapped bytes E8 CD FC 0D 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 76 29: jbe 0x58828b50
        __asm _emit 0x76
        __asm _emit 0x29
        push esi
        mov esi, dword ptr [esp + 14h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push 0ffffffh
        push eax
        lea ecx, [esi + 4]
        push ecx
        mov ecx, dword ptr [edi + 174h]
        ; Exact mapped bytes E8 89 FD 0D 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0x0d
        __asm _emit 0x00
        add esi, 1ch
        sub ebx, 1
        ; Exact mapped bytes 75 E1: jne 0x58828b30
        __asm _emit 0x75
        __asm _emit 0xe1
        pop esi
        mov ecx, edi
        ; Exact mapped bytes E8 49 F6 FF FF: call 0x588281a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
