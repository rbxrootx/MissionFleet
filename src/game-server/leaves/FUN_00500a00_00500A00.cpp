// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500A00 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_00500a00_00500A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x500a20
        __asm _emit 0x74
        __asm _emit 0x11
        push 18h
        push 5d2each
        ; Exact mapped bytes E8 E5 3F 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500a20
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x500a09
        __asm _emit 0x75
        __asm _emit 0xe3
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes E8 87 8D FF FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 C6 4A 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2E 89 04 00: call 0x549380
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x500a5b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x500b0c
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x500a78
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 8C 00 00 00: call dword ptr [eax + 0x8c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x500a78
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x500b0a
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 3C: jne 0x500ac3
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 23: je 0x500ab3
        __asm _emit 0x74
        __asm _emit 0x23
        push 5d2eb8h
        push 5d2ee4h
        ; Exact mapped bytes E8 76 F1 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 45: jmp 0x500b08
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 CE 49 04 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 16: je 0x500af2
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 C3 49 04 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        push eax
        push 5d2ee8h
        ; Exact mapped bytes E8 26 F1 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 79 C2 FF FF: call 0x4fcd70
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        ; Exact mapped bytes E8 91 C2 FF FF: call 0x4fcd8f
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 8D 8B 07 00: call 0x579690
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 06: jmp 0x500b0e
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes EB C7: jmp 0x500ad1
        __asm _emit 0xeb
        __asm _emit 0xc7
        ; Exact mapped bytes EB C5: jmp 0x500ad1
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes EB C3: jmp 0x500ad1
        __asm _emit 0xeb
        __asm _emit 0xc3
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
