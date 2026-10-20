// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005626AF .. +0x6C bytes.
extern "C" __declspec(naked) void _OnRemoveMenus_COleClientItem__UAEXPAVCMenu___Z_005626AF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 323h
        push 67c6f0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 95 7B F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        push 324h
        push 67c6f0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 82 7B F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 41 FF FF: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 EE FC FF: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x562701
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 14: jmp 0x562715
        __asm _emit 0xeb
        __asm _emit 0x14
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 4D FD FF: call 0x537499
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 41 9D FE FF: call 0x54c456
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9d
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
