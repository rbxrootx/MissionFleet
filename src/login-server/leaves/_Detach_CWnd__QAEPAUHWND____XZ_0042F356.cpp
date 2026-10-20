// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F356 .. +0x2E bytes.
extern "C" __declspec(naked) void _Detach_CWnd__QAEPAUHWND____XZ_0042F356() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 1ch]
        test edi, edi
        ; Exact mapped bytes 74 1A: je 0x42f37b
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        ; Exact mapped bytes E8 FE FE FF FF: call 0x42f266
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42f377
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [esi + 1ch]
        lea ecx, [eax + 4]
        ; Exact mapped bytes E8 A7 E4 FF FF: call 0x42d81e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [esi + 1ch], 0
        and dword ptr [esi + 38h], 0
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
