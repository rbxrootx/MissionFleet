// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DCD52 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_004dcd52_004DCD52() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4dcd78
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0adh
        push 676a8ch
        ; Exact mapped bytes E8 CD BF 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dcd78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4dcd5e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7C 14: jl 0x4dcd9d
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0aeh
        push 676a8ch
        ; Exact mapped bytes E8 A8 BF 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dcd9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4dcd7e
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + eax*4]
        ; Exact mapped bytes E8 9E F9 FE FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x4dcdc5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 7D 21: jge 0x4dcdf4
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
        ; Exact mapped bytes E8 F4 FC FE FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB C8: jmp 0x4dcdbc
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7C 14: jl 0x4dce13
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0b4h
        push 676a8ch
        ; Exact mapped bytes E8 32 BF 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dce13
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4dcdf4
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [ecx + edx*4]
        ; Exact mapped bytes E8 28 F9 FE FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x28
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
