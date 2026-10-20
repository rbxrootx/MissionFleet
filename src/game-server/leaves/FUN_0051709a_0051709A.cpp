// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051709A .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_0051709a_0051709A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 400001h
        cmp ecx, 400000h
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x51714f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x51710d
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D C4 E8 5D 00: mov ecx, dword ptr [0x5de8c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 C8 E8 5D 00: mov edx, dword ptr [0x5de8c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 72 ED 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 48h]
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 4ch]
        push eax
        push 3
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 48h]
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 2
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C BB 00 00: call 0x522c47
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 42: jmp 0x51714f
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes 8B 15 C4 E8 5D 00: mov edx, dword ptr [0x5de8c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes A1 C8 E8 5D 00: mov eax, dword ptr [0x5de8c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        push 3
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 16 ED 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 48h]
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 4ch]
        push eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 48h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 BA 00 00: call 0x522c47
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
