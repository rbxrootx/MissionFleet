// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041759B .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0041759b_0041759B() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ecx + 4]
        ; Exact mapped bytes FF 15 A4 C3 43 00: call dword ptr [0x43c3a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        shr eax, 10h
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx], edx
        mov eax, ecx
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
