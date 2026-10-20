// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AC7E .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5883ac7e_5883AC7E() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        lea ecx, [esi + 4]
        ; Exact mapped bytes E8 F4 71 CC FF: call 0x58501e80
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x71
        __asm _emit 0xcc
        __asm _emit 0xff
        test byte ptr [ebp + 8], 1
        mov dword ptr [esi], 588c1d28h
        ; Exact mapped bytes 74 0A: je 0x5883aca2
        __asm _emit 0x74
        __asm _emit 0x0a
        push 10h
        push esi
        ; Exact mapped bytes E8 94 63 FF FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x94
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
