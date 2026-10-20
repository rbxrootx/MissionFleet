// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F761 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_0054f761_0054F761() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 63h
        push 67bf90h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E5 AA F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        push 67bfa8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 AA F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54f79d
        __asm _emit 0x75
        __asm _emit 0x11
        push 64h
        push 67bf90h
        ; Exact mapped bytes E8 A8 95 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f79d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x54f77b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 11: je 0x54f7bf
        __asm _emit 0x74
        __asm _emit 0x11
        push 65h
        push 67bf90h
        ; Exact mapped bytes E8 86 95 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f7bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x54f7a3
        __asm _emit 0x75
        __asm _emit 0xde
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 A5 32 F7 FF: call 0x4c2a7b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x32
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54f7eb
        __asm _emit 0x75
        __asm _emit 0x11
        push 67h
        push 67bf90h
        ; Exact mapped bytes E8 5A 95 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f7eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x54f7c5
        __asm _emit 0x75
        __asm _emit 0xd4
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 79 32 F7 FF: call 0x4c2a7b
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x32
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 D3 30 F7 FF: call 0x4c28e1
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 5C 32 F7 FF: call 0x4c2a7b
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x32
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x54f834
        __asm _emit 0x74
        __asm _emit 0x11
        push 69h
        push 67bf90h
        ; Exact mapped bytes E8 11 95 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f834
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x54f80e
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 1ch], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
