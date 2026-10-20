// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DC39 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5885dc39_5885DC39() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        movzx eax, byte ptr [eax]
        push eax
        ; Exact mapped bytes E8 26 37 00 00: call 0x58861372
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov byte ptr [eax], 0
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi]
        push dword ptr [eax + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 FE 30 00 00: call 0x58860d5f
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
