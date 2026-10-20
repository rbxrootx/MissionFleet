// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515355 .. +0x88 bytes.
extern "C" __declspec(naked) void _GetActivePane_CSplitterWnd__UAEPAVCWnd__PAH0_Z_00515355() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 8ffh
        push 5c84b0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 EF 5D FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C2 F7 FD FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 904h
        push 5c84b0h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 CA 5D FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F5 6F 01 00: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 08: jne 0x5153af
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 87 77 02 00: call 0x53cb33
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x5153d4
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BA B3 FF FF: call 0x510783
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5153d4
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
