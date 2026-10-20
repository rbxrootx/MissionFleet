// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040ED26 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_0040ed26_0040ED26() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 72 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 4498d0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 7F 6A 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 4498dch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5E 6A 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 4498e8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3D 6A 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 11ch
        push eax
        push 4498f4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1D 6A 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 120h
        push edx
        push 449900h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1A 71 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 124h
        push ecx
        push 44990ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E4 69 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 128h
        push eax
        push 44991ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C4 69 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 12ch
        push edx
        push 44992ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A3 69 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x69
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
