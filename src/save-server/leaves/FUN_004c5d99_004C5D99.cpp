// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C5D99 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004c5d99_004C5D99() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 06 00 00: call 0x4c6490
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        div dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 04: jne 0x4c5dc8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x4c5e0b
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 08: jmp 0x4c5de3
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 20: je 0x4c5e09
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        push ecx
        ; Exact mapped bytes E8 0F F2 05 00: call 0x525008
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4c5e07
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x4c5e0b
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D2: jmp 0x4c5ddb
        __asm _emit 0xeb
        __asm _emit 0xd2
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
