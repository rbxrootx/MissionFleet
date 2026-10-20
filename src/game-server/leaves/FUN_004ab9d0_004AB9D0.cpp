// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB9D0 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_004ab9d0_004AB9D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2B: jne 0x4aba0a
        __asm _emit 0x75
        __asm _emit 0x2b
        push 58c090h
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 3A 51 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab9ff
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4ab9df
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x4abb33
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 DF 97 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 18 ED 5D 00: mov edx, dword ptr [0x5ded18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4aba31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 1E: jge 0x4aba55
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*4 + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*4 + 4], 0
        ; Exact mapped bytes EB D3: jmp 0x4aba28
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 15 18 ED 5D 00: mov edx, dword ptr [0x5ded18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 08: jmp 0x4aba68
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x4abb11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 7C 66: jl 0x4abae7
        __asm _emit 0x7c
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 5
        ; Exact mapped bytes 7D 55: jge 0x4abae7
        __asm _emit 0x7d
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + ecx*4 + 4]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + edx*4 + 4], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 14h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*4 + 18h], edx
        ; Exact mapped bytes EB 25: jmp 0x4abb0c
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 8]
        push edx
        push 58c06ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 33 50 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4abb06
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4abae7
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x4aba60
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 20 ED 5D 00: mov edx, dword ptr [0x5ded20]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 14 ED 5D 00: mov ecx, dword ptr [0x5ded14]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax + 30h], ecx
        push 9
        ; Exact mapped bytes E8 60 97 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
