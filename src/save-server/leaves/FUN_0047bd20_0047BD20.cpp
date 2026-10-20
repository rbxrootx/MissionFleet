// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BD20 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_0047bd20_0047BD20() {
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
        ; Exact mapped bytes 74 1E: je 0x47bd58
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
        ; Exact mapped bytes E8 64 4B FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x47bd5f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 66 8B 45 0C: mov ax, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 33 00 00 00: call 0x47bda0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x47bd85
        __asm _emit 0x74
        __asm _emit 0x0c
        push 13h
        ; Exact mapped bytes E8 D0 4B FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0B: jmp 0x47bd90
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
