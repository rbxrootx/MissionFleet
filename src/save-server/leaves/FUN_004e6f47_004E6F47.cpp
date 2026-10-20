// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6F47 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_004e6f47_004E6F47() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e6f70
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d7h
        push 6733e0h
        ; Exact mapped bytes E8 D5 1D 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6f70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e6f53
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 24 AC 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 3F: je 0x4e6fcb
        __asm _emit 0x74
        __asm _emit 0x3f
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 EC B5 68 00: call dword ptr [0x68b5ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e6fc5
        __asm _emit 0x75
        __asm _emit 0x14
        push 1dbh
        push 6733e0h
        ; Exact mapped bytes E8 80 1D 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6fc5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C1: jne 0x4e6f8c
        __asm _emit 0x75
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 3F: je 0x4e7013
        __asm _emit 0x74
        __asm _emit 0x3f
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 EC B5 68 00: call dword ptr [0x68b5ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e700d
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ddh
        push 6733e0h
        ; Exact mapped bytes E8 38 1D 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e700d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C1: jne 0x4e6fd4
        __asm _emit 0x75
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
