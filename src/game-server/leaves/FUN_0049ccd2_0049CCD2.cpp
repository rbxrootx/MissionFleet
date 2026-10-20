// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049CCD2 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_0049ccd2_0049CCD2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 2011h
        ; Exact mapped bytes 75 16: jne 0x49cd01
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 88 24 5E 00: call dword ptr [0x5e2488]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 64: je 0x49cd65
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x49cd23
        __asm _emit 0x74
        __asm _emit 0x14
        push 98h
        push 5cbe8ch
        ; Exact mapped bytes E8 E2 7C 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49cd23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x49cd01
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 11 20: mov word ptr [eax], 0x2011
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        lea edx, [ebp - 0ch]
        push edx
        push 1
        push 11h
        ; Exact mapped bytes FF 15 A0 24 5E 00: call dword ptr [0x5e24a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x49cd60
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 4C 30 03 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x49cdfb
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 90 24 5E 00: call dword ptr [0x5e2490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E2 FA FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 94 24 5E 00: call dword ptr [0x5e2494]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 C9 FA FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 2A: jge 0x49cdd0
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x49cdc3
        __asm _emit 0x74
        __asm _emit 0x14
        push 0adh
        push 5cbe8ch
        ; Exact mapped bytes E8 42 7C 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49cdc3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x49cda6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 23: je 0x49cdfb
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 9C 24 5E 00: call dword ptr [0x5e249c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 65 FA FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
