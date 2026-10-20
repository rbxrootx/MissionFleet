// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004773B0 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004773b0_004773B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 40 75 68 00 00: cmp dword ptr [0x687540], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1A: jne 0x4773d7
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], 61h
        ; Exact mapped bytes 7C 0F: jl 0x4773d2
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp + 8], 7ah
        ; Exact mapped bytes 7F 09: jg 0x4773d2
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 68: jmp 0x47743f
        __asm _emit 0xeb
        __asm _emit 0x68
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
        ; Exact mapped bytes 74 1E: je 0x477409
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
        ; Exact mapped bytes E8 B3 94 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x477410
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 37 00 00 00: call 0x477450
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x477431
        __asm _emit 0x74
        __asm _emit 0x0c
        push 13h
        ; Exact mapped bytes E8 24 95 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0B: jmp 0x47743c
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
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
