// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858D65 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58858d65_58858D65() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 14h], 0
        ; Exact mapped bytes 74 04: je 0x58858d74
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [esi + 14h], 0
        ; Exact mapped bytes E8 F6 96 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        pop ecx
        mov dword ptr [eax], ecx
        mov eax, ecx
        and dword ptr [esi + 0ch], 0
        mov byte ptr [esi + 14h], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
