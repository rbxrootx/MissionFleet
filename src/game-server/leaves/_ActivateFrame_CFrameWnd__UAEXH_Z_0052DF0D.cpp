// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DF0D .. +0x65 bytes.
extern "C" __declspec(naked) void _ActivateFrame_CFrameWnd__UAEXH_Z_0052DF0D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 28: jne 0x52df42
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 E7 00 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x52df2f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp + 8], 1
        ; Exact mapped bytes EB 13: jmp 0x52df42
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F DF 00 00: call 0x53beb6
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x52df42
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 9
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 00 00 00: call 0x52df72
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 18: je 0x52df6c
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 13 FC FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 00 00 00: call 0x52df72
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
