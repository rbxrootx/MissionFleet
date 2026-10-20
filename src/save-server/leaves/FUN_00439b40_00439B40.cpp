// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439B40 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_00439b40_00439B40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 10h], edx
        ; Exact mapped bytes 76 0D: jbe 0x439b68
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 3B C2 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x439b89
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 8]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 06: jmp 0x439b8f
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 08: jne 0x439bb6
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 1C: jmp 0x439bd2
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 10h]
        mov edi, dword ptr [ebp + 8]
        mov eax, ecx
        mov edx, edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
