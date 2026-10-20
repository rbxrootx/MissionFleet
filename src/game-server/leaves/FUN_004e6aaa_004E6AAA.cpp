// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6AAA .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_004e6aaa_004E6AAA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 134h
        push 5c7c98h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 97 46 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e6ae3
        __asm _emit 0x7d
        __asm _emit 0x14
        push 135h
        push 5c7c98h
        ; Exact mapped bytes E8 22 DF 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6ae3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e6ac9
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4e6b03
        __asm _emit 0x7d
        __asm _emit 0x14
        push 136h
        push 5c7c98h
        ; Exact mapped bytes E8 02 DF 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6b03
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e6ae9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 14: jle 0x4e6b2b
        __asm _emit 0x7e
        __asm _emit 0x14
        push 137h
        push 5c7c98h
        ; Exact mapped bytes E8 DA DE 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6b2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4e6b09
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + eax*4]
        push ecx
        ; Exact mapped bytes E8 35 F6 FF FF: call 0x4e618d
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x4e6b8d
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        lea eax, [edx + eax*4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + eax*4]
        push ecx
        ; Exact mapped bytes E8 06 5D FC FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
