// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0BE2 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_004f0be2_004F0BE2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 14: je 0x4f0c08
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A3 5E 00 00: call 0x4f6aa6
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 12: jmp 0x4f0c1a
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C9 5D 00 00: call 0x4f69e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 20: jne 0x4f0c40
        __asm _emit 0x75
        __asm _emit 0x20
        push 5c52d0h
        push 5c5304h
        ; Exact mapped bytes E8 E6 EF FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B FD FF FF: call 0x4f09d7
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x4f0c9e
        __asm _emit 0xeb
        __asm _emit 0x5e
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A1 58 00 00: call 0x4f64eb
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x4f0c6e
        __asm _emit 0x75
        __asm _emit 0x20
        push 5c5308h
        push 5c5338h
        ; Exact mapped bytes E8 B8 EF FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6D FD FF FF: call 0x4f09d7
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x4f0c9e
        __asm _emit 0xeb
        __asm _emit 0x30
        push 0e146h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 66 DC FF FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x4f0c99
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E8 E4 FE FF FF: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        and eax, 5
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 E6 FF FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
