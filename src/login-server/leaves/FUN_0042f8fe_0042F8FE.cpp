// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F8FE .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042f8fe_0042F8FE() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 18h]
        push esi
        test eax, eax
        push edi
        ; Exact mapped bytes 75 04: jne 0x42f90e
        __asm _emit 0x75
        __asm _emit 0x04
        xor edi, edi
        ; Exact mapped bytes EB 03: jmp 0x42f911
        __asm _emit 0xeb
        __asm _emit 0x03
        mov edi, dword ptr [eax + 1ch]
        push dword ptr [ebp + 20h]
        mov eax, dword ptr [ebp + 14h]
        push dword ptr [ebp + 1ch]
        mov edx, dword ptr [eax + 4]
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [eax + 0ch]
        mov eax, dword ptr [eax + 8]
        sub edi, edx
        sub eax, esi
        push edi
        push eax
        mov eax, dword ptr [ebp + 10h]
        push edx
        or eax, 40000000h
        push esi
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push 0
        ; Exact mapped bytes E8 D4 FE FF FF: call 0x42f818
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
