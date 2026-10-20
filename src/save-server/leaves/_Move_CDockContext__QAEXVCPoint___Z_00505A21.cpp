// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00505A21 .. +0x10B bytes.
extern "C" __declspec(naked) void _Move_CDockContext__QAEXVCPoint___Z_00505A21() {
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
        ; Exact mapped bytes E8 D1 C6 02 00: call 0x53211e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc6
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 33 C4 02 00: call 0x531e9b
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc4
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 0A CB 02 00: call 0x532591
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xcb
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 EB CA 02 00: call 0x532591
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xca
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 CC CA 02 00: call 0x532591
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xca
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 AD CA 02 00: call 0x532591
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 09: je 0x505b08
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 0B: jmp 0x505b13
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F9 0E 00 00: call 0x506a09
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 05 0C 00 00: call 0x50672b
        __asm _emit 0xe8
        __asm _emit 0x05
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
