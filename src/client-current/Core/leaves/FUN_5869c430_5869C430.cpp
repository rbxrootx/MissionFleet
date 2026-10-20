// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869C430 .. +0x28E bytes.
extern "C" __declspec(naked) void FUN_5869c430_5869C430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, 1
        imul ecx, eax, 0
        mov dword ptr [ebp - 10ch], ecx
        cmp dword ptr [ebp - 10ch], 100h
        ; Exact mapped bytes 73 02: jae 0x5869c465
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x5869c46b
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 3F 4D 19 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4d
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10ch]
        mov byte ptr [ebp + edx - 104h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 5
        ; Exact mapped bytes 0F 87 C7 01 00 00: ja 0x5869c656
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes FF 24 8D C4 C6 69 58: jmp dword ptr [ecx*4 + 0x5869c6c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xc6
        __asm _emit 0x69
        __asm _emit 0x58
        push 588b0450h
        ; Exact mapped bytes E8 4A 5B E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5b
        __asm _emit 0xe8
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
        ; Exact mapped bytes E8 31 AD E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xad
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 0
        push 0
        lea eax, [ebp - 104h]
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 93 C8 E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 38 0F 00 00: call 0x5869d420
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B5 01 00 00: jmp 0x5869c6a3
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b0474h
        ; Exact mapped bytes E8 F8 5A E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5a
        __asm _emit 0xe8
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
        ; Exact mapped bytes E8 DF AC E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xac
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        push 0
        push 0
        lea edx, [ebp - 104h]
        push edx
        push 28h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 41 C8 E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E6 0E 00 00: call 0x5869d420
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x5869c6a3
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b0498h
        ; Exact mapped bytes E8 A6 5A E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5a
        __asm _emit 0xe8
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
        add esp, 8
        ; Exact mapped bytes E8 8D AC E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        push 0
        push 0
        lea ecx, [ebp - 104h]
        push ecx
        push 28h
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 EF C7 E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc7
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 94 0E 00 00: call 0x5869d420
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x5869c6a3
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b04c4h
        ; Exact mapped bytes E8 54 5A E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5a
        __asm _emit 0xe8
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
        ; Exact mapped bytes E8 3B AC E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xac
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        push 0
        push 0
        lea eax, [ebp - 104h]
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 9D C7 E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc7
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 42 0E 00 00: call 0x5869d420
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x5869c6a3
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 07 AC E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xac
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        push 0
        push 0
        push 0
        push 19fh
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 6B C7 E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc7
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 10 0E 00 00: call 0x5869d420
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x5869c6a3
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D5 AB E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        push 0
        push 0
        push 0
        push 19ch
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 39 C7 E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc7
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 2cch]
        add edx, 1
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [eax + 2cch], edx
        ; Exact mapped bytes EB 5D: jmp 0x5869c6b1
        __asm _emit 0xeb
        __asm _emit 0x5d
        ; Exact mapped bytes EB 4D: jmp 0x5869c6a3
        __asm _emit 0xeb
        __asm _emit 0x4d
        push 588b04e8h
        ; Exact mapped bytes E8 90 59 E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x59
        __asm _emit 0xe8
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
        ; Exact mapped bytes E8 77 AB E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        push 0
        push 0
        lea edx, [ebp - 104h]
        push edx
        push 28h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 D9 C6 E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc6
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 7E 0D 00 00: call 0x5869d420
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 30 97 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x97
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 95 49 19 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x49
        __asm _emit 0x19
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
    }
}
