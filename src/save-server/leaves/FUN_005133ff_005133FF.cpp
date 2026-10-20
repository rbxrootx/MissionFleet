// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005133FF .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_005133ff_005133FF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x51341a
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 34 FC FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x51342d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 86h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
