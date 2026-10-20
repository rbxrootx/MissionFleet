// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884EFFB .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5884effb_5884EFFB() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 23 06 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 24h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5884f018
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [eax], ecx
        ; Exact mapped bytes 74 0C: je 0x5884f01d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 75 F5: jne 0x5884f00d
        __asm _emit 0x75
        __asm _emit 0xf5
        xor eax, eax
        inc eax
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
