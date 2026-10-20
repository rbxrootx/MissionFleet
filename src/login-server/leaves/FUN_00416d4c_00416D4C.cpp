// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416D4C .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_00416d4c_00416D4C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push esi
        ; Exact mapped bytes E8 1D FE FF FF: call 0x416b7b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes 66 8B 46 02: mov ax, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x02
        mov dword ptr [ebp - 10h], ebx
        sub ebx, esi
        xor ecx, ecx
        ; Exact mapped bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        sete cl
        ; Exact mapped bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], ebx
        mov dword ptr [ebp - 4], ecx
        lea eax, [esi + 10h]
        ; Exact mapped bytes 74 03: je 0x416d84
        __asm _emit 0x74
        __asm _emit 0x03
        lea eax, [esi + 8]
        movzx eax, word ptr [eax]
        and dword ptr [ebp - 0ch], 0
        mov esi, dword ptr [ebp - 10h]
        test eax, eax
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7E 38: jle 0x416dcd
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edi, eax
        push dword ptr [ebp - 4]
        push esi
        ; Exact mapped bytes E8 61 FE FF FF: call 0x416c01
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        lea ecx, [esi + 18h]
        ; Exact mapped bytes 75 03: jne 0x416dac
        __asm _emit 0x75
        __asm _emit 0x03
        lea ecx, [esi + 12h]
        ; Exact mapped bytes 66 83 39 7B: cmp word ptr [ecx], 0x7b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x7b
        ; Exact mapped bytes 75 09: jne 0x416dbb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x416dc2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, eax
        sub ecx, esi
        add dword ptr [ebp - 8], ecx
        dec edi
        mov esi, eax
        ; Exact mapped bytes 75 D0: jne 0x416d97
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0D: jne 0x416dda
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        or dword ptr [eax], 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x416e84
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 8]
        push 0
        ; Exact mapped bytes FF 15 1C C2 43 00: call dword ptr [0x43c21c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        mov esi, eax
        push dword ptr [ebp + 8]
        mov edi, esi
        push esi
        ; Exact mapped bytes E8 CD 7D 00 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        add esi, ebx
        ; Exact mapped bytes 66 81 7F 02 FF FF: cmp word ptr [edi + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], esi
        lea eax, [edi + 10h]
        ; Exact mapped bytes 74 03: je 0x416e09
        __asm _emit 0x74
        __asm _emit 0x03
        lea eax, [edi + 8]
        ; Exact mapped bytes 66 83 20 00: and word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ebx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        push dword ptr [ebp - 4]
        push ebx
        ; Exact mapped bytes E8 DC FD FF FF: call 0x416c01
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        mov esi, eax
        mov dword ptr [ebp - 0ch], esi
        lea eax, [ebx + 18h]
        ; Exact mapped bytes 75 03: jne 0x416e36
        __asm _emit 0x75
        __asm _emit 0x03
        lea eax, [ebx + 12h]
        ; Exact mapped bytes 66 83 38 7B: cmp word ptr [eax], 0x7b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x7b
        ; Exact mapped bytes 75 07: jne 0x416e43
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ebx
        ; Exact mapped bytes EB 29: jmp 0x416e6c
        __asm _emit 0xeb
        __asm _emit 0x29
        sub esi, ebx
        push esi
        push ebx
        push dword ptr [ebp - 8]
        ; Exact mapped bytes E8 71 7D 00 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [ebp - 8], esi
        add esp, 0ch
        ; Exact mapped bytes 66 81 7F 02 FF FF: cmp word ptr [edi + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [edi + 10h]
        ; Exact mapped bytes 74 03: je 0x416e63
        __asm _emit 0x74
        __asm _emit 0x03
        lea eax, [edi + 8]
        ; Exact mapped bytes 66 FF 00: inc word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and dword ptr [eax], 0
        add dword ptr [ebp + 8], 4
        dec dword ptr [ebp - 10h]
        mov ebx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 A4: jne 0x416e1c
        __asm _emit 0x75
        __asm _emit 0xa4
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        or dword ptr [eax + ecx*4], 0ffffffffh
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
