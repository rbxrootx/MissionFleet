// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D330 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_5882d330() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892706h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1a0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1a4h], ecx
        mov eax, dword ptr [ebp - 1a4h]
        mov dword ptr [eax], 588be7d4h
        mov ecx, dword ptr [ebp - 1a4h]
        add ecx, 220h
        ; Exact mapped bytes E8 72 FF FF FF: call 0x5882d2f0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [ecx + 214h], 0
        mov edx, dword ptr [ebp - 1a4h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 218h], eax
        push 190h
        push 0
        lea ecx, [ebp - 1a0h]
        push ecx
        ; Exact mapped bytes E8 59 FA 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 1a0h]
        push edx
        push 2
        ; Exact mapped bytes FF 15 64 45 89 58: call dword ptr [0x58894564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], eax
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 74 1D: je 0x5882d3f5
        __asm _emit 0x74
        __asm _emit 0x1d
        push 588be7dch
        ; Exact mapped bytes E8 FE 6D F8 FF: call 0x587b41e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes FF 15 68 45 89 58: call dword ptr [0x58894568]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 68 A7 02 00: call 0x58857b5a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 69: jmp 0x5882d45e
        __asm _emit 0xeb
        __asm _emit 0x69
        ; Exact mapped bytes 66 8B 85 62 FE FF FF: mov ax, word ptr [ebp - 0x19e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 58 FE FF FF: mov word ptr [ebp - 0x1a8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 190h
        push 0
        lea ecx, [ebp - 1a0h]
        push ecx
        ; Exact mapped bytes E8 FA F9 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes FF 15 68 45 89 58: call dword ptr [0x58894568]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 1a0h]
        push edx
        movzx eax, word ptr [ebp - 1a8h]
        push eax
        ; Exact mapped bytes FF 15 64 45 89 58: call dword ptr [0x58894564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1ach], eax
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 74 1B: je 0x5882d45e
        __asm _emit 0x74
        __asm _emit 0x1b
        push 588be7dch
        ; Exact mapped bytes E8 93 6D F8 FF: call 0x587b41e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes FF 15 68 45 89 58: call dword ptr [0x58894568]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 FD A6 02 00: call 0x58857b5a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [ecx + 21ch], 0
        push 104h
        push 0
        mov edx, dword ptr [ebp - 1a4h]
        add edx, 104h
        push edx
        ; Exact mapped bytes E8 89 F9 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1a4h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 A4 3B 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
