// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053050E .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_0053050e_0053050E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 18h]
        and eax, 0f040h
        mov dword ptr [ebp + 18h], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 09: je 0x530531
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 52 27 00 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x53062d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 58 27 00 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x530628
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 70 C1 00 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x530628
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, dword ptr [ebp + 18h]
        and ecx, 0f000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x530628
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 10: je 0x5305b3
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 18h]
        and ecx, dword ptr [eax + 64h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 74 75: je 0x530628
        __asm _emit 0x74
        __asm _emit 0x75
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 96 57 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E8 BA 00 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6B 58 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5305dc
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6C 58 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5305f1
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 71 59 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 68 59 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6C 5B 00 00: call 0x536177
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x530628
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 08: je 0x53061d
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 64h]
        and eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes EB 07: jmp 0x53062f
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x53053f
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
