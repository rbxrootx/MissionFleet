// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9B1E .. +0x16F bytes.
extern "C" __declspec(naked) void FUN_004e9b1e_004E9B1E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c92fh
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 139h
        push 5c4fd0h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 0E 16 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5D 6E 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 7D 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x4e9c10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 C1 01 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4e9b8b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x4e9c7a
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e9ba8
        __asm _emit 0x75
        __asm _emit 0x14
        push 143h
        push 5c4fd0h
        ; Exact mapped bytes E8 5D AE 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9ba8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4e9b8b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4e9bc0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 73 43: jae 0x4e9c0e
        __asm _emit 0x73
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 08: jmp 0x4e9be4
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 22: je 0x4e9c0c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C6 AA 01 00: call 0x5046c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 FD 82 04 00: call 0x531f07
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB D0: jmp 0x4e9bdc
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB A9: jmp 0x4e9bb7
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes EB 6A: jmp 0x4e9c7a
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0B C1 01 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E4 72 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x4e9c6b
        __asm _emit 0x74
        __asm _emit 0x31
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A4 AB 01 00: call 0x5047eb
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C9 82 04 00: call 0x531f1d
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4A 73 04 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E5 9C 04 00: call 0x53394e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB BF: jmp 0x4e9c2a
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 D2 3B 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x3b
        __asm _emit 0x00
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
