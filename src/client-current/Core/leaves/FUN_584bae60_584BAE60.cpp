// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BAE60 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_584bae60_584BAE60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 808h
        ; Exact mapped bytes E8 0C CB FC FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 2D C4 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov ecx, 202h
        mov esi, eax
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
