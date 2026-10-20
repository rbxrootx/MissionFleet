// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D666A .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_004d666a_004D666A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC 4B 02 00: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4d668c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x4d6722
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 AE F9 FF FF: call 0x4d6041
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d66b0
        __asm _emit 0x75
        __asm _emit 0x14
        push 4e7h
        push 5c64b4h
        ; Exact mapped bytes E8 55 E3 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d66b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d6696
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1B 6B FB FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2C: jne 0x4d66fa
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 70 FB FF: call 0x48d760
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d66fa
        __asm _emit 0x75
        __asm _emit 0x14
        push 4eah
        push 5c64b4h
        ; Exact mapped bytes E8 0B E3 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d66fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B6: jne 0x4d66b6
        __asm _emit 0x75
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 14: je 0x4d671c
        __asm _emit 0x74
        __asm _emit 0x14
        push 4ebh
        push 5c64b4h
        ; Exact mapped bytes E8 E9 E2 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d671c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4d6700
        __asm _emit 0x75
        __asm _emit 0xde
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
