// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00559F28 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00559f28_00559F28() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x559f4e
        __asm _emit 0x75
        __asm _emit 0x14
        push 80h
        push 5cebe0h
        ; Exact mapped bytes E8 B7 AA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559f4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x559f31
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x559f74
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 0ch
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 85 6F FF FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x559fc4
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D DE FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x559fae
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 05: jne 0x559fae
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 18: jmp 0x559fc6
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 0B: je 0x559fc2
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 75 05: jne 0x559fc2
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x559fc6
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B0: jmp 0x559f74
        __asm _emit 0xeb
        __asm _emit 0xb0
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
