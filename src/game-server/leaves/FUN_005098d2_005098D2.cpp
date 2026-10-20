// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005098D2 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_005098d2_005098D2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C2 B7 FE FF: call 0x4f50aa
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B7 B7 FE FF: call 0x4f50aa
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 6D C0 02 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 06: jl 0x509908
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 14: jge 0x50991c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 140h
        push 5cb450h
        ; Exact mapped bytes E8 E9 B0 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50991c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5098fc
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 64: je 0x50998f
        __asm _emit 0x74
        __asm _emit 0x64
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1E C4 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BC 27 03 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F3 C4 02 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 4ch], eax
        ; Exact mapped bytes 7D 18: jge 0x509967
        __asm _emit 0x7d
        __asm _emit 0x18
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E3 C4 02 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        sub eax, dword ptr [edx + 4ch]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E1 C4 02 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 7D 18: jge 0x50998f
        __asm _emit 0x7d
        __asm _emit 0x18
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 D1 C4 02 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        sub eax, dword ptr [edx + 50h]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
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
