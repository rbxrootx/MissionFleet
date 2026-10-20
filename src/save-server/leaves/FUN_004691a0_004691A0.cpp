// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004691A0 .. +0x131 bytes.
extern "C" __declspec(naked) void FUN_004691a0_004691A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes 83 3D 8C 8B 68 00 00: cmp dword ptr [0x688b8c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x4691c4
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 74 D6 00 00: call 0x476830
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x4692cd
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 E5 76 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x4691df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x4692b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4691ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x469275
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 688ca1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x46925f
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp edx, ecx
        ; Exact mapped bytes 75 14: jne 0x469246
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        cmp eax, edx
        ; Exact mapped bytes 74 0C: je 0x469252
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x469254
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x469275
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 14: jmp 0x469273
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 75 02: jne 0x469273
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x469275
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 81: jmp 0x4691f6
        __asm _emit 0xeb
        __asm _emit 0x81
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 02: je 0x469282
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 31: jmp 0x4692b3
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 688ca1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x4692ae
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x4692ae
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x4692b3
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x4691d6
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 96 76 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov eax, ecx
        neg eax
        sbb eax, eax
        and eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
