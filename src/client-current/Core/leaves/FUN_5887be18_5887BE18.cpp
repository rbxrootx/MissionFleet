// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BE18 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5887be18_5887BE18() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        push edi
        push 1
        push ebx
        push ebx
        push esi
        mov edi, ecx
        ; Exact mapped bytes E8 DD 54 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        push ebx
        push ebx
        push esi
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], edx
        ; Exact mapped bytes E8 CE 54 FF FF: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        add esp, 20h
        mov dword ptr [edi + 8], eax
        sub ecx, eax
        mov eax, dword ptr [ebp + 10h]
        sbb eax, edx
        mov dword ptr [edi + 18h], esi
        mov dword ptr [edi + 14h], eax
        mov eax, edi
        mov dword ptr [edi + 0ch], edx
        mov dword ptr [edi + 10h], ecx
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
