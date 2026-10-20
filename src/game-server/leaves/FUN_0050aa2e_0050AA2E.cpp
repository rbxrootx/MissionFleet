// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050AA2E .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_0050aa2e_0050AA2E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BF 43 FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x50aa64
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 49 FE FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x50aa76
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 13: jne 0x50aa7d
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1ch]
        and eax, 200000h
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x50aa7d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        push 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x50aa9f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 49 FE FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x50aab1
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 13: jne 0x50aab8
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1ch]
        and eax, 100000h
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x50aab8
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E8 A5 FE FF: call 0x4f50aa
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6C A8 FE FF: call 0x4f5341
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x50aaf0
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 0E: jmp 0x50aafe
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 06: jle 0x50aafe
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A2 A5 FE FF: call 0x4f50aa
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 26 A8 FE FF: call 0x4f5341
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x50ab36
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 0E: jmp 0x50ab44
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7E 06: jle 0x50ab44
        __asm _emit 0x7e
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 0C: jne 0x50ab58
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 04: jne 0x50ab58
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 59: jmp 0x50abb1
        __asm _emit 0xeb
        __asm _emit 0x59
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 4E: je 0x50abac
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ebp - 8]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp - 20h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 26 A8 FE FF: call 0x4f53a2
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 10: je 0x50ab94
        __asm _emit 0x74
        __asm _emit 0x10
        push 1
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C4 A4 FE FF: call 0x4f5058
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 10: je 0x50abac
        __asm _emit 0x74
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AC A4 FE FF: call 0x4f5058
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
