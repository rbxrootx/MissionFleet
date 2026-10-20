// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FDC52 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_004fdc52_004FDC52() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4fdc78
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0adh
        push 5ca304h
        ; Exact mapped bytes E8 8D 6D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdc78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fdc5e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7C 14: jl 0x4fdc9d
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0aeh
        push 5ca304h
        ; Exact mapped bytes E8 68 6D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdc9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4fdc7e
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + eax*4]
        ; Exact mapped bytes E8 FE F9 FE FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x4fdcc5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 7D 21: jge 0x4fdcf4
        __asm _emit 0x7d
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [eax + ecx*4 + 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [ecx + edx*4]
        ; Exact mapped bytes E8 54 FD FE FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB C8: jmp 0x4fdcbc
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7C 14: jl 0x4fdd13
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0b4h
        push 5ca304h
        ; Exact mapped bytes E8 F2 6C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdd13
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4fdcf4
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [ecx + edx*4]
        ; Exact mapped bytes E8 88 F9 FE FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
