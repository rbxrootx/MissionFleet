// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AE370 .. +0x1FF bytes.
extern "C" __declspec(naked) void _gmtime_004AE370() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E8 16 4B 00 00: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x4ae39a
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D1 01 00 00: jmp 0x4ae56b
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 75 22: jne 0x4ae3c5
        __asm _emit 0x75
        __asm _emit 0x22
        push 47h
        push 58c2f4h
        push 2
        push 24h
        ; Exact mapped bytes E8 7D BE FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 40h], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 74 0B: je 0x4ae3d0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x4ae3d7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 5ded30h
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 7861f80h
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 7861f80h
        mov eax, dword ptr [ebp - 0ch]
        sub eax, edx
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx*4 + 46h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 0ch], 1e13380h
        ; Exact mapped bytes 7C 5B: jl 0x4ae467
        __asm _emit 0x7c
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1e13380h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 1e13380h
        ; Exact mapped bytes 7C 3D: jl 0x4ae467
        __asm _emit 0x7c
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1e13380h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 1e28500h
        ; Exact mapped bytes 7C 17: jl 0x4ae45e
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1e28500h
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 09: jmp 0x4ae467
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 15180h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        imul ecx, ecx, 15180h
        mov edx, dword ptr [ebp - 0ch]
        sub edx, ecx
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 09: je 0x4ae4a4
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 5d1e80h
        ; Exact mapped bytes EB 07: jmp 0x4ae4ab
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 5d1eb4h
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 09: jmp 0x4ae4bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 7D 02: jge 0x4ae4d0
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes EB E4: jmp 0x4ae4b4
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov edx, dword ptr [ebp - 18h]
        sub edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx + 1ch]
        sub edx, dword ptr [ecx + eax*4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx]
        cdq
        mov ecx, 15180h
        idiv ecx
        add eax, 4
        cdq
        mov ecx, 7
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], edx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 0e10h
        mov edx, dword ptr [ebp - 0ch]
        sub edx, ecx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        imul ecx, ecx, 3ch
        mov edx, dword ptr [ebp - 0ch]
        sub edx, ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
