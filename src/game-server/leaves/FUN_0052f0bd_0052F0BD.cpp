// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052F0BD .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0052f0bd_0052F0BD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 86 6C 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DE 70 00 00: call 0x5361b5
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7E 6E 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 98 00 00: call 0x538915
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 57 6E 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 97 00 00: call 0x538915
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8D 70 00 00: call 0x5361b5
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1B 6E 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 97 00 00: call 0x538915
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F4 6D 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 97 00 00: call 0x538915
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
