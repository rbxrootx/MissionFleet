// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C89D0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_588c89d0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x588c89dd
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 66 8B 54 24 04: mov dx, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        push esi
        push edi
        ; Exact mapped bytes 74 31: je 0x588c8a1c
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 83 FA 02: cmp dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 16: jne 0x588c8a07
        __asm _emit 0x75
        __asm _emit 0x16
        mov esi, dword ptr [ecx + 1fch]
        mov esi, dword ptr [esi + 64h]
        mov edi, dword ptr [ecx + 200h]
        add esi, eax
        cmp esi, dword ptr [edi + 64h]
        ; Exact mapped bytes 7D 41: jge 0x588c8a48
        __asm _emit 0x7d
        __asm _emit 0x41
        push eax
        movzx eax, dx
        mov ecx, dword ptr [ecx + eax*4 + 1f4h]
        ; Exact mapped bytes E8 89 E8 03 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FA 03: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes 75 16: jne 0x588c8a38
        __asm _emit 0x75
        __asm _emit 0x16
        mov esi, dword ptr [ecx + 200h]
        mov esi, dword ptr [esi + 64h]
        mov edi, dword ptr [ecx + 1fch]
        sub esi, eax
        cmp dword ptr [edi + 64h], esi
        ; Exact mapped bytes 7D 10: jge 0x588c8a48
        __asm _emit 0x7d
        __asm _emit 0x10
        movzx edx, dx
        mov ecx, dword ptr [ecx + edx*4 + 1f4h]
        push eax
        ; Exact mapped bytes E8 B8 E8 03 00: call 0x58907300
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
