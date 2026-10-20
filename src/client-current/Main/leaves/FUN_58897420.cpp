// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58897420 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_58897420() {
    __asm {
        push ebx
        push edi
        mov ebx, ecx
        xor edi, edi
        cmp dword ptr [ebx + 1a4h], edi
        ; Exact mapped bytes 7E 3E: jle 0x5889746c
        __asm _emit 0x7e
        __asm _emit 0x3e
        push esi
        lea esi, [ebx + 0d8h]
        mov ecx, dword ptr [esi + 1ch]
        push 0
        ; Exact mapped bytes E8 21 FF 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0
        ; Exact mapped bytes E8 18 FF 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi + 0b0h], 80h
        inc edi
        add esi, 4
        cmp edi, dword ptr [ebx + 1a4h]
        ; Exact mapped bytes 7C D7: jl 0x58897435
        __asm _emit 0x7c
        __asm _emit 0xd7
        pop esi
        pop edi
        mov dword ptr [ebx + 148h], 0
        pop ebx
        ret
        mov dword ptr [ebx + 148h], edi
        pop edi
        pop ebx
        ret
    }
}
