// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004807C0 .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_004807c0_004807C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        push 2
        ; Exact mapped bytes E8 D5 00 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4807f0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 3B 0D 40 89 68 00: cmp ecx, dword ptr [0x688940]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D E4 00 00 00: jge 0x4808e3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 00 76 68 00: mov eax, dword ptr [0x687600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [eax + edx*4], 0
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x4808de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 15 00 76 68 00: mov edx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 83h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x4808de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 00 76 68 00: mov eax, dword ptr [0x687600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 3D B4 FF FF: call 0x47bc80
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 0D 00 76 68 00: mov ecx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        mov eax, dword ptr [edx + 0ch]
        and eax, 83h
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x4808c5
        __asm _emit 0x74
        __asm _emit 0x67
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 25: jne 0x480889
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 15 00 76 68 00: mov edx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        push eax
        ; Exact mapped bytes E8 2A FE FF FF: call 0x4806a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x480887
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 3C: jmp 0x4808c5
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 36: jne 0x4808c5
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 00 76 68 00: mov eax, dword ptr [0x687600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 74 21: je 0x4808c5
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 0D 00 76 68 00: mov ecx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes E8 EA FD FF FF: call 0x4806a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 75 07: jne 0x4808c5
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 0D 00 76 68 00: mov ecx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 15 B4 FF FF: call 0x47bcf0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 04 FF FF FF: jmp 0x4807e7
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes E8 66 00 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 05: jne 0x4808f8
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 03: jmp 0x4808fb
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
