// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD5FB .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_004dd5fb_004DD5FB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58db9ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4dd639
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 676a8ch
        ; Exact mapped bytes E8 0C B7 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd639
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4dd61c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0ch
        ; Exact mapped bytes E8 42 77 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4dd662
        __asm _emit 0x74
        __asm _emit 0x14
        push 13dh
        push 676a8ch
        ; Exact mapped bytes E8 E3 B6 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd662
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4dd63f
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 10h
        ; Exact mapped bytes E8 19 77 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4dd68b
        __asm _emit 0x74
        __asm _emit 0x14
        push 13eh
        push 676a8ch
        ; Exact mapped bytes E8 BA B6 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd68b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4dd668
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 10h
        ; Exact mapped bytes E8 C4 76 04 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 5
        push eax
        ; Exact mapped bytes E8 BB ED FE FF: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E8 BA 43 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4dd6cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 7A: jge 0x4dd750
        __asm _emit 0x7d
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 10h
        ; Exact mapped bytes E8 C2 76 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        push 68510ch
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0ch
        ; Exact mapped bytes E8 A0 76 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B1 21 06 00: call 0x53f8c8
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes E8 AA F3 FE FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 A1 F1 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x4dd6c2
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 4A ED FE FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
