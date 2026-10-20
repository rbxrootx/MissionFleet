// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D8C50 .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_584d8c50_584D8C50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        push 5889c3d8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 21 55 FF FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0ch], eax
        push 5889c3dch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0B 55 FF FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 10h], edx
        push 5889c3e0h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 54 FF FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 0
        push 0e8h
        push 0fbh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 FD FF FF: call 0x584d8aa0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 0deh
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 30 C9 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc9
        __asm _emit 0x2d
        __asm _emit 0x00
        push 0
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 FC FF FF: call 0x584d8990
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 FC FF FF: call 0x584d8990
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C FC FF FF: call 0x584d8990
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 A7 00 00: call 0x584e34d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
