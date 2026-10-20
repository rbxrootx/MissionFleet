// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8116 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004a8116_004A8116() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 2bh
        push 5d089ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 1D 30 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        push 58aaa8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 2F 05 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4a8165
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ch
        push 5d089ch
        ; Exact mapped bytes E8 A0 C8 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a8165
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4a8143
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 81 0C 00: call 0x570309
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4a8179
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0C: jmp 0x4a8185
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 4D 0C 00: call 0x56cf63
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4d
        __asm _emit 0x0c
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
