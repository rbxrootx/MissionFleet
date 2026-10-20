// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E7B90 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_587e7b90() {
    __asm {
        push ebx
        push edi
        mov edi, ecx
        xor ebx, ebx
        cmp dword ptr [edi + 104d0h], ebx
        ; Exact mapped bytes 7E 6D: jle 0x587e7c0b
        __asm _emit 0x7e
        __asm _emit 0x6d
        push esi
        lea esi, [edi + 218f0h]
        cmp ebx, 8
        ; Exact mapped bytes 74 60: je 0x587e7c0a
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [esi]
        push 0
        ; Exact mapped bytes E8 7D BF 0C 00: call 0x588b3b30
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        movzx eax, word ptr [edi + 105f0h]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 1B: je 0x587e7bdb
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 15: je 0x587e7bdb
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 83 BF A2 05 01 00 07: cmp word ptr [edi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        mov ecx, dword ptr [esi]
        push 1
        ; Exact mapped bytes 75 1E: jne 0x587e7bf2
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 57 BF 0C 00: call 0x588b3b30
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x587e7bfe
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        movzx edx, byte ptr [ecx + 354h]
        cmp ebx, edx
        ; Exact mapped bytes 75 10: jne 0x587e7bfe
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esi]
        push 1
        ; Exact mapped bytes E8 39 BF 0C 00: call 0x588b3b30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 62 B5 0C 00: call 0x588b3160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb5
        __asm _emit 0x0c
        __asm _emit 0x00
        inc ebx
        add esi, 4
        cmp ebx, dword ptr [edi + 104d0h]
        ; Exact mapped bytes 7C 9B: jl 0x587e7ba5
        __asm _emit 0x7c
        __asm _emit 0x9b
        pop esi
        pop edi
        pop ebx
        ret
    }
}
