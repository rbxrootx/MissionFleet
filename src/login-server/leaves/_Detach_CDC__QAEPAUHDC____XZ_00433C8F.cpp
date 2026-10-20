// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433C8F .. +0x31 bytes.
extern "C" __declspec(naked) void _Detach_CDC__QAEPAUHDC____XZ_00433C8F() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 4]
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x433cb0
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        ; Exact mapped bytes E8 30 FF FF FF: call 0x433bd1
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x433cb0
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [esi + 4]
        lea ecx, [eax + 4]
        ; Exact mapped bytes E8 6E 9B FF FF: call 0x42d81e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        and dword ptr [esi + 4], 0
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
