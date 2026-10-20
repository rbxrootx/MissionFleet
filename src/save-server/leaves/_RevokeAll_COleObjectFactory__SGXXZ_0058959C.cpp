// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058959C .. +0x49 bytes.
extern "C" __declspec(naked) void _RevokeAll_COleObjectFactory__SGXXZ_0058959C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 BC 70 FB FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 C9 97 FB FF: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        ; Exact mapped bytes E8 14 D7 FB FF: call 0x546cd0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x5895ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x5895da
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 73 FF FF FF: call 0x58954b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E7: jmp 0x5895c1
        __asm _emit 0xeb
        __asm _emit 0xe7
        push 0
        ; Exact mapped bytes E8 CB 98 FB FF: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
