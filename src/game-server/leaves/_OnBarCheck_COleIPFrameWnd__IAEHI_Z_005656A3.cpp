// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005656A3 .. +0x99 bytes.
extern "C" __declspec(naked) void _OnBarCheck_COleIPFrameWnd__IAEHI_Z_005656A3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 79 FC FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5656c8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 7A FC FF: call 0x52d157
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 6E: jmp 0x565736
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0dch], 0
        ; Exact mapped bytes 74 2A: je 0x5656fe
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 38 79 FC FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5656fe
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 5B 7A FC FF: call 0x52d157
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 38: jmp 0x565736
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e0h], 0
        ; Exact mapped bytes 74 2A: je 0x565734
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 02 79 FC FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x565734
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e0h]
        ; Exact mapped bytes E8 25 7A FC FF: call 0x52d157
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x565736
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
