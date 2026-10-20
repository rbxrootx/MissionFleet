// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004694E0 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_004694e0_004694E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 83 3D 8C 8B 68 00 00: cmp dword ptr [0x688b8c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x46950c
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6C D3 00 00: call 0x476870
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x4695c2
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 9D 73 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 55: je 0x469576
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 688ca1h]
        and ecx, 4
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        test ecx, ecx
        ; Exact mapped bytes 74 34: je 0x469574
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x469572
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx - 1]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ebp - 4]
        mov byte ptr [ecx - 1], dl
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 02: jmp 0x469574
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x469576
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A0: jmp 0x469516
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 2E: jae 0x4695b5
        __asm _emit 0x73
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 4], cl
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ebp - 4]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB CA: jmp 0x46957f
        __asm _emit 0xeb
        __asm _emit 0xca
        push 19h
        ; Exact mapped bytes E8 94 73 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
