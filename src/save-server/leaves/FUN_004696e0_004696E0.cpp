// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004696E0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_004696e0_004696E0() {
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
        ; Exact mapped bytes 75 15: jne 0x469704
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 24 D2 00 00: call 0x476920
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x469803
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 A5 71 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x46971f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x4697f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x46973f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x4697b5
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 688ca1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x46979f
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp edx, ecx
        ; Exact mapped bytes 75 14: jne 0x469786
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        cmp eax, edx
        ; Exact mapped bytes 74 0C: je 0x469792
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x469794
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x4697b5
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 14: jmp 0x4697b3
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 75 02: jne 0x4697b3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4697b5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 81: jmp 0x469736
        __asm _emit 0xeb
        __asm _emit 0x81
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x4697c2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 31: jmp 0x4697f3
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 688ca1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x4697ee
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x4697ee
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x4697f3
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x469716
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 56 71 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
