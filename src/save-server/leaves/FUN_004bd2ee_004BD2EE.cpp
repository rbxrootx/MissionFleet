// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BD2EE .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004bd2ee_004BD2EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 6744e8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 53 CF 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4bd327
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 6744e8h
        ; Exact mapped bytes E8 1E BA 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd327
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bd30d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6744f8h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 56 CE 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4bd352
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 6744e8h
        ; Exact mapped bytes E8 F3 B9 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd352
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4bd32d
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 6744e8h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 F5 CE 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4bd385
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 6744e8h
        ; Exact mapped bytes E8 C0 B9 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bd385
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bd36b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 57 8B 06 00: call 0x525eea
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4bd3f4
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4B 8B 06 00: call 0x525eea
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7C 8B 06 00: call 0x525f26
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 FD FF FF: call 0x4bd0cb
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bd3c9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 19 8B 06 00: call 0x525eea
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4bd3f4
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 44 8B 06 00: call 0x525f26
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 8B 06 00: call 0x525f6e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4bd3c0
        __asm _emit 0xeb
        __asm _emit 0xcc
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
