// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881DB40 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5881db40() {
    __asm {
        push ebx
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        lea esi, [ecx + 0fch]
        mov ebp, 80h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push esi
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5881db85
        __asm _emit 0x75
        __asm _emit 0x19
        push eax
        push edi
        mov byte ptr [esi], al
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        push edi
        push 1ceh
        ; Exact mapped bytes E8 72 DF F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB 71 F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0xff
        add esi, 18h
        sub ebp, 1
        ; Exact mapped bytes 75 D3: jne 0x5881db60
        __asm _emit 0x75
        __asm _emit 0xd3
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
