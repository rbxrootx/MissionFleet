// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781DA0 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_58781da0_58781DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x58781edc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 70h]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 8E B5 00 00 00: jle 0x58781e8a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 74h]
        cdq
        idiv dword ptr [ecx + 78h]
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x58781def
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 DA D1 FF: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58781e1f
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58781e1f
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x58781e88
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58781e42
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58781e28
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 37 D1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x37
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58781e66
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58781e88
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58781e86
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 37 D1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x37
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x58781e28
        __asm _emit 0xeb
        __asm _emit 0xa0
        ; Exact mapped bytes EB 52: jmp 0x58781edc
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 0C: je 0x58781e9f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 E2 DD FF FF: call 0x5877fc80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 40 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x40
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 4A D0 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4a
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58781ed5
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58781edc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov esp, ebp
    }
}
