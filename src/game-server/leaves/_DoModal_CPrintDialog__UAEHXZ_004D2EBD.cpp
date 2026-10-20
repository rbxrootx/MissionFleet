// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2EBD .. +0x60 bytes.
extern "C" __declspec(naked) void _DoModal_CPrintDialog__UAEHXZ_004D2EBD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        push 104h
        push 5d0e18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 87 82 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 D7 01 00: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        ; Exact mapped bytes E8 28 5D FF FF: call 0x4c8c1e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB D7 01 00: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4d2f0f
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 07: jmp 0x4d2f16
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
