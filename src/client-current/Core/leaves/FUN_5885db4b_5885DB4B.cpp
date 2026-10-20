// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DB4B .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_5885db4b_5885DB4B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov ebx, ecx
        push edi
        push dword ptr [ebp + 14h]
        mov dword ptr [ebx], edx
        lea edi, [ebx + 8]
        mov dword ptr [ebx + 4], eax
        lea ecx, [ebx + 18h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        push eax
        push edx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes E8 D4 FE FF FF: call 0x5885da4a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 18h]
        and dword ptr [ebx + 70h], 0
        mov dword ptr [ebx + 68h], eax
        mov eax, dword ptr [ebp + 1ch]
        pop edi
        mov dword ptr [ebx + 6ch], eax
        mov eax, ebx
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
