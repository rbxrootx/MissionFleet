// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570990 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_58570990_58570990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        sub eax, 30h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes 8B 0D 7C 75 94 58: mov ecx, dword ptr [0x5894757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E FA FD FF: call 0x58550440
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x585709ba
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7B: jmp 0x58570a35
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A E0 FF FF: call 0x5856ea20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 66: je 0x58570a30
        __asm _emit 0x74
        __asm _emit 0x66
        movzx eax, word ptr [ebp + 8]
        shl eax, 10h
        movzx ecx, word ptr [ebp + 0ch]
        or eax, ecx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 2C 06 96 58: cmp edx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 0D: je 0x585709f5
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x58570a09
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 184h]
        or edx, 10000h
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 07: jmp 0x58570a10
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 BF 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbf
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
