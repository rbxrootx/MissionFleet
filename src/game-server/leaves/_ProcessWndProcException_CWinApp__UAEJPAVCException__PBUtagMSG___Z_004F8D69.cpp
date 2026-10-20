// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8D69 .. +0xB5 bytes.
extern "C" __declspec(naked) void _ProcessWndProcException_CWinApp__UAEJPAVCException__PBUtagMSG___Z_004F8D69() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 08: je 0x4f8d89
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 10h], 0fh
        ; Exact mapped bytes 74 02: je 0x4f8d89
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 12: jmp 0x4f8d9b
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F1 16 00 00: call 0x4fa48a
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7D: jmp 0x4f8e18
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov dword ptr [ebp - 4], 0f108h
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 111h
        ; Exact mapped bytes 75 17: jne 0x4f8dcc
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4f8dc5
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0f109h
        mov dword ptr [ebp - 8], 1
        push 584838h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 22 00 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4f8df3
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1030h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes EB 22: jmp 0x4f8e15
        __asm _emit 0xeb
        __asm _emit 0x22
        push 584558h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 22 00 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4f8e15
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        push 10h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
