// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C820 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5896c820() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 50h]
        cmp ecx, 4
        ; Exact mapped bytes 75 1D: jne 0x5896c847
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [eax + 58h], ecx
        mov dword ptr [eax + 50h], 3
        mov ecx, dword ptr [eax + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5896c844
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 EC ED F9 FF: call 0x5890b630
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, eax
        ret
        cmp ecx, 6
        ; Exact mapped bytes 75 0F: jne 0x5896c85b
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [eax + 5ch]
        mov dword ptr [eax + 58h], edx
        mov dword ptr [eax + 50h], 2
        ; Exact mapped bytes EB DC: jmp 0x5896c837
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov eax, dword ptr [eax + 34h]
        ret
    }
}
