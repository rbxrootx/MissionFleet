// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879ECF0 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_5879ecf0_5879ECF0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test dword ptr [eax + 74h], 8000h
        ; Exact mapped bytes 74 1E: je 0x5879ed1b
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [esp + 0ch], 2
        ; Exact mapped bytes 7C 09: jl 0x5879ed0d
        __asm _emit 0x7c
        __asm _emit 0x09
        test dword ptr [eax + 78h], 100000h
        ; Exact mapped bytes 74 71: je 0x5879ed7e
        __asm _emit 0x74
        __asm _emit 0x71
        push dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes E8 79 00 00 00: call 0x5879ed90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ret
        cmp dword ptr [esp + 0ch], 1
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes 7D 1A: jge 0x5879ed3f
        __asm _emit 0x7d
        __asm _emit 0x1a
        test ecx, 200000h
        push dword ptr [esp + 8]
        ; Exact mapped bytes 74 47: je 0x5879ed78
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x5879ed47
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        add esp, 8
        ret
        test ecx, 400000h
        ; Exact mapped bytes EB E4: jmp 0x5879ed2b
        __asm _emit 0xeb
        __asm _emit 0xe4
        push 588b7734h
        push 2
        ; Exact mapped bytes E8 0D AF 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xaf
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 54 28 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 F5 AE 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 3C 28 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 8
        ret
        push eax
        ; Exact mapped bytes E8 02 01 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes E8 28 FF FF FF: call 0x5879ecb0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
