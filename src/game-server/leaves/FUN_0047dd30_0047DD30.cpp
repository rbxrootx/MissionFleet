// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DD30 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0047dd30_0047DD30() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, esp
        push 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 97 AA 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        pop esi
        cmp ebp, esp
        ; Exact mapped bytes E8 8F AA 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebp
        ret
    }
}
