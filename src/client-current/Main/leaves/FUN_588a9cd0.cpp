// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A9CD0 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_588a9cd0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x588a9d73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        cmp dword ptr [esi + 80h], eax
        ; Exact mapped bytes 75 0D: jne 0x588a9cf9
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
        cmp dword ptr [esi + 7ch], eax
        ; Exact mapped bytes 75 0B: jne 0x588a9d09
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 CD F8 FF FF: call 0x588a95d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 6ch], eax
        ; Exact mapped bytes 75 52: jne 0x588a9d60
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [esi + 88h]
        movzx edx, word ptr [eax + 0ch]
        mov ecx, dword ptr [esi + 84h]
        push edi
        movzx edi, word ptr [eax + 0ah]
        movzx eax, word ptr [eax + 2ah]
        xor edx, 0aah
        xor edi, 0aah
        add edx, ecx
        add edi, edx
        xor eax, 0aah
        cmp edi, eax
        pop edi
        ; Exact mapped bytes 7D 12: jge 0x588a9d53
        __asm _emit 0x7d
        __asm _emit 0x12
        lea eax, [ecx + 1]
        mov ecx, dword ptr [esi + 68h]
        push eax
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 0D D6 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 B6 F6 FF FF: call 0x588a9410
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 70h], eax
        ; Exact mapped bytes 75 28: jne 0x588a9d8d
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [esi + 84h]
        cmp eax, 1
        ; Exact mapped bytes 7E E3: jle 0x588a9d53
        __asm _emit 0x7e
        __asm _emit 0xe3
        dec eax
        ; Exact mapped bytes EB D1: jmp 0x588a9d44
        __asm _emit 0xeb
        __asm _emit 0xd1
        cmp eax, 3
        ; Exact mapped bytes 74 15: je 0x588a9d8d
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 4
        ; Exact mapped bytes 75 10: jne 0x588a9d8d
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
        ; Exact mapped bytes E8 83 88 EB FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0xeb
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
