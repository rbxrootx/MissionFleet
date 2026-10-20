// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DFFB0 .. +0x295 bytes.
extern "C" __declspec(naked) void FUN_586dffb0_586DFFB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 418h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 408h], ecx
        movzx eax, word ptr [ebp + 0ch]
        mov dword ptr [ebp - 40ch], eax
        cmp dword ptr [ebp - 40ch], 5
        ; Exact mapped bytes 0F 87 3D 02 00 00: ja 0x586e021d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes FF 24 8D 48 02 6E 58: jmp dword ptr [ecx*4 + 0x586e0248]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x6e
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588b24ach
        ; Exact mapped bytes E8 F5 1F E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E9 09 02 00 00: jmp 0x586e021d
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 408h]
        add edx, 198h
        push edx
        ; Exact mapped bytes E8 64 C8 16 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc8
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1F: je 0x586e0054
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588b24cch
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 19: jmp 0x586e006d
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588b24d4h
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 408h]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 410h], eax
        lea ecx, [ebp - 404h]
        push ecx
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 5F 8F 06 00: call 0x58748ff0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 408h]
        mov ecx, dword ptr [edx + 194h]
        ; Exact mapped bytes E8 7E 8D 06 00: call 0x58748e20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588b24d8h
        ; Exact mapped bytes E8 40 1F E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 70 DF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 5
        ; Exact mapped bytes 75 36: jne 0x586e0111
        __asm _emit 0x75
        __asm _emit 0x36
        push 588b24f8h
        ; Exact mapped bytes E8 0B 1F E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 0ffff00h
        lea ecx, [ebp - 204h]
        push ecx
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 40 02 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x586e021d
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b2518h
        ; Exact mapped bytes E8 D0 1E E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1e
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x586e021d
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 8
        push 588b2538h
        ; Exact mapped bytes E8 A9 1E E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1e
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
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
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x586e021d
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b2558h
        ; Exact mapped bytes E8 86 1E E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1e
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 70 DF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 8
        ; Exact mapped bytes 74 17: je 0x586e01ac
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 70 DF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 9
        ; Exact mapped bytes 75 13: jne 0x586e01bf
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 8C DC FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 52 08 02 00: call 0x58700a10
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 8C DC FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 414h], eax
        push 1
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 03 31 02 00: call 0x587032e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3D: jmp 0x586e021d
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 588b2578h
        ; Exact mapped bytes E8 06 1E E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1e
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 8C DC FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 418h], eax
        push 0
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 C4 30 02 00: call 0x587032e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 0ffff00h
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 1C 01 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 11 0E 15 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0e
        __asm _emit 0x15
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
