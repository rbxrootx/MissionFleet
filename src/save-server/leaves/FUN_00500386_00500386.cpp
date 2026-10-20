// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500386 .. +0x177 bytes.
extern "C" __declspec(naked) void FUN_00500386_00500386() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 3b1h
        push 6756ach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 BE 9E FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5003c7
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 03 15 C0 6D 68 00: add edx, dword ptr [0x686dc0]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        and ecx, 200h
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5003e6
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 03 05 C4 6D 68 00: add eax, dword ptr [0x686dc4]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x500405
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 2B 0D C0 6D 68 00: sub ecx, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 4]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x500423
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 2B 15 C4 6D 68 00: sub edx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 67: je 0x500490
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 40h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 48h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 0ch]
        sub eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 400001h
        cmp eax, 400000h
        ; Exact mapped bytes 75 0D: jne 0x50048e
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        add edx, 7
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 67: jmp 0x5004f7
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 40h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 0ch]
        sub eax, dword ptr [edx + 44h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 400001h
        cmp eax, 400000h
        ; Exact mapped bytes 75 0F: jne 0x5004f7
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        add edx, 7
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
