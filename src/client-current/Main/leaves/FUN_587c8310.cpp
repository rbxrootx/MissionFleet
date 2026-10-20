// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8310 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_587c8310() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 0F 85 2D 02 00 00: jne 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 75 30: jne 0x587c8357
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [esi + 78h]
        mov eax, dword ptr [eax + 64h]
        test eax, eax
        ; Exact mapped bytes 0F 84 16 02 00 00: je 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0bebc200h
        ; Exact mapped bytes 0F 87 0B 02 00 00: ja 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        add edx, edx
        push edx
        ; Exact mapped bytes E8 0F F0 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf0
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 75 28: jne 0x587c8387
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [esi + 78h]
        cmp dword ptr [eax + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 DC 01 00 00: jae 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 1]
        push eax
        ; Exact mapped bytes E8 DF EF 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 75 26: jne 0x587c83b5
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 AC 01 00 00: jae 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 2]
        push eax
        ; Exact mapped bytes E8 B1 EF 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 75 26: jne 0x587c83e3
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 7E 01 00 00: jae 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 3]
        push eax
        ; Exact mapped bytes E8 83 EF 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 75 26: jne 0x587c8411
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 50 01 00 00: jae 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 4]
        push eax
        ; Exact mapped bytes E8 55 EF 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 75 26: jne 0x587c843f
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 22 01 00 00: jae 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 5]
        push eax
        ; Exact mapped bytes E8 27 EF 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 75 26: jne 0x587c846d
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 F4 00 00 00: jae 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 6]
        push eax
        ; Exact mapped bytes E8 F9 EE 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 75 26: jne 0x587c849b
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 C6 00 00 00: jae 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 7]
        push eax
        ; Exact mapped bytes E8 CB EE 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 75 26: jne 0x587c84c9
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 98 00 00 00: jae 0x587c854b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 8]
        push eax
        ; Exact mapped bytes E8 9D EE 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 75 22: jne 0x587c84f3
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 73 6E: jae 0x587c854b
        __asm _emit 0x73
        __asm _emit 0x6e
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 9]
        push eax
        ; Exact mapped bytes E8 73 EE 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 75 10: jne 0x587c850b
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 78h]
        push 0
        ; Exact mapped bytes E8 5B EE 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 74 31: je 0x587c8544
        __asm _emit 0x74
        __asm _emit 0x31
        cmp eax, dword ptr [esi + 0ach]
        ; Exact mapped bytes 75 30: jne 0x587c854b
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [esi + 0b0h], 0
        ; Exact mapped bytes 74 1E: je 0x587c8542
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 78h]
        mov eax, dword ptr [ecx + 64h]
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x587c8542
        __asm _emit 0x7c
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 0b0h]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 18h]
        push 0f235h
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
