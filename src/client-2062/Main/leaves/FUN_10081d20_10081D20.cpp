// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10081D20 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_10081d20_10081D20() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        test esi, esi
        ; Exact mapped bytes 74 26: je 0x10081d52
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esi + 70h]
        mov ecx, dword ptr [esp + 10h]
        push ecx
        mov ecx, edi
        mov eax, dword ptr [eax + 6ch]
        push eax
        ; Exact mapped bytes E8 21 00 00 00: call 0x10081d60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x10081d52
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [esi + 0a4h], edi
        mov esi, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
