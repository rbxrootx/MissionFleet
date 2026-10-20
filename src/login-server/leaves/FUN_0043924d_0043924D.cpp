// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043924D .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_0043924d_0043924D() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes E8 5D CA FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ebp, eax
        ; Exact mapped bytes E8 44 DD FF FF: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add ebp, 34h
        xor ebx, ebx
        mov esi, ebp
        cmp byte ptr [esi], bl
        ; Exact mapped bytes 74 22: je 0x43928c
        __asm _emit 0x74
        __asm _emit 0x22
        push 0ah
        push esi
        ; Exact mapped bytes E8 90 67 FE FF: call 0x41fa02
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        pop ecx
        mov byte ptr [edi], bl
        ; Exact mapped bytes E8 36 CA FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [eax + 8]
        push esi
        ; Exact mapped bytes FF 15 60 C5 43 00: call dword ptr [0x43c560]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        lea esi, [edi + 1]
        ; Exact mapped bytes EB DA: jmp 0x439266
        __asm _emit 0xeb
        __asm _emit 0xda
        push 1
        mov byte ptr [ebp], bl
        ; Exact mapped bytes E8 7D DD FF FF: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 18 CA FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x4392ae
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 54h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x4392ae
        __asm _emit 0x74
        __asm _emit 0x05
        push ebx
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E8 D3 C7 FF FF: call 0x435a86
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [esi + 0cch]
        lea edi, [esi + 0cch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x4392d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4392d3
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [edi], ebx
        ; Exact mapped bytes E8 DB C9 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [eax + 14h], bl
        ; Exact mapped bytes 75 20: jne 0x4392fd
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 30h]
        ; Exact mapped bytes 8B 3D B0 C4 43 00: mov edi, dword ptr [0x43c4b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x4392f0
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 30h], ebx
        mov eax, dword ptr [esi + 2ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x4392fd
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 2ch], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
