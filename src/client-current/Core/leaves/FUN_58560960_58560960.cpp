// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560960 .. +0x2FA bytes.
extern "C" __declspec(naked) void FUN_58560960_58560960() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588835c6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 194h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 154h], ecx
        mov eax, dword ptr [ebp - 154h]
        mov dword ptr [eax], 588a94ach
        mov ecx, dword ptr [ebp - 154h]
        add ecx, 4
        ; Exact mapped bytes E8 24 6B F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 154h]
        add ecx, 10h
        ; Exact mapped bytes E8 0F 6B F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 154h]
        add ecx, 4
        mov dword ptr [ebp - 174h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 FF 96 F5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xff
        lea edx, [ebp - 150h]
        push edx
        push 588a9498h
        ; Exact mapped bytes E8 5E 36 25 00: call 0x587b4050
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x36
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 170h], eax
        mov dword ptr [ebp - 168h], 0
        cmp dword ptr [ebp - 170h], -1
        ; Exact mapped bytes 0F 84 24 02 00 00: je 0x58560c33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x58560c33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 150h]
        and ecx, 10h
        ; Exact mapped bytes 0F 85 E9 01 00 00: jne 0x58560c14
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 430h
        ; Exact mapped bytes E8 CF 05 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 20: je 0x58560a6b
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        push 0
        push -1
        lea edx, [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 6D C0 FF FF: call 0x5855cad0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58560a75
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 158h], ecx
        mov edx, dword ptr [ebp - 154h]
        add edx, 4
        mov dword ptr [ebp - 17ch], edx
        lea eax, [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 6E 77 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x77
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 168h], 1
        ; Exact mapped bytes 74 30: je 0x58560aec
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 154h]
        add ecx, 10h
        mov dword ptr [ebp - 180h], ecx
        lea edx, [ebp - 158h]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 43 77 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x77
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], 1
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x58560c14
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 16ch], 0
        mov eax, dword ptr [ebp - 154h]
        add eax, 10h
        mov dword ptr [ebp - 184h], eax
        lea ecx, [ebp - 15ch]
        push ecx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 69 75 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x58560b2f
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea edx, [ebp - 198h]
        push edx
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 52 6F F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6f
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 154h]
        add eax, 10h
        mov dword ptr [ebp - 188h], eax
        lea ecx, [ebp - 19ch]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 40 76 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 74 6E F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58560be9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 CE 6E F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C7 3E F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x3e
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 19 71 2F 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x71
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 B1 3E F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3e
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 03 71 2F 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x71
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 7E 48: jle 0x58560be4
        __asm _emit 0x7e
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 154h]
        add eax, 10h
        mov dword ptr [ebp - 190h], eax
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 18ch], ecx
        lea edx, [ebp - 158h]
        push edx
        mov eax, dword ptr [ebp - 18ch]
        push eax
        lea ecx, [ebp - 1a0h]
        push ecx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 D9 94 F5 FF: call 0x584ba0b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 16ch], 1
        ; Exact mapped bytes EB 05: jmp 0x58560be9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x58560b1a
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 16ch], 1
        ; Exact mapped bytes 74 22: je 0x58560c14
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 154h]
        add edx, 10h
        mov dword ptr [ebp - 194h], edx
        lea eax, [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 0D 76 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 150h]
        push ecx
        mov edx, dword ptr [ebp - 170h]
        push edx
        ; Exact mapped bytes FF 15 38 41 89 58: call dword ptr [0x58894138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x58560c2e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x58560c33
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 DC FD FF FF: jmp 0x58560a0f
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 154h]
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
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 FA 03 2D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
