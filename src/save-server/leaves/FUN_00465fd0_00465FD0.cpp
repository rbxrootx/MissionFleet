// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00465FD0 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_00465fd0_00465FD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 17: jle 0x465ff6
        __asm _emit 0x7e
        __asm _emit 0x17
        push 8
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        push ecx
        ; Exact mapped bytes E8 D2 A9 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 19: jmp 0x46600f
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        ; Exact mapped bytes 8B 0D C0 DE 67 00: mov ecx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 8
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0B: je 0x466020
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB B6: jmp 0x465fd6
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 4], 2dh
        ; Exact mapped bytes 74 06: je 0x466045
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 2bh
        ; Exact mapped bytes 75 13: jne 0x466058
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 13: jle 0x46607b
        __asm _emit 0x7e
        __asm _emit 0x13
        push 4
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 4D A9 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 15: jmp 0x466090
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D C0 DE 67 00: mov ecx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 4
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 25: je 0x4660bb
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 4]
        lea edx, [eax + ecx - 30h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB A4: jmp 0x46605f
        __asm _emit 0xeb
        __asm _emit 0xa4
        cmp dword ptr [ebp - 0ch], 2dh
        ; Exact mapped bytes 75 07: jne 0x4660c8
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 8]
        neg eax
        ; Exact mapped bytes EB 03: jmp 0x4660cb
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
