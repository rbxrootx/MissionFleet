// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525FF4 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_00525ff4_00525FF4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD AE FC FF: call 0x4f0ed4
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5c8384h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        push ecx
        push 5c8374h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 EA 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 BC 79 FC FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EB EA 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c839ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 5c8388h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 EA 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E3 EC 00 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C4 EA 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c83b4h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8ch
        push ecx
        push 5c83a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 EA 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 6C 79 FC FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B EA 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c83d0h
        mov edx, dword ptr [ebp - 4]
        add edx, 90h
        push edx
        push 5c83b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F EA 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 43 79 FC FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 72 EA 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xea
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
