// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DE70 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_0045de70_0045DE70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 05 00 00: call 0x45e400
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 05: jae 0x45de99
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 A7 B2 06 00: call 0x4c9140
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 7B: je 0x45df1d
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 01 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 64: je 0x45df1d
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 01 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 0ffh
        ; Exact mapped bytes 74 49: je 0x45df1d
        __asm _emit 0x74
        __asm _emit 0x49
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 30: jne 0x45df0a
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 00 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx]
        sub dl, 1
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], dl
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD FA FF FF: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        xor al, al
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x45dfb1
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 05 00 00: call 0x45e460
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, 1
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x45dfb1
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 30: jne 0x45df53
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x45df3c
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 FA FF FF: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x45df4f
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 0A: je 0x45df4f
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 FE FF FF: call 0x45de10
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor al, al
        ; Exact mapped bytes EB 5E: jmp 0x45dfb1
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x45df8c
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 1fh
        ; Exact mapped bytes 77 0B: ja 0x45df74
        __asm _emit 0x77
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 18: jae 0x45df8c
        __asm _emit 0x73
        __asm _emit 0x18
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 FA FF FF: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 04 00 00: call 0x45e460
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x45dfaf
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x45dfaf
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 0C: jae 0x45dfaf
        __asm _emit 0x73
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 04 00 00: call 0x45e460
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, 1
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 25 A8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
