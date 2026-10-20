// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586632F0 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_586632f0_586632F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 160h]
        ; Exact mapped bytes E8 5B 5F E5 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5f
        __asm _emit 0xe5
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 74 16: je 0x58663323
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 160h]
        ; Exact mapped bytes E8 45 5F E5 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x5f
        __asm _emit 0xe5
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 11: jne 0x58663334
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 160h]
        ; Exact mapped bytes E8 FF 4B E2 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4b
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3B: jmp 0x5866336f
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 16ch]
        ; Exact mapped bytes E8 1E 5F E5 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5f
        __asm _emit 0xe5
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 74 16: je 0x58663360
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 16ch]
        ; Exact mapped bytes E8 08 5F E5 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5f
        __asm _emit 0xe5
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 0F: jne 0x5866336f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        ; Exact mapped bytes E8 F2 76 FC FF: call 0x5862aa60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
