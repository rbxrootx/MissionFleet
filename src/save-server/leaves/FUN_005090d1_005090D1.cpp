// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005090D1 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_005090d1_005090D1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x509103
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp + 8], eax
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC 0C 00 00: call 0x509dbd
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 4D: jle 0x509167
        __asm _emit 0x7e
        __asm _emit 0x4d
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 9A 63 FB FF: call 0x4bf4c5
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 F0 D3 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 25: jne 0x509167
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 DC D3 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x509167
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 5E 63 FB FF: call 0x4bf4c5
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x63
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
