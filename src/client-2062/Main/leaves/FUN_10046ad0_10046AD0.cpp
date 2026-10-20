// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10046AD0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_10046ad0_10046AD0() {
    __asm {
        push -1
        push 1016e87bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 87 22 02 00 00: mov ax, word ptr [edi + 0x222]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 40 06: cmp ax, 0x640
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 76 1D: jbe 0x10046b15
        __asm _emit 0x76
        __asm _emit 0x1d
        ; Exact mapped bytes 66 3D 80 0C: cmp ax, 0xc80
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x0c
        ; Exact mapped bytes 76 10: jbe 0x10046b0e
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes 66 B9 C0 12: mov cx, 0x12c0
        __asm _emit 0x66
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0x12
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        sbb esi, esi
        neg esi
        add esi, 2
        ; Exact mapped bytes EB 09: jmp 0x10046b17
        __asm _emit 0xeb
        __asm _emit 0x09
        mov esi, 1
        ; Exact mapped bytes EB 02: jmp 0x10046b17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 20h
        ; Exact mapped bytes E8 82 5C 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5c
        __asm _emit 0x12
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [esp + 0ch], ebx
        test ebx, ebx
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes 74 4B: je 0x10046b7e
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x10046b45
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 8B 0D DC 57 1C 10: mov ecx, dword ptr [0x101c57dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [eax + esi*2 + 30h]
        cmp dword ptr [ecx + 170h], eax
        ; Exact mapped bytes 7E 1B: jle 0x10046b72
        __asm _emit 0x7e
        __asm _emit 0x1b
        test eax, eax
        ; Exact mapped bytes 7C 17: jl 0x10046b72
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x10046b72
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 90 1D 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x10046b80
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor eax, eax
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 84 1D 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10046b80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [edi + 60h], eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
