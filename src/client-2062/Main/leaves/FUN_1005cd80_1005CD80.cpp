// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005CD80 .. +0x1FD bytes.
extern "C" __declspec(naked) void FUN_1005cd80_1005CD80() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 444h]
        mov ecx, edi
        ; Exact mapped bytes E8 CE 22 0A 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 17 23 0A 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 448h]
        mov ecx, edi
        ; Exact mapped bytes E8 BA 22 0A 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 03 23 0A 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 44ch]
        mov ecx, edi
        ; Exact mapped bytes E8 A6 22 0A 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 EF 22 0A 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edi, dword ptr [esi + 450h]
        mov ecx, edi
        ; Exact mapped bytes E8 92 22 0A 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 DB 22 0A 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        xor ebx, ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005cded
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 8ch], ebx
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ce03
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 94h], ebx
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ce19
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 98h], ebx
        mov ecx, dword ptr [esi + 330h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ce2f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 330h], ebx
        mov ecx, dword ptr [esi + 334h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ce45
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 334h], ebx
        mov ecx, dword ptr [esi + 464h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ce5b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 464h], ebx
        mov ecx, dword ptr [esi + 468h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ce71
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 468h], ebx
        mov ecx, dword ptr [esi + 0d18h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ce87
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d18h], ebx
        mov ecx, dword ptr [esi + 0d1ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ce9d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d1ch], ebx
        mov ecx, dword ptr [esi + 0d20h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005ceb3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d20h], ebx
        mov ecx, dword ptr [esi + 0d24h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005cec9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d24h], ebx
        mov ecx, dword ptr [esi + 0d28h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005cedf
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d28h], ebx
        mov ecx, dword ptr [esi + 0d2ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005cef5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d2ch], ebx
        mov ecx, dword ptr [esi + 0d30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005cf0b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d30h], ebx
        mov ecx, dword ptr [esi + 0d38h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005cf21
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d38h], ebx
        mov ecx, dword ptr [esi + 0d34h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1005cf37
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d34h], ebx
        mov edi, 101c4df0h
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1005cf4a
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebx
        add edi, 4
        cmp edi, 101c51f0h
        ; Exact mapped bytes 7C E7: jl 0x1005cf3c
        __asm _emit 0x7c
        __asm _emit 0xe7
        mov eax, dword ptr [esi + 9ch]
        pop edi
        mov dword ptr [eax + 54h], ebx
        mov eax, dword ptr [esi + 0a0h]
        mov dword ptr [eax + 54h], ebx
        mov eax, dword ptr [esi + 338h]
        mov dword ptr [eax + 54h], ebx
        mov esi, dword ptr [esi + 33ch]
        mov dword ptr [esi + 54h], ebx
        pop esi
        pop ebx
        ret
    }
}
