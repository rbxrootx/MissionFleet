// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FEEC0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_100feec0_100FEEC0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 8]
        mov esi, dword ptr [edi + 3ch]
        add ecx, ebx
        test esi, esi
        mov dword ptr [edi + 8], ecx
        ; Exact mapped bytes 74 1C: je 0x100feef4
        __asm _emit 0x74
        __asm _emit 0x1c
        test byte ptr [esi + 25h], 20h
        ; Exact mapped bytes 74 08: je 0x100feee6
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 DA FF FF FF: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 04: je 0x100feef4
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x100feed8
        __asm _emit 0x75
        __asm _emit 0xe4
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
