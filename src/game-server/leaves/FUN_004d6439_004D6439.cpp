// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D6439 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_004d6439_004D6439() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 14: je 0x4d6462
        __asm _emit 0x74
        __asm _emit 0x14
        push 4b2h
        push 5c64b4h
        ; Exact mapped bytes E8 A3 E5 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6462
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d6445
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 02 FE FF FF: call 0x4d6273
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d6489
        __asm _emit 0x74
        __asm _emit 0x14
        push 4b3h
        push 5c64b4h
        ; Exact mapped bytes E8 7C E5 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6489
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4d6468
        __asm _emit 0x75
        __asm _emit 0xd9
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4d6499
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 48: jmp 0x4d64e1
        __asm _emit 0xeb
        __asm _emit 0x48
        push 1
        ; Exact mapped bytes E8 A1 FB FF FF: call 0x4d6041
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d64bd
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b9h
        push 5c64b4h
        ; Exact mapped bytes E8 48 E5 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d64bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d64a3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 6D 02 00: call 0x4fd24a
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
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
