// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D0EC0 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_588d0ec0() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 75 7E: jne 0x588d0f45
        __asm _emit 0x75
        __asm _emit 0x7e
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 75 0F: jne 0x588d0edf
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 5ch]
        push 14h
        ; Exact mapped bytes E8 36 5E EE FF: call 0x587b6d10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x5e
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 0F: jne 0x588d0ef3
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 5ch]
        push 14h
        ; Exact mapped bytes E8 92 5E EE FF: call 0x587b6d80
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5e
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 70h]
        ; Exact mapped bytes 74 47: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x47
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 74 42: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x42
        cmp eax, dword ptr [ecx + 78h]
        ; Exact mapped bytes 74 3D: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp eax, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 74 38: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x38
        cmp eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 74 30: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x30
        cmp eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes 74 28: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x28
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 74 20: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x20
        cmp eax, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 74 18: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, dword ptr [ecx + 90h]
        ; Exact mapped bytes 74 10: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x10
        cmp eax, dword ptr [ecx + 94h]
        ; Exact mapped bytes 74 08: je 0x588d0f3f
        __asm _emit 0x74
        __asm _emit 0x08
        cmp eax, dword ptr [ecx + 98h]
        ; Exact mapped bytes 75 06: jne 0x588d0f45
        __asm _emit 0x75
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 AB FB FF FF: call 0x588d0af0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
