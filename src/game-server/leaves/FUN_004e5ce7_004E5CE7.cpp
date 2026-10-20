// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5CE7 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004e5ce7_004E5CE7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 5c7c28h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5A 54 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e5d20
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 5c7c28h
        ; Exact mapped bytes E8 E5 EC 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5d20
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e5d06
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5c7c38h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5D 53 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e5d4b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 5c7c28h
        ; Exact mapped bytes E8 BA EC 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5d4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e5d26
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 5c7c28h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 FC 53 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e5d7e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 5c7c28h
        ; Exact mapped bytes E8 87 EC 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5d7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e5d64
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F1 C9 04 00: call 0x53277d
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4e5ded
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E5 C9 04 00: call 0x53277d
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 16 CA 04 00: call 0x5327b9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FD FF FF: call 0x4e5ac3
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e5dc2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B3 C9 04 00: call 0x53277d
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4e5ded
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DE C9 04 00: call 0x5327b9
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 18 CA 04 00: call 0x532803
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4e5db9
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
