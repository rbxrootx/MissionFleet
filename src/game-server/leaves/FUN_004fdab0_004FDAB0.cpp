// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FDAB0 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_004fdab0_004FDAB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10ch], ecx
        mov eax, dword ptr [ebp - 10ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fdae2
        __asm _emit 0x75
        __asm _emit 0x14
        push 92h
        push 5ca304h
        ; Exact mapped bytes E8 23 6F 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdae2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4fdac2
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fdb02
        __asm _emit 0x75
        __asm _emit 0x14
        push 93h
        push 5ca304h
        ; Exact mapped bytes E8 03 6F 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdb02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4fdae8
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1F 23 FD FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fdb2b
        __asm _emit 0x75
        __asm _emit 0x14
        push 94h
        push 5ca304h
        ; Exact mapped bytes E8 DA 6E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdb2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4fdb08
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 5E 1E 00 00: call 0x4ff99f
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4fdb5c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 1
        mov dword ptr [ebp - 108h], ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        cmp dword ptr [ebp - 108h], eax
        ; Exact mapped bytes 7D 2C: jge 0x4fdb9c
        __asm _emit 0x7d
        __asm _emit 0x2c
        lea ecx, [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 108h]
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes E8 1C 34 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A6 21 00 00: call 0x4ffd3a
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4fdb9a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4fdb9c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B1: jmp 0x4fdb4d
        __asm _emit 0xeb
        __asm _emit 0xb1
        ; Exact mapped bytes EB 0F: jmp 0x4fdbad
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 108h]
        sub edx, 1
        mov dword ptr [ebp - 108h], edx
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 7E 7E: jle 0x4fdc34
        __asm _emit 0x7e
        __asm _emit 0x7e
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 7F 14: jg 0x4fdbd3
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0a3h
        push 5ca304h
        ; Exact mapped bytes E8 32 6E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdbd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fdbb6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7C 14: jl 0x4fdbfe
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0a4h
        push 5ca304h
        ; Exact mapped bytes E8 07 6E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdbfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4fdbd9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 108h]
        lea ecx, [edx + eax*4 - 4]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 108h]
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes E8 17 FE FE FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x4fdb9e
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 B4 FE FE FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
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
