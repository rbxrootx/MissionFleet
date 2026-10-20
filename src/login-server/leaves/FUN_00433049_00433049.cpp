// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433049 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_00433049_00433049() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [ebp + 0ch]
        and dword ptr [esi + 8], 0
        or dword ptr [esi + 4], 0ffffffffh
        lea ebx, [esi + 0ch]
        and edi, 0ffff7fffh
        mov ecx, ebx
        ; Exact mapped bytes E8 C4 AA FF FF: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 8]
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 F4 02 00 00: call 0x433375
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 110h]
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 A5 AC FF FF: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        xor ecx, ecx
        and eax, 3
        sub eax, ecx
        ; Exact mapped bytes 74 14: je 0x4330ae
        __asm _emit 0x74
        __asm _emit 0x14
        dec eax
        ; Exact mapped bytes 74 0A: je 0x4330a7
        __asm _emit 0x74
        __asm _emit 0x0a
        dec eax
        ; Exact mapped bytes 75 13: jne 0x4330b3
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, 0c0000000h
        ; Exact mapped bytes EB 0C: jmp 0x4330b3
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, 40000000h
        ; Exact mapped bytes EB 05: jmp 0x4330b3
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, 80000000h
        mov eax, edi
        push 1
        and eax, 70h
        pop ebx
        ; Exact mapped bytes 74 21: je 0x4330de
        __asm _emit 0x74
        __asm _emit 0x21
        cmp eax, 10h
        ; Exact mapped bytes 74 1C: je 0x4330de
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 20h
        ; Exact mapped bytes 74 13: je 0x4330da
        __asm _emit 0x74
        __asm _emit 0x13
        cmp eax, 30h
        ; Exact mapped bytes 74 0A: je 0x4330d6
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 40h
        ; Exact mapped bytes 75 0D: jne 0x4330de
        __asm _emit 0x75
        __asm _emit 0x0d
        push 3
        pop eax
        ; Exact mapped bytes EB 0A: jmp 0x4330e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 2
        ; Exact mapped bytes EB F9: jmp 0x4330d3
        __asm _emit 0xeb
        __asm _emit 0xf9
        mov eax, ebx
        ; Exact mapped bytes EB 02: jmp 0x4330e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        and dword ptr [ebp - 8], 0
        mov edx, edi
        not edx
        shr edx, 7
        and edx, ebx
        mov dword ptr [ebp - 0ch], 0ch
        test edi, 1000h
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 11: je 0x433110
        __asm _emit 0x74
        __asm _emit 0x11
        and edi, 2000h
        neg edi
        sbb edi, edi
        and edi, 2
        inc edi
        inc edi
        ; Exact mapped bytes EB 03: jmp 0x433113
        __asm _emit 0xeb
        __asm _emit 0x03
        push 3
        pop edi
        push 0
        push 80h
        lea edx, [ebp - 0ch]
        push edi
        push edx
        push eax
        push ecx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 28: jne 0x433157
        __asm _emit 0x75
        __asm _emit 0x28
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 74 1D: je 0x433153
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes E8 55 07 00 00: call 0x43389a
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        lea ecx, [esi + 10h]
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes E8 E1 AB FF FF: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x43315f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], ebx
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
