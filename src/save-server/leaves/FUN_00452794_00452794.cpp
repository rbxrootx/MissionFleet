// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00452794 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00452794_00452794() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4527ba
        __asm _emit 0x75
        __asm _emit 0x14
        push 95dh
        push 67702ch
        ; Exact mapped bytes E8 8B 65 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x65
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4527ba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4527a0
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 22: je 0x4527e8
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        ; Exact mapped bytes E8 5C EF 06 00: call 0x4c1742
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x45281c
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        ; Exact mapped bytes E8 17 F6 06 00: call 0x4c1e1b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0F: je 0x45281c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        ; Exact mapped bytes E8 65 F4 06 00: call 0x4c1c81
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
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
