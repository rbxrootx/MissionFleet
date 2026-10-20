// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859E6C0 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_5859e6c0_5859E6C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 86 F4 00 00 00: jbe 0x5859e7c7
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 82 E8 00 00 00: jb 0x5859e7c5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 19h
        ; Exact mapped bytes 0F 87 DE 00 00 00: ja 0x5859e7c5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 0C 45 C4 8C 94 58: movsx ecx, word ptr [eax*2 + 0x58948cc4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0xc4
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 6C: je 0x5859e763
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx*4 + 58948c60h], 0
        ; Exact mapped bytes 74 34: je 0x5859e738
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax*4 + 58948c60h], 0
        ; Exact mapped bytes 74 27: je 0x5859e738
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 24 29 29 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x29
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx*4 + 58948c60h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov edx, 118h
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 F2 28 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x28
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx*4 + 58948c60h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5859e775
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 2C: jae 0x5859e7a9
        __asm _emit 0x73
        __asm _emit 0x2c
        push 118h
        imul eax, dword ptr [ebp - 4], 118h
        add eax, dword ptr [ebp + 10h]
        push eax
        imul ecx, dword ptr [ebp - 4], 118h
        mov edx, dword ptr [ebp + 8]
        add ecx, dword ptr [edx*4 + 58948c60h]
        push ecx
        ; Exact mapped bytes E8 EC E0 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe0
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB C3: jmp 0x5859e76c
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0fch], 0c8h
        ; Exact mapped bytes 75 0D: jne 0x5859e7c5
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC E8 FF FF: call 0x5859d070
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x5859e7d0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 11 6E FF FF: call 0x585955e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
