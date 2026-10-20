// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041ADC5 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_0041adc5_0041ADC5() {
    __asm {
        mov eax, 43aec7h
        ; Exact mapped bytes E8 39 48 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E8 2E 00 00 00: call 0x41ae10
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        and byte ptr [ebp - 4], 0
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x41adf3
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov esi, dword ptr [esi]
        or dword ptr [ebp - 4], 0ffffffffh
        test esi, esi
        ; Exact mapped bytes 74 06: je 0x41ae03
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [esi]
        push esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
