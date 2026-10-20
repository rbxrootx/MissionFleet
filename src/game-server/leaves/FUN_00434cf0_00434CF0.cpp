// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434CF0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00434cf0_00434CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 0F: jmp 0x434d33
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 53: je 0x434d8c
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        cmp ecx, edx
        ; Exact mapped bytes 75 3C: jne 0x434d8a
        __asm _emit 0x75
        __asm _emit 0x3c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 16: jne 0x434d6a
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 8]
        mov dword ptr [ecx + eax*4], edx
        ; Exact mapped bytes EB 0C: jmp 0x434d76
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 84 86 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 02: jmp 0x434d8c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 98: jmp 0x434d24
        __asm _emit 0xeb
        __asm _emit 0x98
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 4A 3A 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3a
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
