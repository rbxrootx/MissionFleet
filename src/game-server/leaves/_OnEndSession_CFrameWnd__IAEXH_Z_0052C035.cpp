// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C035 .. +0x4C bytes.
extern "C" __declspec(naked) void _OnEndSession_CFrameWnd__IAEXH_Z_0052C035() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x52c046
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 35: jmp 0x52c07b
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes E8 B5 94 00 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x52c07b
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 1C: jne 0x52c07b
        __asm _emit 0x75
        __asm _emit 0x1c
        push 1
        ; Exact mapped bytes E8 69 22 00 00: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 1E FE FF: call 0x50de7e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 70: call dword ptr [eax + 0x70]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x70
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
