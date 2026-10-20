// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889DCC0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5889dcc0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 70h]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 AE A1 FC FF: call 0x58867e80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 76 C2 FC FF: call 0x58869f50
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
