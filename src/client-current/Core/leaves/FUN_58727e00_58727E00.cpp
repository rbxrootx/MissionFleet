// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58727E00 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_58727e00_58727E00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58727e1b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 28: jge 0x58727e49
        __asm _emit 0x7d
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 3d4h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AF 36 DA FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x36
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x58727e47
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58727e49
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C9: jmp 0x58727e12
        __asm _emit 0xeb
        __asm _emit 0xc9
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 02: jne 0x58727e51
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 7E: jmp 0x58727ecf
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 3d4h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5F 96 09 00: call 0x587c14d0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58727e84
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 3C: jge 0x58727ec6
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 32: je 0x58727ec4
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 3d4h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx*4 + 3d4h]
        ; Exact mapped bytes E8 0C 8D 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CD 96 09 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B5: jmp 0x58727e7b
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F2 F3 FF FF: call 0x587272c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
