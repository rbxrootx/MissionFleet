// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005182D4 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_005182d4_005182D4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 88 FB FF: call 0x4d0b13
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        push 674e70h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        push ecx
        push 674e60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B 05 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 7F 47 FB FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 05 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        push 674e88h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 8D E0 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 674e74h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 05 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 65 07 01 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 12 05 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        push 674e98h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        push 674e8ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 04 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3B 07 01 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E8 04 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        push 674ea8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        push 674e9ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 04 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 11 07 01 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BE 04 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
