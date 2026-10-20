// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D61FA .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_004d61fa_004D61FA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 1
        ; Exact mapped bytes E8 37 FE FF FF: call 0x4d6041
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d6227
        __asm _emit 0x75
        __asm _emit 0x14
        push 480h
        push 5c64b4h
        ; Exact mapped bytes E8 DE E7 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6227
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d620d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E7 6D 02 00: call 0x4fd020
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x4d6261
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4d6261
        __asm _emit 0x74
        __asm _emit 0x14
        push 482h
        push 5c64b4h
        ; Exact mapped bytes E8 A4 E7 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6261
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4d623c
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
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
