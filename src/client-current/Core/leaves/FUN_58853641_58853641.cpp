// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853641 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58853641_58853641() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        push dword ptr [esi]
        ; Exact mapped bytes E8 C0 95 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        and dword ptr [esi], 0
        pop ecx
        mov eax, dword ptr [edx]
        mov dword ptr [esi], eax
        mov eax, esi
        and dword ptr [edx], 0
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
