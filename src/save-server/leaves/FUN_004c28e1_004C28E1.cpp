// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C28E1 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_004c28e1_004C28E1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 124h
        push 67c688h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 60 79 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 53 0B FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c292b
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 67c688h
        ; Exact mapped bytes E8 1A 64 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c292b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4c2906
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0D: jne 0x4c2949
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 3B: jmp 0x4c2984
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 0D 0B FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c2971
        __asm _emit 0x75
        __asm _emit 0x14
        push 130h
        push 67c688h
        ; Exact mapped bytes E8 D4 63 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2971
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4c2949
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 0E: jne 0x4c299d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 3B: jmp 0x4c29d8
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 BA 0A FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c29c4
        __asm _emit 0x75
        __asm _emit 0x14
        push 139h
        push 67c688h
        ; Exact mapped bytes E8 81 63 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c29c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4c299d
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC F8 FF FF: call 0x4c22d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf8
        __asm _emit 0xff
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
