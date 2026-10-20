// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00563C8F .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_00563c8f_00563C8F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 19: jne 0x563cbd
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 11: jne 0x563cbd
        __asm _emit 0x75
        __asm _emit 0x11
        push 63h
        push 5cfe90h
        ; Exact mapped bytes E8 48 0D FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x563cbd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x563c9b
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        push 14h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 86 C1 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x563ce5
        __asm _emit 0x75
        __asm _emit 0x11
        push 64h
        push 5cfe90h
        ; Exact mapped bytes E8 20 0D FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x563ce5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x563cc3
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 04: jne 0x563cf8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 57: jmp 0x563d4f
        __asm _emit 0xeb
        __asm _emit 0x57
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2F: je 0x563d4a
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1C: je 0x563d40
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x563d1b
        __asm _emit 0x75
        __asm _emit 0xd5
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x563d4f
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
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
