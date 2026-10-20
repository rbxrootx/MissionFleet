// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045B476 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0045b476_0045B476() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 FE 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45b4a2
        __asm _emit 0x74
        __asm _emit 0x14
        push 493h
        push 678664h
        ; Exact mapped bytes E8 A3 D8 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45b4a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x45b482
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 FD 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45b4c8
        __asm _emit 0x74
        __asm _emit 0x14
        push 494h
        push 678664h
        ; Exact mapped bytes E8 7D D8 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45b4c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x45b4a8
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 12: jne 0x45b4ee
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax]
        sbb edx, edx
        inc edx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 14: jmp 0x45b502
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
