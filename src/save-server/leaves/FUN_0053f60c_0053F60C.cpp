// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053F60C .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_0053f60c_0053F60C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 75 11: jne 0x53f635
        __asm _emit 0x75
        __asm _emit 0x11
        push 39h
        push 6739a4h
        ; Exact mapped bytes E8 10 97 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f635
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53f618
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 75 11: jne 0x53f658
        __asm _emit 0x75
        __asm _emit 0x11
        push 3ah
        push 6739a4h
        ; Exact mapped bytes E8 ED 96 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f658
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x53f63b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 4]
        push ecx
        push 2001fh
        push 0
        push 6739b0h
        push 80000001h
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x53f6e8
        __asm _emit 0x75
        __asm _emit 0x56
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 2001fh
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 80h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 94 B2 68 00: call dword ptr [0x68b294]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x53f6e8
        __asm _emit 0x75
        __asm _emit 0x29
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 8]
        push edx
        push 0
        push 2001fh
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 94 B2 68 00: call dword ptr [0x68b294]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x53f6f8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x53f708
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
