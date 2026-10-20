// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E54E0 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_585e54e0_585E54E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21e10h], 0
        ; Exact mapped bytes 74 32: je 0x585e5539
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e08h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e08h], edx
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        push 10h
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e14h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 56: je 0x585e5595
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 FA BA 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xba
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 2B 73 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x73
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21e10h], 0
        ; Exact mapped bytes 74 1F: je 0x585e5593
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e14h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 07: jmp 0x585e559c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 106a4h
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC 93 00 00: call 0x585ee9a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
