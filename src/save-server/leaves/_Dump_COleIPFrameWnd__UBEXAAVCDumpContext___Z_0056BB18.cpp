// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056BB18 .. +0xF6 bytes.
extern "C" __declspec(naked) void _Dump_COleIPFrameWnd__UBEXAAVCDumpContext___Z_0056BB18() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 9B FA FF: call 0x515710
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        push edx
        push 67d3ach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 CD FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB CF FB FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        push ecx
        push 67d3bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB CC FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BD CF FB FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        push eax
        push 67d3d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD CC FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F CF FB FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 104h
        push ecx
        push 67d3e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF CC FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 32 A0 F7 FF: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add edx, 114h
        push edx
        push 67d3f0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 CC FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 15 A0 F7 FF: call 0x4e5bd4
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        push ecx
        push 67d400h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 CC FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BA CE FB FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xce
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        push 67d414h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 CC FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 29 CF FB FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        push 67d428h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 CC FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
