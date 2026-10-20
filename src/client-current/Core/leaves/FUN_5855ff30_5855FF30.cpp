// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855FF30 .. +0x17C bytes.
extern "C" __declspec(naked) void FUN_5855ff30_5855FF30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 0ch]
        add eax, 158h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 29 81 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855ff69
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 34h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 18 7B F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, 158h
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 10 82 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 47 7A F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x585600a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A4 7A F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CD 80 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855ffc5
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 3ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 BC 7A F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 73 7A F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AC 81 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E3 79 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x585600a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 40 7A F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 69 80 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58560029
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 44h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 58 7A F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 0F 7A F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 2ch], ecx
        lea edx, [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 48 81 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7F 79 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5856009e
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 3f0h]
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x58560097
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 3f0h]
        mov dword ptr [ebp - 30h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BF 79 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 11ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 02: jmp 0x58560099
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5856009e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x5856001a
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 13 FF FF FF: jmp 0x5855ffb6
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 FE FF FF: jmp 0x5855ff5a
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
