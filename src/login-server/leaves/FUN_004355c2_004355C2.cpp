// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004355C2 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004355c2_004355C2() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        cmp ebx, 3
        mov esi, ecx
        ; Exact mapped bytes 75 08: jne 0x4355d9
        __asm _emit 0x75
        __asm _emit 0x08
        push 1
        pop eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x435663
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 2
        ; Exact mapped bytes 75 15: jne 0x4355f3
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        add dword ptr [esi + 14h], eax
        mov eax, dword ptr [esi + 14h]
        cmp eax, dword ptr [esi + 1ch]
        ; Exact mapped bytes 76 03: jbe 0x4355ef
        __asm _emit 0x76
        __asm _emit 0x03
        mov dword ptr [esi + 1ch], eax
        xor eax, eax
        ; Exact mapped bytes EB 70: jmp 0x435663
        __asm _emit 0xeb
        __asm _emit 0x70
        push edi
        mov edi, dword ptr [ebp + 0ch]
        cmp ebx, 1
        ; Exact mapped bytes 75 12: jne 0x43560e
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi + 14h]
        add eax, edi
        cmp eax, dword ptr [esi + 18h]
        ; Exact mapped bytes 76 08: jbe 0x43560e
        __asm _emit 0x76
        __asm _emit 0x08
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov eax, dword ptr [esi + 14h]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [esi + 20h]
        cmp ebx, 1
        mov dword ptr [edx], eax
        ; Exact mapped bytes 75 18: jne 0x435636
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 18h]
        add eax, edi
        cmp ecx, eax
        ; Exact mapped bytes 73 02: jae 0x43562c
        __asm _emit 0x73
        __asm _emit 0x02
        mov eax, ecx
        add eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 28: jmp 0x43565e
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp edi, -1
        ; Exact mapped bytes 75 06: jne 0x435641
        __asm _emit 0x75
        __asm _emit 0x06
        mov edi, dword ptr [esi + 18h]
        sub edi, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 1ch]
        add eax, edi
        cmp ecx, eax
        ; Exact mapped bytes 73 02: jae 0x43564f
        __asm _emit 0x73
        __asm _emit 0x02
        mov eax, ecx
        mov ecx, dword ptr [esi + 20h]
        add eax, ecx
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        sub eax, dword ptr [edx]
        add dword ptr [esi + 14h], eax
        mov eax, dword ptr [ecx]
        pop edi
        sub eax, dword ptr [edx]
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
