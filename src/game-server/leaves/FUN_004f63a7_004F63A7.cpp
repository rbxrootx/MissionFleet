// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F63A7 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004f63a7_004F63A7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 76 F7 FF FF: call 0x4f5b32
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4f63c5
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 48: jmp 0x4f640d
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, 5de520h
        ; Exact mapped bytes E8 51 C0 04 00: call 0x542420
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc0
        __asm _emit 0x04
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
        ; Exact mapped bytes E8 60 57 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 1A 00 00 00: call 0x4f6413
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4f6407
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6D B4 FF FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x4f640d
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
