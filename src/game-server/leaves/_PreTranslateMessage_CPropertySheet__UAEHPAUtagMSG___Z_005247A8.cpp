// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005247A8 .. +0x97 bytes.
extern "C" __declspec(naked) void _PreTranslateMessage_CPropertySheet__UAEHPAUtagMSG___Z_005247A8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2a2h
        push 5c8174h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9E 69 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 E7 FC FF: call 0x4f2f87
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5247d9
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 60: jmp 0x524839
        __asm _emit 0xeb
        __asm _emit 0x60
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 100h
        ; Exact mapped bytes 75 48: jne 0x52482d
        __asm _emit 0x75
        __asm _emit 0x48
        push 11h
        ; Exact mapped bytes FF 15 60 25 5E 00: call dword ptr [0x5e2560]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7D 39: jge 0x52482d
        __asm _emit 0x7d
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 9
        ; Exact mapped bytes 74 12: je 0x52480f
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 21h
        ; Exact mapped bytes 74 09: je 0x52480f
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 22h
        ; Exact mapped bytes 75 1E: jne 0x52482d
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 475h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 73 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x52482d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0C: jmp 0x524839
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 26 FD FF: call 0x4f6ecf
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
