// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F627 .. +0x3A bytes.
extern "C" __declspec(naked) void __CxxThrowException_8_0041F627() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        push esi
        push edi
        push 8
        pop ecx
        mov esi, 43fa20h
        lea edi, [ebp - 20h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 0ch]
        push eax
        push dword ptr [ebp - 10h]
        push dword ptr [ebp - 1ch]
        push dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 15 08 C2 43 00: call dword ptr [0x43c208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
