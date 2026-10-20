// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D4D5 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_0048d4d5_0048D4D5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes E8 70 FD FF FF: call 0x48d250
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x48d4f4
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 04 E5 5D 00: call dword ptr [0x5de504]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x48d54e
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov edx, dword ptr [ebp + 0ch]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x48d505
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 12340042h
        ; Exact mapped bytes EB 49: jmp 0x48d54e
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 A0 27 5E 00: call dword ptr [0x5e27a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x48d526
        __asm _emit 0x74
        __asm _emit 0x13
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 FC 25 5E 00: call dword ptr [0x5e25fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 11: jmp 0x48d537
        __asm _emit 0xeb
        __asm _emit 0x11
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0F: je 0x48d54c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 27 FF FF FF: call 0x48d471
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x48d54e
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
