// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523EA0 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58523ea0_58523EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x58523f4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 82 F6 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 19 F7 FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x58523ede
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 0C FA FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x58523ee7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0F: je 0x58523efc
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 87 FC FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x58523f05
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 31: je 0x58523f3c
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58523f2e
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58523f35
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp + 8], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        sub edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
