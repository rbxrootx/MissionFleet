// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DB87A .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_004db87a_004DB87A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x4db8a2
        __asm _emit 0x75
        __asm _emit 0x14
        push 16ah
        push 675b88h
        ; Exact mapped bytes E8 A3 D4 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4db8a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4db886
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x4db8bf
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 8
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 AB 7B FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4db8d3
        __asm _emit 0x75
        __asm _emit 0x14
        push 16bh
        push 675b88h
        ; Exact mapped bytes E8 72 D4 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4db8d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x4db8a8
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9F 01 00 00: call 0x4dba90
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4db913
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 51 16: movsx edx, word ptr [ecx + 0x16]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 51 18: movsx edx, word ptr [ecx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 19: jmp 0x4db92c
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 51 0E: movsx edx, word ptr [ecx + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 51 10: movsx edx, word ptr [ecx + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
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
