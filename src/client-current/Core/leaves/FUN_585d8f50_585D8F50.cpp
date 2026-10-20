// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D8F50 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_585d8f50_585D8F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585d8f6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 37: jge 0x585d8fa8
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 29ch], 1
        ; Exact mapped bytes 75 25: jne 0x585d8fa6
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 C7 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc7
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 3f1h
        ; Exact mapped bytes 74 11: je 0x585d8fa4
        __asm _emit 0x74
        __asm _emit 0x11
        push 3f1h
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 39 15 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x585d8fd8
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes EB BA: jmp 0x585d8f62
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D C7 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc7
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 3f1h
        ; Exact mapped bytes 75 1E: jne 0x585d8fd8
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB E1 EF FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe1
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 38 15 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x38
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
