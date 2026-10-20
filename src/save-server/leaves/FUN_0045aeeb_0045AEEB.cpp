// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045AEEB .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_0045aeeb_0045AEEB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x45af24
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 5A 85 04 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45af24
        __asm _emit 0x75
        __asm _emit 0x14
        push 3bfh
        push 678664h
        ; Exact mapped bytes E8 21 DE 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xde
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45af24
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x45aef4
        __asm _emit 0x75
        __asm _emit 0xca
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD A7 0C 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x45af72
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes EB 09: jmp 0x45af41
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10h
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x45af70
        __asm _emit 0x74
        __asm _emit 0x1f
        sub esp, 10h
        mov ecx, esp
        mov dword ptr [ebp - 4], esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 5E E5 FF FF: call 0x4594c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4C F5 FF FF: call 0x45a4ba
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB C8: jmp 0x45af38
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 2A: jmp 0x45af9c
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 09: jmp 0x45af7d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        add edx, 10h
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x45af9c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 84 F9 FF FF: call 0x45a91e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D8: jmp 0x45af74
        __asm _emit 0xeb
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
