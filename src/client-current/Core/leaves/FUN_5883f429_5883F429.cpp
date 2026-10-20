// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F429 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_5883f429_5883F429() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x5883f43b
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 58: jmp 0x5883f493
        __asm _emit 0xeb
        __asm _emit 0x58
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 04 01: movsx eax, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5883f467
        __asm _emit 0x75
        __asm _emit 0x1b
        push 588f2efch
        ; Exact mapped bytes E8 FD CE FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 40 A6 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2C: jmp 0x5883f493
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 00: movsx eax, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x5883f490
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 00: movsx eax, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4D 0C: movsx ecx, byte ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x0c
        cmp eax, ecx
        ; Exact mapped bytes 75 08: jne 0x5883f487
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ebp + 10h]
        mov byte ptr [eax], cl
        mov eax, dword ptr [ebp + 8]
        inc eax
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB D7: jmp 0x5883f467
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
