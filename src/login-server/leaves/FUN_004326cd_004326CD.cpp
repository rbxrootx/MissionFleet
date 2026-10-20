// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004326CD .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004326cd_004326CD() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 4]
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x4326ee
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        ; Exact mapped bytes E8 49 FF FF FF: call 0x432628
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x4326ee
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [esi + 4]
        lea ecx, [eax + 4]
        ; Exact mapped bytes E8 30 B1 FF FF: call 0x42d81e
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [esi + 4], 0
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
