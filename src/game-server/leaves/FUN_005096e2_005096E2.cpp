// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005096E2 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_005096e2_005096E2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e7efh
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
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 40h], -1
        ; Exact mapped bytes 75 21: jne 0x50972d
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 51 C2 02 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x5097be
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 99 01 00 00: call 0x5098d2
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 40h], 1
        ; Exact mapped bytes 74 60: je 0x5097ad
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 7F 14: jg 0x50976a
        __asm _emit 0x7f
        __asm _emit 0x14
        push 11ch
        push 5cb450h
        ; Exact mapped bytes E8 9B B2 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50976a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x50974d
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 2B A0 FF FF: call 0x5037a5
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 40h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 6C 81 FF FF: call 0x5018fc
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7A EB 02 00: call 0x538318
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 AA A0 FF FF: call 0x503857
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
