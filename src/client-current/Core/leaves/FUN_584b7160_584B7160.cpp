// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B7160 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_584b7160_584B7160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588958e0h
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584b7184
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 7D 54: jge 0x584b71e3
        __asm _emit 0x7d
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 43: je 0x584b71e1
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x584b71ca
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x584b71d1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes EB 98: jmp 0x584b717b
        __asm _emit 0xeb
        __asm _emit 0x98
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 21: je 0x584b720d
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 18h], ecx
        push 4
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 34 9E 37 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9e
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B E6 2F 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe6
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
