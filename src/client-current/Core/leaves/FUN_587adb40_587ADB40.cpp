// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADB40 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_587adb40_587ADB40() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov esi, dword ptr [ebx + 1ch]
        push esi
        ; Exact mapped bytes E8 E0 27 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 10h]
        add esp, 4
        cmp dword ptr [esi + 14h], edi
        cmovbe edi, dword ptr [esi + 14h]
        test edi, edi
        ; Exact mapped bytes 74 26: je 0x587adb87
        __asm _emit 0x74
        __asm _emit 0x26
        push edi
        push dword ptr [esi + 10h]
        push dword ptr [ebx + 0ch]
        ; Exact mapped bytes E8 23 ED 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xed
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [ebx + 0ch], edi
        add esp, 0ch
        add dword ptr [esi + 10h], edi
        add dword ptr [ebx + 14h], edi
        sub dword ptr [ebx + 10h], edi
        sub dword ptr [esi + 14h], edi
        ; Exact mapped bytes 75 06: jne 0x587adb87
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [esi + 8]
        mov dword ptr [esi + 10h], eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}
