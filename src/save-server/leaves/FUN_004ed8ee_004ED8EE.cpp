// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED8EE .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_004ed8ee_004ED8EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5C FD FF FF: call 0x4ed661
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4ed912
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4C: jmp 0x4ed95e
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp + 8], 0e150h
        ; Exact mapped bytes 74 1D: je 0x4ed938
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 0e151h
        ; Exact mapped bytes 74 14: je 0x4ed938
        __asm _emit 0x74
        __asm _emit 0x14
        push 195h
        push 677b4ch
        ; Exact mapped bytes E8 0D B4 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed938
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4ed912
        __asm _emit 0x75
        __asm _emit 0xd4
        xor edx, edx
        cmp dword ptr [ebp + 8], 0e151h
        sete dl
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F4 00 00 00: call dword ptr [edx + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
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
