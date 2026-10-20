// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE585 .. +0x88 bytes.
extern "C" __declspec(naked) void _GetActivePane_CSplitterWnd__UAEPAVCWnd__PAH0_Z_004FE585() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 8ffh
        push 674fe8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 BF BC FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C2 44 FD FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 904h
        push 674fe8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 9A BC FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E4 54 01 00: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 08: jne 0x4fe5df
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 B7 DF 02 00: call 0x52c593
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x4fe604
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BA B3 FF FF: call 0x4f99b3
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4fe604
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
