// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100402E0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_100402e0_100402E0() {
    __asm {
        push esi
        push edi
        lea esi, [ecx + 8]
        mov edi, 20h
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x1004030e
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10040308
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 D6: jne 0x100402ea
        __asm _emit 0x75
        __asm _emit 0xd6
        pop edi
        pop esi
        ret
    }
}
