// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585248E0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_585248e0_585248E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C1 29 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x29
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        push 11ch
        ; Exact mapped bytes E8 83 30 F6 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 A4 29 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x29
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
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
