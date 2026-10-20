// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005148F1 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_005148f1_005148F1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cdf4h
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
        sub esp, 11ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 128h], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0fffffdf8h
        ; Exact mapped bytes 74 20: je 0x514944
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], 0fffffdeeh
        ; Exact mapped bytes 74 14: je 0x514944
        __asm _emit 0x74
        __asm _emit 0x14
        push 670h
        push 673dc0h
        ; Exact mapped bytes E8 01 44 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514944
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x514918
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 A3 03 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], 0fffffdf8h
        ; Exact mapped bytes 75 10: jne 0x514990
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x5149ac
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], 0fffffdeeh
        ; Exact mapped bytes 75 22: jne 0x5149be
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0b4h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5149be
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 57: je 0x514a1b
        __asm _emit 0x74
        __asm _emit 0x57
        push 100h
        lea edx, [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 67 53 FC FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x514a04
        __asm _emit 0x75
        __asm _emit 0x27
        mov dword ptr [ebp - 120h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 F3 7E FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 120h]
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x514aaa
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        push 1
        lea ecx, [ebp - 114h]
        push ecx
        lea edx, [ebp - 118h]
        push edx
        ; Exact mapped bytes E8 B4 53 FC FF: call 0x4d9dcf
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0fffffdf8h
        ; Exact mapped bytes 75 20: jne 0x514a47
        __asm _emit 0x75
        __asm _emit 0x20
        push 50h
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 76 03 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        add ecx, 10h
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x514a64
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 50h
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 56 03 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 14h]
        add edx, 10h
        push edx
        ; Exact mapped bytes E8 4C 8C FB FF: call 0x4cd6ad
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        push 213h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 48 7E FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 124h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
