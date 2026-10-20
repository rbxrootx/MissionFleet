// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DA00 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_0045da00_0045DA00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x45da2c
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 02: jne 0x45da2e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 6E: jmp 0x45da9c
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 05 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x45da60
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 05 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 0ffh
        ; Exact mapped bytes 75 1E: jne 0x45da7e
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 05 00 00: call 0x45dff0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x45da9c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 05 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx]
        sub al, 1
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], al
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 1C AD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
