// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562DF0 .. +0xAD bytes.
extern "C" __declspec(naked) void _ContextSensitiveHelp_XOleInPlaceFrame_COleFrameHook__UAGJH_Z_00562DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 8], eax
        push 43dh
        push 67c6f0h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 4E 74 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 08 FF F6 FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 442h
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2D 74 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4E: je 0x562e87
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 43: jne 0x562e85
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 06 FA FF: call 0x5034aa
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x562e55
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8000ffffh
        ; Exact mapped bytes EB 42: jmp 0x562e97
        __asm _emit 0xeb
        __asm _emit 0x42
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x562e7e
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        push 0e145h
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 88 FC FF: call 0x52b68d
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x562e85
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8000ffffh
        ; Exact mapped bytes EB 12: jmp 0x562e97
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes EB 0E: jmp 0x562e95
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F8 00 00 00: call dword ptr [edx + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
