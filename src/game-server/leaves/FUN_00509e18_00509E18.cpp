// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509E18 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_00509e18_00509E18() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 25 BF 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C3 22 03 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FA BF 02 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp + 8]
        sub ecx, eax
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FB BF 02 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 0ch]
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 94 4F FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        and eax, 100000h
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x509e7f
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 09: jge 0x509e88
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 1B: jmp 0x509ea3
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AF B4 FE FF: call 0x4f5341
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7E 06: jle 0x509ea3
        __asm _emit 0x7e
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 1ch]
        and eax, 200000h
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x509eb5
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x509ebe
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 1B: jmp 0x509ed9
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 79 B4 FE FF: call 0x4f5341
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7E 06: jle 0x509ed9
        __asm _emit 0x7e
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 14: jge 0x509ef3
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1ech
        push 5cb450h
        ; Exact mapped bytes E8 12 AB 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509ef3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x509ed9
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 14: jge 0x509f13
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1edh
        push 5cb450h
        ; Exact mapped bytes E8 F2 AA 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509f13
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x509ef9
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2F B1 FE FF: call 0x4f5058
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1F B1 FE FF: call 0x4f5058
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb1
        __asm _emit 0xfe
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
