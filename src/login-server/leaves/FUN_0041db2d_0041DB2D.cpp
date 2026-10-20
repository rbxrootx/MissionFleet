// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DB2D .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_0041db2d_0041DB2D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ebx
        push dword ptr [ebp + 10h]
        push esi
        push edi
        ; Exact mapped bytes E8 39 FF FF FF: call 0x41da82
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 46: je 0x41db95
        __asm _emit 0x74
        __asm _emit 0x46
        push esi
        ; Exact mapped bytes E8 B2 FF FF FF: call 0x41db07
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 1A: je 0x41db74
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        push dword ptr [esi + 1ch]
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes FF 15 94 C4 43 00: call dword ptr [0x43c494]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 6A 17 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 21: je 0x41db95
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, esi
        ; Exact mapped bytes E8 D3 07 01 00: call 0x42e34e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x41db9e
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp esi, ebx
        ; Exact mapped bytes 74 12: je 0x41db95
        __asm _emit 0x74
        __asm _emit 0x12
        test ebx, ebx
        ; Exact mapped bytes 75 02: jne 0x41db89
        __asm _emit 0x75
        __asm _emit 0x02
        mov ebx, esi
        inc dword ptr [ebp - 4]
        cmp dword ptr [ebp - 4], 200h
        ; Exact mapped bytes 7C AA: jl 0x41db3f
        __asm _emit 0x7c
        __asm _emit 0xaa
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, esi
        ; Exact mapped bytes EB F5: jmp 0x41db97
        __asm _emit 0xeb
        __asm _emit 0xf5
    }
}
