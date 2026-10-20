// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58670230 .. +0x2FE bytes.
extern "C" __declspec(naked) void FUN_58670230_58670230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 94h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 6F 06 15 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 64 06 15 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 59 06 15 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 4E 06 15 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x58670285
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 1
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 5
        ; Exact mapped bytes 0F 8D 88 02 00 00: jge 0x58670517
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        cmp dword ptr [edx*4 + 589605ach], -1
        ; Exact mapped bytes 0F 84 E5 01 00 00: je 0x58670485
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax*4 + 589605ach]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 10 11 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x10
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 84 BD 01 00 00: je 0x58670480
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 0C 47 E1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x47
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, 33ch
        mov dword ptr [ebp - 68h], eax
        push 0ffffffh
        push -1
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 31 02 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E9 46 E1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 70h], edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5B 47 E1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x47
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        xor eax, 55555555h
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        push 588afd98h
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 78h], edx
        push 0ffffffh
        push -1
        lea eax, [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 DA 01 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 64h], 0
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x58670366
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 1
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 20h
        ; Exact mapped bytes 0F 8D 93 00 00 00: jge 0x58670403
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 68 46 E1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes 75 38: jne 0x586703c8
        __asm _emit 0x75
        __asm _emit 0x38
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x586703a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 2
        ; Exact mapped bytes 7D 1E: jge 0x586703c6
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 58 CC E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        add eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB D3: jmp 0x58670399
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes EB 36: jmp 0x586703fe
        __asm _emit 0xeb
        __asm _emit 0x36
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586703da
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 1
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 2
        ; Exact mapped bytes 7D 1E: jge 0x586703fe
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 20 CC E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        add ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes EB D3: jmp 0x586703d1
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes E9 5A FF FF FF: jmp 0x5867035d
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 60h]
        push edx
        push 588afda0h
        ; Exact mapped bytes E8 DF 1B EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1b
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 80h], edx
        push 0ffffffh
        push -1
        lea eax, [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 E2 00 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        push 588afdb8h
        ; Exact mapped bytes E8 A4 1B EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x1b
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 84h], ecx
        push 0ffffffh
        push -1
        lea edx, [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A1 00 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x58670512
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 88h], ecx
        push 0ffffffh
        push -1
        push 588afd96h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 78 00 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 8ch], eax
        push 0ffffffh
        push -1
        push 588afd97h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 55 00 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 90h], edx
        push 0ffffffh
        push -1
        push 588afdb7h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 32 00 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 94h], ecx
        push 0ffffffh
        push -1
        push 588afdcfh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 0F 00 15 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 65 FD FF FF: jmp 0x5867027c
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 F1 00 00 00: call 0x58670610
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 26 0B 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
