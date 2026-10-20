// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407987 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_00407987_00407987() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 E6 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 110h
        push eax
        push 448f88h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1E DE 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 448f90h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E2 E2 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 118h
        push ecx
        push 448f9ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 CA E2 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 11ch
        push eax
        push 448fa8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B3 E2 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 120h
        push edx
        push 448fb4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9B E2 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 124h
        push ecx
        push 448fc0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 83 E2 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 128h
        push eax
        push 448fc8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A5 E4 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 12ch
        push edx
        push 448fd4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 8D E4 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe4
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
