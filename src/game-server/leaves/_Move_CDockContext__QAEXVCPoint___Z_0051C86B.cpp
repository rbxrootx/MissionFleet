// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C86B .. +0x10B bytes.
extern "C" __declspec(naked) void _Move_CDockContext__QAEXVCPoint___Z_0051C86B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 44h], ecx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 D0 93 01 00: call 0x535c67
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F6 90 01 00: call 0x5359a8
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 28h
        ; Exact mapped bytes E8 68 98 01 00: call 0x536139
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 48h
        ; Exact mapped bytes E8 49 98 01 00: call 0x536139
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 38h
        ; Exact mapped bytes E8 2A 98 01 00: call 0x536139
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 58h
        ; Exact mapped bytes E8 0B 98 01 00: call 0x536139
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 09: je 0x51c952
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 0B: jmp 0x51c95d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 12 0F 00 00: call 0x51d86c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1E 0C 00 00: call 0x51d58e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
