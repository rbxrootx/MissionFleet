// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057B887 .. +0xBA bytes.
extern "C" __declspec(naked) void _Dump_COleServerItem__UBEXAAVCDumpContext___Z_0057B887() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 59 FD FF: call 0x551252
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        push 67d27ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D CF FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 D1 FA FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 67d290h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 CF FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C7 D1 FA FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add edx, 30h
        push edx
        push 67d2a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 CF FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 9B 11 F5 FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        push 67d2b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D CF FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F D2 FA FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        push 67d2d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 CF FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 04 D2 FA FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        push ecx
        push 67d2ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 CF FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xcf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 D1 FA FF: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
