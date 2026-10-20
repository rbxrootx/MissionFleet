// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B77E .. +0x9F bytes.
extern "C" __declspec(naked) void _CanCloseFrame_CDocument__UAEHPAVCFrameWnd___Z_0050B77E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 0b2h
        push 5cba5ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C6 F9 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5B: je 0x50b809
        __asm _emit 0x74
        __asm _emit 0x5b
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        push 0b9h
        push 5cba5ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 8D F9 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 67 93 FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 23: je 0x50b807
        __asm _emit 0x74
        __asm _emit 0x23
        push 0bfh
        push 5cba5ch
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 69 F9 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 7E 07: jle 0x50b807
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 10: jmp 0x50b817
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes EB 9F: jmp 0x50b7a8
        __asm _emit 0xeb
        __asm _emit 0x9f
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
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
