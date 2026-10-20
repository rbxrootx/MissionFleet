// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883549A .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_5883549a_5883549A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        push 4
        pop esi
        xor ebx, ebx
        mov dword ptr [ebp - 8], esi
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 0ch], ebx
        push eax
        push 588f01e0h
        mov edi, ecx
        mov dword ptr [ebp - 10h], ebx
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 18h], ebx
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 86 6E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 80000001h
        ; Exact mapped bytes FF 15 3C 40 89 58: call dword ptr [0x5889403c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x5883558a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 8], esi
        push eax
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 4], esi
        push eax
        lea eax, [ebp - 8]
        push eax
        push ebx
        push 588f0278h
        ; Exact mapped bytes E8 54 6E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 24 40 89 58: mov esi, dword ptr [0x58894024]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        pop ecx
        push eax
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 4
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 4]
        push eax
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 8]
        push eax
        push ebx
        push 588f0284h
        ; Exact mapped bytes E8 27 6E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 4
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 4]
        push eax
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 8]
        push eax
        push ebx
        push 588f0290h
        ; Exact mapped bytes E8 00 6E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 4
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 4]
        push eax
        lea eax, [ebp - 1ch]
        push eax
        lea eax, [ebp - 8]
        push eax
        push ebx
        push 588f029ch
        ; Exact mapped bytes E8 D9 6D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 10h]
        lea esi, [edi + 28h]
        push 588f02a8h
        ; Exact mapped bytes E8 B9 6D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 E8 4A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp - 14h]
        push 588f02bch
        ; Exact mapped bytes E8 A1 6D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 D0 4A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp - 18h]
        push 588f02d0h
        ; Exact mapped bytes E8 89 6D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 B8 4A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp - 1ch]
        push 588f02e4h
        ; Exact mapped bytes E8 71 6D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 A0 4A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
