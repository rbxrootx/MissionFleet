// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA830 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_587ba830() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push 58a0b450h
        push esi
        mov edi, ecx
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x587ba876
        __asm _emit 0x75
        __asm _emit 0x2c
        push eax
        push eax
        push 191h
        ; Exact mapped bytes E8 9A 12 FB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x12
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D3 A4 FA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4f4h]
        xor edx, edx
        pop edi
        ; Exact mapped bytes 66 89 91 9C 01 00 00: mov word ptr [ecx + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        inc eax
        push eax
        push esi
        push 0
        push 0
        push 80010d00h
        mov ecx, edi
        ; Exact mapped bytes E8 E0 63 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x63
        __asm _emit 0x1b
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
