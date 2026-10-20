// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FD70 .. +0xAD bytes.
extern "C" __declspec(naked) void _ContextSensitiveHelp_XOleInPlaceFrame_COleFrameHook__UAGJH_Z_0055FD70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 8], eax
        push 43dh
        push 5cff18h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 CE B3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 58 50 F9 FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x50
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 442h
        push 5cff18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AD B3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb3
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4E: je 0x55fe07
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 43: jne 0x55fe05
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 A4 FB FF: call 0x51a29a
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x55fdd5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8000ffffh
        ; Exact mapped bytes EB 42: jmp 0x55fe17
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
        ; Exact mapped bytes 74 18: je 0x55fdfe
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        push 0e145h
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 BE FD FF: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x55fe05
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8000ffffh
        ; Exact mapped bytes EB 12: jmp 0x55fe17
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes EB 0E: jmp 0x55fe15
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
