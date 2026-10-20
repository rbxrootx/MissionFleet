// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F873 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0054f873_0054F873() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0D: jne 0x54f88d
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], 0
        xor eax, eax
        ; Exact mapped bytes EB 65: jmp 0x54f8f2
        __asm _emit 0xeb
        __asm _emit 0x65
        push 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 BA 05 F8 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54f8b1
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 5cf710h
        ; Exact mapped bytes E8 54 51 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f8b1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x54f88d
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x54f8ce
        __asm _emit 0x75
        __asm _emit 0x11
        push 58h
        push 5cf710h
        ; Exact mapped bytes E8 37 51 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f8ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x54f8b7
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
