// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513754 .. +0x4C bytes.
extern "C" __declspec(naked) void _OnEndSession_CFrameWnd__IAEXH_Z_00513754() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x513765
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 35: jmp 0x51379a
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes E8 06 E3 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x51379a
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 1C: jne 0x51379a
        __asm _emit 0x75
        __asm _emit 0x1c
        push 1
        ; Exact mapped bytes E8 EA 73 00 00: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 39 FE FF: call 0x4f70ae
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x39
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
