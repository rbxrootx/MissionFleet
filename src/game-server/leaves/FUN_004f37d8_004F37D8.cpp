// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F37D8 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_004f37d8_004F37D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 6F 17 05 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 58h
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes E8 1C 1D 04 00: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 28: jne 0x4f3822
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 22: jne 0x4f3822
        __asm _emit 0x75
        __asm _emit 0x22
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 1C: jne 0x4f3822
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c587ch
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 26: jmp 0x4f3848
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c5888h
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 1ch
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 AC 25 5E 00: call dword ptr [0x5e25ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4f3885
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4f387a
        __asm _emit 0x74
        __asm _emit 0x14
        push 556h
        push 5c5574h
        ; Exact mapped bytes E8 8B 11 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f387a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4f385e
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes EB 55: jmp 0x4f38da
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes A1 C0 25 5E 00: mov eax, dword ptr [0x5e25c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 8F FD FF FF: call 0x4f365d
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4f38d7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 EC 0C 01 00: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
