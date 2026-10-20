// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868B11 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58868b11_58868B11() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [esi + 4ch], 0
        ; Exact mapped bytes 74 28: je 0x58868b48
        __asm _emit 0x74
        __asm _emit 0x28
        push dword ptr [esi + 4ch]
        ; Exact mapped bytes E8 7D D6 00 00: call 0x588761a5
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4ch]
        pop ecx
        ; Exact mapped bytes 3B 05 84 99 96 58: cmp eax, dword ptr [0x58969984]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 14: je 0x58868b48
        __asm _emit 0x74
        __asm _emit 0x14
        cmp eax, 58907460h
        ; Exact mapped bytes 74 0D: je 0x58868b48
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x58868b48
        __asm _emit 0x75
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes E8 93 D4 00 00: call 0x58875fda
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 4ch], eax
        pop esi
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58868b5a
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes E8 04 D4 00 00: call 0x58875f5d
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ebp
        ret
    }
}
