// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570ACB .. +0x85 bytes.
extern "C" __declspec(naked) void _OnDoVerb_COleServerItem__UAEXJ_Z_00570ACB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 77 3A: ja 0x570b23
        __asm _emit 0x77
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 50 0B 57 00: jmp dword ptr [edx*4 + 0x570b50]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x57
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x570b4a
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 37: jmp 0x570b4a
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 8C 00 00 00: call dword ptr [edx + 0x8c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 27: jmp 0x570b4a
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 0A: jge 0x570b33
        __asm _emit 0x7d
        __asm _emit 0x0a
        push 80004001h
        ; Exact mapped bytes E8 57 C9 FD FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        push 40180h
        ; Exact mapped bytes E8 40 C9 FD FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc9
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
