// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9759 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004e9759_004E9759() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 06 00 00: call 0x4e9e20
        __asm _emit 0xe8
        __asm _emit 0xb2
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
        ; Exact mapped bytes 75 04: jne 0x4e9788
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x4e97cb
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 08: jmp 0x4e97a3
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 20: je 0x4e97c9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        push ecx
        ; Exact mapped bytes E8 4F 7A 04 00: call 0x531208
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4e97c7
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x4e97cb
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D2: jmp 0x4e979b
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
