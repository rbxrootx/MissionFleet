// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DDC6 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_0041ddc6_0041DDC6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr [ebp - 4], 0
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 75 04: jne 0x41dddc
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x41dddf
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [edi + 1ch]
        mov ebx, dword ptr [ebp + 8]
        push eax
        push dword ptr [ebx + 1ch]
        ; Exact mapped bytes FF 15 C8 C4 43 00: call dword ptr [0x43c4c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x41deac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 20: je 0x41de18
        __asm _emit 0x74
        __asm _emit 0x20
        push -14h
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000h
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x41deac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 02 FF FF FF: call 0x41dd16
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, edi
        ; Exact mapped bytes 75 33: jne 0x41de52
        __asm _emit 0x75
        __asm _emit 0x33
        test byte ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x41deac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x41de78
        __asm _emit 0x74
        __asm _emit 0x4b
        push ebx
        ; Exact mapped bytes E8 66 FF FF FF: call 0x41dd99
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push ebx
        ; Exact mapped bytes E8 38 FE FF FF: call 0x41dc72
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 38: je 0x41de78
        __asm _emit 0x74
        __asm _emit 0x38
        cmp esi, edi
        ; Exact mapped bytes 74 34: je 0x41de78
        __asm _emit 0x74
        __asm _emit 0x34
        push esi
        ; Exact mapped bytes E8 CC FE FF FF: call 0x41dd16
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test al, 10h
        pop ecx
        ; Exact mapped bytes 74 29: je 0x41de78
        __asm _emit 0x74
        __asm _emit 0x29
        push esi
        ; Exact mapped bytes EB 1A: jmp 0x41de6c
        __asm _emit 0xeb
        __asm _emit 0x1a
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x41de61
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 BA FE FF FF: call 0x41dd16
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 0A: jne 0x41de6b
        __asm _emit 0x75
        __asm _emit 0x0a
        test edi, edi
        ; Exact mapped bytes 74 0D: je 0x41de72
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 07: je 0x41de72
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        push ebx
        ; Exact mapped bytes E8 C5 FE FF FF: call 0x41dd37
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [ebp - 4], 30h
        ; Exact mapped bytes 74 05: je 0x41de7d
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        push edi
        ; Exact mapped bytes EB 28: jmp 0x41dea5
        __asm _emit 0xeb
        __asm _emit 0x28
        push ebx
        ; Exact mapped bytes E8 16 FF FF FF: call 0x41dd99
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push ebx
        ; Exact mapped bytes E8 E8 FD FF FF: call 0x41dc72
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        push esi
        ; Exact mapped bytes E8 84 FE FF FF: call 0x41dd16
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test al, 20h
        pop ecx
        ; Exact mapped bytes 74 15: je 0x41deac
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, esi
        ; Exact mapped bytes E8 B0 04 01 00: call 0x42e34e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x41deac
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        push esi
        ; Exact mapped bytes E8 1F FE FF FF: call 0x41dcc9
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
