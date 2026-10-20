// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A3BF .. +0x1D5 bytes.
extern "C" __declspec(naked) void FUN_0050a3bf_0050A3BF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ed2eh
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
        sub esp, 1ch
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0b0h], 1
        mov dword ptr [ebp - 1ch], 80c83b00h
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x50a404
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        and dh, 0f7h
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 686d10h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push 68510ch
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 58 34 01 00: call 0x51d885
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50a445
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0b0h], 0
        xor eax, eax
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x50a584
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 5000h
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffff000h
        add ecx, 2000h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 40h
        mov eax, dword ptr [ebp - 1ch]
        or eax, edx
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F4 13 02 00: call 0x52b86d
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0f000h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 76 D0 02 00: call 0x537501
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 0f020h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 D0 02 00: call 0x537501
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 0f030h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 D0 02 00: call 0x537501
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 0f120h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 49 D0 02 00: call 0x537501
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 47 A8 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0f011h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AC F7 FC FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x50a4ff
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        push 0f060h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1A D0 02 00: call 0x537501
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BB A8 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 0f060h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 55 D0 02 00: call 0x537554
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        push 0e81fh
        mov ecx, dword ptr [ebp - 1ch]
        or ecx, 50000000h
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0cch
        ; Exact mapped bytes E8 66 E2 FF FF: call 0x508786
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x50a54c
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0b0h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A5 23 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 38: jmp 0x50a584
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0cch
        ; Exact mapped bytes E8 8A 25 02 00: call 0x52cae8
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0b0h], 0
        mov dword ptr [ebp - 24h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6B 23 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
