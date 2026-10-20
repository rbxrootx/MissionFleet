// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050704F .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_0050704f_0050704F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push 5c93d8h
        push 5c9408h
        ; Exact mapped bytes E8 B1 8B FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 E9 DE 03 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x50712a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x50712a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 4E 40 FA FF: call 0x4ab0e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x40
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 77 2D: ja 0x5070d0
        __asm _emit 0x77
        __asm _emit 0x2d
        push 5c940ch
        push 5c9440h
        ; Exact mapped bytes E8 63 8B FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 BF 3B FA FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        ; Exact mapped bytes EB 53: jmp 0x507123
        __asm _emit 0xeb
        __asm _emit 0x53
        push 0
        ; Exact mapped bytes E8 C8 60 FE FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes E8 2E 3B FA FF: call 0x4aac20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 A1 60 FE FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 D2 3F FA FF: call 0x4ab0e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x3f
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 5c9444h
        ; Exact mapped bytes E8 F5 8A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        mov eax, 1
        ; Exact mapped bytes EB 19: jmp 0x507143
        __asm _emit 0xeb
        __asm _emit 0x19
        push 5c9494h
        push 5c94d0h
        ; Exact mapped bytes E8 DC 8A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 6B 8C FC FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
