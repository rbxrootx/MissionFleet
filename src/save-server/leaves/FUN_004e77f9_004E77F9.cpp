// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E77F9 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_004e77f9_004E77F9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e7822
        __asm _emit 0x75
        __asm _emit 0x14
        push 286h
        push 6733e0h
        ; Exact mapped bytes E8 23 15 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7822
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e7805
        __asm _emit 0x75
        __asm _emit 0xdd
        push 673554h
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e7850
        __asm _emit 0x75
        __asm _emit 0x14
        push 289h
        push 6733e0h
        ; Exact mapped bytes E8 F5 14 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7850
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e7836
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 0ch], 0
        push 673560h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x4e7884
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x4e7893
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov dword ptr [ebp - 0ch], 0ffffffffh
        push 78h
        ; Exact mapped bytes FF 15 B8 B9 68 00: call dword ptr [0x68b9b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
