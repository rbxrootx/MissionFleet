// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046AE40 .. +0x260 bytes.
extern "C" __declspec(naked) void FUN_0046ae40_0046AE40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7D 07: jge 0x46ae55
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 47 02 00 00: jmp 0x46b09c
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 C7 00 00: call 0x477580
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 3f480h
        ; Exact mapped bytes 7E 6B: jle 0x46aed0
        __asm _emit 0x7e
        __asm _emit 0x6b
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 7ffc0b7fh
        ; Exact mapped bytes 7D 60: jge 0x46aed0
        __asm _emit 0x7d
        __asm _emit 0x60
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 2B 0D 70 02 68 00: sub ecx, dword ptr [0x680270]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 B9 FD FF FF: call 0x46ac40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 83 3D 74 02 68 00 00: cmp dword ptr [0x680274], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 35: je 0x46aecb
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F1 CA 00 00: call 0x477990
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x46aecb
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 2B 0D 78 02 68 00: sub ecx, dword ptr [0x680278]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 85 FD FF FF: call 0x46ac40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], 1
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x46b099
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 67 FD FF FF: call 0x46ac40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 A8 CA 00 00: call 0x477990
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x46af06
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes A1 70 02 68 00: mov eax, dword ptr [0x680270]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 03 05 78 02 68 00: add eax, dword ptr [0x680278]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        sub edx, eax
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0E: jmp 0x46af14
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 2B 0D 70 02 68 00: sub ecx, dword ptr [0x680270]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7D 16: jge 0x46af42
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        add eax, 3ch
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        sub edx, 3ch
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7D 18: jge 0x46af8a
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        add eax, 3ch
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        sub edx, 3ch
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 8]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 18h
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 7D 18: jge 0x46afd2
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        add eax, 18h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        sub edx, 18h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 18h
        idiv ecx
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 37: jle 0x46b01d
        __asm _emit 0x7e
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 18h]
        add eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 7
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 18h], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], edx
        ; Exact mapped bytes EB 7C: jmp 0x46b099
        __asm _emit 0xeb
        __asm _emit 0x7c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 76: jge 0x46b099
        __asm _emit 0x7d
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        lea eax, [edx + eax + 7]
        cdq
        mov ecx, 7
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 18h], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7F 34: jg 0x46b08a
        __asm _emit 0x7f
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1fh
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1ch], 16ch
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], 0bh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], edx
        ; Exact mapped bytes EB 0F: jmp 0x46b099
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], edx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
