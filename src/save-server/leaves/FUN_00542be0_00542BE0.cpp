// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542BE0 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_00542be0_00542BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 5C 70 68 00 00: cmp dword ptr [0x68705c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 7D: jne 0x542c6f
        __asm _emit 0x75
        __asm _emit 0x7d
        ; Exact mapped bytes A1 5C 70 68 00: mov eax, dword ptr [0x68705c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 5C 70 68 00: mov dword ptr [0x68705c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C 70 68 00 00: cmp dword ptr [0x68705c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x542c19
        __asm _emit 0x75
        __asm _emit 0x11
        push 2eh
        push 676978h
        ; Exact mapped bytes E8 2C 61 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542c19
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x542bf2
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        cmp edx, 4
        ; Exact mapped bytes 7D 15: jge 0x542c4b
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x542c4b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x542c52
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D 58 70 68 00: mov dword ptr [0x687058], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 70 68 00 00: cmp dword ptr [0x687058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x542c6f
        __asm _emit 0x75
        __asm _emit 0x0b
        push 686ea8h
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C 70 68 00: mov eax, dword ptr [0x68705c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
