// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586353A0 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_586353a0_586353A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x586354f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586353cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 20 01 00 00: jge 0x586354f5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 8D B8 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 C9 7F ED FF: call 0x5850d3c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x7f
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 83 A1 00 00 00: jae 0x586354a1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 F2 87 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x87
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [eax + edx*4]
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x5863546a
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 D9 87 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x87
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [eax + edx*4 + 2]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x5863546a
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a0h]
        mov dword ptr [ebp - 10h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 43 0B E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0b
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 94h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 29 0B E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x5863549f
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 94h]
        mov dword ptr [ebp - 18h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0C 0B E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0b
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a0h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F2 0A E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x586354f0
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 94h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D5 0A E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a0h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BB 0A E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A1 0A E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0a
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CD FE FF FF: jmp 0x586353c2
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
