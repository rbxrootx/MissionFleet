// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C3E9 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_0056c3e9_0056C3E9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 561h
        push 5d053ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5B ED F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 8], edx
        push 564h
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 3C ED F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E8 90 D3 F8 FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 27: je 0x56c459
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 20h], edx
        push 0
        push 1
        push 1ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 90 F7 FC FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 1
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 82 F7 FC FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 5A: jmp 0x56c4b3
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 75 4F: jne 0x56c4b3
        __asm _emit 0x75
        __asm _emit 0x4f
        push 0
        push 0
        push 1ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 67 F7 FC FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 0
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 59 F7 FC FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B FF FB FF: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 18: je 0x56c4a9
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
