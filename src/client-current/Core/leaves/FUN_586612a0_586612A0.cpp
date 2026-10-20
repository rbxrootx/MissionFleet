// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586612A0 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_586612a0_586612A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d0h]
        ; Exact mapped bytes E8 30 84 EC FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 8E BD 00 00 00: jle 0x58661386
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d0h]
        ; Exact mapped bytes E8 90 F9 15 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5B: je 0x58661344
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0d0h]
        ; Exact mapped bytes E8 F0 83 EC FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0xff
        sub eax, 0fh
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 3A: jge 0x58661342
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5866131a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 22: jge 0x58661342
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d0h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 21 04 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CF: jmp 0x58661311
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes EB 40: jmp 0x58661384
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 3A: jle 0x58661384
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5866135c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 22: jge 0x58661384
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0d0h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DF 03 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CF: jmp 0x58661353
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes EB 35: jmp 0x586613bb
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58661398
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 1D: jge 0x586613bb
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d0h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A8 03 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D4: jmp 0x5866138f
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
