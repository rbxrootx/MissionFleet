// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8F2A .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_004f8f2a_004F8F2A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f8f50
        __asm _emit 0x75
        __asm _emit 0x14
        push 95h
        push 674fe8h
        ; Exact mapped bytes E8 F5 FD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8f50
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f8f36
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 06: jl 0x4f8f62
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 10h
        ; Exact mapped bytes 7E 14: jle 0x4f8f76
        __asm _emit 0x7e
        __asm _emit 0x14
        push 96h
        push 674fe8h
        ; Exact mapped bytes E8 CF FD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8f76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4f8f56
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7C 06: jl 0x4f8f88
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 10h
        ; Exact mapped bytes 7E 14: jle 0x4f8f9c
        __asm _emit 0x7e
        __asm _emit 0x14
        push 97h
        push 674fe8h
        ; Exact mapped bytes E8 A9 FD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8f9c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4f8f7c
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7F 1A: jg 0x4f8fc2
        __asm _emit 0x7f
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7F 14: jg 0x4f8fc2
        __asm _emit 0x7f
        __asm _emit 0x14
        push 98h
        push 674fe8h
        ; Exact mapped bytes E8 83 FD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8fc2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4f8fa2
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4f8fe9
        __asm _emit 0x75
        __asm _emit 0x14
        push 99h
        push 674fe8h
        ; Exact mapped bytes E8 5C FD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8fe9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x4f8fc8
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp + 14h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f900d
        __asm _emit 0x74
        __asm _emit 0x14
        push 9ah
        push 674fe8h
        ; Exact mapped bytes E8 38 FD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f900d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4f8fef
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 75 09: jne 0x4f9025
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 14: je 0x4f9039
        __asm _emit 0x74
        __asm _emit 0x14
        push 9ch
        push 674fe8h
        ; Exact mapped bytes E8 0C FD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9039
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4f9013
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 0
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 39 8B 03 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 00 00 00: call 0x4f90ac
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f909e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4f90a3
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
