// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588247B0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_588247b0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 74 7A: je 0x58824836
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588247ed
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588247e6
        __asm _emit 0x74
        __asm _emit 0x18
        mov edi, edi
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x588247ed
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588247d0
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 60h]
        dec eax
        cmp eax, 3
        ; Exact mapped bytes 77 3F: ja 0x58824836
        __asm _emit 0x77
        __asm _emit 0x3f
        ; Exact mapped bytes FF 24 85 40 48 82 58: jmp dword ptr [eax*4 + 0x58824840]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x48
        __asm _emit 0x82
        __asm _emit 0x58
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 EA 36 00 00: call 0x58827ef0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 FA 47 00 00: call 0x58829010
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 DA 3C 00 00: call 0x58828500
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 DA 29 00 00: call 0x58827210
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
