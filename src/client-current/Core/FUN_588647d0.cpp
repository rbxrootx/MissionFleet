// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588647D0 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_588647d0() {
    __asm {
        mov edi, edi
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff0h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 88h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebx + 8]
        lea eax, [ebx + 18h]
        push edi
        mov edi, dword ptr [ebx + 20h]
        push edi
        push eax
        push esi
        ; Exact mapped bytes E8 05 01 00 00: call 0x58864910
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x58864836
        __asm _emit 0x75
        __asm _emit 0x24
        and dword ptr [ebp - 40h], 0fffffffeh
        push eax
        lea eax, [ebx + 18h]
        push eax
        lea eax, [ebx + 10h]
        push eax
        push dword ptr [ebx + 0ch]
        lea eax, [ebx + 20h]
        push esi
        push eax
        lea eax, [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 40 04 00 00: call 0x58864c70
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 20h]
        add esp, 1ch
        mov eax, dword ptr [ebx + 8]
        test al, 20h
        ; Exact mapped bytes 74 07: je 0x58864844
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, 5
        ; Exact mapped bytes EB 29: jmp 0x5886486d
        __asm _emit 0xeb
        __asm _emit 0x29
        test al, 8
        ; Exact mapped bytes 74 07: je 0x5886484f
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, 1
        ; Exact mapped bytes EB 1E: jmp 0x5886486d
        __asm _emit 0xeb
        __asm _emit 0x1e
        test al, 4
        ; Exact mapped bytes 74 07: je 0x5886485a
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, 2
        ; Exact mapped bytes EB 13: jmp 0x5886486d
        __asm _emit 0xeb
        __asm _emit 0x13
        test al, 1
        ; Exact mapped bytes 74 07: je 0x58864865
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, 3
        ; Exact mapped bytes EB 08: jmp 0x5886486d
        __asm _emit 0xeb
        __asm _emit 0x08
        movzx esi, al
        and esi, 2
        add esi, esi
        ; Exact mapped bytes E8 3E F6 00 00: call 0x58873eb0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 45: je 0x588648bb
        __asm _emit 0x74
        __asm _emit 0x45
        test esi, esi
        ; Exact mapped bytes 74 68: je 0x588648e2
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes F2 0F 10 43 18: movsd xmm0, qword ptr [ebx + 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0x18
        push edi
        sub esp, 18h
        ; Exact mapped bytes F2 0F 11 44 24 10: movsd qword ptr [esp + 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 44 24 08: movsd qword ptr [esp + 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 10 43 10: movsd xmm0, qword ptr [ebx + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0x10
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push dword ptr [ebx + 0ch]
        push esi
        ; Exact mapped bytes E8 3B 07 00 00: call 0x58864fe0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9C C7 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        sub esi, 1
        ; Exact mapped bytes 74 17: je 0x588648d7
        __asm _emit 0x74
        __asm _emit 0x17
        sub esi, 1
        ; Exact mapped bytes 74 05: je 0x588648ca
        __asm _emit 0x74
        __asm _emit 0x05
        sub esi, 1
        ; Exact mapped bytes 75 18: jne 0x588648e2
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 A0 DB FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes EB 0B: jmp 0x588648e2
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes E8 93 DB FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 21h
        push 0ffffh
        push edi
        ; Exact mapped bytes E8 43 B8 00 00: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add esp, 8
        fld qword ptr [ebx + 18h]
        xor ecx, ebp
        pop edi
        pop esi
        ; Exact mapped bytes E8 51 C7 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
