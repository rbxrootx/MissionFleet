// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435583 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00435583_00435583() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 20h]
        mov dword ptr [esi + 10h], edi
        cmp eax, edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], edi
        ; Exact mapped bytes 74 0B: je 0x4355a7
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [esi + 24h], edi
        ; Exact mapped bytes 74 06: je 0x4355a7
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [esi]
        push eax
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov dword ptr [esi + 20h], edi
        pop edi
        pop esi
        ret
    }
}
