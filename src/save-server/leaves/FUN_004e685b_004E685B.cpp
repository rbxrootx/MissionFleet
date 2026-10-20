// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E685B .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_004e685b_004E685B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e6884
        __asm _emit 0x75
        __asm _emit 0x14
        push 16bh
        push 6733e0h
        ; Exact mapped bytes E8 C1 24 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6884
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e6867
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 14: je 0x4e68b3
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 94 B6 68 00: call dword ptr [0x68b694]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4e68d0
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 94 B6 68 00: call dword ptr [0x68b694]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
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
