// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050491B .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0050491b_0050491B() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x504951
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 1D B5 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504951
        __asm _emit 0x75
        __asm _emit 0x14
        push 11ch
        push 5c7650h
        ; Exact mapped bytes E8 B4 00 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504951
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x504921
        __asm _emit 0x75
        __asm _emit 0xca
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 CF 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x50498f
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes EB 09: jmp 0x50496e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x50498d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 35 FD FF FF: call 0x5046c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D8: jmp 0x504965
        __asm _emit 0xeb
        __asm _emit 0xd8
        ; Exact mapped bytes EB 2A: jmp 0x5049b9
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 09: jmp 0x50499a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x5049b9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 34 FE FF FF: call 0x5047eb
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D8: jmp 0x504991
        __asm _emit 0xeb
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
