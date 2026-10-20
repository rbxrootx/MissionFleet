// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FB60 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_5878fb60_5878FB60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 0B 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x5878fb91
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E8 21 66 FF FF: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A2 62 FF FF: call 0x58785e30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 78: jmp 0x5878fc09
        __asm _emit 0xeb
        __asm _emit 0x78
        ; Exact mapped bytes E8 0A 66 FF FF: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8D 62 FF FF: call 0x58785e30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 02 00 00: call 0x5878fe20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 22: je 0x5878fbe4
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 08: je 0x5878fbd0
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 02: je 0x5878fbd0
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 2A: jmp 0x5878fbfa
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        movzx edx, word ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 09 00 00: call 0x58790570
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 16: jmp 0x5878fbfa
        __asm _emit 0xeb
        __asm _emit 0x16
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        movzx ecx, word ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 0A 00 00: call 0x58790620
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 80h]
        ; Exact mapped bytes E8 38 20 00 00: call 0x58791c40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
