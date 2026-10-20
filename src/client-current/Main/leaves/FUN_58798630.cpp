// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798630 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_58798630() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 2f8h]
        push edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [esi + 2c8h], 0
        mov ecx, dword ptr [edi]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 06 FE FF: call 0x58778d00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x587986cb
        __asm _emit 0x74
        __asm _emit 0x72
        mov cl, byte ptr [esi + 2e4h]
        cmp cl, 1
        ; Exact mapped bytes 75 32: jne 0x58798696
        __asm _emit 0x75
        __asm _emit 0x32
        movzx edx, word ptr [eax + 0a2h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push 0
        ; Exact mapped bytes E8 47 09 FE FF: call 0x58778fc0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2dch]
        push eax
        mov eax, dword ptr [esi + 2e0h]
        push edi
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 18 02 00: call 0x587b9eb0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x587986cb
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp cl, 2
        ; Exact mapped bytes 75 30: jne 0x587986cb
        __asm _emit 0x75
        __asm _emit 0x30
        movzx edx, word ptr [eax + 0a2h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push 1
        ; Exact mapped bytes E8 10 09 FE FF: call 0x58778fc0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2dch]
        push eax
        mov eax, dword ptr [esi + 2e0h]
        push edi
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 18 02 00: call 0x587b9f10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        pop edi
        mov ecx, esi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
