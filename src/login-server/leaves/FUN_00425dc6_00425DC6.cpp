// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425DC6 .. +0x1AC bytes.
extern "C" __declspec(naked) void FUN_00425dc6_00425DC6() {
    __asm {
        push ebx
        push esi
        push edi
        xor edi, edi
        ; Exact mapped bytes 39 3D 6C D0 44 00: cmp dword ptr [0x44d06c], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x425dda
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4C 01 00 00: jmp 0x425f26
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        push 1
        pop ebx
        mov eax, dword ptr [esi + 14h]
        ; Exact mapped bytes 3B 05 00 D1 44 00: cmp eax, dword ptr [0x44d100]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x425df8
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 05 10 D1 44 00: cmp eax, dword ptr [0x44d110]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x425efa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 3D 88 FE 44 00: cmp dword ptr [0x44fe88], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x425ed0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 0D 36 FF 44 00: movzx ecx, word ptr [0x44ff36]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 66 39 3D 28 FF 44 00: cmp word ptr [0x44ff28], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 0D 34 FF 44 00: movzx ecx, word ptr [0x44ff34]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 0F B7 0D 32 FF 44 00: movzx ecx, word ptr [0x44ff32]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 0F B7 0D 30 FF 44 00: movzx ecx, word ptr [0x44ff30]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 75 1D: jne 0x425e4a
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 0F B7 0D 2C FF 44 00: movzx ecx, word ptr [0x44ff2c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        push ecx
        ; Exact mapped bytes 0F B7 0D 2E FF 44 00: movzx ecx, word ptr [0x44ff2e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 0F B7 0D 2A FF 44 00: movzx ecx, word ptr [0x44ff2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push ecx
        push eax
        push ebx
        ; Exact mapped bytes EB 14: jmp 0x425e5e
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 0D 2E FF 44 00: movzx ecx, word ptr [0x44ff2e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push ecx
        push edi
        ; Exact mapped bytes 0F B7 0D 2A FF 44 00: movzx ecx, word ptr [0x44ff2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        push ecx
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 0E 01 00 00: call 0x425f72
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 05 E2 FE 44 00: movzx eax, word ptr [0x44fee2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes 66 39 3D D4 FE 44 00: cmp word ptr [0x44fed4], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 0F B7 05 E0 FE 44 00: movzx eax, word ptr [0x44fee0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 0F B7 05 DE FE 44 00: movzx eax, word ptr [0x44fede]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 0F B7 05 DC FE 44 00: movzx eax, word ptr [0x44fedc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 75 28: jne 0x425eb8
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 0F B7 05 D8 FE 44 00: movzx eax, word ptr [0x44fed8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        push eax
        ; Exact mapped bytes 0F B7 05 DA FE 44 00: movzx eax, word ptr [0x44feda]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 0F B7 05 D6 FE 44 00: movzx eax, word ptr [0x44fed6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        push dword ptr [esi + 14h]
        push ebx
        push edi
        ; Exact mapped bytes E8 BF 00 00 00: call 0x425f72
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 42: jmp 0x425efa
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes 0F B7 05 DA FE 44 00: movzx eax, word ptr [0x44feda]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        push edi
        ; Exact mapped bytes 0F B7 05 D6 FE 44 00: movzx eax, word ptr [0x44fed6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        push eax
        push dword ptr [esi + 14h]
        push edi
        ; Exact mapped bytes EB DD: jmp 0x425ead
        __asm _emit 0xeb
        __asm _emit 0xdd
        push edi
        push edi
        push edi
        push 2
        push edi
        push edi
        push ebx
        push 4
        push eax
        push ebx
        push ebx
        ; Exact mapped bytes E8 90 00 00 00: call 0x425f72
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push edi
        push edi
        push 2
        push edi
        push edi
        push 5
        push 0ah
        push dword ptr [esi + 14h]
        push ebx
        push edi
        ; Exact mapped bytes E8 7B 00 00 00: call 0x425f72
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 58h
        ; Exact mapped bytes 8B 15 04 D1 44 00: mov edx, dword ptr [0x44d104]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 D1 44 00: mov eax, dword ptr [0x44d114]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ch]
        cmp edx, eax
        ; Exact mapped bytes 7D 1E: jge 0x425f2a
        __asm _emit 0x7d
        __asm _emit 0x1e
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C BF FE FF FF: jl 0x425dd3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, eax
        ; Exact mapped bytes 0F 8F B7 FE FF FF: jg 0x425dd3
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, edx
        ; Exact mapped bytes 7E 1E: jle 0x425f3e
        __asm _emit 0x7e
        __asm _emit 0x1e
        cmp ecx, eax
        ; Exact mapped bytes 7D 1A: jge 0x425f3e
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        ret
        cmp ecx, eax
        ; Exact mapped bytes 7C F6: jl 0x425f24
        __asm _emit 0x7c
        __asm _emit 0xf6
        cmp ecx, edx
        ; Exact mapped bytes 7F F2: jg 0x425f24
        __asm _emit 0x7f
        __asm _emit 0xf2
        cmp ecx, eax
        ; Exact mapped bytes 7E 08: jle 0x425f3e
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C 95 FE FF FF: jl 0x425dd3
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        imul eax, eax, 3ch
        add eax, dword ptr [esi + 4]
        imul eax, eax, 3ch
        add eax, dword ptr [esi]
        imul eax, eax, 3e8h
        cmp ecx, edx
        ; Exact mapped bytes 75 0F: jne 0x425f65
        __asm _emit 0x75
        __asm _emit 0x0f
        xor ecx, ecx
        ; Exact mapped bytes 3B 05 08 D1 44 00: cmp eax, dword ptr [0x44d108]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        setge cl
        mov eax, ecx
        ; Exact mapped bytes EB C1: jmp 0x425f26
        __asm _emit 0xeb
        __asm _emit 0xc1
        xor ecx, ecx
        ; Exact mapped bytes 3B 05 18 D1 44 00: cmp eax, dword ptr [0x44d118]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        setl cl
        ; Exact mapped bytes EB EF: jmp 0x425f61
        __asm _emit 0xeb
        __asm _emit 0xef
    }
}
