// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509AB8 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_00509ab8_00509AB8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 176h
        push 5cb450h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 89 16 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        push 177h
        push 5cb450h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 76 16 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5F C2 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 70 C4 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F8 25 03 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 06: jne 0x509b0f
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x509b23
        __asm _emit 0x74
        __asm _emit 0x14
        push 17ch
        push 5cb450h
        ; Exact mapped bytes E8 E2 AE 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509b23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x509b03
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4C C4 02 00: call 0x535f86
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x509b53
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 20 C4 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 ED 02 00: call 0x538915
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 12 C4 02 00: call 0x535f86
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x509b8d
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E6 C3 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 ED 02 00: call 0x538915
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
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
