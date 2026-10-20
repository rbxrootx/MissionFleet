// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A43B .. +0x179 bytes.
extern "C" __declspec(naked) void FUN_0056a43b_0056A43B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fe13h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 1c8h
        push 5d053ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 F1 0C F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0c
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x56a498
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B2 59 F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x59
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56a498
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c9h
        push 5d053ch
        ; Exact mapped bytes E8 6D A5 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a498
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x56a46f
        __asm _emit 0x75
        __asm _emit 0xd1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 23: je 0x56a4c7
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 83 59 F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x59
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56a4c7
        __asm _emit 0x75
        __asm _emit 0x14
        push 1cah
        push 5d053ch
        ; Exact mapped bytes E8 3E A5 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a4c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x56a49e
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x56a5a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 15: jne 0x56a4f8
        __asm _emit 0x75
        __asm _emit 0x15
        push 0f003h
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 8A 06 F9 FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x56a50a
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 F3 35 F8 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F5 69 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 90 38 01 00 00: call dword ptr [eax + 0x138]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x56a540
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0E 33 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x33
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 61: jmp 0x56a5a1
        __asm _emit 0xeb
        __asm _emit 0x61
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BF 69 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 50 6A FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x6a
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 47 6A FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6a
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 0e003h
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 27 17 FB FF: call 0x51bc99
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x17
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 30 6A FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6a
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA 32 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AB 32 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
