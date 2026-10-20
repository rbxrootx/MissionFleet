// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514487 .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_00514487_00514487() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 C3 14 02 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 74 25 5E 00: call dword ptr [0x5e2574]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 11h
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        xor edx, edx
        test ecx, ecx
        setge dl
        dec edx
        and edx, 0fffffff1h
        add edx, 10h
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, 0dh
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 1bh
        ; Exact mapped bytes 77 60: ja 0x514541
        __asm _emit 0x77
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 1ch]
        xor edx, edx
        mov dl, byte ptr [eax + 51467ch]
        ; Exact mapped bytes FF 24 95 60 46 51 00: jmp dword ptr [edx*4 + 0x514660]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0x46
        __asm _emit 0x51
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 24 01 00 00: call dword ptr [edx + 0x124]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 52 01 00 00: jmp 0x51465a
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 24 01 00 00: call dword ptr [edx + 0x124]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x51465a
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0ffffffffh
        ; Exact mapped bytes EB 28: jmp 0x51454e
        __asm _emit 0xeb
        __asm _emit 0x28
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 1F: jmp 0x51454e
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov dword ptr [ebp - 14h], 0ffffffffh
        ; Exact mapped bytes EB 16: jmp 0x51454e
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 0D: jmp 0x51454e
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 29 D3 FD FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x51465a
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0c0h], 1
        ; Exact mapped bytes 74 18: je 0x514572
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0c0h], 65h
        ; Exact mapped bytes 7C 13: jl 0x514579
        __asm _emit 0x7c
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0c0h], 73h
        ; Exact mapped bytes 7F 07: jg 0x514579
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0c0h], 2
        ; Exact mapped bytes 74 1E: je 0x5145a3
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0c0h], 0c9h
        ; Exact mapped bytes 7C 16: jl 0x5145aa
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0c0h], 0d7h
        ; Exact mapped bytes 7F 07: jg 0x5145aa
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 14h]
        imul edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6F 7C 02 00: call 0x53c243
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 7D 0E: jge 0x5145f0
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 1A: jmp 0x51460a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes 7E 0C: jle 0x51460a
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 7D 0E: jge 0x514626
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 1A: jmp 0x514640
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 98h]
        ; Exact mapped bytes 7E 0C: jle 0x514640
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AB 7B 02 00: call 0x53c1f7
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 58 25 5E 00: call dword ptr [0x5e2558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
