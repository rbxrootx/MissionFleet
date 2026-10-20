// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563750 .. +0x3A5 bytes.
extern "C" __declspec(naked) void FUN_58563750_58563750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 1A: jne 0x58563780
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 1E: jmp 0x5856379e
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 18: jne 0x5856379e
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 87 38 03 00 00: ja 0x58563aec
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 8D F8 3A 56 58: jmp dword ptr [ecx*4 + 0x58563af8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x3a
        __asm _emit 0x56
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f4h], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x58563888
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0c4h]
        cmp eax, dword ptr [edx + 0a8h]
        ; Exact mapped bytes 7E 4B: jle 0x5856383a
        __asm _emit 0x7e
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 3B: jge 0x58563838
        __asm _emit 0x7d
        __asm _emit 0x3b
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1B: jne 0x5856381e
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 108h], 0
        ; Exact mapped bytes EB 13: jmp 0x58563831
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0D: jne 0x58563831
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 49: jmp 0x58563883
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 3B: jle 0x58563883
        __asm _emit 0x7e
        __asm _emit 0x3b
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1B: jne 0x58563869
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 108h], 0
        ; Exact mapped bytes EB 13: jmp 0x5856387c
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0D: jne 0x5856387c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x5856393d
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0c4h]
        add eax, 708h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes 7E 4B: jle 0x585638f4
        __asm _emit 0x7e
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 3B: jle 0x585638f2
        __asm _emit 0x7e
        __asm _emit 0x3b
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1B: jne 0x585638d8
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 108h], 0
        ; Exact mapped bytes EB 13: jmp 0x585638eb
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0D: jne 0x585638eb
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 49: jmp 0x5856393d
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 3B: jge 0x5856393d
        __asm _emit 0x7d
        __asm _emit 0x3b
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1B: jne 0x58563923
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 108h], 0
        ; Exact mapped bytes EB 13: jmp 0x58563936
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0D: jne 0x58563936
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 AA 01 00 00: jmp 0x58563aec
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 3D: jge 0x5856399a
        __asm _emit 0x7d
        __asm _emit 0x3d
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1B: jne 0x5856397e
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 108h], 0
        ; Exact mapped bytes EB 13: jmp 0x58563991
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0D: jne 0x58563991
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 50: jmp 0x585639ea
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 42: jle 0x585639ea
        __asm _emit 0x7e
        __asm _emit 0x42
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 1B: jne 0x585639c9
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 108h], 0
        ; Exact mapped bytes EB 13: jmp 0x585639dc
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0D: jne 0x585639dc
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x58563aec
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 0f4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0a8h]
        cmp eax, dword ptr [edx + 0c0h]
        ; Exact mapped bytes 7C 27: jl 0x58563a3d
        __asm _emit 0x7c
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0a8h]
        cmp eax, dword ptr [edx + 0bch]
        ; Exact mapped bytes 7F 13: jg 0x58563a3d
        __asm _emit 0x7f
        __asm _emit 0x13
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0f4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, 0e10h
        sub ecx, dword ptr [eax + 0bch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], ecx
        ; Exact mapped bytes 7C 2C: jl 0x58563a82
        __asm _emit 0x7c
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, 0e10h
        sub ecx, dword ptr [eax + 0c0h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], ecx
        ; Exact mapped bytes 7F 13: jg 0x58563a82
        __asm _emit 0x7f
        __asm _emit 0x13
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0f4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0bch]
        cmp ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes 7D 56: jge 0x58563aec
        __asm _emit 0x7d
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        cmp ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes 7C 0F: jl 0x58563ab9
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], 0e10h
        ; Exact mapped bytes 7E 20: jle 0x58563ad9
        __asm _emit 0x7e
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 7C 27: jl 0x58563aec
        __asm _emit 0x7c
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0a8h]
        cmp eax, dword ptr [edx + 0bch]
        ; Exact mapped bytes 7F 13: jg 0x58563aec
        __asm _emit 0x7f
        __asm _emit 0x13
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0f4h], edx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
