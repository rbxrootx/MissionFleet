// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045B345 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_0045b345_0045B345() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 FF 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45b371
        __asm _emit 0x74
        __asm _emit 0x14
        push 481h
        push 678664h
        ; Exact mapped bytes E8 D4 D9 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45b371
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x45b351
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 FF 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45b397
        __asm _emit 0x74
        __asm _emit 0x14
        push 482h
        push 678664h
        ; Exact mapped bytes E8 AE D9 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45b397
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x45b377
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 13: jne 0x45b3be
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        cmp dword ptr [eax], ecx
        sbb edx, edx
        neg edx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 14: jmp 0x45b3d2
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        xor eax, eax
        cmp edx, dword ptr [ecx + 4]
        setg al
        mov dword ptr [ebp - 8], eax
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
