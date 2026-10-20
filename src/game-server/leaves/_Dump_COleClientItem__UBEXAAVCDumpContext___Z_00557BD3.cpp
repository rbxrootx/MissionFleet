// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557BD3 .. +0x1C9 bytes.
extern "C" __declspec(naked) void _Dump_COleClientItem__UBEXAAVCDumpContext___Z_00557BD3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC AB FF FF: call 0x5527e2
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        push 5cfc64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 21 CF FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 D1 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        push 5cfc74h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 CF FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 D1 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        push eax
        push 5cfc88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 D1 FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        push edx
        push 5cfc9ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD D0 FD FF: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        push 5cfcach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 D1 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        push 5cfcbch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C D1 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 5cfcd0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 D0 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 40h]
        push ecx
        push 5cfce4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B CF FD FF: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 41h]
        push eax
        push 5cfcf8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 CF FD FF: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        push edx
        push 5cfd08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 00 D1 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 43h]
        push ecx
        push 5cfd1ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 CE FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A CF FD FF: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        push 5cfd30h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 CD FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D D0 FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        push edx
        push 5cfd44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD CD FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF D0 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        push 5cfd50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 CD FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D3 CF FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        push 5cfd68h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 CD FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 D0 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        push 5cfd7ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8C CD FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E D0 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
