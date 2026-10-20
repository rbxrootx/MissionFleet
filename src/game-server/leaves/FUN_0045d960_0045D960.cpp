// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D960 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0045d960_0045D960() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 43: je 0x45d9ba
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 06 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x45d9ba
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 06 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 0ffh
        ; Exact mapped bytes 74 11: je 0x45d9ba
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 04 00 00: call 0x45de70
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 12: je 0x45d9d5
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 05 00 00: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [eax], 0ffh
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 01 AE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
