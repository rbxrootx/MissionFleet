// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9C8D .. +0xED bytes.
extern "C" __declspec(naked) void FUN_004e9c8d_004E9C8D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c942h
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
        ; Exact mapped bytes E8 E1 15 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c5010h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5c5008h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B AE 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 90 B0 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3D AE 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 82 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 73: jle 0x4e9d5d
        __asm _emit 0x7e
        __asm _emit 0x73
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 15 72 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6B 9C 04 00: call 0x53396c
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 44: je 0x4e9d4e
        __asm _emit 0x74
        __asm _emit 0x44
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9B FC FF FF: call 0x4e99b9
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 5c5020h
        lea ecx, [ebp - 14h]
        push ecx
        push 5c501ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 AD 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A7 3C 00 00: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D6 AD 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4F B0 04 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B6: jmp 0x4e9d04
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EF 3A 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c5028h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 AD 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xad
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
