// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DBD5 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_0042dbd5_0042DBD5() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push edi
        add eax, ebx
        mov edi, ecx
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x42dbf5
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 0C 9B 44 00: mov ecx, dword ptr [0x449b0c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1E: jmp 0x42dc13
        __asm _emit 0xeb
        __asm _emit 0x1e
        push esi
        mov esi, dword ptr [ebp + 8]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 17 FE FF FF: call 0x42da18
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        push ebx
        add eax, dword ptr [ebp + 10h]
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes E8 B1 0F FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop esi
        pop edi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
