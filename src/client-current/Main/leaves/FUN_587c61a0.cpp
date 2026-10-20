// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C61A0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_587c61a0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov edi, esi
        cmp dword ptr [esi + 4ch], ebx
        ; Exact mapped bytes 74 1B: je 0x587c61c9
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes E8 2D F7 FF FF: call 0x587c58e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 02: jne 0x587c61b9
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 4ch]
        push eax
        ; Exact mapped bytes E8 7C 6C 1B 00: call 0x5897ce3e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x587c61cb
        __asm _emit 0x74
        __asm _emit 0x02
        xor edi, edi
        mov ecx, esi
        mov byte ptr [esi + 48h], bl
        mov byte ptr [esi + 41h], bl
        ; Exact mapped bytes E8 48 E8 FF FF: call 0x587c4a20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 4ch], ebx
        ; Exact mapped bytes 8B 0D 88 4A A2 58: mov ecx, dword ptr [0x58a24a88]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, edi
        pop edi
        mov dword ptr [esi + 3ch], ebx
        mov dword ptr [esi + 44h], ecx
        pop esi
        pop ebx
        ret
    }
}
