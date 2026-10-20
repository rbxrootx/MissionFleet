// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F594 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_0042f594_0042F594() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 0A 78 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 3
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 17: je 0x42f5c9
        __asm _emit 0x74
        __asm _emit 0x17
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [eax + 2ch]
        ; Exact mapped bytes FF 15 58 C5 43 00: call dword ptr [0x43c558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x42f786
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ebx
        push esi
        mov esi, dword ptr [eax + 14h]
        push edi
        mov edi, dword ptr [ecx]
        ; Exact mapped bytes E8 DA 66 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 14h]
        mov ebx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        test esi, esi
        ; Exact mapped bytes 75 12: jne 0x42f5f9
        __asm _emit 0x75
        __asm _emit 0x12
        test byte ptr [edi + 23h], 40h
        ; Exact mapped bytes 0F 85 69 01 00 00: jne 0x42f75a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x42f75a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 FB 44 00 00: cmp dword ptr [0x44fbf4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4C: je 0x42f64e
        __asm _emit 0x74
        __asm _emit 0x4c
        push -1ah
        push ebx
        ; Exact mapped bytes FF 15 54 C5 43 00: call dword ptr [0x43c554]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000h
        ; Exact mapped bytes 0F 85 44 01 00 00: jne 0x42f75a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 28h]
        mov ecx, eax
        shr ecx, 10h
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 17: jne 0x42f63a
        __asm _emit 0x75
        __asm _emit 0x17
        and byte ptr [ebp - 10h], cl
        lea eax, [ebp - 10h]
        push 5
        push eax
        ; Exact mapped bytes 66 8B 47 28: mov ax, word ptr [edi + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x28
        push eax
        ; Exact mapped bytes FF 15 F4 C1 43 00: call dword ptr [0x43c1f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push 43ddc8h
        push eax
        ; Exact mapped bytes FF 15 64 C2 43 00: call dword ptr [0x43c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x42f75a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x42f6ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 BF FC FF FF: call 0x42f31d
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E4 FB 44 00 00: cmp dword ptr [0x44fbe4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 61: jne 0x42f6dc
        __asm _emit 0x75
        __asm _emit 0x61
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 5B: jne 0x42f6dc
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 3D 80 FB 44 00: mov edi, dword ptr [0x44fb80]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 51: je 0x42f6dc
        __asm _emit 0x74
        __asm _emit 0x51
        cmp dword ptr [edi + 20h], 0
        ; Exact mapped bytes 74 4B: je 0x42f6dc
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        push 36fh
        push ebx
        push esi
        ; Exact mapped bytes E8 76 FA FF FF: call 0x42f117
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 74 34: je 0x42f6dc
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes E8 06 FD FF FF: call 0x42f3b3
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push -4
        push ebx
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp - 10h]
        mov esi, eax
        sub esi, dword ptr [ebp + 8]
        push ebx
        neg esi
        sbb esi, esi
        inc esi
        ; Exact mapped bytes FF 57 20: call dword ptr [edi + 0x20]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x20
        test esi, esi
        ; Exact mapped bytes 75 28: jne 0x42f6f6
        __asm _emit 0x75
        __asm _emit 0x28
        push dword ptr [ebp + 8]
        push -4
        push ebx
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x42f6f1
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes E8 D2 FC FF FF: call 0x42f3b3
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        push esi
        push -4
        push ebx
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 74 05: je 0x42f6f6
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov esi, dword ptr [ebp - 4]
        and dword ptr [esi + 14h], 0
        ; Exact mapped bytes EB 5E: jmp 0x42f75d
        __asm _emit 0xeb
        __asm _emit 0x5e
        push -4
        push ebx
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 4B: je 0x42f75a
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 3D 5C C4 43 00: mov edi, dword ptr [0x43c45c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, 43dc08h
        push esi
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x42f75a
        __asm _emit 0x75
        __asm _emit 0x38
        push dword ptr [ebp + 8]
        push esi
        push ebx
        ; Exact mapped bytes FF 15 58 C4 43 00: call dword ptr [0x43c458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 24: jne 0x42f75a
        __asm _emit 0x75
        __asm _emit 0x24
        push esi
        ; Exact mapped bytes FF 15 F8 C1 43 00: call dword ptr [0x43c1f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 28h], 0
        mov eax, 42f518h
        ; Exact mapped bytes 75 05: jne 0x42f750
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 42f3b9h
        push eax
        push -4
        push ebx
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 4]
        push dword ptr [ebp + 10h]
        push ebx
        push 3
        push dword ptr [esi + 2ch]
        ; Exact mapped bytes FF 15 58 C5 43 00: call dword ptr [0x43c558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        mov edi, eax
        ; Exact mapped bytes 74 0D: je 0x42f781
        __asm _emit 0x74
        __asm _emit 0x0d
        push dword ptr [esi + 2ch]
        ; Exact mapped bytes FF 15 B0 C4 43 00: call dword ptr [0x43c4b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [esi + 2ch], 0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
