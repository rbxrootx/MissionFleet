// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA200 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_004fa200_004FA200() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 7F 14: jg 0x4fa224
        __asm _emit 0x7f
        __asm _emit 0x14
        push 253h
        push 674fe8h
        ; Exact mapped bytes E8 21 EB 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa224
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fa207
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 7F 14: jg 0x4fa246
        __asm _emit 0x7f
        __asm _emit 0x14
        push 254h
        push 674fe8h
        ; Exact mapped bytes E8 FF EA 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa246
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4fa22a
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 14: jle 0x4fa26b
        __asm _emit 0x7e
        __asm _emit 0x14
        push 255h
        push 674fe8h
        ; Exact mapped bytes E8 DA EA 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa26b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4fa24c
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 7D 17: jge 0x4fa292
        __asm _emit 0x7d
        __asm _emit 0x17
        push 675120h
        push 675150h
        ; Exact mapped bytes E8 8B 63 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 55: jmp 0x4fa2e7
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7D 17: jge 0x4fa2c2
        __asm _emit 0x7d
        __asm _emit 0x17
        push 675154h
        push 675184h
        ; Exact mapped bytes E8 5B 63 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 25: jmp 0x4fa2e7
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7D 17: jge 0x4fa2e4
        __asm _emit 0x7d
        __asm _emit 0x17
        push 675188h
        push 6751b8h
        ; Exact mapped bytes E8 39 63 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x4fa2e7
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
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
