// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568324 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_00568324_00568324() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 56h
        push 67b070h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 20 1F F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1f
        __asm _emit 0xf7
        __asm _emit 0xff
        push 641458h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 57 27 FE FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D0 C2 68 00: call dword ptr [0x68c2d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x56836c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 8E 3B FE FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, 6871ech
        ; Exact mapped bytes E8 2A 15 00 00: call 0x5698a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 54 C2 68 00: call dword ptr [0x68c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x56839b
        __asm _emit 0x74
        __asm _emit 0x11
        push 60h
        push 67b070h
        ; Exact mapped bytes E8 AA 09 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56839b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x56837c
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5E 26 FE FF: call 0x54aa07
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
