// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EDC80 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_584edc80_584EDC80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 21 96 F9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 108h
        ; Exact mapped bytes E8 E3 9C F9 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 04 96 F9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov ecx, 42h
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
