// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004185B2 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_004185b2_004185B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ecx + 2ch]
        neg eax
        sbb eax, eax
        test eax, eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 29: je 0x4185ef
        __asm _emit 0x74
        __asm _emit 0x29
        push esi
        lea esi, [ecx + 20h]
        lea eax, [ebp - 8]
        mov ecx, esi
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 83 52 01 00: call 0x42d860
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 14 00 00: call 0x419ab0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 DC: jne 0x4185ca
        __asm _emit 0x75
        __asm _emit 0xdc
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
