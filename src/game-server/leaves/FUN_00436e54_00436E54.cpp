// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436E54 .. +0x2B4 bytes.
extern "C" __declspec(naked) void FUN_00436e54_00436E54() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 108h]
        mov ecx, 42h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0f4h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 11: jne 0x436e9b
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes E9 53 02 00 00: jmp 0x4370ee
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8001h
        ; Exact mapped bytes 0F 85 6B 01 00 00: jne 0x43701b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0fch], ecx
        cmp dword ptr [ebp - 0fch], 8001000fh
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x436ffc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0fch], 80010109h
        ; Exact mapped bytes 74 05: je 0x436edd
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x437016
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], 0
        mov dword ptr [ebp - 0d4h], 20060100h
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 0f4h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 34 FB FE FF: call 0x426a40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 0f4h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 38 FB FE FF: call 0x426a60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 0c8h], eax
        mov dword ptr [ebp - 4], 0
        push 0
        push 0d8h
        lea edx, [ebp - 0d8h]
        push edx
        push 0
        push 80020010h
        push 80020010h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 D3 02 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 9A E5 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], eax
        mov eax, dword ptr [ebp - 100h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 5A 18 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 148h
        ; Exact mapped bytes E8 CD 9F 0F 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0x00
        add eax, 1
        push eax
        push 0
        ; Exact mapped bytes E8 62 E5 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        mov eax, dword ptr [ebp - 104h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 22 18 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 148h
        ; Exact mapped bytes E8 2D 70 0B 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 80020effh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 52 02 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80018010h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 38 02 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x437016
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 1C 02 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x4370ee
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8002h
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x4370ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 80028010h
        ; Exact mapped bytes 74 05: je 0x43704d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4370ee
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 18h
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x4370ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea edx, [ebp - 0f0h]
        push edx
        ; Exact mapped bytes E8 06 23 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 0f0h]
        push ecx
        ; Exact mapped bytes E8 A1 1F 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0f4h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + 1a8h], eax
        mov ecx, dword ptr [ebp - 0f4h]
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ecx + 1ach], edx
        mov eax, dword ptr [ebp - 0f4h]
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [eax + 1a4h], ecx
        mov edx, dword ptr [ebp - 0f4h]
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [edx + 1b0h], eax
        mov ecx, dword ptr [ebp - 0f4h]
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ecx + 1b4h], edx
        mov eax, dword ptr [ebp - 0f4h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [eax + 1bch], ecx
        mov eax, 1
        pop edi
        pop esi
        add esp, 108h
        cmp ebp, esp
        ; Exact mapped bytes E8 DE 16 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
