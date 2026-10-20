// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D039 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_5884d039_5884D039() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        cmp dword ptr [ebp + 8], 123h
        ; Exact mapped bytes 75 12: jne 0x5884d05b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, 5884d10ch
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        xor eax, eax
        inc eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x5884d135
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 5884d259h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        lea ecx, [ebp - 3ch]
        xor eax, ecx
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 20h], esp
        mov dword ptr [ebp - 1ch], ebp
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        lea eax, [ebp - 3ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 24 03 03 00: call 0x5887d3e9
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 43 25 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F B6 01 00: call 0x58868770
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 14h]
        push eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        pop ecx
        pop ecx
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x5884d129
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 64 8B 1D 00 00 00 00: mov ebx, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ebx, dword ptr [ebp - 3ch]
        mov dword ptr [ebx], eax
        ; Exact mapped bytes 64 89 1D 00 00 00 00: mov dword ptr fs:[0], ebx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5884d132
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop ebx
        leave
        ret
    }
}
