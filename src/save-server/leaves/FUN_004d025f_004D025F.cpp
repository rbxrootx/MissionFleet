// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D025F .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_004d025f_004D025F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov ecx, 686d24h
        ; Exact mapped bytes E8 C0 D3 06 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x4d0283
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x4d0348
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 75 2A: jne 0x4d02b6
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 0
        push 4cfe51h
        push 5
        ; Exact mapped bytes FF 15 10 BF 68 00: call dword ptr [0x68bf10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 75 05: jne 0x4d02b6
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 26 2C FD FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d02d3
        __asm _emit 0x75
        __asm _emit 0x14
        push 272h
        push 671a64h
        ; Exact mapped bytes E8 72 8A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d02d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d02b6
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d02f3
        __asm _emit 0x75
        __asm _emit 0x14
        push 273h
        push 671a64h
        ; Exact mapped bytes E8 52 8A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d02f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d02d9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4d0316
        __asm _emit 0x74
        __asm _emit 0x14
        push 274h
        push 671a64h
        ; Exact mapped bytes E8 2F 8A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0316
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d02f9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 14: je 0x4d0339
        __asm _emit 0x74
        __asm _emit 0x14
        push 276h
        push 671a64h
        ; Exact mapped bytes E8 0C 8A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0339
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d031c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 14h], edx
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
