// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00537CC4 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_00537cc4_00537CC4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 74 14: je 0x537cf2
        __asm _emit 0x74
        __asm _emit 0x14
        push 232h
        push 581fc0h
        ; Exact mapped bytes E8 13 CD FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x537cf2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x537cd0
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 16: je 0x537d14
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x537d1b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
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
