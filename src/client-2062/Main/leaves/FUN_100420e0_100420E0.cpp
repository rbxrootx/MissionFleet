// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100420E0 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_100420e0_100420E0() {
    __asm {
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0ch]
        push ebp
        push esi
        cmp edx, ecx
        push edi
        ; Exact mapped bytes 74 12: je 0x100420ff
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [esp + 10h]
        mov esi, dword ptr [edx]
        cmp dword ptr [esi + 28h], eax
        ; Exact mapped bytes 74 10: je 0x10042108
        __asm _emit 0x74
        __asm _emit 0x10
        add edx, 4
        cmp edx, ecx
        ; Exact mapped bytes 75 F2: jne 0x100420f1
        __asm _emit 0x75
        __asm _emit 0xf2
        pop edi
        pop esi
        or eax, 0ffffffffh
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        mov edi, 20h
        mov ebp, dword ptr [eax + 30h]
        lea esi, [ebp + 83ch]
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x1004213b
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [eax + 60h]
        shr eax, 4
        and eax, 0ffh
        xor eax, 0aah
        cmp eax, ecx
        ; Exact mapped bytes 7E 02: jle 0x1004213b
        __asm _emit 0x7e
        __asm _emit 0x02
        mov ecx, eax
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 DE: jne 0x1004211f
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [edx]
        cmp ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes 76 0B: jbe 0x10042153
        __asm _emit 0x76
        __asm _emit 0x0b
        pop edi
        pop esi
        mov eax, 4
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 48h]
        test dl, 2
        ; Exact mapped bytes 74 22: je 0x1004217d
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 9cch
        mov eax, dword ptr [ecx + ebp]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10042172
        __asm _emit 0x74
        __asm _emit 0x0b
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 34: je 0x100421a6
        __asm _emit 0x74
        __asm _emit 0x34
        add ecx, 4
        cmp ecx, 0a4ch
        ; Exact mapped bytes 7C E3: jl 0x10042160
        __asm _emit 0x7c
        __asm _emit 0xe3
        test dl, 1
        ; Exact mapped bytes 74 3A: je 0x100421bc
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, 9cch
        mov eax, dword ptr [ecx + ebp]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10042199
        __asm _emit 0x74
        __asm _emit 0x0b
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x100421b1
        __asm _emit 0x74
        __asm _emit 0x18
        add ecx, 4
        cmp ecx, 0a4ch
        ; Exact mapped bytes 7C E3: jl 0x10042187
        __asm _emit 0x7c
        __asm _emit 0xe3
        ; Exact mapped bytes EB 16: jmp 0x100421bc
        __asm _emit 0xeb
        __asm _emit 0x16
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        mov eax, 2
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test dl, 4
        ; Exact mapped bytes 74 22: je 0x100421e3
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, 0a3ch
        mov eax, dword ptr [ecx + ebp]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100421d8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x100421eb
        __asm _emit 0x74
        __asm _emit 0x13
        add ecx, 4
        cmp ecx, 0a4ch
        ; Exact mapped bytes 7C E3: jl 0x100421c6
        __asm _emit 0x7c
        __asm _emit 0xe3
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        mov eax, 3
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
