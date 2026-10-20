// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426A65 .. +0x18B bytes.
extern "C" __declspec(naked) void FUN_00426a65_00426A65() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 414h
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [ebp + 10h], edi
        mov dword ptr [ebp - 8], edi
        mov dword ptr [ebp - 10h], edi
        ; Exact mapped bytes 75 07: jne 0x426a85
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 66 01 00 00: jmp 0x426beb
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        lea ebx, [eax*4 + 451080h]
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        lea esi, [eax + eax*8]
        mov eax, dword ptr [ebx]
        shl esi, 2
        test byte ptr [eax + esi + 4], 20h
        ; Exact mapped bytes 74 0E: je 0x426ab5
        __asm _emit 0x74
        __asm _emit 0x0e
        push 2
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB FE FF FF: call 0x42698d
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebx]
        add eax, esi
        test byte ptr [eax + 4], 80h
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x426b84
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [ebp + 10h], edi
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp + 8], edi
        ; Exact mapped bytes 0F 86 EA 00 00 00: jbe 0x426bbf
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 414h]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 29: jae 0x426b0f
        __asm _emit 0x73
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        inc dword ptr [ebp - 4]
        mov cl, byte ptr [ecx]
        cmp cl, 0ah
        ; Exact mapped bytes 75 07: jne 0x426afa
        __asm _emit 0x75
        __asm _emit 0x07
        inc dword ptr [ebp - 10h]
        mov byte ptr [eax], 0dh
        inc eax
        mov byte ptr [eax], cl
        inc eax
        mov ecx, eax
        lea edx, [ebp - 414h]
        sub ecx, edx
        cmp ecx, 400h
        ; Exact mapped bytes 7C CC: jl 0x426adb
        __asm _emit 0x7c
        __asm _emit 0xcc
        mov edi, eax
        lea eax, [ebp - 414h]
        sub edi, eax
        lea eax, [ebp - 0ch]
        push 0
        push eax
        lea eax, [ebp - 414h]
        push edi
        push eax
        mov eax, dword ptr [ebx]
        push dword ptr [eax + esi]
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x426b79
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 0ch]
        add dword ptr [ebp - 8], eax
        cmp eax, edi
        ; Exact mapped bytes 7C 0B: jl 0x426b4b
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 72 8A: jb 0x426ad5
        __asm _emit 0x72
        __asm _emit 0x8a
        xor edi, edi
        mov eax, dword ptr [ebp - 8]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x426be8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], edi
        ; Exact mapped bytes 74 62: je 0x426bbf
        __asm _emit 0x74
        __asm _emit 0x62
        push 5
        pop esi
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 75 4C: jne 0x426bb1
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes E8 70 B0 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 6E B0 FF FF: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], esi
        ; Exact mapped bytes EB 41: jmp 0x426bba
        __asm _emit 0xeb
        __asm _emit 0x41
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB C7: jmp 0x426b4b
        __asm _emit 0xeb
        __asm _emit 0xc7
        lea ecx, [ebp - 0ch]
        push edi
        push ecx
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [eax]
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x426ba6
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 8], edi
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A7: jmp 0x426b4d
        __asm _emit 0xeb
        __asm _emit 0xa7
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 9C: jmp 0x426b4d
        __asm _emit 0xeb
        __asm _emit 0x9c
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE AF FF FF: call 0x421b67
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 2C: jmp 0x426beb
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebx]
        test byte ptr [eax + esi + 4], 40h
        ; Exact mapped bytes 74 0C: je 0x426bd4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        cmp byte ptr [eax], 1ah
        ; Exact mapped bytes 0F 84 AA FE FF FF: je 0x426a7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 01 B0 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 1ch
        ; Exact mapped bytes E8 FF AF FF FF: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], edi
        ; Exact mapped bytes EB D2: jmp 0x426bba
        __asm _emit 0xeb
        __asm _emit 0xd2
        sub eax, dword ptr [ebp - 10h]
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
