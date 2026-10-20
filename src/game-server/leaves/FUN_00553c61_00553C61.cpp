// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553C61 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_00553c61_00553C61() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f98fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 213h
        push 5cfa08h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 CB 74 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x74
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x553cb2
        __asm _emit 0x74
        __asm _emit 0x14
        push 214h
        push 5cfa08h
        ; Exact mapped bytes E8 53 0D FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553cb2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553c95
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x553cd5
        __asm _emit 0x75
        __asm _emit 0x14
        push 215h
        push 5cfa08h
        ; Exact mapped bytes E8 30 0D FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553cd5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553cb8
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x553d06
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 68 C1 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x553d06
        __asm _emit 0x75
        __asm _emit 0x14
        push 217h
        push 5cfa08h
        ; Exact mapped bytes E8 FF 0C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553d06
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x553cdb
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6C FD 00 00: call 0x563a80
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 56 07 01 00: call 0x564479
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x553d42
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 91 42 00 00: call 0x557fce
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 47: jmp 0x553d89
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 11 03 00 00: call 0x55406c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 222h
        push 5cfa08h
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 EF 73 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 48 42 00 00: call 0x557fce
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
