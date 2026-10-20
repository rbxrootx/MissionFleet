// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B217 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5884b217_5884B217() {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 60h], 0
        ; Exact mapped bytes 74 0F: je 0x5884b22f
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 74 09: je 0x5884b22f
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 5ch]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [esi + 50h]
        xor ecx, ecx
        mov dword ptr [esi + 5ch], ecx
        cmp eax, -1
        ; Exact mapped bytes 74 07: je 0x5884b243
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, dword ptr [esi + 54h]
        ; Exact mapped bytes 74 02: je 0x5884b243
        __asm _emit 0x74
        __asm _emit 0x02
        mov cl, 1
        mov eax, dword ptr [esi + 54h]
        mov edx, 60000h
        mov dword ptr [esi + 50h], eax
        xor eax, eax
        test cl, cl
        pop esi
        cmovne eax, edx
        ret
    }
}
