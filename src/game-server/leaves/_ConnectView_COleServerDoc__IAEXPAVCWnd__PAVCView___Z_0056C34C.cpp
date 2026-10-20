// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C34C .. +0x9D bytes.
extern "C" __declspec(naked) void _ConnectView_COleServerDoc__IAEXPAVCWnd__PAVCView___Z_0056C34C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        push 54ah
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F8 ED F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        push 54bh
        push 5d053ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E5 ED F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        push 54ch
        push 5d053ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 D2 ED F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EE 0C FD FF: call 0x53d088
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x56c3b4
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x56c3bf
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 87 F8 FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 00 FC FF: call 0x52c3ea
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
