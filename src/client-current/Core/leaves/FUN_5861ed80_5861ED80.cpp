// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861ED80 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5861ed80_5861ED80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 26: je 0x5861edb3
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 A7 E9 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E FC FF FF: call 0x5861e9c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5861edb3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E 14 00 00: call 0x586201e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
