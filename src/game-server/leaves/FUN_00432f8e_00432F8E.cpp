// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432F8E .. +0x4C7 bytes.
extern "C" __declspec(naked) void FUN_00432f8e_00432F8E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x432fb7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F 8D 92 02 00 00: jge 0x433261
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 66 8B 54 01 02: mov dx, word ptr [ecx + eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        and edx, 0ffffh
        cmp edx, 1
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x433088
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 10 48 03 00 00: mov cx, word ptr [eax + edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and ecx, 1fe0h
        sar ecx, 5
        cmp ecx, 4
        ; Exact mapped bytes 74 2C: je 0x433055
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 368h
        mov edx, dword ptr [eax + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A 48 03 00 00: mov ax, word ptr [edx + ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1fe0h
        sar eax, 5
        cmp eax, 5
        ; Exact mapped bytes 75 18: jne 0x43306d
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx*4], 32h
        ; Exact mapped bytes EB 16: jmp 0x433083
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 0f423fh
        ; Exact mapped bytes E9 D4 01 00 00: jmp 0x43325c
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 4C 10 02: mov cx, word ptr [eax + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 75 1B: jne 0x4330cc
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 0f423fh
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x43325c
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 4C 10 02: mov cx, word ptr [eax + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 3
        ; Exact mapped bytes 75 1B: jne 0x433110
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 64h
        ; Exact mapped bytes E9 4C 01 00 00: jmp 0x43325c
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 4C 10 02: mov cx, word ptr [eax + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 4
        ; Exact mapped bytes 75 1B: jne 0x433154
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 32h
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x43325c
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 4C 10 02: mov cx, word ptr [eax + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 5
        ; Exact mapped bytes 75 1B: jne 0x433198
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 1eh
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x43325c
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 4C 10 02: mov cx, word ptr [eax + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 75 1B: jne 0x4331dc
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 2
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x43325c
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 4C 10 02: mov cx, word ptr [eax + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 7
        ; Exact mapped bytes 75 18: jne 0x43321d
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 1
        ; Exact mapped bytes EB 3F: jmp 0x43325c
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 4C 10 02: mov cx, word ptr [eax + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 8
        ; Exact mapped bytes 75 16: jne 0x43325c
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 2
        ; Exact mapped bytes E9 4D FD FF FF: jmp 0x432fae
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x433273
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 7D 18: jge 0x43329f
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 34h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx*4], 1869fh
        ; Exact mapped bytes EB CB: jmp 0x43326a
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4332b1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7D 18: jge 0x4332dd
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 38h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*4], 1869fh
        ; Exact mapped bytes EB CB: jmp 0x4332a8
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4332ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 7D 18: jge 0x43331b
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 3ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 1869fh
        ; Exact mapped bytes EB CB: jmp 0x4332e6
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x43332d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 7D 18: jge 0x433359
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 40h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx*4], 1869fh
        ; Exact mapped bytes EB CB: jmp 0x433324
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x43336b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 7D 18: jge 0x433397
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*4], 1869fh
        ; Exact mapped bytes EB CB: jmp 0x433362
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4333a9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 7D 18: jge 0x4333d5
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], 1869fh
        ; Exact mapped bytes EB CB: jmp 0x4333a0
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4333e7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 9ch]
        ; Exact mapped bytes 7D 18: jge 0x433413
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx*4], 1869fh
        ; Exact mapped bytes EB CB: jmp 0x4333de
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x433425
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes 7D 18: jge 0x433451
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*4], 1869fh
        ; Exact mapped bytes EB CB: jmp 0x43341c
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov esp, ebp
        pop ebp
        ret
    }
}
