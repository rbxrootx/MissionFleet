// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B0EB0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_100b0eb0_100B0EB0() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov ebx, ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov eax, dword ptr [esi]
        push eax
        ; Exact mapped bytes E8 39 9E 04 00: call 0x100fad00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        lea edi, [eax + 50h]
        mov ecx, 0dfh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        ; Exact mapped bytes E8 08 00 00 00: call 0x100b0ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
