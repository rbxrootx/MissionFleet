// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043783F .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_0043783f_0043783F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x4379e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 2B FD FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 6D 01 00 00: je 0x4379e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 2B FD FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E C7 FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x4379e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 18h
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0E BF FC FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x4379e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 05 2C FD FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        push 19h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 35fch
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 E1 96 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        push 10h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 35f8h]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 4
        lea eax, [ecx + edx + 15a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 B4 96 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 3590h]
        ; Exact mapped bytes 66 89 0C 10: mov word ptr [eax + edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x10
        push 24h
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 24h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3590h]
        add eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 79 96 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 24h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3590h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 08 02: mov dx, word ptr [eax + ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x02
        test edx, edx
        ; Exact mapped bytes 7E 36: jle 0x43799d
        __asm _emit 0x7e
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 24h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3590h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 02 02: mov cx, word ptr [edx + eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x02
        imul ecx, ecx, 60h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 3594h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 29 96 FD FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 E3 2A FD FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 B4 2A FD FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 0
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        or edx, 0a0000h
        push edx
        push 80020115h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 F8 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4379e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 F4 0D 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0d
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
