// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565C18 .. +0xF6 bytes.
extern "C" __declspec(naked) void _Dump_COleIPFrameWnd__UBEXAAVCDumpContext___Z_00565C18() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 83 FC FF: call 0x52dff1
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        push edx
        push 5d0bd4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 EE FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB F1 FC FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        push ecx
        push 5d0be4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB EE FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D F1 FC FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        push eax
        push 5d0bf8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D EE FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F F1 FC FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 104h
        push ecx
        push 5d0c08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F EE FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 52 AF F9 FF: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 5d0c18h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 EE FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 35 AF F9 FF: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        push ecx
        push 5d0c28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 EE FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8A F0 FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        push 5d0c3ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 EE FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F9 F0 FC FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5d0c50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 EE FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
