// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E743 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5882e743_5882E743() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        lea eax, [esi + 4]
        mov dword ptr [esi], 58894ccch
        push eax
        ; Exact mapped bytes E8 6B EC 01 00: call 0x5884d3c3
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        test byte ptr [ebp + 8], 1
        pop ecx
        ; Exact mapped bytes 74 0A: je 0x5882e769
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0ch
        push esi
        ; Exact mapped bytes E8 CD 28 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
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
