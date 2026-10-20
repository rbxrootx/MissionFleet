// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449A85 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_00449a85_00449A85() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes E8 70 FD FF FF: call 0x449800
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x449aa4
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 1C 6A 68 00: call dword ptr [0x686a1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x449afe
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov edx, dword ptr [ebp + 0ch]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x449ab5
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 12340042h
        ; Exact mapped bytes EB 49: jmp 0x449afe
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 68 BF 68 00: call dword ptr [0x68bf68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x449ad6
        __asm _emit 0x74
        __asm _emit 0x13
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 6C BF 68 00: call dword ptr [0x68bf6c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 11: jmp 0x449ae7
        __asm _emit 0xeb
        __asm _emit 0x11
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0F: je 0x449afc
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 27 FF FF FF: call 0x449a21
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x449afe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
