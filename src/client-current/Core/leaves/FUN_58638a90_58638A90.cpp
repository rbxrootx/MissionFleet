// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58638A90 .. +0x16F bytes.
extern "C" __declspec(naked) void FUN_58638a90_58638A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 124h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x58638bef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 33 51 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + edx*4 + 200h]
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 E3 EB FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x58638bc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 FB 42 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 D7 50 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x50
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4 + 280h]
        mov dword ptr [ebp - 110h], edx
        mov eax, 0ffh
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 66 23 81 98 00 00 00: and ax, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        imul edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 118h], edx
        push 588aee94h
        ; Exact mapped bytes E8 8B 94 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 120h], edx
        push 0ff000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 40 8A 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x58638bef
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 124h], eax
        push 0ff000000h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588aeeach
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 12 8A 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 57 84 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
