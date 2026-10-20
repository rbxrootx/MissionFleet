// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519178 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_00519178_00519178() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 79 FB FF: call 0x4d0b13
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        push 674f1ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        push ecx
        push 674f0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 F6 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 DB 38 FB FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A F6 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        push 674f34h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 E9 D1 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 674f20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C F6 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C1 F8 00 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6E F6 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        push 674f44h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        push 674f38h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 F6 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 97 F8 00 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 44 F6 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        push 674f54h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        push 674f48h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 F6 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6D F8 00 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1A F6 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf6
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
