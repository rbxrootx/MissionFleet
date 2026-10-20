// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052CE42 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_0052ce42_0052CE42() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 94 FC FF: call 0x4f630d
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 14: jne 0x52ce76
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes 75 02: jne 0x52ce78
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 40: jmp 0x52ceb8
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 00 00 00: call 0x52cee1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 90h]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 74 14: je 0x52ceb2
        __asm _emit 0x74
        __asm _emit 0x14
        push 60dh
        push 5c8fcch
        ; Exact mapped bytes E8 53 7B 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52ceb2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x52ce8a
        __asm _emit 0x75
        __asm _emit 0xd2
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
