// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2B11 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_004c2b11_004C2B11() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 16eh
        push 67c688h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 30 77 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7F 1C 06 00: call 0x5247bb
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 2B 06 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x4c2baf
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 81 02 00: call 0x4eac9b
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 08: jmp 0x4c2b6a
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3D: je 0x4c2bad
        __asm _emit 0x74
        __asm _emit 0x3d
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 E9 08 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c2b95
        __asm _emit 0x75
        __asm _emit 0x14
        push 177h
        push 67c688h
        ; Exact mapped bytes E8 B0 61 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2b95
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4c2b70
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 25 31 06 00: call 0x525cd0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B5: jmp 0x4c2b62
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes EB 36: jmp 0x4c2be5
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 81 02 00: call 0x4eacd9
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x4c2be5
        __asm _emit 0x74
        __asm _emit 0x1b
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0F 31 06 00: call 0x525ce6
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BF F7 FF FF: call 0x4c23a2
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D5: jmp 0x4c2bba
        __asm _emit 0xeb
        __asm _emit 0xd5
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
