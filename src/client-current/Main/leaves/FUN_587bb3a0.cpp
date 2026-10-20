// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB3A0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_587bb3a0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 0ch]
        sub eax, ecx
        sar eax, 1
        lea eax, [eax + eax]
        push esi
        lea esi, [eax + edx]
        ; Exact mapped bytes 74 0C: je 0x587bb3c5
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        push ecx
        push eax
        push edx
        ; Exact mapped bytes E8 92 18 1C 00: call 0x5897cc54
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x18
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 10h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
