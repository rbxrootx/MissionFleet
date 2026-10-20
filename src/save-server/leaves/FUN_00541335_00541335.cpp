// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541335 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_00541335_00541335() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 99h
        push 6756ach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 0C 8F F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x541360
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x541374
        __asm _emit 0x7d
        __asm _emit 0x14
        push 9ah
        push 6756ach
        ; Exact mapped bytes E8 D1 79 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541374
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x541354
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 75 1D: jne 0x5413a0
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 14: je 0x5413a0
        __asm _emit 0x74
        __asm _emit 0x14
        push 9bh
        push 6756ach
        ; Exact mapped bytes E8 A5 79 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5413a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x54137a
        __asm _emit 0x75
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 3D: jle 0x5413f0
        __asm _emit 0x7e
        __asm _emit 0x3d
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x5413cd
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0a1h
        push 6756ach
        ; Exact mapped bytes E8 78 79 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5413cd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5413b3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 10 58 F2 FF: call 0x466bf0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x5413f0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 26: jmp 0x541416
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5ch]
        push eax
        ; Exact mapped bytes E8 24 5F F2 FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
