// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475710 .. +0x237 bytes.
extern "C" __declspec(naked) void FUN_00475710_00475710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 1ch], 67e228h
        ; Exact mapped bytes A1 48 02 68 00: mov eax, dword ptr [0x680248]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 09: jne 0x475737
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 D5 01 00 00: je 0x47591f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 15: jmp 0x475778
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1000h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 0ch], 400h
        ; Exact mapped bytes 0F 8D 9A 01 00 00: jge 0x47591f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + edx*8 + 18h], -1
        ; Exact mapped bytes 75 2E: jne 0x4757c0
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 1A: jne 0x4757b2
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [edx + ecx*8 + 18h]
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 74 08: je 0x4757b2
        __asm _emit 0x74
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x475943
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x47591a
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 0f8h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 72 0A: jb 0x4757d9
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, 0fffffffeh
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x475943
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx + 0f8h]
        cmp eax, 0ffh
        ; Exact mapped bytes 74 0A: je 0x4757f5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffffdh
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x475943
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        cmp dword ptr [ebp - 10h], 0f0h
        ; Exact mapped bytes 0F 8D D9 00 00 00: jge 0x4758f7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 75 09: jne 0x475838
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 20: jne 0x475867
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x4758f2
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + edx*8 + 1ch]
        ; Exact mapped bytes 7C 0A: jl 0x475880
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov eax, 0fffffffch
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x475943
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 75 1E: jne 0x4758a4
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 7D 0A: jge 0x47589b
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, 0fffffffbh
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x475943
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 09: jmp 0x4758bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        mov eax, dword ptr [ebp - 10h]
        add eax, edx
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7D 18: jge 0x4758ec
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 14h]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4758ea
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 0fffffffah
        ; Exact mapped bytes EB 59: jmp 0x475943
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes EB CA: jmp 0x4758b6
        __asm _emit 0xeb
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x475811
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [edx + ecx*8 + 18h]
        ; Exact mapped bytes 74 07: je 0x47590d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 0fffffff9h
        ; Exact mapped bytes EB 36: jmp 0x475943
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 07: jne 0x47591a
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffffff8h
        ; Exact mapped bytes EB 29: jmp 0x475943
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes E9 44 FE FF FF: jmp 0x475763
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 67e228h
        ; Exact mapped bytes 0F 85 F0 FD FF FF: jne 0x475724
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x475941
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffffff7h
        ; Exact mapped bytes EB 02: jmp 0x475943
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
