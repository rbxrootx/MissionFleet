// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E129 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_0042e129_0042E129() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx + 34h]
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x42e147
        __asm _emit 0x75
        __asm _emit 0x14
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 00 C5 43 00: call dword ptr [0x43c500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x42e157
        __asm _emit 0xeb
        __asm _emit 0x10
        push dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
