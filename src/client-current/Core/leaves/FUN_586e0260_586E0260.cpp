// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E0260 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_586e0260_586E0260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c8h]
        ; Exact mapped bytes E8 49 06 0E 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4cch]
        ; Exact mapped bytes E8 3B 06 0E 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c4h]
        ; Exact mapped bytes E8 2D 06 0E 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c0h]
        ; Exact mapped bytes E8 1F 06 0E 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4c0h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 32h
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 71 54 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4c8h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0B 5C DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5c
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4cch]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 5B DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x5b
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c4h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DF 5B DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5b
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4c0h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C9 5B DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5b
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 8B DC FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x8b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 00 00 00: call 0x586e0330
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
