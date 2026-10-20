// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589718DF .. +0x28 bytes.
extern "C" __declspec(naked) void _Locinfo_dtor() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 76 18: jbe 0x58971905
        __asm _emit 0x76
        __asm _emit 0x18
        cmp dword ptr [eax + 54h], 10h
        ; Exact mapped bytes 72 05: jb 0x589718f8
        __asm _emit 0x72
        __asm _emit 0x05
        mov eax, dword ptr [eax + 40h]
        ; Exact mapped bytes EB 03: jmp 0x589718fb
        __asm _emit 0xeb
        __asm _emit 0x03
        add eax, 40h
        push eax
        push 0
        ; Exact mapped bytes E8 AF BC 00 00: call 0x5897d5b2
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop ebp
        ret
    }
}
