// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004092E5 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_004092e5_004092E5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A CD FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 4492c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C0 C4 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 4492d0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9F C4 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 4492dch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 9C CB 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 11ch
        push eax
        push 4492e8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 85 CB 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 120h
        push edx
        push 4492f4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4F C4 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 124h
        push ecx
        push 449308h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 2E C4 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
