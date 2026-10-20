// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865D92 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58865d92_58865D92() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        mov eax, dword ptr [esi]
        ; Exact mapped bytes F0 0F C1 08: lock xadd dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes 75 15: jne 0x58865dbb
        __asm _emit 0x75
        __asm _emit 0x15
        push edi
        mov edi, 58907808h
        cmp dword ptr [esi], edi
        ; Exact mapped bytes 74 0A: je 0x58865dba
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [esi]
        ; Exact mapped bytes E8 59 6E 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi], edi
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
