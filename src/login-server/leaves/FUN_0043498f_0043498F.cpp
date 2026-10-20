// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043498F .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_0043498f_0043498F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        lea eax, [ebp + 0ch]
        push edi
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 B4 C3 43 00: call dword ptr [0x43c3b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 78 C4 43 00: mov edi, dword ptr [0x43c478]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 5
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 45: je 0x4349fc
        __asm _emit 0x74
        __asm _emit 0x45
        push esi
        ; Exact mapped bytes FF 15 E0 C4 43 00: call dword ptr [0x43c4e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 2F: je 0x4349f3
        __asm _emit 0x74
        __asm _emit 0x2f
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 74 1F: je 0x4349f3
        __asm _emit 0x74
        __asm _emit 0x1f
        lea eax, [ebp - 10h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp + 10h]
        lea eax, [ebp - 10h]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 90 C3 43 00: call dword ptr [0x43c390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4349f8
        __asm _emit 0x75
        __asm _emit 0x05
        push 2
        push esi
        ; Exact mapped bytes EB B7: jmp 0x4349af
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x4349fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
