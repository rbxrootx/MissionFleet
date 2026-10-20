// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F5D0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0047f5d0_0047F5D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push 688954h
        ; Exact mapped bytes FF 15 24 BA 68 00: call dword ptr [0x68ba24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 89 68 00 00: cmp dword ptr [0x688944], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x47f608
        __asm _emit 0x74
        __asm _emit 0x1e
        push 688954h
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push 13h
        ; Exact mapped bytes E8 B4 12 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x47f60f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 30 00 00 00: call 0x47f650
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x47f638
        __asm _emit 0x74
        __asm _emit 0x0c
        push 13h
        ; Exact mapped bytes E8 1D 13 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0B: jmp 0x47f643
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 688954h
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
