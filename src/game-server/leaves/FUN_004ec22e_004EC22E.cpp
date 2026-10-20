// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC22E .. +0xED bytes.
extern "C" __declspec(naked) void FUN_004ec22e_004EC22E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d70fh
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
        sub esp, 10h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 40 F0 00 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c7df8h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5c7df0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 88 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EF 8A 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9C 88 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 5C 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 73: jle 0x4ec2fe
        __asm _emit 0x7e
        __asm _emit 0x73
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 74 4C 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5C 76 04 00: call 0x5338fe
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 44: je 0x4ec2ef
        __asm _emit 0x74
        __asm _emit 0x44
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0A FE FF FF: call 0x4ec0c9
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 5c7e08h
        lea ecx, [ebp - 14h]
        push ecx
        push 5c7e04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 88 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 06 17 00 00: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 35 88 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 07 8B 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B6: jmp 0x4ec2a5
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4E 15 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c7e10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 88 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
