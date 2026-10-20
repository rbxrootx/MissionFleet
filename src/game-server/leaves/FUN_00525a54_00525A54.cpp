// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525A54 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_00525a54_00525A54() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C D1 FC FF: call 0x4f2be3
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd1
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5c8338h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        push ecx
        push 5c8328h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B F0 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 5F 7F FC FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8E F0 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c8350h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 44 CB 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 5c833ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 F0 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B5 F2 00 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 62 F0 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c8360h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        push 5c8354h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 F0 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8B F2 00 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 38 F0 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c8370h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        push 5c8364h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C F0 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 61 F2 00 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0E F0 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf0
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
