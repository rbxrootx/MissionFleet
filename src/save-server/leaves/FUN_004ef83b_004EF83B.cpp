// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF83B .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_004ef83b_004EF83B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8C 37 FE FF: call 0x4d2fda
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffh
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 7
        ; Exact mapped bytes 77 5A: ja 0x4ef8c3
        __asm _emit 0x77
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 95 A0 F9 4E 00: jmp dword ptr [edx*4 + 0x4ef9a0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xf9
        __asm _emit 0x4e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 47: jmp 0x4ef8c3
        __asm _emit 0xeb
        __asm _emit 0x47
        mov dword ptr [ebp - 8], 7fffffffh
        ; Exact mapped bytes EB 3E: jmp 0x4ef8c3
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 30: jmp 0x4ef8c3
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 22: jmp 0x4ef8c3
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 14: jmp 0x4ef8c3
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 06: jmp 0x4ef8c3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0D 37 FE FF: call 0x4d2fda
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        sar ecx, 8
        and ecx, 0ffh
        and ecx, 0ffh
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 7
        ; Exact mapped bytes 77 5A: ja 0x4ef951
        __asm _emit 0x77
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 95 C0 F9 4E 00: jmp dword ptr [edx*4 + 0x4ef9c0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0x4e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 47: jmp 0x4ef951
        __asm _emit 0xeb
        __asm _emit 0x47
        mov dword ptr [ebp - 10h], 7fffffffh
        ; Exact mapped bytes EB 3E: jmp 0x4ef951
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 30: jmp 0x4ef951
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 22: jmp 0x4ef951
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 14: jmp 0x4ef951
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 06: jmp 0x4ef951
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 14h]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 45 22 04 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x4ef997
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x4ef997
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DD C4 03 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
