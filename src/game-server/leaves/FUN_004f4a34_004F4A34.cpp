// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4A34 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_004f4a34_004F4A34() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4f4a5a
        __asm _emit 0x75
        __asm _emit 0x14
        push 82ch
        push 5c5574h
        ; Exact mapped bytes E8 AB FF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f4a5a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f4a40
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4f4aa3
        __asm _emit 0x75
        __asm _emit 0x14
        push 834h
        push 5c5574h
        ; Exact mapped bytes E8 62 FF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f4aa3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f4a89
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f4acb
        __asm _emit 0x75
        __asm _emit 0x14
        push 835h
        push 5c5574h
        ; Exact mapped bytes E8 3A FF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f4acb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4f4aa9
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 B5 D9 04 00: call 0x542490
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 0b8h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 07: jne 0x4f4af0
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 49: jmp 0x4f4b39
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 78 10 00 00: call 0x4f5b75
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4f4b08
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 31: jmp 0x4f4b39
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        or edx, 4e0000h
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
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
