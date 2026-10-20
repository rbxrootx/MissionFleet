// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C96B0 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_587c96b0_587C96B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 75: je 0x587c9737
        __asm _emit 0x74
        __asm _emit 0x75
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 68: je 0x587c9737
        __asm _emit 0x74
        __asm _emit 0x68
        push 8
        push -1
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2ch
        push ecx
        push 1
        ; Exact mapped bytes FF 15 70 44 89 58: call dword ptr [0x58894470]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x587c96fb
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 17: je 0x587c9710
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes EB 3A: jmp 0x587c9735
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D FA FF FF: call 0x587c91a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x587c970e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 25: jmp 0x587c9735
        __asm _emit 0xeb
        __asm _emit 0x25
        push 1
        push 0
        push 0
        push 0
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 78 44 89 58: call dword ptr [0x58894478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x587c9735
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 28h], 12h
        ; Exact mapped bytes 75 07: jne 0x587c9733
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB DB: jmp 0x587c9710
        __asm _emit 0xeb
        __asm _emit 0xdb
        ; Exact mapped bytes EB 92: jmp 0x587c96c9
        __asm _emit 0xeb
        __asm _emit 0x92
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
