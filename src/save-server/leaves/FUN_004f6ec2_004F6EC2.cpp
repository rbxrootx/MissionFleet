// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6EC2 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_004f6ec2_004F6EC2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1D: je 0x4f6ef1
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 17: je 0x4f6ef1
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 11: je 0x4f6ef1
        __asm _emit 0x74
        __asm _emit 0x11
        push 34h
        push 6725c8h
        ; Exact mapped bytes E8 54 1E 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6ef1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4f6ece
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes 83 3D EC 6D 68 00 00: cmp dword ptr [0x686dec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x4f6f11
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 6725c8h
        ; Exact mapped bytes E8 34 1E 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6f11
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f6ef7
        __asm _emit 0x75
        __asm _emit 0xe0
        push 2
        ; Exact mapped bytes E8 5C BE 04 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a4h]
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0a4h], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 7E 2F: jle 0x4f6f6e
        __asm _emit 0x7e
        __asm _emit 0x2f
        ; Exact mapped bytes A1 EC 6D 68 00: mov eax, dword ptr [0x686dec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 30 BD 68 00: call dword ptr [0x68bd30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 18: jle 0x4f6f6c
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a4h], 1
        ; Exact mapped bytes 75 0C: jne 0x4f6f6c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], eax
        ; Exact mapped bytes EB 1D: jmp 0x4f6f8b
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0a4h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        ; Exact mapped bytes FF 15 30 BD 68 00: call dword ptr [0x68bd30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes E8 1A BF 04 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xbf
        __asm _emit 0x04
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
