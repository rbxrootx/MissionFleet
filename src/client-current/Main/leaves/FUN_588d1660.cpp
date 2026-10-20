// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D1660 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_588d1660() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x588d16fe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 75 0F: jne 0x588d1683
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 5ch]
        push 14h
        ; Exact mapped bytes E8 92 56 EE FF: call 0x587b6d10
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x56
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 0F: jne 0x588d1697
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 5ch]
        push 14h
        ; Exact mapped bytes E8 EE 56 EE FF: call 0x587b6d80
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x56
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 0C: jne 0x588d16a8
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        ; Exact mapped bytes E8 0D FF FF FF: call 0x588d15b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 75 0C: jne 0x588d16b9
        __asm _emit 0x75
        __asm _emit 0x0c
        push 3
        ; Exact mapped bytes E8 FC FE FF FF: call 0x588d15b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 75 0C: jne 0x588d16cd
        __asm _emit 0x75
        __asm _emit 0x0c
        push 4
        ; Exact mapped bytes E8 E8 FE FF FF: call 0x588d15b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 70h]
        ; Exact mapped bytes 75 0C: jne 0x588d16de
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        ; Exact mapped bytes E8 D7 FE FF FF: call 0x588d15b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 78h]
        ; Exact mapped bytes 75 0C: jne 0x588d16ef
        __asm _emit 0x75
        __asm _emit 0x0c
        push 2
        ; Exact mapped bytes E8 C6 FE FF FF: call 0x588d15b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes 75 07: jne 0x588d16fe
        __asm _emit 0x75
        __asm _emit 0x07
        push 5
        ; Exact mapped bytes E8 B2 FE FF FF: call 0x588d15b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
