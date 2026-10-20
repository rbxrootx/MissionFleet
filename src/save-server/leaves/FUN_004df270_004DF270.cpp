// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF270 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_004df270_004DF270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 6790e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 95 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 93 98 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 E1 61 04 00: call 0x52547e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        push 6790fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 95 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 4F 34 FC FF: call 0x4a26ff
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 BF 61 04 00: call 0x52547e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        push 679108h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 95 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 2D 34 FC FF: call 0x4a26ff
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        push ecx
        mov edx, esp
        push ecx
        mov ecx, edx
        ; Exact mapped bytes E8 9B 61 04 00: call 0x52547e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        push 679114h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B 95 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 09 34 FC FF: call 0x4a26ff
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 679120h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 95 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1E 97 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [edx + 10h]
        push eax
        push 67912ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 95 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5D 96 04 00: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12h
        push ecx
        push 67913ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0B 95 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 04 95 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        push 679150h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 94 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
