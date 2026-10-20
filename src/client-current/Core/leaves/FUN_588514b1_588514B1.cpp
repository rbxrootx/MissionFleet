// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588514B1 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_588514b1_588514B1() {
    __asm {
        push 0ch
        push 588ed0c0h
        ; Exact mapped bytes E8 A3 12 FE FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        and dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 37 88 00 00: call 0x58859d02
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        and dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8D 21 00 00: call 0x58853665
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 17 00 00 00: call 0x58851500
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
