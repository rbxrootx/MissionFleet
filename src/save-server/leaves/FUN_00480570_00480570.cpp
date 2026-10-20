// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00480570 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_00480570_00480570() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], 0
        push 2
        ; Exact mapped bytes E8 2C 03 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], 3
        ; Exact mapped bytes EB 09: jmp 0x480599
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 3B 0D 40 89 68 00: cmp ecx, dword ptr [0x688940]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x480639
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes A1 00 76 68 00: mov eax, dword ptr [0x687600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [eax + edx*4], 0
        ; Exact mapped bytes 74 7E: je 0x480634
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 74 22: je 0x4805f1
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes A1 00 76 68 00: mov eax, dword ptr [0x687600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 60 20 00 00: call 0x482640
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x4805f1
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 8], 14h
        ; Exact mapped bytes 7C 3D: jl 0x480634
        __asm _emit 0x7c
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 00 76 68 00: mov ecx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        add edx, 20h
        push edx
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push 2
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 00 76 68 00: mov ecx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes E8 3F 6D FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 00 76 68 00: mov ecx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx + eax*4], 0
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x480590
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes E8 10 03 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
