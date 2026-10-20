// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517028 .. +0x97 bytes.
extern "C" __declspec(naked) void _PreTranslateMessage_CPropertySheet__UAEHPAUtagMSG___Z_00517028() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2a2h
        push 674cach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 1E 32 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 9E FB FF: call 0x4d0eb7
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x517059
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 60: jmp 0x5170b9
        __asm _emit 0xeb
        __asm _emit 0x60
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 100h
        ; Exact mapped bytes 75 48: jne 0x5170ad
        __asm _emit 0x75
        __asm _emit 0x48
        push 11h
        ; Exact mapped bytes FF 15 54 BC 68 00: call dword ptr [0x68bc54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7D 39: jge 0x5170ad
        __asm _emit 0x7d
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 9
        ; Exact mapped bytes 74 12: je 0x51708f
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 21h
        ; Exact mapped bytes 74 09: je 0x51708f
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 22h
        ; Exact mapped bytes 75 1E: jne 0x5170ad
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 475h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 97 45 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5170ad
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0C: jmp 0x5170b9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 DD FB FF: call 0x4d4dff
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
