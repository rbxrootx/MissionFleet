// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6BA5 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_004e6ba5_004E6BA5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d658h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 146h
        push 5c7c98h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 87 45 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e6bf3
        __asm _emit 0x75
        __asm _emit 0x14
        push 147h
        push 5c7c98h
        ; Exact mapped bytes E8 12 DE 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6bf3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e6bd9
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5c7ca8h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8A 44 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e6c1e
        __asm _emit 0x75
        __asm _emit 0x14
        push 148h
        push 5c7c98h
        ; Exact mapped bytes E8 E7 DD 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6c1e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e6bf9
        __asm _emit 0x75
        __asm _emit 0xd5
        push 149h
        push 5c7c98h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 29 45 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e6c51
        __asm _emit 0x7d
        __asm _emit 0x14
        push 14ah
        push 5c7c98h
        ; Exact mapped bytes E8 B4 DD 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6c51
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e6c37
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BA BC 04 00: call 0x532919
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E A9 00 00 00: jle 0x4e6d10
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AA BC 04 00: call 0x532919
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 0
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D7 BC 04 00: call 0x532955
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B7 FD FF FF: call 0x4e6a55
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 9F 6B 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4e6cbf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 52 BC 04 00: call 0x532919
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 44: jge 0x4e6d10
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 79 BC 04 00: call 0x532955
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 11 BD 04 00: call 0x532a10
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 3E 6B 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A6: jmp 0x4e6cb6
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
