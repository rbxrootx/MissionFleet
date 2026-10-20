// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408FB2 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_00408fb2_00408FB2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D D0 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 449244h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F3 C7 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 44924ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 96 CB 00 00: call 0x415b91
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 449254h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D8 CE 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 11ch
        push eax
        push 449264h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A3 C7 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 120h
        push edx
        push 449270h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 82 C7 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 124h
        push ecx
        push 449278h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 61 C7 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 128h
        push eax
        push 449288h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5F CE 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xce
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
