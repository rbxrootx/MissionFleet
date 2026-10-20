// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878E680 .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_5878e680_5878E680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 74 05: je 0x5878e6a5
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x5878e818
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 78 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x78
        __asm _emit 0xcf
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 76 CF FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x76
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 1
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 94 00 00 00: mov word ptr [edx + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 98h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 78h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 7ch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 E3 5C F9 FF: call 0x58724410
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 95 87 F9 FF: call 0x58726ed0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 17 AB D2 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xab
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, al
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 06: je 0x5878e75b
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 75 1A: jne 0x5878e775
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0a8h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 DD AA D2 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, al
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 06: je 0x5878e795
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 75 1A: jne 0x5878e7af
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0ach]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 89 D4 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF 70 D0 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 25: jne 0x5878e7ee
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 1B E2 FF: call 0x585b03d0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1b
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FF 65 F8 FF: call 0x58714de0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], 1
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 62 CF FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x62
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 14h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
