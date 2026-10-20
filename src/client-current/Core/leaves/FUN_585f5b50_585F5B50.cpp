// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F5B50 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_585f5b50_585F5B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 0E E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 65 E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x65
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 42: jne 0x585f5bb2
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        or ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 0E E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 7E 17 00: call 0x5876da60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 31 D0 10 00: call 0x58702be0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x585f5bcf
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF E3 F2 FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 92 7E 17 00: call 0x5876da60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FB 01 E9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 300h], 190h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
