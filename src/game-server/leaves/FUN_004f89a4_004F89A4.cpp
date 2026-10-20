// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F89A4 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004f89a4_004F89A4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        xor eax, eax
        cmp dword ptr [ebp + 8], 0
        setne al
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 6E: je 0x4f8a3a
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 02: je 0x4f89d7
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 63: jmp 0x4f8a3a
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 72 14: jb 0x4f89f9
        __asm _emit 0x72
        __asm _emit 0x14
        push 2bbh
        push 5c5b58h
        ; Exact mapped bytes E8 0C C0 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f89f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4f89d7
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes 83 3D E8 E8 5D 00 00: cmp dword ptr [0x5de8e8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4f8a0d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 33 9D 04 00: call 0x542740
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E8 E8 5D 00 00: cmp dword ptr [0x5de8e8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x4f8a3a
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes A1 E8 E8 5D 00: mov eax, dword ptr [0x5de8e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        push 0
        push 400h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 DC 27 5E 00: call dword ptr [0x5e27dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
