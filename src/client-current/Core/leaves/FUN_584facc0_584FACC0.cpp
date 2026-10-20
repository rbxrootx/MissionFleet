// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FACC0 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_584facc0_584FACC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584facdb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 0F 8D 8B 00 00 00: jge 0x584fad70
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        shr eax, 10h
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 75 6E: jne 0x584fad6b
        __asm _emit 0x75
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        and ecx, 0ffffh
        push ecx
        push 3
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 B9 FF FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 44: je 0x584fad6b
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 8]
        add edx, 0dch
        push edx
        ; Exact mapped bytes E8 4A 64 35 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 77 2E: ja 0x584fad6b
        __asm _emit 0x77
        __asm _emit 0x2e
        push 14h
        mov eax, dword ptr [ebp - 0ch]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0dch
        push ecx
        ; Exact mapped bytes E8 3B 1B 35 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1b
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 1
        imul eax, edx, 13h
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + eax + 0dch], 0
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x584facd2
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
