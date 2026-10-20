// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043538C .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_0043538c_0043538C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        shr al, 5
        and al, 1
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x435498
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 104h], 14h
        ; Exact mapped bytes 74 2E: je 0x435411
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 104h], 0fh
        ; Exact mapped bytes 74 19: je 0x435411
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 104h], 15h
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x435498
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 54 E5 FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 9
        ; Exact mapped bytes 7F 6E: jg 0x43548f
        __asm _emit 0x7f
        __asm _emit 0x6e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x435433
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7F 54: jg 0x43548d
        __asm _emit 0x7f
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 8]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 9F E5 FC FF: call 0x4039f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 7D 35: jge 0x43548b
        __asm _emit 0x7d
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp - 8]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 F0 61 04 00: call 0x47b662
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x43547d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x435533
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 180h], edx
        ; Exact mapped bytes EB 02: jmp 0x43548d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9D: jmp 0x43542a
        __asm _emit 0xeb
        __asm _emit 0x9d
        ; Exact mapped bytes EB 07: jmp 0x435496
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x435533
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x4354b5
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 14h]
        add ecx, 0cb0h
        ; Exact mapped bytes E8 B5 61 04 00: call 0x47b662
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4354b5
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7E: jmp 0x435533
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 0b8h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x4354dc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 69 00 00 00: call 0x435543
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x4354e8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5E 04 00 00: call 0x435946
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 09: jmp 0x4354fa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 18h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 1A: jge 0x43552e
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 4]
        shl edx, 6
        lea ecx, [ecx + edx + 0cb0h]
        ; Exact mapped bytes E8 C5 6C 04 00: call 0x47c1f1
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB C3: jmp 0x4354f1
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, 1
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 A3 32 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
