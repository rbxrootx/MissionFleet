// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887477F .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_5887477f_5887477F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 298h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        push ebx
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 25ch], edx
        cmp ecx, edi
        ; Exact mapped bytes 74 23: je 0x588747cc
        __asm _emit 0x74
        __asm _emit 0x23
        mov al, byte ptr [ecx]
        cmp al, 2fh
        ; Exact mapped bytes 74 17: je 0x588747c6
        __asm _emit 0x74
        __asm _emit 0x17
        cmp al, 5ch
        ; Exact mapped bytes 74 13: je 0x588747c6
        __asm _emit 0x74
        __asm _emit 0x13
        cmp al, 3ah
        ; Exact mapped bytes 74 0F: je 0x588747c6
        __asm _emit 0x74
        __asm _emit 0x0f
        push ecx
        push edi
        ; Exact mapped bytes E8 A2 72 00 00: call 0x5887ba60
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov ecx, eax
        cmp ecx, edi
        ; Exact mapped bytes 75 E3: jne 0x588747a9
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 25ch]
        mov al, byte ptr [ecx]
        mov byte ptr [ebp - 255h], al
        cmp al, 3ah
        ; Exact mapped bytes 75 20: jne 0x588747f8
        __asm _emit 0x75
        __asm _emit 0x20
        lea eax, [edi + 1]
        cmp ecx, eax
        ; Exact mapped bytes 74 13: je 0x588747f2
        __asm _emit 0x74
        __asm _emit 0x13
        push edx
        xor ebx, ebx
        push ebx
        push ebx
        push edi
        ; Exact mapped bytes E8 E4 FE FF FF: call 0x588746ce
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 0B 02 00 00: jmp 0x588749fd
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp - 255h]
        xor ebx, ebx
        cmp al, 2fh
        ; Exact mapped bytes 74 0A: je 0x58874808
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp al, 5ch
        ; Exact mapped bytes 74 06: je 0x58874808
        __asm _emit 0x74
        __asm _emit 0x06
        cmp al, 3ah
        mov al, bl
        ; Exact mapped bytes 75 02: jne 0x5887480a
        __asm _emit 0x75
        __asm _emit 0x02
        mov al, 1
        sub ecx, edi
        mov dword ptr [ebp - 28ch], ebx
        inc ecx
        mov dword ptr [ebp - 288h], ebx
        xor edx, edx
        mov dword ptr [ebp - 284h], ebx
        test al, al
        mov dword ptr [ebp - 280h], ebx
        push esi
        cmovne edx, ecx
        mov dword ptr [ebp - 27ch], ebx
        mov dword ptr [ebp - 290h], edx
        mov byte ptr [ebp - 278h], bl
        ; Exact mapped bytes E8 E4 3D FE FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 28ch]
        push eax
        push edi
        ; Exact mapped bytes E8 26 39 FE FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 284h]
        add esp, 0ch
        xor edx, edx
        test eax, eax
        lea eax, [ebp - 254h]
        cmovne ecx, edx
        push ebx
        push ebx
        push ebx
        push eax
        push ebx
        push ecx
        ; Exact mapped bytes FF 15 60 42 89 58: call dword ptr [0x58894260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 75 2E: jne 0x588748a9
        __asm _emit 0x75
        __asm _emit 0x2e
        push dword ptr [ebp - 25ch]
        push ebx
        push ebx
        push edi
        ; Exact mapped bytes E8 45 FE FF FF: call 0x588746ce
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov esi, eax
        cmp byte ptr [ebp - 278h], bl
        ; Exact mapped bytes 74 0C: je 0x588748a2
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 6F 83 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, esi
        ; Exact mapped bytes E9 53 01 00 00: jmp 0x588749fc
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 25ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        mov dword ptr [ebp - 294h], ecx
        mov dword ptr [ebp - 274h], ebx
        mov dword ptr [ebp - 270h], ebx
        mov dword ptr [ebp - 26ch], ebx
        mov dword ptr [ebp - 268h], ebx
        mov dword ptr [ebp - 264h], ebx
        mov byte ptr [ebp - 260h], bl
        ; Exact mapped bytes E8 42 3D FE FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 255h]
        push eax
        lea eax, [ebp - 274h]
        push eax
        lea eax, [ebp - 228h]
        push eax
        ; Exact mapped bytes E8 B1 37 FE FF: call 0x588580b2
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 26ch]
        xor edx, edx
        add esp, 10h
        test eax, eax
        cmovne ecx, edx
        cmp byte ptr [ecx], 2eh
        ; Exact mapped bytes 75 18: jne 0x5887492e
        __asm _emit 0x75
        __asm _emit 0x18
        mov al, byte ptr [ecx + 1]
        test al, al
        ; Exact mapped bytes 75 08: jne 0x58874925
        __asm _emit 0x75
        __asm _emit 0x08
        cmp byte ptr [ebp - 260h], dl
        ; Exact mapped bytes EB 2F: jmp 0x58874954
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp al, 2eh
        ; Exact mapped bytes 75 05: jne 0x5887492e
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [ecx + 2], dl
        ; Exact mapped bytes 74 EF: je 0x5887491d
        __asm _emit 0x74
        __asm _emit 0xef
        push dword ptr [ebp - 25ch]
        push dword ptr [ebp - 290h]
        push edi
        push ecx
        ; Exact mapped bytes E8 8D FD FF FF: call 0x588746ce
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 298h], eax
        test eax, eax
        ; Exact mapped bytes 75 79: jne 0x588749c7
        __asm _emit 0x75
        __asm _emit 0x79
        cmp byte ptr [ebp - 260h], bl
        ; Exact mapped bytes 74 0C: je 0x58874962
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 AF 82 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        lea eax, [ebp - 254h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 EC 41 89 58: call dword ptr [0x588941ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 45 FF FF FF: jne 0x588748bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 25ch]
        mov ecx, dword ptr [ebp - 294h]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 74 16: je 0x588749a8
        __asm _emit 0x74
        __asm _emit 0x16
        push 58874539h
        sub eax, ecx
        push 4
        push eax
        lea eax, [edx + ecx*4]
        push eax
        ; Exact mapped bytes E8 3B 6C 00 00: call 0x5887b5e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push esi
        ; Exact mapped bytes FF 15 DC 43 89 58: call dword ptr [0x588943dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp byte ptr [ebp - 278h], bl
        ; Exact mapped bytes 74 0C: je 0x588749c3
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 4E 82 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x588749fc
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp byte ptr [ebp - 260h], bl
        ; Exact mapped bytes 74 0C: je 0x588749db
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 36 82 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push esi
        ; Exact mapped bytes FF 15 DC 43 89 58: call dword ptr [0x588943dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp byte ptr [ebp - 278h], bl
        ; Exact mapped bytes 74 0C: je 0x588749f6
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 1B 82 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, dword ptr [ebp - 298h]
        pop esi
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 47 C6 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
