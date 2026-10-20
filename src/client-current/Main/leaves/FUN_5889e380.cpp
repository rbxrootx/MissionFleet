// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889E380 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_5889e380() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        cmp eax, 2
        ; Exact mapped bytes 75 77: jne 0x5889e403
        __asm _emit 0x75
        __asm _emit 0x77
        mov eax, dword ptr [esp + 8]
        cmp dword ptr [esi + 84h], eax
        ; Exact mapped bytes 75 0D: jne 0x5889e3a5
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 80h], eax
        ; Exact mapped bytes 75 26: jne 0x5889e3d3
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [esi + 70h]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 C4 9A FC FF: call 0x58867e80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 8C BB FC FF: call 0x58869f50
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 75 1B: jne 0x5889e3f3
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 70h]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 7D 3A: jge 0x5889e41d
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ecx + 64h]
        inc eax
        push eax
        ; Exact mapped bytes E8 73 8F 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 75 25: jne 0x5889e41d
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes E8 13 F9 FF FF: call 0x5889dd10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 74 15: je 0x5889e41d
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 4
        ; Exact mapped bytes 75 10: jne 0x5889e41d
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 41 EC FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x41
        __asm _emit 0xec
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
