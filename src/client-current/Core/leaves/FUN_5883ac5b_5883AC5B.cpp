// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AC5B .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5883ac5b_5883AC5B() {
    __asm {
        push ebp
        mov ebp, esp
        test byte ptr [ebp + 8], 1
        push esi
        mov esi, ecx
        mov dword ptr [esi], 588c1d28h
        ; Exact mapped bytes 74 0A: je 0x5883ac77
        __asm _emit 0x74
        __asm _emit 0x0a
        push 4
        push esi
        ; Exact mapped bytes E8 BF 63 FF FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
