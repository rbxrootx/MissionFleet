// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550CF1 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_00550cf1_00550CF1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 63h
        push 5cf7b8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 55 A4 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        push 5cf7d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 A3 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa3
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x550d2d
        __asm _emit 0x75
        __asm _emit 0x11
        push 64h
        push 5cf7b8h
        ; Exact mapped bytes E8 D8 3C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550d2d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x550d0b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 11: je 0x550d4f
        __asm _emit 0x74
        __asm _emit 0x11
        push 65h
        push 5cf7b8h
        ; Exact mapped bytes E8 B6 3C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550d4f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x550d33
        __asm _emit 0x75
        __asm _emit 0xde
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 D5 79 F9 FF: call 0x4e873b
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x550d7b
        __asm _emit 0x75
        __asm _emit 0x11
        push 67h
        push 5cf7b8h
        ; Exact mapped bytes E8 8A 3C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550d7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x550d55
        __asm _emit 0x75
        __asm _emit 0xd4
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 A9 79 F9 FF: call 0x4e873b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 03 78 F9 FF: call 0x4e85a1
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 8C 79 F9 FF: call 0x4e873b
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x550dc4
        __asm _emit 0x74
        __asm _emit 0x11
        push 69h
        push 5cf7b8h
        ; Exact mapped bytes E8 41 3C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550dc4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x550d9e
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
