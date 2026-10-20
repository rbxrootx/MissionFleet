// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515549 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_00515549_00515549() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        push 11h
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        and ecx, 8
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        push 10h
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        and ecx, 4
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes FF 15 C4 BD 68 00: call dword ptr [0x68bdc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 28: jne 0x5155da
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 10h
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        or ecx, edx
        push ecx
        push 20ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 64 60 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 49: jmp 0x515623
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 10h
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        or ecx, edx
        push ecx
        push 20ah
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x515623
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x515623
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 B7: jne 0x5155da
        __asm _emit 0x75
        __asm _emit 0xb7
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
