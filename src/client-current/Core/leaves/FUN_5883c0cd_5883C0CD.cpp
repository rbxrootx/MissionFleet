// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C0CD .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_5883c0cd_5883C0CD() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov esi, ecx
        push edi
        ; Exact mapped bytes E8 EB F1 FF FF: call 0x5883b2c8
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 22: je 0x5883c103
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883c0eb
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c0ed
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        push dword ptr [ebp + 10h]
        sub edi, eax
        mov ecx, esi
        push edi
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA FE FF FF: call 0x5883bfa8
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x5883c1ac
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes E8 CB EF FF FF: call 0x5883b0d9
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10h]
        mov eax, ecx
        mov ebx, dword ptr [ebp + 10h]
        not eax
        cmp eax, ebx
        ; Exact mapped bytes 0F 86 92 00 00 00: jbe 0x5883c1b2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + ebx]
        mov dword ptr [ebp + 0ch], eax
        test ebx, ebx
        ; Exact mapped bytes 74 7F: je 0x5883c1a9
        __asm _emit 0x74
        __asm _emit 0x7f
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 34 F1 FF FF: call 0x5883b268
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 71: je 0x5883c1a9
        __asm _emit 0x74
        __asm _emit 0x71
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 07: jb 0x5883c145
        __asm _emit 0x72
        __asm _emit 0x07
        mov eax, dword ptr [esi]
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes EB 03: jmp 0x5883c148
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp + 10h], esi
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883c152
        __asm _emit 0x72
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c154
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, esi
        mov eax, dword ptr [esi + 10h]
        mov ecx, dword ptr [ebp + 8]
        sub eax, ecx
        ; Exact mapped bytes 74 18: je 0x5883c176
        __asm _emit 0x74
        __asm _emit 0x18
        push eax
        mov eax, dword ptr [ebp + 10h]
        add eax, ecx
        push eax
        lea eax, [edx + ecx]
        add eax, ebx
        push eax
        ; Exact mapped bytes E8 20 07 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add esp, 0ch
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883c180
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c182
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        test ebx, ebx
        ; Exact mapped bytes 74 0D: je 0x5883c193
        __asm _emit 0x74
        __asm _emit 0x0d
        push ebx
        add eax, ecx
        push edi
        push eax
        ; Exact mapped bytes E8 00 07 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [esi + 14h], 10h
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 10h], ecx
        ; Exact mapped bytes 72 04: jb 0x5883c1a3
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883c1a5
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        mov byte ptr [eax + ecx], 0
        mov eax, esi
        pop ebx
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 588c1cfch
        ; Exact mapped bytes E8 D1 25 FF FF: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
