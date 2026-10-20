// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005268F8 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_005268f8_005268F8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 C2 FC FF: call 0x4f2be3
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5c83e4h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        push ecx
        push 5c83d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 E1 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 BB 70 FC FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA E1 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c83fch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 A0 BC 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 5c83e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC E1 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 11 E4 00 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BE E1 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c840ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        push 5c8400h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 E1 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E7 E3 00 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 94 E1 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c841ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        push 5c8410h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 E1 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BD E3 00 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6A E1 00 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe1
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
