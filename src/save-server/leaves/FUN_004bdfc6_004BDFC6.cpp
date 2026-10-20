// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BDFC6 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_004bdfc6_004BDFC6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 112h
        push 674560h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 7E C2 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD 67 06 00: call 0x5247bb
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 76 06 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x4be024
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 CC 02 00: call 0x4eac9b
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 C3 02 00: call 0x4ea396
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x4be056
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD CC 02 00: call 0x4eacd9
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A F7 FF FF: call 0x4bd747
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA BE 02 00: call 0x4e9f40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
