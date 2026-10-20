// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043696E .. +0x28D bytes.
extern "C" __declspec(naked) void FUN_0043696e_0043696E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0f8h
        push edi
        push ecx
        lea edi, [ebp - 0f8h]
        mov ecx, 3eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0ech], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 11: jne 0x4369b4
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes E9 2E 02 00 00: jmp 0x436be2
        __asm _emit 0xe9
        __asm _emit 0x2e
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
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x436b39
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0f4h], ecx
        cmp dword ptr [ebp - 0f4h], 8001000fh
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x436a8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0f4h], 80010109h
        ; Exact mapped bytes 74 15: je 0x436a06
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 0f4h], 80016000h
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x436aac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x436b34
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], 0
        mov dword ptr [ebp - 0d4h], 20060100h
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 0ech]
        add ecx, 0c0h
        ; Exact mapped bytes E8 0B 00 FF FF: call 0x426a40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 0ech]
        add ecx, 0c0h
        ; Exact mapped bytes E8 0F 00 FF FF: call 0x426a60
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0xff
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
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 AA 07 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x436b34
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 8B 07 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x436b34
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], 18h
        mov dword ptr [ebp - 0e4h], 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 0e8h], ecx
        lea edx, [ebp - 0e0h]
        push edx
        lea eax, [ebp - 0e4h]
        push eax
        lea ecx, [ebp - 0e8h]
        push ecx
        ; Exact mapped bytes E8 DA CC FC FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x436b34
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 AD 85 00 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 26: je 0x436b34
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 C7 01 00 00: call 0x436ce0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 16: jne 0x436b34
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 23 0C 01 00: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 69 05 05 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x436be2
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8002h
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x436be2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0f8h], ecx
        cmp dword ptr [ebp - 0f8h], 80021000h
        ; Exact mapped bytes 74 0E: je 0x436b74
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 0f8h], 8002ff00h
        ; Exact mapped bytes 74 3D: je 0x436baf
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes EB 6E: jmp 0x436be2
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 0b0h
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 75 25: jne 0x436bad
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 0ech]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 19: je 0x436bad
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 BB 79 01 00: call 0x44e568
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x436be2
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        imul edx, edx, 11ch
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], edx
        ; Exact mapped bytes 75 1F: jne 0x436be2
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40cb0h]
        ; Exact mapped bytes E8 AC CF FC FF: call 0x403b8e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 1
        pop edi
        add esp, 0f8h
        cmp ebp, esp
        ; Exact mapped bytes E8 EB 1B 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1b
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
