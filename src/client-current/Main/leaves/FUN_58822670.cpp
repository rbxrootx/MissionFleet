// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58822670 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_58822670() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x58822728
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esp + 0ch]
        cmp edi, dword ptr [esi + 0c84h]
        ; Exact mapped bytes 75 07: jne 0x58822692
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 70 FF FF FF: call 0x58822600
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 14: jmp 0x588226a6
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp edi, dword ptr [esi + 0c88h]
        ; Exact mapped bytes 75 0C: jne 0x588226a6
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 AA 05 F3 FF: call 0x58752c50
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp edi, dword ptr [esi + 0c8ch]
        ; Exact mapped bytes 75 24: jne 0x588226d2
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 97 5F 0E 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 8C 5F 0E 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E5 F6 FF FF: call 0x58821db0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 0c90h]
        ; Exact mapped bytes 75 4D: jne 0x58822727
        __asm _emit 0x75
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0c7ch]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 85 5A 0E 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0x0e
        __asm _emit 0x00
        add edi, -0ah
        cmp eax, edi
        ; Exact mapped bytes 7D 0B: jge 0x588226fd
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 F3 5F 0E 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 62 5A 0E 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5a
        __asm _emit 0x0e
        __asm _emit 0x00
        add edi, -0ah
        cmp eax, edi
        ; Exact mapped bytes 7D 0B: jge 0x58822720
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 D0 5F 0E 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 89 F6 FF FF: call 0x58821db0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
