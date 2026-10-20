// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432A64 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_00432a64_00432A64() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push edi
        xor edi, edi
        cmp dword ptr [ecx + 4], edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 75 07: jne 0x432a7c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x432b79
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push dword ptr [ecx]
        ; Exact mapped bytes FF 15 20 C2 43 00: call dword ptr [0x43c220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 43 02: mov ax, word ptr [ebx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x02
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
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 75 05: jne 0x432aa3
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x432aa5
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, dword ptr [ebx]
        mov esi, dword ptr [ebp - 4]
        and eax, 40h
        neg esi
        sbb esi, esi
        mov dword ptr [ebp - 0ch], eax
        and esi, 2
        inc esi
        shl esi, 1
        cmp dword ptr [ebp - 4], edi
        ; Exact mapped bytes 74 06: je 0x432ac3
        __asm _emit 0x74
        __asm _emit 0x06
        or dword ptr [ebx + 0ch], 40h
        ; Exact mapped bytes EB 03: jmp 0x432ac6
        __asm _emit 0xeb
        __asm _emit 0x03
        or dword ptr [ebx], 40h
        lea eax, [ebp - 50h]
        push 20h
        push eax
        push -1
        push dword ptr [ebp + 8]
        push edi
        push edi
        ; Exact mapped bytes FF 15 90 C2 43 00: call dword ptr [0x43c290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [esi + eax*2]
        push ebx
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E8 02 FE FF FF: call 0x4328e7
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        xor ecx, ecx
        mov dword ptr [ebp - 10h], edi
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 74 0E: je 0x432b00
        __asm _emit 0x74
        __asm _emit 0x0e
        lea eax, [edi + esi]
        push eax
        ; Exact mapped bytes E8 EA CE FE FF: call 0x41f9e5
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        lea ecx, [esi + eax*2 + 2]
        mov edx, dword ptr [ebp + 8]
        lea eax, [ecx + edi + 3]
        and al, 0fch
        lea edi, [edi + edx + 3]
        mov dword ptr [ebp - 0ch], eax
        and edi, 0fffffffch
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x432b1f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 8B 53 10: mov dx, word ptr [ebx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x10
        ; Exact mapped bytes EB 04: jmp 0x432b23
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 53 08: mov dx, word ptr [ebx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x08
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 74 18: je 0x432b40
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 76 13: jbe 0x432b40
        __asm _emit 0x76
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        sub ebx, eax
        add ebx, dword ptr [ecx + 4]
        push ebx
        push eax
        push edi
        ; Exact mapped bytes E8 43 C5 FE FF: call 0x41f080
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        sub eax, esi
        push eax
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        lea eax, [ebp - 50h]
        add ecx, esi
        push eax
        push ecx
        ; Exact mapped bytes E8 24 C5 FE FF: call 0x41f080
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 8]
        sub edi, dword ptr [ebp - 0ch]
        add esp, 0ch
        push dword ptr [esi]
        add dword ptr [esi + 4], edi
        ; Exact mapped bytes FF 15 24 C2 43 00: call dword ptr [0x43c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [esi + 8], 0
        push 1
        pop eax
        pop esi
        pop ebx
        pop edi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
