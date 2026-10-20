// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004207F2 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_004207f2_004207F2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        push edi
        mov edi, 451048h
        mov dword ptr [ebp - 4], eax
        push edi
        ; Exact mapped bytes FF 15 14 C2 43 00: call dword ptr [0x43c214]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 98 C2 43 00: mov ebx, dword ptr [0x43c298]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        xor esi, esi
        ; Exact mapped bytes 39 35 44 10 45 00: cmp dword ptr [0x451044], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x420830
        __asm _emit 0x74
        __asm _emit 0x14
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 13h
        ; Exact mapped bytes E8 E4 1D 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 03: jmp 0x420833
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp - 8], esi
        mov eax, dword ptr [ebp + 18h]
        cmp eax, esi
        ; Exact mapped bytes 75 05: jne 0x42083f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes A1 B0 A9 44 00: mov eax, dword ptr [0x44a9b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0xa9
        __asm _emit 0x44
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], esi
        mov dword ptr [ebp + 18h], eax
        ; Exact mapped bytes 76 77: jbe 0x4208be
        __asm _emit 0x76
        __asm _emit 0x77
        mov esi, dword ptr [ebp + 10h]
        mov al, byte ptr [esi]
        test al, al
        ; Exact mapped bytes 74 6E: je 0x4208be
        __asm _emit 0x74
        __asm _emit 0x6e
        cmp al, 25h
        ; Exact mapped bytes 74 32: je 0x420886
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 15 C0 AC 44 00: mov edx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        movzx ecx, al
        test byte ptr [edx + ecx*2 + 1], 80h
        ; Exact mapped bytes 74 12: je 0x420876
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 76 0C: jbe 0x420876
        __asm _emit 0x76
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], al
        inc dword ptr [ebp + 8]
        inc esi
        dec dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [esi]
        mov byte ptr [ecx], al
        inc dword ptr [ebp + 8]
        inc esi
        dec dword ptr [ebp - 4]
        ; Exact mapped bytes EB 32: jmp 0x4208b8
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 83 25 94 11 45 00 00: and dword ptr [0x451194], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        cmp byte ptr [esi], 23h
        ; Exact mapped bytes 75 0B: jne 0x42089e
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes C7 05 94 11 45 00 01 00 00 00: mov dword ptr [0x451194], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        push dword ptr [ebp + 18h]
        lea eax, [ebp - 4]
        push eax
        lea eax, [ebp + 8]
        push eax
        mov al, byte ptr [esi]
        push dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 38 00 00 00: call 0x4208ec
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        inc esi
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 77 8C: ja 0x42084a
        __asm _emit 0x77
        __asm _emit 0x8c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x4208ce
        __asm _emit 0x74
        __asm _emit 0x0a
        push 13h
        ; Exact mapped bytes E8 A0 1D 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 03: jmp 0x4208d1
        __asm _emit 0xeb
        __asm _emit 0x03
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp dword ptr [ebp - 4], 0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 76 0E: jbe 0x4208e8
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        and byte ptr [eax], 0
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 4]
        leave
        ret
        xor eax, eax
        leave
        ret
    }
}
