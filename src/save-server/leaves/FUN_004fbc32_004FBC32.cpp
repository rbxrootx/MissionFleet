// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FBC32 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_004fbc32_004FBC32() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 18h], ecx
        push 48ch
        push 674fe8h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 12 E6 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 7E 12: jle 0x4fbc69
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 6ch], 1
        ; Exact mapped bytes 7E 09: jle 0x4fbc69
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 12dh
        ; Exact mapped bytes EB 6A: jmp 0x4fbcd3
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 68h], 1
        ; Exact mapped bytes 7E 09: jle 0x4fbc7b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 65h
        ; Exact mapped bytes EB 58: jmp 0x4fbcd3
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 6ch], 1
        ; Exact mapped bytes 7E 09: jle 0x4fbc8d
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0c9h
        ; Exact mapped bytes EB 46: jmp 0x4fbcd3
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 40h], 1
        ; Exact mapped bytes 7E 12: jle 0x4fbca8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 44h], 1
        ; Exact mapped bytes 7E 09: jle 0x4fbca8
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 3
        ; Exact mapped bytes EB 2B: jmp 0x4fbcd3
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 40h], 1
        ; Exact mapped bytes 7E 09: jle 0x4fbcba
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 19: jmp 0x4fbcd3
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 44h], 1
        ; Exact mapped bytes 7E 09: jle 0x4fbccc
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 2
        ; Exact mapped bytes EB 07: jmp 0x4fbcd3
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x4fbda8
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 20 01 00 00: call dword ptr [edx + 0x120]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DA 64 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 B5 65 03 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 B5 65 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 0C: je 0x4fbd31
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 2C: je 0x4fbd69
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 0E: je 0x4fbd57
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x4fbd63
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8ch]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 88h]
        neg ecx
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E9 67 03 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 38 BC FE FF: call 0x4e79cd
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 50 BC 68 00: call dword ptr [0x68bc50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
