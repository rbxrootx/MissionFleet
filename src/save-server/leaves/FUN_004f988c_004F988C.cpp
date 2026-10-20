// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F988C .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_004f988c_004F988C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 15bh
        push 674fe8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B7 09 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4f98c3
        __asm _emit 0x7d
        __asm _emit 0x14
        push 15ch
        push 674fe8h
        ; Exact mapped bytes E8 82 F4 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f98c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f98a9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 7C 14: jl 0x4f98e8
        __asm _emit 0x7c
        __asm _emit 0x14
        push 15dh
        push 674fe8h
        ; Exact mapped bytes E8 5D F4 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f98e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4f98c9
        __asm _emit 0x75
        __asm _emit 0xdb
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4f9908
        __asm _emit 0x7d
        __asm _emit 0x14
        push 15eh
        push 674fe8h
        ; Exact mapped bytes E8 3D F4 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9908
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f98ee
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7C 14: jl 0x4f992d
        __asm _emit 0x7c
        __asm _emit 0x14
        push 15fh
        push 674fe8h
        ; Exact mapped bytes E8 18 F4 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f992d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4f990e
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp + 8]
        shl eax, 4
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [eax + ecx + 0e900h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
