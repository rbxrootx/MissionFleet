// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005292F9 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_005292f9_005292F9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 8], 0ffffffffh
        mov ecx, 5de854h
        ; Exact mapped bytes E8 44 E0 01 00: call 0x547360
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D7 5A FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 210h
        cmp eax, 10h
        ; Exact mapped bytes 75 56: jne 0x529387
        __asm _emit 0x75
        __asm _emit 0x56
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 30 5D 01 00: call 0x53f06b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5A 55 01 00: call 0x53e8a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, eax
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 7D 31: jge 0x529382
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 93 57 01 00: call 0x53eaec
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp + 0ch]
        cdq
        idiv dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 2
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 0D: jge 0x529382
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x52940b
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5D 57 01 00: call 0x53eaec
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 09: jmp 0x52939d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FB 54 01 00: call 0x53e8a0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 61: jge 0x52940b
        __asm _emit 0x7d
        __asm _emit 0x61
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 9F C9 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 24 59 01 00: call 0x53ece6
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 00 CC 00 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x529409
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx + 2]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 0D: jge 0x529407
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 02: jmp 0x52940b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 89: jmp 0x529394
        __asm _emit 0xeb
        __asm _emit 0x89
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
