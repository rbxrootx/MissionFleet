// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568E4A .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_00568e4a_00568E4A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 2ch]
        cmp edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes 76 14: jbe 0x568e78
        __asm _emit 0x76
        __asm _emit 0x14
        push 1dfh
        push 67b070h
        ; Exact mapped bytes E8 CD FE FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568e78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x568e56
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + 2ch]
        cmp eax, dword ptr [edx + 38h]
        ; Exact mapped bytes 75 72: jne 0x568efe
        __asm _emit 0x75
        __asm _emit 0x72
        push 1e4h
        push 67b070h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 2ch]
        add edx, 0ah
        imul edx, edx, 14h
        push edx
        ; Exact mapped bytes E8 2B 32 F6 FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x32
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 38h]
        add edx, 0ah
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 38h], edx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 2ch]
        imul edx, edx, 14h
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 23 C4 EF FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc4
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 B7 35 F6 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 2ch]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 72 14: jb 0x568f20
        __asm _emit 0x72
        __asm _emit 0x14
        push 1ech
        push 67b070h
        ; Exact mapped bytes E8 25 FE FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568f20
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x568efe
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 2ch]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 24h]
        add eax, ecx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ecx + 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 2ch]
        add edx, 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2ch], edx
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
