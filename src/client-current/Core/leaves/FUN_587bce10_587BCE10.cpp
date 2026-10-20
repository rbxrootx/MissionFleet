// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BCE10 .. +0x1DD bytes.
extern "C" __declspec(naked) void FUN_587bce10_587BCE10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 74h]
        add ecx, 1
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 74h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 74h]
        and ecx, 0fffc0h
        ; Exact mapped bytes 75 13: jne 0x587bce53
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 C5 06 00 00: call 0x587bd510
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 83 01 00 00: je 0x587bcfd6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 5A: je 0x587bceb6
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 59 9B CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9b
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 10h
        push 0
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 47 9B CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x9b
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2C 7B CC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7b
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 9B CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9b
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        ; Exact mapped bytes E9 1E 01 00 00: jmp 0x587bcfd4
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 4F 06 00 00: call 0x587bd510
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x587bcfc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 58h]
        mov ecx, dword ptr [ebp - 28h]
        add eax, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [ebp - 28h]
        add eax, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 10: jge 0x587bcf2f
        __asm _emit 0x7d
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 24h]
        sub edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 3B 05 90 5F 90 58: cmp eax, dword ptr [0x58905f90]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 7E 19: jle 0x587bcf53
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 2B 0D 90 5F 90 58: sub ecx, dword ptr [0x58905f90]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1ch]
        sub edx, ecx
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes A1 90 5F 90 58: mov eax, dword ptr [0x58905f90]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 10: jge 0x587bcf69
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 3B 15 94 5F 90 58: cmp edx, dword ptr [0x58905f94]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 7E 1A: jle 0x587bcf8e
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 2B 05 94 5F 90 58: sub eax, dword ptr [0x58905f94]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, eax
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 15 94 5F 90 58: mov edx, dword ptr [0x58905f94]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 27 9A CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x9a
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        push 1000000h
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 0E 9A CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9a
        __asm _emit 0xcc
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        ; Exact mapped bytes EB 0C: jmp 0x587bcfd4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 5D B9 00 00: call 0x587c8930
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x587bcfdf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 82 05 00 00: call 0x587bd560
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 67 40 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
