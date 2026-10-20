// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ED7F0 .. +0x3D0 bytes.
extern "C" __declspec(naked) void FUN_586ed7f0_586ED7F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes 0F 87 AC 03 00 00: ja 0x586edbbc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 C0 DB 6E 58: jmp dword ptr [edx*4 + 0x586edbc0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xdb
        __asm _emit 0x6e
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed82c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ed8d1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0a74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 7]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 72 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x72
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E4 93 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x93
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0a74h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1ch], edx
        push 3ah
        push 203h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7A 7D 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0a74h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 15 86 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ed823
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed8e3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ed988
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AC 71 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x71
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2D 93 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x93
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 30h], edx
        push 3ah
        push 0d5h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C3 7C 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5E 85 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ed8da
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F 02 00 00: jmp 0x586edbbc
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed99f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586eda44
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 11h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F0 70 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x70
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 71 92 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x92
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 44h], edx
        push 6ch
        push 2a0h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 07 7C 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A2 84 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ed996
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x586edbbc
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eda5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586edb00
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0a74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 9]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 34 70 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x70
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B5 91 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x91
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0a74h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 58h], edx
        push 1ah
        push 2d0h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 4B 7B 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0a74h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E6 83 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x83
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586eda52
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x586edbbc
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586edb17
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586edbbc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0a74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 9]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 78 6F D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 F9 90 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x90
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0a74h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 6ch], edx
        push 1ah
        push 2d0h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 8F 7A 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0a74h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 2A 83 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x83
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586edb0e
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
