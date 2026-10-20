// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780800 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58780800_58780800() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 180h
        ; Exact mapped bytes E8 6C 71 D0 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 8D 6A D0 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 4
        mov ecx, 60h
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
