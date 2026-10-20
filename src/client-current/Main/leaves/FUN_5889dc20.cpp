// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889DC20 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_5889dc20() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov dword ptr [esi + 88h], eax
        movzx ecx, word ptr [eax + 0ah]
        xor ecx, 0aah
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp eax, 0ah
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes 7E 07: jle 0x5889dc57
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [esi + 7ch], 0ah
        mov ecx, dword ptr [esi + 70h]
        push 1
        ; Exact mapped bytes E8 FF 96 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 0ah
        ; Exact mapped bytes E8 F5 96 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        movzx eax, word ptr [eax + 0ch]
        xor eax, 0aah
        add eax, 0c8h
        lea ecx, [eax + eax*4]
        add ecx, ecx
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 D3 96 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
