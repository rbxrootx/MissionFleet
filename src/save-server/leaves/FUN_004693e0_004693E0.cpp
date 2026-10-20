// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004693E0 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_004693e0_004693E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 19h
        ; Exact mapped bytes E8 C3 74 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x469401
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x4694c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 688ca1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x469487
        __asm _emit 0x74
        __asm _emit 0x61
        push 1
        ; Exact mapped bytes 8B 0D 00 8B 68 00: mov ecx, dword ptr [0x688b00]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        push 2
        lea edx, [ebp - 8]
        push edx
        push 2
        mov eax, dword ptr [ebp - 4]
        push eax
        push 100h
        ; Exact mapped bytes 8B 0D A4 8D 68 00: mov ecx, dword ptr [0x688da4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 94 CA 00 00: call 0x475ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0E: jne 0x469466
        __asm _emit 0x75
        __asm _emit 0x0e
        push 19h
        ; Exact mapped bytes E8 F1 74 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 70: jmp 0x4694d6
        __asm _emit 0xeb
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp - 8]
        mov byte ptr [edx], al
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 7E 11: jle 0x469485
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp - 7]
        mov byte ptr [edx], al
        ; Exact mapped bytes EB 3D: jmp 0x4694c4
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 688ca1h]
        and eax, 10h
        cmp eax, 10h
        ; Exact mapped bytes 75 14: jne 0x4694b2
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 688ba0h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4694bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 10h]
        mov byte ptr [eax], cl
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x4693f8
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 80 74 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
