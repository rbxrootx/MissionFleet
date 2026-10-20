// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF600 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_584ff600_584FF600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 36: jne 0x584ff645
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 B8 FF FF: call 0x584faec0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 240h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 240h], 1
        ; Exact mapped bytes 74 17: je 0x584ff643
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9E 68 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x584ff656
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 B7 FF FF: call 0x584fad80
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 240h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
