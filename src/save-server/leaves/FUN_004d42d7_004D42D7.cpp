// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D42D7 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004d42d7_004D42D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 76 F7 FF FF: call 0x4d3a62
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4d42f5
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 48: jmp 0x4d433d
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, 686a34h
        ; Exact mapped bytes E8 11 93 06 00: call 0x53d610
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 90 72 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 1A 00 00 00: call 0x4d4343
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4d4337
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6D B4 FF FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x4d433d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
