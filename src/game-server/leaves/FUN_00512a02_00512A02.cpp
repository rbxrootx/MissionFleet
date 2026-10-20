// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512A02 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_00512a02_00512A02() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 18h], ecx
        push 48ch
        push 5c84b0h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 42 87 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 7E 12: jle 0x512a39
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 6ch], 1
        ; Exact mapped bytes 7E 09: jle 0x512a39
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 12dh
        ; Exact mapped bytes EB 6A: jmp 0x512aa3
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 68h], 1
        ; Exact mapped bytes 7E 09: jle 0x512a4b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 65h
        ; Exact mapped bytes EB 58: jmp 0x512aa3
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 6ch], 1
        ; Exact mapped bytes 7E 09: jle 0x512a5d
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0c9h
        ; Exact mapped bytes EB 46: jmp 0x512aa3
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 40h], 1
        ; Exact mapped bytes 7E 12: jle 0x512a78
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 44h], 1
        ; Exact mapped bytes 7E 09: jle 0x512a78
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 3
        ; Exact mapped bytes EB 2B: jmp 0x512aa3
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 40h], 1
        ; Exact mapped bytes 7E 09: jle 0x512a8a
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 19: jmp 0x512aa3
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 44h], 1
        ; Exact mapped bytes 7E 09: jle 0x512a9c
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 2
        ; Exact mapped bytes EB 07: jmp 0x512aa3
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x512b78
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
        ; Exact mapped bytes E8 94 32 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 6F 33 02 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 6F 33 02 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 0C: je 0x512b01
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 2C: je 0x512b39
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 0E: je 0x512b27
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x512b33
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
        ; Exact mapped bytes E8 C1 35 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 88 FE FE FF: call 0x5029ed
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 58 25 5E 00: call dword ptr [0x5e2558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
