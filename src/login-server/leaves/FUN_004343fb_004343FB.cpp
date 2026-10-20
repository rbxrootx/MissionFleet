// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004343FB .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004343fb_004343FB() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 4]
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x43441c
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        ; Exact mapped bytes E8 67 FF FF FF: call 0x434374
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x43441c
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [esi + 4]
        lea ecx, [eax + 4]
        ; Exact mapped bytes E8 02 94 FF FF: call 0x42d81e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [esi + 4], 0
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
