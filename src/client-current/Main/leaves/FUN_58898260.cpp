// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58898260 .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_58898260() {
    __asm {
        xor eax, eax
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 7D: jne 0x588982e9
        __asm _emit 0x75
        __asm _emit 0x7d
        cmp dword ptr [esi + 1a4h], eax
        mov byte ptr [esi + 1a8h], 1
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes 0F 8E 2C 01 00 00: jle 0x588983af
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push edi
        lea edi, [esi + 0f4h]
        cmp ebx, dword ptr [edi - 8ch]
        ; Exact mapped bytes 75 51: jne 0x588982ed
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, ebp
        test ebp, ebp
        ; Exact mapped bytes 75 05: jne 0x588982a7
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        mov ecx, dword ptr [edi - 1ch]
        mov edx, dword ptr [ecx + 64h]
        mov ebx, dword ptr [edi]
        add edx, eax
        cmp edx, dword ptr [ebx + 64h]
        ; Exact mapped bytes 7F 06: jg 0x588982bc
        __asm _emit 0x7f
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 E4 EF 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 75 07: jne 0x588982cc
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 D4 F4 FF FF: call 0x588977a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        inc eax
        add edi, 4
        cmp eax, dword ptr [esi + 1a4h]
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 7C B0: jl 0x58898294
        __asm _emit 0x7c
        __asm _emit 0xb0
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebx, dword ptr [edi - 70h]
        ; Exact mapped bytes 75 70: jne 0x58898362
        __asm _emit 0x75
        __asm _emit 0x70
        cmp dword ptr [esi + 1b0h], 1
        ; Exact mapped bytes 75 20: jne 0x5889831b
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 108h]
        mov eax, dword ptr [eax + 64h]
        mov ecx, dword ptr [esi + 104h]
        add eax, dword ptr [ecx + 64h]
        mov edx, dword ptr [esi + 100h]
        add eax, dword ptr [edx + 64h]
        cmp eax, 3
        ; Exact mapped bytes 73 C9: jae 0x588982e4
        __asm _emit 0x73
        __asm _emit 0xc9
        mov eax, ebp
        test ebp, ebp
        ; Exact mapped bytes 75 05: jne 0x58898326
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        mov ecx, dword ptr [esi + 148h]
        add ecx, eax
        cmp ecx, 80h
        ; Exact mapped bytes 7F 13: jg 0x58898349
        __asm _emit 0x7f
        __asm _emit 0x13
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [edi + 94h]
        ; Exact mapped bytes 7D 06: jge 0x58898349
        __asm _emit 0x7d
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 57 EF 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 0F 85 7A FF FF FF: jne 0x588982d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 43 F4 FF FF: call 0x588977a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x588982d0
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, dword ptr [edi - 54h]
        ; Exact mapped bytes 75 2D: jne 0x58898394
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, ebp
        test ebp, ebp
        ; Exact mapped bytes 75 05: jne 0x58898372
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        mov ecx, dword ptr [edi - 1ch]
        push eax
        ; Exact mapped bytes E8 85 EF 06 00: call 0x58907300
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 0F 85 48 FF FF FF: jne 0x588982d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 11 F4 FF FF: call 0x588977a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x588982d0
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, dword ptr [edi - 38h]
        ; Exact mapped bytes 0F 85 33 FF FF FF: jne 0x588982d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ebp
        push 0
        push eax
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 86 FB FF FF: call 0x58897f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 21 FF FF FF: jmp 0x588982d0
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
