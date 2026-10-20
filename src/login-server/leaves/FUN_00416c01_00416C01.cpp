// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416C01 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_00416c01_00416C01() {
    __asm {
        cmp dword ptr [esp + 8], 0
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes 74 05: je 0x416c11
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 18h
        ; Exact mapped bytes EB 03: jmp 0x416c14
        __asm _emit 0xeb
        __asm _emit 0x03
        add eax, 12h
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push 2
        ; Exact mapped bytes 66 81 F9 FF FF: cmp cx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop edx
        ; Exact mapped bytes 75 1C: jne 0x416c3d
        __asm _emit 0x75
        __asm _emit 0x1c
        add eax, 4
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 81 F9 FF FF: cmp cx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 1B: jne 0x416c49
        __asm _emit 0x75
        __asm _emit 0x1b
        add eax, 4
        movzx ecx, word ptr [eax]
        lea eax, [ecx + eax + 5]
        and al, 0fch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        add eax, edx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 E0: je 0x416c24
        __asm _emit 0x74
        __asm _emit 0xe0
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes EB F4: jmp 0x416c3d
        __asm _emit 0xeb
        __asm _emit 0xf4
        add eax, edx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 E1: je 0x416c31
        __asm _emit 0x74
        __asm _emit 0xe1
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes EB F4: jmp 0x416c49
        __asm _emit 0xeb
        __asm _emit 0xf4
    }
}
