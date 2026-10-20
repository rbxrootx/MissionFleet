// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E181 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_0040e181_0040E181() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 7E FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 4497b8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 24 76 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 4497c4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 03 76 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 4497cch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E2 75 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 11ch
        push eax
        push 4497dch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E0 7C 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 120h
        push edx
        push 4497e8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C8 7C 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 124h
        push ecx
        push 4497f4h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B0 7C 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 128h
        push eax
        push 449800h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 99 7C 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 12ch
        push edx
        push 44980ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 63 75 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x75
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
