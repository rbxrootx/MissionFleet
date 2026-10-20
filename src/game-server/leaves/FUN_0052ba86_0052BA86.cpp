// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052BA86 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_0052ba86_0052BA86() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D1 A4 FC FF: call 0x4f5f70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 F8 00 00 00: call dword ptr [eax + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 46: je 0x52bafc
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x52bae0
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x52bae0
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x52bae7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        ; Exact mapped bytes E8 B8 DC FC FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 47: jne 0x52bb50
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 82 08 00 00: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 18: jne 0x52bb32
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 64 08 00 00: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x52bb50
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC 00 01 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
