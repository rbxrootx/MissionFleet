// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CDD32 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_004cdd32_004CDD32() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c6c4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x4cdd67
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 07: jge 0x4cdd74
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 0
        mov esi, dword ptr [ebp + 0ch]
        add esi, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 37 31 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 7E 11: jle 0x4cdd98
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2A 31 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 19 31 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7E 07: jle 0x4cddaf
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4cddc9
        __asm _emit 0x7d
        __asm _emit 0x14
        push 14bh
        push 5c4c5ch
        ; Exact mapped bytes E8 3C 6C 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cddc9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4cddaf
        __asm _emit 0x75
        __asm _emit 0xe0
        mov esi, dword ptr [ebp + 0ch]
        add esi, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DC 30 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 7E 14: jle 0x4cddf6
        __asm _emit 0x7e
        __asm _emit 0x14
        push 14ch
        push 5c4c5ch
        ; Exact mapped bytes E8 0F 6C 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cddf6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x4cddcf
        __asm _emit 0x75
        __asm _emit 0xd3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 2D: jne 0x4cde2f
        __asm _emit 0x75
        __asm _emit 0x2d
        mov esi, dword ptr [ebp + 0ch]
        add esi, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A9 30 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 1A: jne 0x4cde2f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 F6 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        or edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 49: jmp 0x4cde78
        __asm _emit 0xeb
        __asm _emit 0x49
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D0 30 06 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 FA 01 00: call 0x4ed889
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A F6 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D7 F9 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
