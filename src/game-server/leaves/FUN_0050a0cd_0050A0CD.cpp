// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A0CD .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_0050a0cd_0050A0CD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 51 B5 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 55 FE FF FF: call 0x509f42
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4ch
        ; Exact mapped bytes E8 B5 B6 02 00: call 0x5357c5
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A9 F7 FF FF: call 0x5098d2
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 14h]
        xor eax, eax
        cmp dword ptr [edx], 0
        setg al
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0B: jne 0x50a155
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], 0
        ; Exact mapped bytes EB 15: jmp 0x50a16a
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 0F: je 0x50a16a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 14h]
        xor eax, eax
        cmp dword ptr [edx + 4], 0
        setg al
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x50a18b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 4], 0
        ; Exact mapped bytes EB 13: jmp 0x50a19e
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x50a19e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 44: je 0x50a1e8
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 3E: jne 0x50a1e8
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 7E 36: jle 0x50a1e8
        __asm _emit 0x7e
        __asm _emit 0x36
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x50a1cc
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 5cb450h
        ; Exact mapped bytes E8 39 A8 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a1cc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50a1b2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 0ch], 1
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7E 16: jle 0x50a206
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7C 0A: jl 0x50a206
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 7E 1A: jle 0x50a229
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7C 0C: jl 0x50a229
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
