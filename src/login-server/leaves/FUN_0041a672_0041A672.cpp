// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A672 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_0041a672_0041A672() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        lea eax, [ebp - 20h]
        push edi
        push eax
        mov eax, dword ptr [ebx - 0a0h]
        mov eax, dword ptr [eax + 1ch]
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 2C C5 43 00: call dword ptr [0x43c52c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 18 C4 43 00: call dword ptr [0x43c418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebx - 90h]
        lea esi, [ebp - 10h]
        mov edi, eax
        mov ebx, dword ptr [ebx - 6ch]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        lea edx, [ebp - 20h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov ecx, dword ptr [ebx]
        push edx
        push eax
        push ebx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
