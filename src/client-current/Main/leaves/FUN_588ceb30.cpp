// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CEB30 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_588ceb30() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push ebp
        mov ebp, ecx
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x588cec00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        cmp ecx, dword ptr [ebp + 90h]
        ; Exact mapped bytes 75 50: jne 0x588ceb9d
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [ebp + 74h]
        lea edi, [ebp + 74h]
        ; Exact mapped bytes E8 18 96 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 31: jle 0x588ceb8d
        __asm _emit 0x7e
        __asm _emit 0x31
        mov ecx, dword ptr [edi]
        cmp dword ptr [ecx + 88h], 8
        ; Exact mapped bytes 7E 26: jle 0x588ceb8d
        __asm _emit 0x7e
        __asm _emit 0x26
        ; Exact mapped bytes E8 04 96 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, eax
        dec esi
        mov ebx, 3
        mov ecx, dword ptr [edi]
        push esi
        ; Exact mapped bytes E8 14 96 03 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F0: jne 0x588ceb74
        __asm _emit 0x75
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 DC 95 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp + 94h]
        ; Exact mapped bytes 75 12: jne 0x588cebb7
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        mov ecx, ebp
        ; Exact mapped bytes E8 D2 F7 FF FF: call 0x588ce380
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ebx, [ebp + 74h]
        xor edi, edi
        mov eax, ebx
        mov edi, edi
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 12: je 0x588cebd6
        __asm _emit 0x74
        __asm _emit 0x12
        inc edi
        add eax, 4
        cmp edi, 3
        ; Exact mapped bytes 7C F3: jl 0x588cebc0
        __asm _emit 0x7c
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor esi, esi
        cmp esi, edi
        ; Exact mapped bytes 74 11: je 0x588cebed
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + edi*4 + 74h]
        ; Exact mapped bytes E8 DB 95 03 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push eax
        ; Exact mapped bytes E8 43 9C 03 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        inc esi
        add ebx, 4
        cmp esi, 3
        ; Exact mapped bytes 7C E2: jl 0x588cebd8
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov ecx, ebp
        ; Exact mapped bytes E8 53 FC FF FF: call 0x588ce850
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
