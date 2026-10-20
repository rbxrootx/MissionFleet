// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426FB7 .. +0x2B35 bytes.
extern "C" __declspec(naked) void FUN_00426fb7_00426FB7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a24ah
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
        sub esp, 300h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 30ch]
        mov ecx, 0c0h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 304h], ecx
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea eax, [ebp - 218h]
        push eax
        push 5b5424h
        mov ecx, dword ptr [ebp - 304h]
        mov ecx, dword ptr [ecx + 4000ch]
        ; Exact mapped bytes E8 E9 B2 FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 36 04 00 00: je 0x42746f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 228h], 1
        push 0c0h
        mov edx, dword ptr [ebp - 210h]
        push edx
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 C5 1F 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 214h]
        add ecx, 0c0h
        mov dword ptr [ebp - 214h], ecx
        lea edx, [ebp - 20ch]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 22ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x427097
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 22ch]
        add eax, 1
        mov dword ptr [ebp - 22ch], eax
        cmp dword ptr [ebp - 22ch], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x4270f1
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 22ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 228h]
        mov edx, dword ptr [edx + 0d0h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d0h], edx
        mov edx, dword ptr [ebp - 228h]
        add edx, 1
        mov dword ptr [ebp - 228h], edx
        ; Exact mapped bytes EB 97: jmp 0x427088
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 80h
        push edx
        ; Exact mapped bytes E8 08 1F 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 4
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 80h
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 22ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x42715d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 22ch]
        add eax, 1
        mov dword ptr [ebp - 22ch], eax
        cmp dword ptr [ebp - 22ch], 4
        ; Exact mapped bytes 73 4E: jae 0x4271b4
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 22ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 228h]
        mov edx, dword ptr [edx + 0d0h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d0h], edx
        mov edx, dword ptr [ebp - 228h]
        add edx, 1
        mov dword ptr [ebp - 228h], edx
        ; Exact mapped bytes EB 9A: jmp 0x42714e
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 0F 8E 0D 01 00 00: jle 0x4272da
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 11bh
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 80h]
        imul ecx, ecx, 368h
        push ecx
        ; Exact mapped bytes E8 3E 5E 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 27ch], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 27ch]
        mov dword ptr [eax + 4], ecx
        push 11ch
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 80h]
        imul ecx, ecx, 438h
        push ecx
        ; Exact mapped bytes E8 F8 5D 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 280h], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 280h]
        mov dword ptr [eax + 28h], ecx
        push 11dh
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 80h]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 B5 5D 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 284h], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 284h]
        mov dword ptr [eax + 30h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 80h]
        imul ecx, ecx, 368h
        push ecx
        mov edx, dword ptr [ebp - 210h]
        add edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 49 1D 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 22ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x42730a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 22ch]
        add eax, 1
        mov dword ptr [ebp - 22ch], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 80h]
        imul eax, eax, 368h
        cmp dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes 73 4E: jae 0x427378
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 22ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 228h]
        mov edx, dword ptr [edx + 0d0h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d0h], edx
        mov edx, dword ptr [ebp - 228h]
        add edx, 1
        mov dword ptr [ebp - 228h], edx
        ; Exact mapped bytes EB 83: jmp 0x4272fb
        __asm _emit 0xeb
        __asm _emit 0x83
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ecx + 0f4h]
        add ecx, dword ptr [eax + 0d0h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov dword ptr [eax + 0f4h], ecx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 4]
        mov dword ptr [ecx + 58h], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0a8h], 368h
        mov dword ptr [ebp - 22ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4273fd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 22ch]
        add edx, 1
        mov dword ptr [ebp - 22ch], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 22ch]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 73 3B: jae 0x427452
        __asm _emit 0x73
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 22ch]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 66 8B 94 01 48 03 00 00: mov dx, word ptr [ecx + eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 304h]
        add ecx, 4
        ; Exact mapped bytes E8 F0 D7 00 00: call 0x434c40
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9C: jmp 0x4273ee
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov eax, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp - 288h]
        push ecx
        ; Exact mapped bytes E8 9F 5F 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x5f
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x42747d
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5454h
        ; Exact mapped bytes E8 04 64 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x64
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea edx, [ebp - 218h]
        push edx
        push 5b5470h
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 4000ch]
        ; Exact mapped bytes E8 5D AE FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 23 04 00 00: je 0x4278e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 230h], 1
        push 0c0h
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        lea edx, [ebp - 20ch]
        push edx
        ; Exact mapped bytes E8 39 1B 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 0c0h
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 1e4h]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 AD 03 00 00: jne 0x4278bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1e2h]
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 0F 85 98 03 00 00: jne 0x4278bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 234h], 0
        ; Exact mapped bytes EB 0F: jmp 0x42754c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 234h]
        add ecx, 1
        mov dword ptr [ebp - 234h], ecx
        cmp dword ptr [ebp - 234h], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x4275a6
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 234h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 230h]
        mov eax, dword ptr [eax + 0cch]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0cch], eax
        mov eax, dword ptr [ebp - 230h]
        add eax, 1
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 97: jmp 0x42753d
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov ecx, dword ptr [ebp - 210h]
        add ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 7ch
        push eax
        ; Exact mapped bytes E8 56 1A 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 214h]
        add ecx, 4
        mov dword ptr [ebp - 214h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 7ch
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 234h], 0
        ; Exact mapped bytes EB 0F: jmp 0x42760c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 234h]
        add ecx, 1
        mov dword ptr [ebp - 234h], ecx
        cmp dword ptr [ebp - 234h], 4
        ; Exact mapped bytes 73 4E: jae 0x427663
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 234h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 230h]
        mov eax, dword ptr [eax + 0cch]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0cch], eax
        mov eax, dword ptr [ebp - 230h]
        add eax, 1
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 9A: jmp 0x4275fd
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 0F 8E 3F 01 00 00: jle 0x4277b8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 169h
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 7ch]
        imul edx, edx, 0ceh
        push edx
        ; Exact mapped bytes E8 95 59 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28ch], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 28ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 7ch]
        imul edx, edx, 0ceh
        push edx
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 2E 19 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 234h], 0
        ; Exact mapped bytes EB 0F: jmp 0x427710
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 234h]
        add ecx, 1
        mov dword ptr [ebp - 234h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 234h]
        cmp ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes 0F 83 8D 00 00 00: jae 0x4277b8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 234h]
        imul ecx, ecx, 368h
        mov esi, dword ptr [eax + 4]
        add esi, ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 234h]
        imul ecx, ecx, 438h
        mov edi, dword ptr [eax + 28h]
        add edi, ecx
        mov ecx, 0dah
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 234h]
        imul ecx, ecx, 0ceh
        mov esi, dword ptr [eax]
        add esi, ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 234h]
        imul ecx, ecx, 438h
        mov edx, dword ptr [eax + 28h]
        lea edi, [edx + ecx + 368h]
        mov ecx, 33h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x427701
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 234h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4277e7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 234h]
        add eax, 1
        mov dword ptr [ebp - 234h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 7ch]
        imul eax, eax, 0ceh
        cmp dword ptr [ebp - 234h], eax
        ; Exact mapped bytes 73 4E: jae 0x427852
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 234h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 230h]
        mov edx, dword ptr [edx + 0cch]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0cch], edx
        mov edx, dword ptr [ebp - 230h]
        add edx, 1
        mov dword ptr [ebp - 230h], edx
        ; Exact mapped bytes EB 86: jmp 0x4277d8
        __asm _emit 0xeb
        __asm _emit 0x86
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ecx + 0f4h]
        add ecx, dword ptr [eax + 0cch]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov dword ptr [eax + 0f4h], ecx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0a4h], 0ceh
        ; Exact mapped bytes EB 0E: jmp 0x4278cb
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b54a4h
        ; Exact mapped bytes E8 B6 5F 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 290h], edx
        mov eax, dword ptr [ebp - 290h]
        push eax
        ; Exact mapped bytes E8 26 5B 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x4278f6
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b54c8h
        ; Exact mapped bytes E8 8B 5F 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea ecx, [ebp - 218h]
        push ecx
        push 5b54e4h
        mov edx, dword ptr [ebp - 304h]
        mov ecx, dword ptr [edx + 4000ch]
        ; Exact mapped bytes E8 E4 A9 FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 B9 03 00 00: je 0x427cf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 238h], 1
        push 0c0h
        mov eax, dword ptr [ebp - 210h]
        push eax
        lea ecx, [ebp - 20ch]
        push ecx
        ; Exact mapped bytes E8 C0 16 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 214h]
        add edx, 0c0h
        mov dword ptr [ebp - 214h], edx
        mov eax, dword ptr [ebp - 1e4h]
        and eax, 0ffffh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 43 03 00 00: jne 0x427ccc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1e2h]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 2E 03 00 00: jne 0x427ccc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20ch]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 23ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4279c5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 23ch]
        add eax, 1
        mov dword ptr [ebp - 23ch], eax
        cmp dword ptr [ebp - 23ch], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x427a1f
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 23ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 238h]
        mov edx, dword ptr [edx + 0d4h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d4h], edx
        mov edx, dword ptr [ebp - 238h]
        add edx, 1
        mov dword ptr [ebp - 238h], edx
        ; Exact mapped bytes EB 97: jmp 0x4279b6
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 84h
        push edx
        ; Exact mapped bytes E8 DA 15 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 4
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 84h
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 23ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x427a8b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 23ch]
        add eax, 1
        mov dword ptr [ebp - 23ch], eax
        cmp dword ptr [ebp - 23ch], 4
        ; Exact mapped bytes 73 4E: jae 0x427ae2
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 23ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 238h]
        mov edx, dword ptr [edx + 0d4h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d4h], edx
        mov edx, dword ptr [ebp - 238h]
        add edx, 1
        mov dword ptr [ebp - 238h], edx
        ; Exact mapped bytes EB 9A: jmp 0x427a7c
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x427bc2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1b2h
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 84h]
        imul ecx, ecx, 0ach
        push ecx
        ; Exact mapped bytes E8 10 55 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 294h], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [eax + 10h], ecx
        push 1b3h
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 84h]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 CD 54 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x54
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 298h], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 298h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 84h]
        imul ecx, ecx, 0ach
        push ecx
        mov edx, dword ptr [ebp - 210h]
        add edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 61 14 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 23ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x427bf2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 23ch]
        add eax, 1
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 84h]
        imul eax, eax, 0ach
        cmp dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes 73 4E: jae 0x427c60
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 23ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 238h]
        mov edx, dword ptr [edx + 0d4h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d4h], edx
        mov edx, dword ptr [ebp - 238h]
        add edx, 1
        mov dword ptr [ebp - 238h], edx
        ; Exact mapped bytes EB 83: jmp 0x427be3
        __asm _emit 0xeb
        __asm _emit 0x83
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ecx + 0f4h]
        add ecx, dword ptr [eax + 0d4h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov dword ptr [eax + 0f4h], ecx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 10h]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0ach], 0ach
        ; Exact mapped bytes EB 0E: jmp 0x427cda
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5518h
        ; Exact mapped bytes E8 A7 5B 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 29ch], edx
        mov eax, dword ptr [ebp - 29ch]
        push eax
        ; Exact mapped bytes E8 17 57 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x57
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x427d05
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b553ch
        ; Exact mapped bytes E8 7C 5B 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea ecx, [ebp - 218h]
        push ecx
        push 5b5558h
        mov edx, dword ptr [ebp - 304h]
        mov ecx, dword ptr [edx + 4000ch]
        ; Exact mapped bytes E8 D5 A5 FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 B9 03 00 00: je 0x428106
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 240h], 1
        push 0c0h
        mov eax, dword ptr [ebp - 210h]
        push eax
        lea ecx, [ebp - 20ch]
        push ecx
        ; Exact mapped bytes E8 B1 12 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 214h]
        add edx, 0c0h
        mov dword ptr [ebp - 214h], edx
        mov eax, dword ptr [ebp - 1e4h]
        and eax, 0ffffh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 43 03 00 00: jne 0x4280db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1e2h]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 2E 03 00 00: jne 0x4280db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20ch]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 244h], 0
        ; Exact mapped bytes EB 0F: jmp 0x427dd4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 244h]
        add eax, 1
        mov dword ptr [ebp - 244h], eax
        cmp dword ptr [ebp - 244h], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x427e2e
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 244h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 240h]
        mov edx, dword ptr [edx + 0d8h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d8h], edx
        mov edx, dword ptr [ebp - 240h]
        add edx, 1
        mov dword ptr [ebp - 240h], edx
        ; Exact mapped bytes EB 97: jmp 0x427dc5
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 88h
        push edx
        ; Exact mapped bytes E8 CB 11 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 4
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 88h
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 244h], 0
        ; Exact mapped bytes EB 0F: jmp 0x427e9a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 244h]
        add eax, 1
        mov dword ptr [ebp - 244h], eax
        cmp dword ptr [ebp - 244h], 4
        ; Exact mapped bytes 73 4E: jae 0x427ef1
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 244h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 240h]
        mov edx, dword ptr [edx + 0d8h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d8h], edx
        mov edx, dword ptr [ebp - 240h]
        add edx, 1
        mov dword ptr [ebp - 240h], edx
        ; Exact mapped bytes EB 9A: jmp 0x427e8b
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x427fd1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1f5h
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 88h]
        imul ecx, ecx, 0a4h
        push ecx
        ; Exact mapped bytes E8 01 51 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2a0h], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [eax + 14h], ecx
        push 1f6h
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 88h]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 BE 50 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2a4h], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [eax + 38h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 88h]
        imul ecx, ecx, 0a4h
        push ecx
        mov edx, dword ptr [ebp - 210h]
        add edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 14h]
        push edx
        ; Exact mapped bytes E8 52 10 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 244h], 0
        ; Exact mapped bytes EB 0F: jmp 0x428001
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 244h]
        add eax, 1
        mov dword ptr [ebp - 244h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 88h]
        imul eax, eax, 0a4h
        cmp dword ptr [ebp - 244h], eax
        ; Exact mapped bytes 73 4E: jae 0x42806f
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 244h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 240h]
        mov edx, dword ptr [edx + 0d8h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0d8h], edx
        mov edx, dword ptr [ebp - 240h]
        add edx, 1
        mov dword ptr [ebp - 240h], edx
        ; Exact mapped bytes EB 83: jmp 0x427ff2
        __asm _emit 0xeb
        __asm _emit 0x83
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ecx + 0f4h]
        add ecx, dword ptr [eax + 0d8h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov dword ptr [eax + 0f4h], ecx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 14h]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0b0h], 0a4h
        ; Exact mapped bytes EB 0E: jmp 0x4280e9
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5588h
        ; Exact mapped bytes E8 98 57 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 2a8h], edx
        mov eax, dword ptr [ebp - 2a8h]
        push eax
        ; Exact mapped bytes E8 08 53 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x428114
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b55a8h
        ; Exact mapped bytes E8 6D 57 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x57
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea ecx, [ebp - 218h]
        push ecx
        push 5b55c0h
        mov edx, dword ptr [ebp - 304h]
        mov ecx, dword ptr [edx + 4000ch]
        ; Exact mapped bytes E8 C6 A1 FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 B9 03 00 00: je 0x428515
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 248h], 1
        push 0c0h
        mov eax, dword ptr [ebp - 210h]
        push eax
        lea ecx, [ebp - 20ch]
        push ecx
        ; Exact mapped bytes E8 A2 0E 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 214h]
        add edx, 0c0h
        mov dword ptr [ebp - 214h], edx
        mov eax, dword ptr [ebp - 1e4h]
        and eax, 0ffffh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 43 03 00 00: jne 0x4284ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1e2h]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 2E 03 00 00: jne 0x4284ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20ch]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4281e3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 24ch]
        add eax, 1
        mov dword ptr [ebp - 24ch], eax
        cmp dword ptr [ebp - 24ch], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x42823d
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 24ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 248h]
        mov edx, dword ptr [edx + 0e8h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0e8h], edx
        mov edx, dword ptr [ebp - 248h]
        add edx, 1
        mov dword ptr [ebp - 248h], edx
        ; Exact mapped bytes EB 97: jmp 0x4281d4
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 98h
        push edx
        ; Exact mapped bytes E8 BC 0D 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 4
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 98h
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4282a9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 24ch]
        add eax, 1
        mov dword ptr [ebp - 24ch], eax
        cmp dword ptr [ebp - 24ch], 4
        ; Exact mapped bytes 73 4E: jae 0x428300
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 24ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 248h]
        mov edx, dword ptr [edx + 0e8h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0e8h], edx
        mov edx, dword ptr [ebp - 248h]
        add edx, 1
        mov dword ptr [ebp - 248h], edx
        ; Exact mapped bytes EB 9A: jmp 0x42829a
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x4283e0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 238h
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 98h]
        imul ecx, ecx, 0b4h
        push ecx
        ; Exact mapped bytes E8 F2 4C 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ach], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 2ach]
        mov dword ptr [eax + 1ch], ecx
        push 239h
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 98h]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 AF 4C 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2b0h], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 2b0h]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 98h]
        imul ecx, ecx, 0b4h
        push ecx
        mov edx, dword ptr [ebp - 210h]
        add edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 43 0C 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x428410
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 24ch]
        add eax, 1
        mov dword ptr [ebp - 24ch], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 98h]
        imul eax, eax, 0b4h
        cmp dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 73 4E: jae 0x42847e
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 24ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 248h]
        mov edx, dword ptr [edx + 0e8h]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0e8h], edx
        mov edx, dword ptr [ebp - 248h]
        add edx, 1
        mov dword ptr [ebp - 248h], edx
        ; Exact mapped bytes EB 83: jmp 0x428401
        __asm _emit 0xeb
        __asm _emit 0x83
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ecx + 0f4h]
        add ecx, dword ptr [eax + 0e8h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov dword ptr [eax + 0f4h], ecx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 1ch]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0c0h], 0b4h
        ; Exact mapped bytes EB 0E: jmp 0x4284f8
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b55f4h
        ; Exact mapped bytes E8 89 53 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 2b4h], edx
        mov eax, dword ptr [ebp - 2b4h]
        push eax
        ; Exact mapped bytes E8 F9 4E 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x428523
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5618h
        ; Exact mapped bytes E8 5E 53 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x53
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea ecx, [ebp - 218h]
        push ecx
        push 5b5634h
        mov edx, dword ptr [ebp - 304h]
        mov ecx, dword ptr [edx + 4000ch]
        ; Exact mapped bytes E8 B7 9D FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 B9 03 00 00: je 0x428924
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 250h], 1
        push 0c0h
        mov eax, dword ptr [ebp - 210h]
        push eax
        lea ecx, [ebp - 20ch]
        push ecx
        ; Exact mapped bytes E8 93 0A 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 214h]
        add edx, 0c0h
        mov dword ptr [ebp - 214h], edx
        mov eax, dword ptr [ebp - 1e4h]
        and eax, 0ffffh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 43 03 00 00: jne 0x4288f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1e2h]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 2E 03 00 00: jne 0x4288f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20ch]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 254h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4285f2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 254h]
        add eax, 1
        mov dword ptr [ebp - 254h], eax
        cmp dword ptr [ebp - 254h], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x42864c
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 254h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 250h]
        mov edx, dword ptr [edx + 0dch]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0dch], edx
        mov edx, dword ptr [ebp - 250h]
        add edx, 1
        mov dword ptr [ebp - 250h], edx
        ; Exact mapped bytes EB 97: jmp 0x4285e3
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 8ch
        push edx
        ; Exact mapped bytes E8 AD 09 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 4
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        add edx, 8ch
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 254h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4286b8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 254h]
        add eax, 1
        mov dword ptr [ebp - 254h], eax
        cmp dword ptr [ebp - 254h], 4
        ; Exact mapped bytes 73 4E: jae 0x42870f
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 254h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 250h]
        mov edx, dword ptr [edx + 0dch]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0dch], edx
        mov edx, dword ptr [ebp - 250h]
        add edx, 1
        mov dword ptr [ebp - 250h], edx
        ; Exact mapped bytes EB 9A: jmp 0x4286a9
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        cmp dword ptr [ecx + 8ch], 0
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x4287ef
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 27ah
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 8ch]
        imul ecx, ecx, 0b4h
        push ecx
        ; Exact mapped bytes E8 E3 48 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2b8h], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 2b8h]
        mov dword ptr [eax + 8], ecx
        push 27bh
        push 5b539ch
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 8ch]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 A0 48 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2bch], eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 2bch]
        mov dword ptr [eax + 3ch], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 8ch]
        imul ecx, ecx, 0b4h
        push ecx
        mov edx, dword ptr [ebp - 210h]
        add edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 34 08 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 254h], 0
        ; Exact mapped bytes EB 0F: jmp 0x42881f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 254h]
        add eax, 1
        mov dword ptr [ebp - 254h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 8ch]
        imul eax, eax, 0b4h
        cmp dword ptr [ebp - 254h], eax
        ; Exact mapped bytes 73 4E: jae 0x42888d
        __asm _emit 0x73
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 220h]
        add eax, dword ptr [ebp - 254h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        imul ecx, dword ptr [ebp - 250h]
        mov edx, dword ptr [edx + 0dch]
        add edx, ecx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0dch], edx
        mov edx, dword ptr [ebp - 250h]
        add edx, 1
        mov dword ptr [ebp - 250h], edx
        ; Exact mapped bytes EB 83: jmp 0x428810
        __asm _emit 0xeb
        __asm _emit 0x83
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ecx + 0f4h]
        add ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov dword ptr [eax + 0f4h], ecx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 8]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0b4h], 0b4h
        ; Exact mapped bytes EB 0E: jmp 0x428907
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5668h
        ; Exact mapped bytes E8 7A 4F 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 2c0h], edx
        mov eax, dword ptr [ebp - 2c0h]
        push eax
        ; Exact mapped bytes E8 EA 4A 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x428932
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5688h
        ; Exact mapped bytes E8 4F 4F 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea ecx, [ebp - 218h]
        push ecx
        push 5b56a0h
        mov edx, dword ptr [ebp - 304h]
        mov ecx, dword ptr [edx + 4000ch]
        ; Exact mapped bytes E8 A8 99 FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 7E 03 00 00: je 0x428cf8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 258h], 1
        push 0c0h
        mov eax, dword ptr [ebp - 210h]
        push eax
        lea ecx, [ebp - 20ch]
        push ecx
        ; Exact mapped bytes E8 84 06 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 214h]
        add edx, 0c0h
        mov dword ptr [ebp - 214h], edx
        lea eax, [ebp - 20ch]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 25ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4289d8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 25ch]
        add ecx, 1
        mov dword ptr [ebp - 25ch], ecx
        cmp dword ptr [ebp - 25ch], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x428a32
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 25ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 258h]
        mov eax, dword ptr [eax + 0e4h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0e4h], eax
        mov eax, dword ptr [ebp - 258h]
        add eax, 1
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 97: jmp 0x4289c9
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov ecx, dword ptr [ebp - 210h]
        add ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 94h
        push eax
        ; Exact mapped bytes E8 C8 05 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 214h]
        add ecx, 4
        mov dword ptr [ebp - 214h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 94h
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 25ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x428a9c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 25ch]
        add ecx, 1
        mov dword ptr [ebp - 25ch], ecx
        cmp dword ptr [ebp - 25ch], 4
        ; Exact mapped bytes 73 4E: jae 0x428af3
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 25ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 258h]
        mov eax, dword ptr [eax + 0e4h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0e4h], eax
        mov eax, dword ptr [ebp - 258h]
        add eax, 1
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 9A: jmp 0x428a8d
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x428bd3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2bch
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 94h]
        imul edx, edx, 0ach
        push edx
        ; Exact mapped bytes E8 FF 44 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2c4h], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2c4h]
        mov dword ptr [ecx + 20h], edx
        push 2bdh
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 94h]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 BC 44 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2c8h], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2c8h]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 94h]
        imul edx, edx, 0ach
        push edx
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 50 04 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 20h]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 25ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x428c03
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 25ch]
        add ecx, 1
        mov dword ptr [ebp - 25ch], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 94h]
        imul ecx, ecx, 0ach
        cmp dword ptr [ebp - 25ch], ecx
        ; Exact mapped bytes 73 4E: jae 0x428c71
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 25ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 258h]
        mov eax, dword ptr [eax + 0e4h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0e4h], eax
        mov eax, dword ptr [ebp - 258h]
        add eax, 1
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 83: jmp 0x428bf4
        __asm _emit 0xeb
        __asm _emit 0x83
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 0f4h]
        add edx, dword ptr [ecx + 0e4h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0f4h], edx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [eax + 20h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0bch], 0ach
        mov eax, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 2cch], eax
        mov ecx, dword ptr [ebp - 2cch]
        push ecx
        ; Exact mapped bytes E8 16 47 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x47
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x428d06
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b56d8h
        ; Exact mapped bytes E8 7B 4B 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea edx, [ebp - 218h]
        push edx
        push 5b56f8h
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 4000ch]
        ; Exact mapped bytes E8 D4 95 FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 B7 03 00 00: je 0x429105
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 260h], 1
        push 0c0h
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        lea edx, [ebp - 20ch]
        push edx
        ; Exact mapped bytes E8 B0 02 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 0c0h
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 1e4h]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 41 03 00 00: jne 0x4290da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1e2h]
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 0F 85 2C 03 00 00: jne 0x4290da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 264h], 0
        ; Exact mapped bytes EB 0F: jmp 0x428dd5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 264h]
        add ecx, 1
        mov dword ptr [ebp - 264h], ecx
        cmp dword ptr [ebp - 264h], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x428e2f
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 264h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 260h]
        mov eax, dword ptr [eax + 0e0h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0e0h], eax
        mov eax, dword ptr [ebp - 260h]
        add eax, 1
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 97: jmp 0x428dc6
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov ecx, dword ptr [ebp - 210h]
        add ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 90h
        push eax
        ; Exact mapped bytes E8 CB 01 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 214h]
        add ecx, 4
        mov dword ptr [ebp - 214h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 90h
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 264h], 0
        ; Exact mapped bytes EB 0F: jmp 0x428e99
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 264h]
        add ecx, 1
        mov dword ptr [ebp - 264h], ecx
        cmp dword ptr [ebp - 264h], 4
        ; Exact mapped bytes 73 4E: jae 0x428ef0
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 264h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 260h]
        mov eax, dword ptr [eax + 0e0h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0e0h], eax
        mov eax, dword ptr [ebp - 260h]
        add eax, 1
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 9A: jmp 0x428e8a
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x428fd0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2feh
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 90h]
        imul edx, edx, 0a8h
        push edx
        ; Exact mapped bytes E8 02 41 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2d0h], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2d0h]
        mov dword ptr [ecx + 18h], edx
        push 2ffh
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 90h]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 BF 40 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2d4h], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2d4h]
        mov dword ptr [ecx + 40h], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 90h]
        imul edx, edx, 0a8h
        push edx
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 53 00 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 264h], 0
        ; Exact mapped bytes EB 0F: jmp 0x429000
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 264h]
        add ecx, 1
        mov dword ptr [ebp - 264h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 90h]
        imul ecx, ecx, 0a8h
        cmp dword ptr [ebp - 264h], ecx
        ; Exact mapped bytes 73 4E: jae 0x42906e
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 264h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 260h]
        mov eax, dword ptr [eax + 0e0h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0e0h], eax
        mov eax, dword ptr [ebp - 260h]
        add eax, 1
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 83: jmp 0x428ff1
        __asm _emit 0xeb
        __asm _emit 0x83
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 0f4h]
        add edx, dword ptr [ecx + 0e0h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0f4h], edx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [eax + 18h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0b8h], 0a8h
        ; Exact mapped bytes EB 0E: jmp 0x4290e8
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5730h
        ; Exact mapped bytes E8 99 47 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 2d8h], eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        ; Exact mapped bytes E8 09 43 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x429113
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5758h
        ; Exact mapped bytes E8 6E 47 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea edx, [ebp - 218h]
        push edx
        push 5b5778h
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 4000ch]
        ; Exact mapped bytes E8 C7 91 FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 B7 03 00 00: je 0x429512
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 268h], 1
        push 0c0h
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        lea edx, [ebp - 20ch]
        push edx
        ; Exact mapped bytes E8 A3 FE 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 0c0h
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 1e4h]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 41 03 00 00: jne 0x4294e7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1e2h]
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 0F 85 2C 03 00 00: jne 0x4294e7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 26ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4291e2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 26ch]
        add ecx, 1
        mov dword ptr [ebp - 26ch], ecx
        cmp dword ptr [ebp - 26ch], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x42923c
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 26ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 268h]
        mov eax, dword ptr [eax + 0ech]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0ech], eax
        mov eax, dword ptr [ebp - 268h]
        add eax, 1
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 97: jmp 0x4291d3
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov ecx, dword ptr [ebp - 210h]
        add ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 9ch
        push eax
        ; Exact mapped bytes E8 BE FD 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 214h]
        add ecx, 4
        mov dword ptr [ebp - 214h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 9ch
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 26ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4292a6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 26ch]
        add ecx, 1
        mov dword ptr [ebp - 26ch], ecx
        cmp dword ptr [ebp - 26ch], 4
        ; Exact mapped bytes 73 4E: jae 0x4292fd
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 26ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 268h]
        mov eax, dword ptr [eax + 0ech]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0ech], eax
        mov eax, dword ptr [ebp - 268h]
        add eax, 1
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 9A: jmp 0x429297
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x4293dd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 340h
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 9ch]
        imul edx, edx, 0d4h
        push edx
        ; Exact mapped bytes E8 F5 3C 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2dch], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2dch]
        mov dword ptr [ecx + 24h], edx
        push 341h
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 9ch]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 B2 3C 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2e0h], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2e0h]
        mov dword ptr [ecx + 4ch], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 9ch]
        imul edx, edx, 0d4h
        push edx
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes E8 46 FC 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 26ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x42940d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 26ch]
        add ecx, 1
        mov dword ptr [ebp - 26ch], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 9ch]
        imul ecx, ecx, 0d4h
        cmp dword ptr [ebp - 26ch], ecx
        ; Exact mapped bytes 73 4E: jae 0x42947b
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 26ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 268h]
        mov eax, dword ptr [eax + 0ech]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0ech], eax
        mov eax, dword ptr [ebp - 268h]
        add eax, 1
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 83: jmp 0x4293fe
        __asm _emit 0xeb
        __asm _emit 0x83
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 0f4h]
        add edx, dword ptr [ecx + 0ech]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0f4h], edx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [eax + 24h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0c4h], 0d4h
        ; Exact mapped bytes EB 0E: jmp 0x4294f5
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b57ach
        ; Exact mapped bytes E8 8C 43 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 2e4h], eax
        mov ecx, dword ptr [ebp - 2e4h]
        push ecx
        ; Exact mapped bytes E8 FC 3E 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x429520
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b57d0h
        ; Exact mapped bytes E8 61 43 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        push 0
        push 0
        lea edx, [ebp - 218h]
        push edx
        push 5b57ech
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 4000ch]
        ; Exact mapped bytes E8 BA 8D FE FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 0F 84 B7 03 00 00: je 0x42991f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 270h], 1
        push 0c0h
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        lea edx, [ebp - 20ch]
        push edx
        ; Exact mapped bytes E8 96 FA 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 214h]
        add eax, 0c0h
        mov dword ptr [ebp - 214h], eax
        mov ecx, dword ptr [ebp - 1e4h]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 41 03 00 00: jne 0x4298f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1e2h]
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 0F 85 2C 03 00 00: jne 0x4298f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 20ch]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 274h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4295ef
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 274h]
        add ecx, 1
        mov dword ptr [ebp - 274h], ecx
        cmp dword ptr [ebp - 274h], 0c0h
        ; Exact mapped bytes 73 4E: jae 0x429649
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 274h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 270h]
        mov eax, dword ptr [eax + 0f0h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0f0h], eax
        mov eax, dword ptr [ebp - 270h]
        add eax, 1
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 97: jmp 0x4295e0
        __asm _emit 0xeb
        __asm _emit 0x97
        push 4
        mov ecx, dword ptr [ebp - 210h]
        add ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 0a0h
        push eax
        ; Exact mapped bytes E8 B1 F9 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 214h]
        add ecx, 4
        mov dword ptr [ebp - 214h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        add eax, 0a0h
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 274h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4296b3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 274h]
        add ecx, 1
        mov dword ptr [ebp - 274h], ecx
        cmp dword ptr [ebp - 274h], 4
        ; Exact mapped bytes 73 4E: jae 0x42970a
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 274h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 270h]
        mov eax, dword ptr [eax + 0f0h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0f0h], eax
        mov eax, dword ptr [ebp - 270h]
        add eax, 1
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 9A: jmp 0x4296a4
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        cmp dword ptr [edx + 0a0h], 0
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x4297ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 382h
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 0a0h]
        imul edx, edx, 9ch
        push edx
        ; Exact mapped bytes E8 E8 38 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2e8h], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2e8h]
        mov dword ptr [ecx + 0ch], edx
        push 383h
        push 5b539ch
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 0a0h]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 A5 38 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ech], eax
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 2ech]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 0a0h]
        imul edx, edx, 9ch
        push edx
        mov eax, dword ptr [ebp - 210h]
        add eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 39 F8 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 274h], 0
        ; Exact mapped bytes EB 0F: jmp 0x42981a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 274h]
        add ecx, 1
        mov dword ptr [ebp - 274h], ecx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 0a0h]
        imul ecx, ecx, 9ch
        cmp dword ptr [ebp - 274h], ecx
        ; Exact mapped bytes 73 4E: jae 0x429888
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 220h]
        add ecx, dword ptr [ebp - 274h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, dword ptr [ebp - 270h]
        mov eax, dword ptr [eax + 0f0h]
        add eax, edx
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0f0h], eax
        mov eax, dword ptr [ebp - 270h]
        add eax, 1
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 83: jmp 0x42980b
        __asm _emit 0xeb
        __asm _emit 0x83
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [edx + 0f4h]
        add edx, dword ptr [ecx + 0f0h]
        mov eax, dword ptr [ebp - 304h]
        mov ecx, dword ptr [eax + 40004h]
        mov dword ptr [ecx + 0f4h], edx
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov edx, dword ptr [ecx + 40004h]
        mov dword ptr [edx + 0c8h], 9ch
        ; Exact mapped bytes EB 0E: jmp 0x429902
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b581ch
        ; Exact mapped bytes E8 7F 3F 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 2f0h], eax
        mov ecx, dword ptr [ebp - 2f0h]
        push ecx
        ; Exact mapped bytes E8 EF 3A 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x3a
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0E: jmp 0x42992d
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5b5840h
        ; Exact mapped bytes E8 54 3F 0E 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 21ch], 0
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov dword ptr [eax + 108h], 0
        mov esi, esp
        lea ecx, [ebp - 14ch]
        push ecx
        push 5b585ch
        ; Exact mapped bytes FF 15 54 24 5E 00: call dword ptr [0x5e2454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 78 EE 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xee
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 224h], eax
        cmp dword ptr [ebp - 224h], -1
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x429aca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x429aca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14ch]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x429aa2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 3b0h
        push 5b539ch
        push 10h
        ; Exact mapped bytes E8 89 36 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2f8h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 2f8h], 0
        ; Exact mapped bytes 74 1C: je 0x4299df
        __asm _emit 0x74
        __asm _emit 0x1c
        push -1
        lea ecx, [ebp - 120h]
        push ecx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 89 ED 00 00: call 0x438760
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 308h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4299e9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 308h], 0
        mov edx, dword ptr [ebp - 308h]
        mov dword ptr [ebp - 2f4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 2f4h]
        mov dword ptr [ebp - 278h], eax
        mov ecx, dword ptr [ebp - 304h]
        mov esi, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 91 B4 00 00: call 0x434eb0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 21ch]
        imul edx, edx, 0dh
        imul eax, edx
        mov ecx, dword ptr [esi + 108h]
        add ecx, eax
        mov edx, dword ptr [ebp - 304h]
        mov eax, dword ptr [edx + 40004h]
        mov dword ptr [eax + 108h], ecx
        mov ecx, dword ptr [ebp - 278h]
        mov dword ptr [ebp - 300h], ecx
        mov edx, dword ptr [ebp - 300h]
        mov dword ptr [ebp - 2fch], edx
        cmp dword ptr [ebp - 2fch], 0
        ; Exact mapped bytes 74 23: je 0x429a89
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 2fch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 5F ED 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 30ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x429a93
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 30ch], 0
        mov eax, dword ptr [ebp - 21ch]
        add eax, 1
        mov dword ptr [ebp - 21ch], eax
        mov esi, esp
        lea ecx, [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 224h]
        push edx
        ; Exact mapped bytes FF 15 58 24 5E 00: call dword ptr [0x5e2458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 21 ED 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x429ac5
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x429aca
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 B1 FE FF FF: jmp 0x42997b
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
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
        add esp, 30ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F8 EC 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
