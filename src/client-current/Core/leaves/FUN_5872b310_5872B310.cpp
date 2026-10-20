// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872B310 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_5872b310_5872B310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 74: je 0x5872b394
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 138h]
        ; Exact mapped bytes E8 39 59 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 54: jle 0x5872b38f
        __asm _emit 0x7e
        __asm _emit 0x54
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5872b34d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 3C: jge 0x5872b38f
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 138h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 138h]
        ; Exact mapped bytes E8 F6 58 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D4 63 09 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B5: jmp 0x5872b344
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x5872b41f
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        ; Exact mapped bytes E8 C5 58 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        ; Exact mapped bytes E8 2C E3 DF FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe3
        __asm _emit 0xdf
        __asm _emit 0xff
        sub eax, 4
        cmp esi, eax
        ; Exact mapped bytes 7D 54: jge 0x5872b41f
        __asm _emit 0x7d
        __asm _emit 0x54
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5872b3dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 3C: jge 0x5872b41f
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 138h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        ; Exact mapped bytes E8 66 58 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 44 63 09 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B5: jmp 0x5872b3d4
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 FD FF FF: call 0x5872b150
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
