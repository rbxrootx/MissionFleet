// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DB8F .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5885db8f_5885DB8F() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        movzx eax, byte ptr [eax]
        push eax
        ; Exact mapped bytes E8 89 37 00 00: call 0x5886132b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov byte ptr [eax], 0
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi]
        push dword ptr [eax + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 A8 31 00 00: call 0x58860d5f
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
