// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F62F .. +0x6C bytes.
extern "C" __declspec(naked) void _OnRemoveMenus_COleClientItem__UAEXPAVCMenu___Z_0055F62F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 323h
        push 5cff18h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 15 BB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xff
        push 324h
        push 5cff18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 02 BB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5A 87 FF FF: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 44 24 FE FF: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x55f681
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 14: jmp 0x55f695
        __asm _emit 0xeb
        __asm _emit 0x14
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD B9 FD FF: call 0x53b08c
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 51 E3 FE FF: call 0x54d9e6
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
